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
TH1D *hCCCoh0TrackNumMCShwrs = new TH1D("hCCCoh0TrackNumMCShwrs", "The Number of MCShowers for CC-COH Events with 0 MCTracks", 11, -0.5, 10.5);
TH2D *hCCCohMuonVsPionTrackLength = new TH2D("hCCCohMuonVsPionTrackLength", "The Track Length of the Muon vs the Track Length of the Pion for Fully Contained CC-COH Events", 301, -0.5, 300.5, 301, -0.5, 300.5);

TH1D *hCCCohConeAngle = new TH1D("hCCCohConeAngle", "The Cone Angle for CC-COH Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCCQEConeAngle = new TH1D("hCCQEConeAngle", "The Cone Angle for CC-QE Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCCResConeAngle = new TH1D("hCCResConeAngle", "The Cone Angle for CC-Res Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCResConeAngle = new TH1D("hNCResConeAngle", "The Cone Angle for NC-Res Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCDISConeAngle = new TH1D("hNCDISConeAngle", "The Cone Angle for NC-DIS Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCosmicConeAngle = new TH1D("hCosmicConeAngle", "The Cone Angle for Events with 2 or More Cosmic MCTracks", 181, -0.5, 180.5);

TH1D *hCCCohDoCA = new TH1D("hCCCohDoCA", "The DoCA for CC-COH Events with 2 or More MCTracks in cm", 200, 0, 100);
TH1D *hCCQEDoCA = new TH1D("hCCQEDoCA", "The DoCA for CC-QE Events with 2 or More MCTracks in cm", 200, 0, 100);
TH1D *hCCResDoCA = new TH1D("hCCResDoCA", "The DoCA for CC-Res Events with 2 or More MCTracks in cm", 200, 0, 100);
TH1D *hNCResDoCA = new TH1D("hNCResDoCA", "The DoCA for NC-Res Events with 2 or More MCTracks in cm", 200, 0, 100);
TH1D *hNCDISDoCA = new TH1D("hNCDISDoCA", "The DoCA for NC-DIS Events with 2 or More MCTracks in cm", 200, 0, 100);
TH1D *hCosmicDoCA = new TH1D("hCosmicDoCA", "The DoCA for Events with 2 or More Cosmic MCTracks in cm", 200, 0, 100);

TH1D *hCCCohTableInformation = new TH1D("hCCCohTableInformation", "Table Information for CC-COH Events", 7, -0.5, 6.5);
TH1D *hCCQETableInformation = new TH1D("hCCQETableInformation", "Table Information for CC-QE Events", 3, -0.5, 2.5);
TH1D *hCCResTableInformation = new TH1D("hCCResTableInformation", "Table Information for CC-Res Events", 3, -0.5, 2.5);
TH1D *hNCResTableInformation = new TH1D("hNCResTableInformation", "Table Information for NC-Res Events", 5, -0.5, 4.5);
TH1D *hNCDISTableInformation = new TH1D("hNCDISTableInformation", "Table Information for NC-DIS Events", 5, -0.5, 4.5);

TH1D *hNuStartVertexDistance = new TH1D("hNuStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 31, -0.5, 30.5);
TH1D *hNuEndVertexDistance = new TH1D("hNuEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 31, -0.5, 30.5);
TH1D *hCosmicStartVertexDistance = new TH1D("hCosmicStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for Cosmics with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hCosmicEndVertexDistance = new TH1D("hCosmicEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for Cosmics with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuCCCohStartVertexDistance = new TH1D("hNuCCCohStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 31, -0.5, 30.5);
TH1D *hNuCCCohEndVertexDistance = new TH1D("hNuCCCohEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 31, -0.5, 30.5);

TH1D *hNuMCTrackMuonX = new TH1D("hNuMCTrackMuonX", "Starting X Position of a Muon From a Neutrino Interaction", 101, -0.5, 100.5);
TH1D *hNuMCTrackMuonY = new TH1D("hNuMCTrackMuonY", "Starting Y Position of a Muon From a Neutrino Interaction", 101, -0.5, 100.5);
TH1D *hNuMCTrackMuonZ = new TH1D("hNuMCTrackMuonZ", "Starting Z Position of a Muon From a Neutrino Interaction", 101, -0.5, 100.5);
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

// ------------------------------------
// --- Distance of Closest Approach ---
// ------------------------------------
double DoCA(double x0, double y0, double z0, double x1, double y1, double z1, double x2, double y2, double z2)
{
   double d = -999;
   TVector3 v10(x1 - x0, y1 - y0, z1 - z0);
   TVector3 v21(x2 - x1, y2 - y1, z2 - z1);
   TVector3 cross = v10.Cross(v21);
   d = cross.Mag()/v21.Mag();
   return d;
}
// ------------------------------------


void NewAnalysis::Loop()
{
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   int Nentries = nentries;
   //int Nentries = 5300;

   double POT = 0;

   // --------------------------------
   // --- Variable Used for Checks ---
   // --------------------------------
   double VertexRangeCheck = 10; // Variable to check if a track is within this range of the vertex in cm
   // --------------------------------

   for (Long64_t jentry=0; jentry<Nentries; jentry++) 
      {
      if (jentry == 5376) continue; // File 4 Bad Events
      if (jentry == 253 || jentry == 7717 || jentry == 33027 || jentry == 52148 || jentry == 58491 || jentry == 76449 || jentry == 85966) continue; // File 3 Bad Events

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      //if (jentry%100 == 0) {std::cout<<"Event = "<<jentry<<std::endl;}
      if (jentry > 0 && jentry < nentries) {std::cout<<"Event = "<<jentry<<std::endl;}

      if (pot != -99999) {POT = POT + pot;}
      if (jentry == Nentries - 1) {std::cout<<"Total POT for this file = "<<POT<<std::endl;}

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

	 if (!CCCOH && !CCQE && !CCRes && !NCRes && !NCDIS) {continue;}

         int nmctrksInRange = 0;

         double closer = -99;

         double Vx = sp_charge_corrected_nuvtxx_truth[i];
         double Vy = sp_charge_corrected_nuvtxy_truth[i];
         double Vz = sp_charge_corrected_nuvtxz_truth[i];

	 bool checkDV = Within(false, Vx, Vy, Vz);
	 bool checkFV = Within(true, Vx, Vy, Vz);

	 bool containMuon = false;
	 bool containPion = false;
	 bool containPion2 = false;
	 bool containProton = false;

         bool hasMuon = false;
	 bool hasPion = false;
	 bool hasPion2 = false;
	 bool hasProton = false;

	 TVector3 muon;
	 TVector3 muonstart;
	 TVector3 muonend;
	 TVector3 pion;
	 TVector3 pionstart;
	 TVector3 pionend;
	 TVector3 pion2;
	 TVector3 pion2start;
	 TVector3 pion2end;
	 TVector3 proton;
	 TVector3 protonstart;
	 TVector3 protonend;

	 double muonlength = -99;
	 double pionlength = -99;

	 if (nuPDG_truth[i] == 14 && checkFV) {hCCCohTableInformation->Fill(0);}
	 if (nuPDG_truth[i] && ccnc_truth[i] == 0 && checkFV) {hCCCohTableInformation->Fill(1);}
	 if (CCCOH && checkFV) {hCCCohTableInformation->Fill(2);}
	 if (CCQE && checkFV) {hCCQETableInformation->Fill(0);}
	 if (CCRes && checkFV) {hCCResTableInformation->Fill(0);}
	 if (NCRes && checkFV) {hNCResTableInformation->Fill(0);}
	 if (NCDIS && checkFV) {hNCDISTableInformation->Fill(0);}

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

	    for (int l = j + 1; l < no_mctracks; l++)
	       {
               TVector3 track2(mctrk_endX[l] - mctrk_startX[l], mctrk_endY[l] - mctrk_startY[l], mctrk_endZ[l] - mctrk_startZ[l]);

	       if (checkFV && mctrk_origin[j] == 2 && mctrk_origin[l] == 2) 
	          {
	          hCosmicConeAngle->Fill(ConeAngle(track.X(), track.Y(), track.Z(), track2.X(), track2.Y(), track2.Z())*180/PI);
	          double d1 = DoCA(Vx, Vy, Vz, mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j], mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
	          double d2 = DoCA(Vx, Vy, Vz, mctrk_startX[l], mctrk_startY[l], mctrk_startZ[l], mctrk_endX[l], mctrk_endY[l], mctrk_endZ[l]);
	          if (d1 <= d2) {closer = d1;}
	          if (d2 < d1) {closer = d2;}
	          hCosmicDoCA->Fill(closer);

	          if (no_mctracks >= 2)
		     {
		     hCosmicStartVertexDistance->Fill(DeltaStartMagnitude);
		     hCosmicEndVertexDistance->Fill(DeltaEndMagnitude);
	             }
	          }
	       }
	    if (checkFV && mctrk_origin[j] == 1 && no_mctracks >= 2)
	       {
	       hNuStartVertexDistance->Fill(DeltaStartMagnitude);
	       hNuEndVertexDistance->Fill(DeltaEndMagnitude);

	       if (nuPDG_truth[i] == 14 && CCCOH)
		  {
	          hNuCCCohStartVertexDistance->Fill(DeltaStartMagnitude);
	          hNuCCCohEndVertexDistance->Fill(DeltaEndMagnitude);
	          }
	       }
	    if (mctrk_pdg[j] == 13 && mctrk_origin[j] == 1) 
	       {
	       hasMuon = true;
	       muonlength = mctrk_len_drifted[j];
	       muonstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	       muonend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
               if (Within(true, muonstart.X(), muonstart.Y(), muonstart.Z()) && Within(true, muonend.X(), muonend.Y(), muonend.Z())) {containMuon = true;}
	       hNuMCTrackMuonX->Fill(muonstart.X());
	       hNuMCTrackMuonY->Fill(muonstart.Y());
	       hNuMCTrackMuonZ->Fill(muonstart.Z());
	       }
	    if (mctrk_pdg[j] == 211 && mctrk_origin[j] == 1) 
	       {
	       hasPion = true;
	       pionlength = mctrk_len_drifted[j];
	       pionstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	       pionend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
               if (Within(true, pionstart.X(), pionstart.Y(), pionstart.Z()) && Within(true, pionend.X(), pionend.Y(), pionend.Z())) {containPion = true;}
	       }
	    if (mctrk_pdg[j] == -211 && mctrk_origin[j] == 1) 
	       {
	       hasPion2 = true;
	       pion2start.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	       pion2end.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
               if (Within(true, pion2start.X(), pion2start.Y(), pion2start.Z()) && Within(true, pion2end.X(), pion2end.Y(), pion2end.Z())) {containPion2 = true;}
	       }
	    if (mctrk_pdg[j] == 2212 && mctrk_origin[j] == 1) 
	       {
	       hasProton = true;
	       protonstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	       protonend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
               if (Within(true, protonstart.X(), protonstart.Y(), protonstart.Z()) && Within(true, protonend.X(), protonend.Y(), protonend.Z())) {containProton = true;}
	       }
	    if (DeltaStartMagnitude < VertexRangeCheck && mctrk_origin[j] == 1) 
	       {
	       nmctrksInRange++;
	       if (mctrk_pdg[j] == 13) {muon = track;}
	       if (mctrk_pdg[j] == 211) {pion = track;}
	       if (mctrk_pdg[j] == -211) {pion2 = track;}
	       if (mctrk_pdg[j] == 2212) {proton = track;}
	       }
            if (DeltaStartMagnitude > VertexRangeCheck && DeltaEndMagnitude < VertexRangeCheck && mctrk_origin[j] == 1) 
	       {
	       nmctrksInRange++;
	       if (mctrk_pdg[j] == 13) {muon = track;}
	       if (mctrk_pdg[j] == 211) {pion = track;}
	       if (mctrk_pdg[j] == -211) {pion2 = track;}
	       if (mctrk_pdg[j] == 2212) {proton = track;}
	       }
	    }

         hNuNMCTracksWithinRange->Fill(nmctrksInRange);

	 if (CCQE && checkFV && hasMuon && hasProton && nmctrksInRange >= 2) {hCCQETableInformation->Fill(1);}
	 if (CCRes && checkFV && hasMuon && hasPion && nmctrksInRange >= 2) {hCCResTableInformation->Fill(1);}
	 if (CCQE && checkFV && hasMuon && hasProton && containMuon && containPion && nmctrksInRange >= 2) {hCCQETableInformation->Fill(2);}
	 if (CCRes && checkFV && hasMuon && hasPion && containMuon && containPion && nmctrksInRange >= 2) {hCCResTableInformation->Fill(2);}

         if (NCRes && checkFV && hasPion && hasPion2 && containPion && containPion2) {hNCResTableInformation->Fill(1);}
         if (NCDIS && checkFV && hasPion && hasPion2 && containPion && containPion2) {hNCDISTableInformation->Fill(1);}
         if (NCRes && checkFV && hasPion && hasPion2 && containPion && !containPion2) {hNCResTableInformation->Fill(2);}
         if (NCDIS && checkFV && hasPion && hasPion2 && containPion && !containPion2) {hNCDISTableInformation->Fill(2);}
         if (NCRes && checkFV && hasPion && hasPion2 && !containPion && containPion2) {hNCResTableInformation->Fill(3);}
         if (NCDIS && checkFV && hasPion && hasPion2 && !containPion && containPion2) {hNCDISTableInformation->Fill(3);}
         if (NCRes && checkFV && hasPion && hasPion2 && !containPion && !containPion2) {hNCResTableInformation->Fill(4);}
         if (NCDIS && checkFV && hasPion && hasPion2 && !containPion && !containPion2) {hNCDISTableInformation->Fill(4);}

	 if (CCCOH && checkFV && containMuon && containPion) 
	    {
	    hCCCohTableInformation->Fill(3);
	    hCCCohMuonVsPionTrackLength->Fill(pionlength, muonlength);
	    std::cout<<" "<<std::endl;
	    std::cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl;
	    std::cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl;
	    std::cout<<" CC-COH with Contained Muon and Pion"<<std::endl;
	    std::cout<<" Event = "<<event<<std::endl;
	    std::cout<<" Run = "<<run<<std::endl;
	    std::cout<<" Subrun = "<<subrun<<std::endl;
	    std::cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl;
	    std::cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl;
	    //std::cout<<" "<<std::endl;
            //std::cout<<"DoCA For Pion Track = "<<DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z())<<std::endl;
            //std::cout<<"DoCA For Muon Track = "<<DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z())<<std::endl;
	    //std::cout<<" "<<std::endl;
	    //std::cout<<"Muon Track Length = "<<muonlength<<std::endl;
	    //std::cout<<"Pion Track Length = "<<pionlength<<std::endl;
	    //std::cout<<" "<<std::endl;
	    }
	 if (CCCOH && checkFV && containMuon && !containPion) {hCCCohTableInformation->Fill(4);}
	 if (CCCOH && checkFV && !containMuon && containPion) {hCCCohTableInformation->Fill(5);}
	 if (CCCOH && checkFV && !containMuon && !containPion) {hCCCohTableInformation->Fill(6);}
         if (nmctrksInRange == 0 && CCCOH) 
	    {
	    int nshwr = 0;
	    for (int k = 0; k < no_mcshowers; k++) {if (mcshwr_origin[k] == 1) nshwr++;}
	    std::cout<<"====================================="<<std::endl;
            std::cout<<" ---> Number of MCShowers = "<<nshwr<<std::endl;
	    hCCCoh0TrackLepMom->Fill(lep_mom_truth[i]*1000);
	    hCCCoh0TrackNumMCShwrs->Fill(nshwr);
	    std::cout<<" Event = "<<event<<std::endl;
	    std::cout<<" Run = "<<run<<std::endl;
	    std::cout<<" Subrun = "<<subrun<<std::endl;
	    std::cout<<"====================================="<<std::endl;
	    }

	 if (nmctrksInRange >= 2 && CCCOH && checkFV && containMuon && containPion) 
	    {
	    hCCCohConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCCohDoCA->Fill(closer);
	    }
	 if (nmctrksInRange >= 2 && CCQE && checkFV && containMuon && containProton) 
	    {
	    hCCQEConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), proton.X(), proton.Y(), proton.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, protonstart.X(), protonstart.Y(), protonstart.Z(), protonend.X(), protonend.Y(), protonend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCQEDoCA->Fill(closer);
	    }
	 if (nmctrksInRange >= 2 && CCRes && checkFV && containMuon && containPion) 
	    {
	    hCCResConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCResDoCA->Fill(closer);
	    }
	 if (nmctrksInRange >= 2 && NCRes && checkFV && containPion && containPion2) 
	    {
	    hNCResConeAngle->Fill(ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hNCResDoCA->Fill(closer);
	    }
	 if (nmctrksInRange >= 2 && NCDIS && checkFV && containPion && containPion2) 
	    {
	    hNCDISConeAngle->Fill(ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hNCDISDoCA->Fill(closer);
	    }

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
   hCCCoh0TrackNumMCShwrs->Write();
   hCCCohMuonVsPionTrackLength->Write();

   hCCCohConeAngle->Write();
   hCCQEConeAngle->Write();
   hCCResConeAngle->Write();
   hNCResConeAngle->Write();
   hNCDISConeAngle->Write();
   hCosmicConeAngle->Write();

   hCCCohDoCA->Write();
   hCCQEDoCA->Write();
   hCCResDoCA->Write();
   hNCResDoCA->Write();
   hNCDISDoCA->Write();
   hCosmicDoCA->Write();

   hCCCohTableInformation->Write();
   hCCQETableInformation->Write();
   hCCResTableInformation->Write();
   hNCResTableInformation->Write();
   hNCDISTableInformation->Write();

   hNuStartVertexDistance->Write();
   hNuEndVertexDistance->Write();
   hCosmicStartVertexDistance->Write();
   hCosmicEndVertexDistance->Write();
   hNuCCCohStartVertexDistance->Write();
   hNuCCCohEndVertexDistance->Write();

   hNuMCTrackMuonX->Write();
   hNuMCTrackMuonY->Write();
   hNuMCTrackMuonZ->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

} // End NewAnalysis Loop
