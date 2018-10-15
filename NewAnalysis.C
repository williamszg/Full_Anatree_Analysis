#define NewAnalysis_cxx
#include "NewAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <math.h>
#include <stdio.h>
#define PI 3.14159265

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// $$$ Declare Histograms Produced Here $$$
// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

TH1D *hNuVtxX_DV = new TH1D("hNuVtxX_DV", "True Space Charge Corrected Neutrino Vertex X Position that is within the Detector Volume", 251, -0.5, 250.5);
TH1D *hNuVtxY_DV = new TH1D("hNuVtxY_DV", "True Space Charge Corrected Neutrino Vertex Y Position that is within the Detector Volume", 231, -115.5, 115.5);
TH1D *hNuVtxZ_DV = new TH1D("hNuVtxZ_DV", "True Space Charge Corrected Neutrino Vertex Z Position that is within the Detector Volume", 1041, -0.5, 1040.5);

TH1D *hNuVtxX_FV = new TH1D("hNuVtxX_FV", "True Space Charge Corrected Neutrino Vertex X Position that is within the Fiducial Volume", 231, 9.5, 240.5);
TH1D *hNuVtxY_FV = new TH1D("hNuVtxY_FV", "True Space Charge Corrected Neutrino Vertex Y Position that is within the Fiducial Volume", 191, -95.5, 95.5);
TH1D *hNuVtxZ_FV = new TH1D("hNuVtxZ_FV", "True Space Charge Corrected Neutrino Vertex Z Position that is within the Fiducial Volume", 1021, 9.5, 1030.5);

TH1D *hNuNMCTracksWithinRange = new TH1D("hNuNMCTracksWithinRange", "The Number of MCTracks within Vtx Range Check", 11, -0.5, 10.5);
TH1D *hCCCoh0TrackLepMom = new TH1D("hCCCoh0TrackLepMom", "The Lepton Momentum for CC-COH Events with 0 MCTracks", 150, 0, 1500);

TH1D *hCCCohConeAngle = new TH1D("hCCCohConeAngle", "The Cone Angle for CC-COH Events with 2 MCTracks", 181, -0.5, 180.5);
TH1D *hCCQEConeAngle = new TH1D("hCCQEConeAngle", "The Cone Angle for CC-QE Events with 2 MCTracks", 181, -0.5, 180.5);
TH1D *hCCResConeAngle = new TH1D("hCCResConeAngle", "The Cone Angle for CC-Res Events with 2 MCTracks", 181, -0.5, 180.5);
TH1D *hNCResConeAngle = new TH1D("hNCResConeAngle", "The Cone Angle for NC-Res Events with 2 MCTracks", 181, -0.5, 180.5);
TH1D *hNCDISConeAngle = new TH1D("hNCDISConeAngle", "The Cone Angle for NC-DIS Events with 2 MCTracks", 181, -0.5, 180.5);

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


// ================================================
// === Within Detector/Fiducial Volume Function ===
// ================================================
bool Within(bool w, double x, double y, double z)
{
   // If bool w input is 0, then you are checking if it is within the Detector Volume
   // If bool w input is 1, then you are checking if it is within the Fiducial Volume

   bool withinVolume = false; // This is the value returned after the check, 0 means out, 1 means in

   // #######################
   // ### Detector Volume ###
   // #######################
   double xDi = 0, xDf = 250;
   double yDi = -115, yDf = 115;
   double zDi = 0, zDf = 1040;
   
   // #######################
   // ### Fiducial Volume ###
   // #######################
   double xFi = 10, xFf = 240;
   double yFi = -95, yFf = 95;
   double zFi = 10, zFf = 1030;

   if (w == false)
      {
      if (x >= xDi && x <= xDf && y >= yDi && y <= yDf && z >= zDi && z <= zDf) {withinVolume = true;}
      }

   if (w == true)
      {
      if (x >= xFi && x <= xFf && y >= yFi && y <= yFf && z >= zFi && z <= zFf) {withinVolume = true;}
      }

   return withinVolume;
} // End Within Function
// ================================================


// -------------------------------
// --- CC-Coherent Event Check ---
// -------------------------------
bool CCCoh(int PDG, int ccnc, int mode)
{
   bool cccoh = false; // returned variable to declare whether or not event was CCCoh!
   if (PDG == 14 && ccnc == 0 && mode == 3) {cccoh = true;}
   return cccoh;
}
// -------------------------------

// -------------------------
// --- CC-QE Event Check ---
// -------------------------
bool CCqe(int PDG, int ccnc, int mode)
{
   bool ccqe = false; // returned variable to declare whether or not event was CCQE!
   if (PDG == 14 && ccnc == 0 && mode == 0) {ccqe = true;}
   return ccqe;
}
// -------------------------

// --------------------------
// --- CC-Res Event Check ---
// --------------------------
bool CCres(int PDG, int ccnc, int mode)
{
   bool ccres = false; // returned variable to declare whether or not event was CCRes!
   if (PDG == 14 && ccnc == 0 && mode == 1) {ccres = true;}
   return ccres;
}
// --------------------------

// --------------------------
// --- NC-Res Event Check ---
// --------------------------
bool NCres(int PDG, int ccnc, int mode)
{
   bool ncres = false; // returned variable to declare whether or not event was NCRes!
   if (PDG == 14 && ccnc == 1 && mode == 1) {ncres = true;}
   return ncres;
}
// --------------------------

// --------------------------
// --- NC-DIS Event Check ---
// --------------------------
bool NCdis(int PDG, int ccnc, int mode)
{
   bool ncdis = false; // returned variable to declare whether or not event was NCDIS!
   if (PDG == 14 && ccnc == 1 && mode == 2) {ncdis = true;}
   return ncdis;
}
// --------------------------

// ---------------------------
// --- Cone Angle Function ---
// ---------------------------
double ConeAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
   TVector3 v1(x1, y1, z1);
   TVector3 v2(x2, y2, z2);
   TVector3 z(0, 0, 1);
   TVector3 v3 = v1 + v2;
   Double_t coneangle = v3.Angle(z);
   return coneangle;
}
// ---------------------------


void NewAnalysis::Loop()
{
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   // --------------------------------
   // --- Variable Used for Checks ---
   // --------------------------------
   double VertexRangeCheck = 10; // Variable to check if a track is within this range of the vertex in cm
   // --------------------------------

   //for (Long64_t jentry=0; jentry<nentries;jentry++) 
   for (Long64_t jentry=0; jentry<10000;jentry++) 
      {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if (jentry%1000 == 0) {std::cout<<"Event = "<<jentry<<std::endl;}

      // ========================================
      // === Looping Over the Neutrino Events ===
      // ========================================
      for (int i = 0; i < mcevts_truth; i++)
	 {
         bool CCCOH = CCCoh(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool CCQE = CCqe(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool CCRes = CCres(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool NCRes = NCres(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool NCDIS = NCdis(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);

         int nmctrksInRange = 0;

         double Vx = sp_charge_corrected_nuvtxx_truth[i];
         double Vy = sp_charge_corrected_nuvtxy_truth[i];
         double Vz = sp_charge_corrected_nuvtxz_truth[i];

	 bool checkDV = Within(false, Vx, Vy, Vz);
	 bool checkFV = Within(true, Vx, Vy, Vz);

	 TVector3 muon;
	 TVector3 pion;

         for (int j = 0; j < no_mctracks; j++)
	    {
	    double DeltaStartX = mctrk_startX[j] - Vx;
	    double DeltaStartY = mctrk_startY[j] - Vy;
	    double DeltaStartZ = mctrk_startZ[j] - Vz;
	    double DeltaStartMagnitude = sqrt(pow(DeltaStartX, 2) + pow(DeltaStartY, 2) + pow(DeltaStartZ, 2));

	    double DeltaEndX = mctrk_endX[j] - Vx;
	    double DeltaEndY = mctrk_endY[j] - Vy;
	    double DeltaEndZ = mctrk_endZ[j] - Vz;
	    double DeltaEndMagnitude = sqrt(pow(DeltaEndX, 2) + pow(DeltaEndY, 2) + pow(DeltaEndZ, 2));

	    TVector3 track(mctrk_endX[j] - mctrk_startX[j], mctrk_endY[j] - mctrk_startY[j], mctrk_endZ[j] - mctrk_startZ[j]);

	    if (DeltaStartMagnitude < VertexRangeCheck) 
	       {
	       nmctrksInRange++;
	       if (mctrk_pdg[j] == 13) {muon = track;}
	       if (mctrk_pdg[j] == 211) {pion = track;}
	       }
            if (DeltaStartMagnitude > VertexRangeCheck && DeltaEndMagnitude < VertexRangeCheck) 
	       {
	       nmctrksInRange++;
	       if (mctrk_pdg[j] == 13) {muon = track;}
	       if (mctrk_pdg[j] == 211) {pion = track;}
	       }
	    }

         hNuNMCTracksWithinRange->Fill(nmctrksInRange);

         if (nmctrksInRange == 0 && CCCOH) 
	    {
            std::cout<<"---> Number of MCShowers = "<<no_mcshowers<<std::endl;
	    hCCCoh0TrackLepMom->Fill(lep_mom_truth[i]*1000);
	    }

	 if (nmctrksInRange >= 2 && CCCOH) {hCCCohConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);}
	 if (nmctrksInRange >= 2 && CCQE) {hCCQEConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);}
	 if (nmctrksInRange >= 2 && CCRes) {hCCResConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);}
	 if (nmctrksInRange >= 2 && NCRes) {hNCResConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);}
	 if (nmctrksInRange >= 2 && NCDIS) {hNCDISConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);}

	 if (checkDV == true)
	    {
	    hNuVtxX_DV->Fill(Vx);
	    hNuVtxY_DV->Fill(Vy);
	    hNuVtxZ_DV->Fill(Vz);
	    }

	 if (checkFV == true)
	    {
	    hNuVtxX_FV->Fill(Vx);
	    hNuVtxY_FV->Fill(Vy);
	    hNuVtxZ_FV->Fill(Vz);
	    }

         } // End Nu Events For Loop


      } // End Event For Loop


   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // %%% Saving Histograms to a File %%%
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   TFile *TCCCohInfo = new TFile("Histograms_NewAnalysis.root", "RECREATE");

   hNuVtxX_DV->Write();
   hNuVtxY_DV->Write();
   hNuVtxZ_DV->Write();

   hNuVtxX_FV->Write();
   hNuVtxY_FV->Write();
   hNuVtxZ_FV->Write();

   hNuNMCTracksWithinRange->Write();
   hCCCoh0TrackLepMom->Write();

   hCCCohConeAngle->Write();
   hCCQEConeAngle->Write();
   hCCResConeAngle->Write();
   hNCResConeAngle->Write();
   hNCDISConeAngle->Write();

   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

} // End NewAnalysis Loop
