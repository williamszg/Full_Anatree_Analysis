#define NewAnalysis_cxx
#include "NewAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <math.h>
#include <stdio.h>

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
         if (!CCCoh(nuPDG_truth[i], ccnc_truth[i], mode_truth[i])) {continue;}

         int nmctrksInRange = 0;

         double Vx = sp_charge_corrected_nuvtxx_truth[i];
         double Vy = sp_charge_corrected_nuvtxy_truth[i];
         double Vz = sp_charge_corrected_nuvtxz_truth[i];

	 bool checkDV = Within(false, Vx, Vy, Vz);
	 bool checkFV = Within(true, Vx, Vy, Vz);

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

	    if (DeltaStartMagnitude < VertexRangeCheck) {nmctrksInRange++;}
            if (DeltaStartMagnitude > VertexRangeCheck && DeltaEndMagnitude < VertexRangeCheck) {nmctrksInRange++;}
	    }

         hNuNMCTracksWithinRange->Fill(nmctrksInRange);

	 std::cout<<"Number of MCTracks that are within the Vertex Range Check = "<<nmctrksInRange<<std::endl;
         if (nmctrksInRange == 0) {std::cout<<"---> Number of MCShowers = "<<no_mcshowers<<std::endl;}

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
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

} // End NewAnalysis Loop
