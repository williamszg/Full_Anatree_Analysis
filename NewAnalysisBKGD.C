#define NewAnalysisBKGD_cxx
#include "NewAnalysisBKGD.h"
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
TH2D *hCCCohMuonVsPionTrackLength = new TH2D("hCCCohMuonVsPionTrackLength", "The Track Length of the Muon vs the Track Length of the Pion for Fully Contained CC-COH Events", 200, 0, 1000, 200, 0, 1000);

TH1D *hCCCohConeAngle = new TH1D("hCCCohConeAngle", "The Cone Angle for CC-COH Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCCQEConeAngle = new TH1D("hCCQEConeAngle", "The Cone Angle for CC-QE Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCCResConeAngle = new TH1D("hCCResConeAngle", "The Cone Angle for CC-Res Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCResConeAngle = new TH1D("hNCResConeAngle", "The Cone Angle for NC-Res Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCDISConeAngle = new TH1D("hNCDISConeAngle", "The Cone Angle for NC-DIS Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCosmicConeAngle = new TH1D("hCosmicConeAngle", "The Cone Angle for Events with 2 or More Cosmic MCTracks", 181, -0.5, 180.5);

TH1D *hCCCohDoCA = new TH1D("hCCCohDoCA", "The DoCA for CC-COH Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCCohDoCA2 = new TH1D("hCCCohDoCA2", "The DoCA for CC-COH Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCCQEDoCA = new TH1D("hCCQEDoCA", "The DoCA for CC-QE Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCQEDoCA2 = new TH1D("hCCQEDoCA2", "The DoCA for CC-QE Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCCResDoCA = new TH1D("hCCResDoCA", "The DoCA for CC-Res Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCResDoCA2 = new TH1D("hCCResDoCA2", "The DoCA for CC-Res Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hNCResDoCA = new TH1D("hNCResDoCA", "The DoCA for NC-Res Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hNCResDoCA2 = new TH1D("hNCResDoCA2", "The DoCA for NC-Res Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hNCDISDoCA = new TH1D("hNCDISDoCA", "The DoCA for NC-DIS Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hNCDISDoCA2 = new TH1D("hNCDISDoCA2", "The DoCA for NC-DIS Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCosmicDoCA = new TH1D("hCosmicDoCA", "The DoCA for Events with 2 or More Cosmic MCTracks in cm", 500, 0, 500);
TH1D *hCosmicDoCA2 = new TH1D("hCosmicDoCA2", "The DoCA for Events with 2 or More Cosmic MCTracks in cm Using the Second Method", 1000, 0, 100);

TH1D *hCCCohVA = new TH1D("hCCCohVA", "The Vertex Activity for CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCQEVA = new TH1D("hCCQEVA", "The Vertex Activity for CC-QE Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCResVA = new TH1D("hCCResVA", "The Vertex Activity for CC-Res Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hNCResVA = new TH1D("hNCResVA", "The Vertex Activity for NC-Res Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hNCDISVA = new TH1D("hNCDISVA", "The Vertex Activity for NC-DIS Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCosmicVA = new TH1D("hCosmicVA", "The Vertex Activity for Cosmic Events within 10cm of Vertex in MeV", 100, 0, 500);

TH1D *hCCCohMuonVA = new TH1D("hCCCohMuonVA", "The Vertex Activity of Muons in CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCCohPionVA = new TH1D("hCCCohPionVA", "The Vertex Activity of Pions in CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);

TH1D *hCCCohTableInformation = new TH1D("hCCCohTableInformation", "Table Information for CC-COH Events", 7, -0.5, 6.5);
TH1D *hCCQETableInformation = new TH1D("hCCQETableInformation", "Table Information for CC-QE Events", 3, -0.5, 2.5);
TH1D *hCCResTableInformation = new TH1D("hCCResTableInformation", "Table Information for CC-Res Events", 3, -0.5, 2.5);
TH1D *hNCResTableInformation = new TH1D("hNCResTableInformation", "Table Information for NC-Res Events", 5, -0.5, 4.5);
TH1D *hNCDISTableInformation = new TH1D("hNCDISTableInformation", "Table Information for NC-DIS Events", 5, -0.5, 4.5);

TH1D *hNuStartVertexDistance = new TH1D("hNuStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuEndVertexDistance = new TH1D("hNuEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hCosmicStartVertexDistance = new TH1D("hCosmicStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for Cosmics with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hCosmicEndVertexDistance = new TH1D("hCosmicEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for Cosmics with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuCCCohStartVertexDistance = new TH1D("hNuCCCohStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuCCCohEndVertexDistance = new TH1D("hNuCCCohEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);

TH1D *hNuMCTrackMuonX = new TH1D("hNuMCTrackMuonX", "Starting X Position of a Muon From a Neutrino Interaction", 231, 9.5, 240.5);
TH1D *hNuMCTrackMuonY = new TH1D("hNuMCTrackMuonY", "Starting Y Position of a Muon From a Neutrino Interaction", 191, -95.5, 95.5);
TH1D *hNuMCTrackMuonZ = new TH1D("hNuMCTrackMuonZ", "Starting Z Position of a Muon From a Neutrino Interaction", 1021, 9.5, 1030.5);

TH1D *hOpFlashPECCCoh = new TH1D("hOpFlashPECCCoh", "Number of PE in a CCCoh Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECosmic = new TH1D("hOpFlashPECosmic", "Number of PE in a Cosmic Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECCOther = new TH1D("hOpFlashPECCOther", "Number of PE in a CCOther Interaction", 2000, 0, 20000);
TH1D *hOpFlashPENCOther = new TH1D("hOpFlashPENCOther", "Number of PE in a NCOther Interaction", 2000, 0, 20000);

TH2D *h2DVertexActivity = new TH2D("h2DVertexActivity", "Energy Deposited in Region vs Distance from Vertex", 201, -0.5, 200.5, 500, 0, 500);
TH2D *h2DMuonVertexActivity = new TH2D("h2DMuonVertexActivity", "Energy Deposited in Region vs Distance from Vertex for Muons", 201, -0.5, 200.5, 500, 0, 500);
TH2D *h2DPionVertexActivity = new TH2D("h2DPionVertexActivity", "Energy Deposited in Region vs Distance from Vertex for Pions", 201, -0.5, 200.5, 500, 0, 500);
TH2D *hMuonEnergyVsConeAngle = new TH2D("hMuonEnergyVsConeAngle", "Muon Energy Vs Cone Angle for CCCoh Events", 181, -0.5, 180.5, 250, 0, 1500);
TH2D *hPionEnergyVsConeAngle = new TH2D("hPionEnergyVsConeAngle", "Pion Energy Vs Cone Angle for CCCoh Events", 181, -0.5, 180.5, 250, 0, 1500);
TH2D *hQ2VsConeAngle = new TH2D("hQ2VsConeAngle", "Q2 Vs Cone Angle for CCCoh Events", 181, -0.5, 180.5, 250, 0, 1);

TH1D *hMCTruthQ2CCCoh = new TH1D("hMCTruthQ2CCCoh", "The Q^{2} of CCCoh Events from MCTruth Information", 250, 0, 1);
TH1D *hMCTruthTCCCoh = new TH1D("hMCTruthTCCCoh", "The |t| of CCCoh Events from MCTruth Information", 250, 0, 1);

TH1D *hMCTruthPxMuon = new TH1D("hMCTruthPxMuon", "The Momentum of the Muon in the X Direction for CCCoh", 250, 0, 1000);
TH1D *hMCTruthPyMuon = new TH1D("hMCTruthPyMuon", "The Momentum of the Muon in the Y Direction for CCCoh", 250, 0, 1000);
TH1D *hMCTruthPzMuon = new TH1D("hMCTruthPzMuon", "The Momentum of the Muon in the Z Direction for CCCoh", 250, 0, 2500);
TH1D *hMCTruthEMuon = new TH1D("hMCTruthEMuon", "The Energy of the Muon for CCCoh", 250, 0, 2500);

TH1D *hMCTruthPxPion = new TH1D("hMCTruthPxPion", "The Momentum of the Pion in the X Direction for CCCoh", 250, 0, 1000);
TH1D *hMCTruthPyPion = new TH1D("hMCTruthPyPion", "The Momentum of the Pion in the Y Direction for CCCoh", 250, 0, 1000);
TH1D *hMCTruthPzPion = new TH1D("hMCTruthPzPion", "The Momentum of the Pion in the Z Direction for CCCoh", 250, 0, 2500);
TH1D *hMCTruthEPion = new TH1D("hMCTruthEPion", "The Energy of the Pion for CCCoh", 250, 0, 2500);

TH1D *hOpFlashVx = new TH1D("hOpFlashVx", "Distance from the Neutrino Vertex X Position of OpFlash (Vx - OpFlashX)", 401, -200.5, 200.5);
TH1D *hOpFlashVy = new TH1D("hOpFlashVy", "Distance from the Neutrino Vertex Y Position of OpFlash (Vy - OpFlashY)", 401, -200.5, 200.5);
TH1D *hOpFlashVz = new TH1D("hOpFlashVz", "Distance from the Neutrino Vertex Z Position of OpFlash (Vz - OpFlashZ)", 401, -200.5, 200.5);

TH1D *hOpFlashX = new TH1D("hOpFlashX", "X Position of OpFlash", 251, -0.5, 250.5);
TH1D *hOpFlashY = new TH1D("hOpFlashY", "Y Position of OpFlash", 231, -115.5, 115.5);
TH1D *hOpFlashZ = new TH1D("hOpFlashZ", "Z Position of OpFlash", 1041, -0.5, 1040.5);
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

// ---------------------------------------------
// --- Distance of Closest Approach Method 2 ---
// ---------------------------------------------
double DoCA2(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v(x0-x1, y0-y1, z0-z1);
   d = v.Mag();
   return d;
}
// ------------------------------------

// -----------------------------------
// --- Distance Between Two Points ---
// -----------------------------------
double Distance(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v01(x0-x1, y0-y1, z0-z1);
   d = v01.Mag();
   return d;
}
// -----------------------------------


void NewAnalysisBKGD::Loop()
{
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   int Nentries = nentries;
   //int Nentries = 10000;

   double POT = 0;

   // --------------------------------
   // --- Variable Used for Checks ---
   // --------------------------------
   double VertexRangeCheck = 10; // Variable to check if a track is within this range of the vertex in cm
   // --------------------------------

   for (Long64_t jentry=0; jentry<Nentries; jentry++) 
      {

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if (jentry%100 == 0) {std::cout<<"Event = "<<jentry<<std::endl;}
      //if (jentry > 0 && jentry < nentries) {std::cout<<"Event = "<<jentry<<std::endl;}

      if (pot != -99999) {POT = POT + pot;}
      //if (jentry == Nentries - 1) {std::cout<<"Total POT for this file = "<<POT<<std::endl;}

      if (jentry%100 == 0) {std::cout<<"Number of Beam Flashes = "<<nfls_simpleFlashBeam<<std::endl;}
      if (jentry%100 == 0) {std::cout<<"Number of Cosmic Flashes = "<<nfls_simpleFlashCosmic<<std::endl;}

      for (int n = 0; n < nfls_simpleFlashCosmic; n++) {hOpFlashPECosmic->Fill(flsPe_simpleFlashCosmic[n]);}

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

	 //if (!CCCOH && !CCQE && !CCRes && !NCRes && !NCDIS) {continue;}

         int nmctrksInRange = 0;

         double closer = -99;

         double VAdistanceCheck = 10;

         double Vx = nuvtxx_truth[i];
         double Vy = nuvtxy_truth[i];
         double Vz = nuvtxz_truth[i];

	 bool checkDV = Within(false, Vx, Vy, Vz);
	 bool checkFV = Within(true, Vx, Vy, Vz);

         double VAEnergy = 0;
	 double MuonPx = 0;
	 double MuonPy = 0;
	 double MuonPz = 0;
	 double PionPx = 0;
	 double PionPy = 0;
	 double PionPz = 0;
         double MuonVAEnergy = 0;
         double PionVAEnergy = 0;
         double NuEnergy = enu_truth[0]*1000;
	 double NuPx = NuEnergy*nu_dcosx_truth[0];
	 double NuPy = NuEnergy*nu_dcosy_truth[0];
	 double NuPz = NuEnergy*nu_dcosz_truth[0];
         double MuonEnergy = 0;
         double PionEnergy = 0;
         double Q2 = Q2_truth[i];
	 double t = -999;
	 double DoCA2_Event = 10000;

         // --------------------------------
         // --- Some OpFlash Information ---
         // --------------------------------
         for (int n = 0; n < nfls_simpleFlashBeam; n++)
            {
            hOpFlashVx->Fill(Vx - flsXcenter_simpleFlashBeam[n]*100);           
            hOpFlashVy->Fill(Vy - flsYcenter_simpleFlashBeam[n]*100);           
            hOpFlashVz->Fill(Vz - flsZcenter_simpleFlashBeam[n]*100);
           
            hOpFlashX->Fill(flsXcenter_simpleFlashBeam[n]*100);           
            hOpFlashY->Fill(flsYcenter_simpleFlashBeam[n]*100);           
            hOpFlashZ->Fill(flsZcenter_simpleFlashBeam[n]*100);
            }
         // --------------------------------

         // ----------------------------------------------------------------
         // --- Looking into G4 Information for Vertex Activity and DoCA ---
         // ----------------------------------------------------------------
         for (int npriG4 = 0; npriG4 < no_primaries; npriG4++)
            {
            //std::cout<<"Vx = "<<Vx<<" Vy = "<<Vy<<" Vz = "<<Vz<<std::endl;
            // Loop over the trajectory points
            for (int npriTrjPts = 0; npriTrjPts < NTrTrajPts[npriG4] - 1; npriTrjPts++)
               {
               //Within here is where you need to include the vertex activity information, and change the DoCA here, too.
               //std::cout<<"X = "<<TrueTraj_X[npriG4][npriTrjPts]<<" Y = "<<TrueTraj_Y[npriG4][npriTrjPts]<<" Z = "<<TrueTraj_Z[npriG4][npriTrjPts]<<std::endl;
               double step = Distance(TrueTraj_X[npriG4][0], TrueTraj_Y[npriG4][0], TrueTraj_Z[npriG4][0], TrueTraj_X[npriG4][npriTrjPts+1], TrueTraj_Y[npriG4][npriTrjPts+1], TrueTraj_Z[npriG4][npriTrjPts+1]);
               double EnergyStep = TrueTraj_E[npriG4][0] - TrueTraj_E[npriG4][npriTrjPts+1];
               //std::cout<<"Step Distance = "<<step<<std::endl;
               //std::cout<<"Step Energy = "<<EnergyStep*1000<<std::endl; 
               h2DVertexActivity->Fill(step, EnergyStep*1000);
              
               if (pdg[npriG4] == 13) 
                  {
	          MuonPx = Px[npriG4]*1000;
	          MuonPy = Py[npriG4]*1000;
	          MuonPz = Pz[npriG4]*1000;
                  MuonEnergy = TrueTraj_E[npriG4][0]*1000;
                  h2DMuonVertexActivity->Fill(step, EnergyStep*1000);
                  }
               if (pdg[npriG4] == 211) 
                  {
	          PionPx = Px[npriG4]*1000;
	          PionPy = Py[npriG4]*1000;
	          PionPz = Pz[npriG4]*1000;
                  PionEnergy = TrueTraj_E[npriG4][0]*1000;
                  h2DPionVertexActivity->Fill(step, EnergyStep*1000);
                  }
               double VAdistance = Distance(Vx, Vy, Vz, TrueTraj_X[npriG4][npriTrjPts+1], TrueTraj_Y[npriG4][npriTrjPts+1], TrueTraj_Z[npriG4][npriTrjPts+1]);
               if (VAdistance <= VAdistanceCheck) 
                  {
                  VAEnergy = VAEnergy + TrueTraj_E[npriG4][npriTrjPts] - TrueTraj_E[npriG4][npriTrjPts+1];
                  if (pdg[npriG4] == 13) {MuonVAEnergy = MuonVAEnergy + TrueTraj_E[npriG4][npriTrjPts] - TrueTraj_E[npriG4][npriTrjPts+1];}
                  if (pdg[npriG4] == 211) {PionVAEnergy = PionVAEnergy + TrueTraj_E[npriG4][npriTrjPts] - TrueTraj_E[npriG4][npriTrjPts+1];}
                  }

	       // ---------------------------
	       // --- Doing new DoCA here ---
	       // ---------------------------
               if (npriTrjPts>0)
		  {
		  for (int j = npriG4+1; j < no_primaries; j++)
		     {
                     for (int k = 1; k < NTrTrajPts[j]; k++)
		        {
		        double doca_checker = DoCA2(TrueTraj_X[npriG4][npriTrjPts], TrueTraj_Y[npriG4][npriTrjPts], TrueTraj_Z[npriG4][npriTrjPts], TrueTraj_X[j][k], TrueTraj_Y[j][k], TrueTraj_Z[j][k]);
		        if (doca_checker < DoCA2_Event) {DoCA2_Event = doca_checker;}
		        }
	             }
		  }
               }
            }
         //std::cout<<"VAEnergy = "<<VAEnergy*1000<<std::endl;
         // ----------------------------------------------------------------


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

         for (int j = 0; j < geant_list_size; j++)
	    {
	    double DeltaStartX = StartPointx_tpcAV[j] - Vx;
	    double DeltaStartY = StartPointy_tpcAV[j] - Vy;
	    double DeltaStartZ = StartPointz_tpcAV[j] - Vz;
	    double DeltaStartMagnitude = sqrt(pow(DeltaStartX, 2) + pow(DeltaStartY, 2) + pow(DeltaStartZ, 2));

            //std::cout<<"DeltaStartMagnitude = "<<DeltaStartMagnitude<<std::endl;
            //std::cout<<"Vx = "<<Vx<<std::endl;
            //std::cout<<"StartPointx_tpcAV[j] = "<<StartPointx_tpcAV[j]<<std::endl;

	    double DeltaEndX = EndPointx_tpcAV[j] - Vx;
	    double DeltaEndY = EndPointy_tpcAV[j] - Vy;
	    double DeltaEndZ = EndPointz_tpcAV[j] - Vz;
	    double DeltaEndMagnitude = sqrt(pow(DeltaEndX, 2) + pow(DeltaEndY, 2) + pow(DeltaEndZ, 2));

	    TVector3 track(EndPointx_tpcAV[j] - StartPointx_tpcAV[j], EndPointy_tpcAV[j] - StartPointy_tpcAV[j], EndPointz_tpcAV[j] - StartPointz_tpcAV[j]);

	    for (int l = j + 1; l < geant_list_size; l++)
	       {
               TVector3 track2(EndPointx_tpcAV[l] - StartPointx_tpcAV[l], EndPointy_tpcAV[l] - StartPointy_tpcAV[l], EndPointz_tpcAV[l] - StartPointz_tpcAV[l]);

	       if (checkFV && j >= no_primaries && l >= no_primaries) 
	          {
	          hCosmicConeAngle->Fill(ConeAngle(track.X(), track.Y(), track.Z(), track2.X(), track2.Y(), track2.Z())*180/PI);
	          double d1 = DoCA(Vx, Vy, Vz, StartPointx_tpcAV[j], StartPointy_tpcAV[j], StartPointz_tpcAV[j], EndPointx_tpcAV[j], EndPointy_tpcAV[j], EndPointz_tpcAV[j]);
	          double d2 = DoCA(Vx, Vy, Vz, StartPointx_tpcAV[l], StartPointy_tpcAV[l], StartPointz_tpcAV[l], EndPointx_tpcAV[l], EndPointy_tpcAV[l], EndPointz_tpcAV[l]);
	          if (d1 <= d2) {closer = d1;}
	          if (d2 < d1) {closer = d2;}
	          hCosmicDoCA->Fill(closer);
	          hCosmicDoCA2->Fill(DoCA2_Event);

	          if (geant_list_size - no_primaries >= 2)
		     {
		     hCosmicStartVertexDistance->Fill(DeltaStartMagnitude);
		     hCosmicEndVertexDistance->Fill(DeltaEndMagnitude);
	             }
	          }
	       }
	    if (checkFV && j <= no_primaries && no_primaries >= 2)
	       {
	       hNuStartVertexDistance->Fill(DeltaStartMagnitude);
	       hNuEndVertexDistance->Fill(DeltaEndMagnitude);

	       if (nuPDG_truth[i] == 14 && CCCOH)
		  {
	          hNuCCCohStartVertexDistance->Fill(DeltaStartMagnitude);
	          hNuCCCohEndVertexDistance->Fill(DeltaEndMagnitude);
	          }
	       }
	    if (pdg[j] == 13 && j <= no_primaries) 
	       {
	       hasMuon = true;
	       muonlength = mctrk_len_drifted[j];
	       muonstart.SetXYZ(StartPointx_tpcAV[j], StartPointy_tpcAV[j], StartPointz_tpcAV[j]);
	       muonend.SetXYZ(EndPointx_tpcAV[j], EndPointy_tpcAV[j], EndPointz_tpcAV[j]);
               if (Within(true, muonstart.X(), muonstart.Y(), muonstart.Z()) && Within(true, muonend.X(), muonend.Y(), muonend.Z())) {containMuon = true;}
               if (Within(true, muonstart.X(), muonstart.Y(), muonstart.Z()))
                  {
	          hNuMCTrackMuonX->Fill(muonstart.X());
	          hNuMCTrackMuonY->Fill(muonstart.Y());
	          hNuMCTrackMuonZ->Fill(muonstart.Z());
                  }
	       }
	    if (pdg[j] == 211 && j <= no_primaries) 
	       {
	       hasPion = true;
	       pionlength = mctrk_len_drifted[j];
	       pionstart.SetXYZ(StartPointx_tpcAV[j], StartPointy_tpcAV[j], StartPointz_tpcAV[j]);
	       pionend.SetXYZ(EndPointx_tpcAV[j], EndPointy_tpcAV[j], EndPointz_tpcAV[j]);
               if (Within(true, pionstart.X(), pionstart.Y(), pionstart.Z()) && Within(true, pionend.X(), pionend.Y(), pionend.Z())) {containPion = true;}
	       }
	    if (pdg[j] == -211 && j <= no_primaries) 
	       {
	       hasPion2 = true;
	       pion2start.SetXYZ(StartPointx_tpcAV[j], StartPointy_tpcAV[j], StartPointz_tpcAV[j]);
	       pion2end.SetXYZ(EndPointx_tpcAV[j], EndPointy_tpcAV[j], EndPointz_tpcAV[j]);
               if (Within(true, pion2start.X(), pion2start.Y(), pion2start.Z()) && Within(true, pion2end.X(), pion2end.Y(), pion2end.Z())) {containPion2 = true;}
	       }
	    if (pdg[j] == 2212 && j <= no_primaries) 
	       {
	       hasProton = true;
	       protonstart.SetXYZ(StartPointx_tpcAV[j], StartPointy_tpcAV[j], StartPointz_tpcAV[j]);
	       protonend.SetXYZ(EndPointx_tpcAV[j], EndPointy_tpcAV[j], EndPointz_tpcAV[j]);
               if (Within(true, protonstart.X(), protonstart.Y(), protonstart.Z()) && Within(true, protonend.X(), protonend.Y(), protonend.Z())) {containProton = true;}
	       }
	    if (DeltaStartMagnitude < VertexRangeCheck && j <= no_primaries) 
	       {
	       nmctrksInRange++;
	       if (pdg[j] == 13) {muon = track;}
	       if (pdg[j] == 211) {pion = track;}
	       if (pdg[j] == -211) {pion2 = track;}
	       if (pdg[j] == 2212) {proton = track;}
	       }
            if (DeltaStartMagnitude > VertexRangeCheck && DeltaEndMagnitude < VertexRangeCheck && j <= no_primaries) 
	       {
	       nmctrksInRange++;
	       if (pdg[j] == 13) {muon = track;}
	       if (pdg[j] == 211) {pion = track;}
	       if (pdg[j] == -211) {pion2 = track;}
	       if (pdg[j] == 2212) {proton = track;}
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

	 if (nmctrksInRange >= 2 && CCCOH && checkFV )//&& containMuon && containPion) 
	    {
	    hCCCohConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
            hMuonEnergyVsConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI, MuonEnergy);
            hPionEnergyVsConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI, PionEnergy);
            hQ2VsConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI, Q2);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCCohDoCA->Fill(closer);
	    hCCCohDoCA2->Fill(DoCA2_Event);
            for (int n = 0; n < nfls_simpleFlashBeam; n++) 
               {
               hOpFlashPECCCoh->Fill(flsPe_simpleFlashBeam[n]);
               std::cout<<"CCCoh PE number = "<<flsPe_simpleFlashBeam[n]<<std::endl;
               }
	    t = abs(pow(NuEnergy - MuonEnergy - PionEnergy,2) - pow(NuPx - MuonPx - PionPx,2) - pow(NuPy - MuonPy - PionPy,2) - pow(NuPz - MuonPz - PionPz,2))/(1000000);
            hCCCohVA->Fill(VAEnergy*1000);
            hCCCohMuonVA->Fill(MuonVAEnergy*1000);
            hCCCohPionVA->Fill(PionVAEnergy*1000);
	    hMCTruthQ2CCCoh->Fill(Q2);
	    hMCTruthTCCCoh->Fill(t);
	    hMCTruthPxMuon->Fill(MuonPx);
	    hMCTruthPyMuon->Fill(MuonPy);
	    hMCTruthPzMuon->Fill(MuonPz);
	    hMCTruthEMuon->Fill(MuonEnergy);
	    hMCTruthPxPion->Fill(PionPx);
	    hMCTruthPyPion->Fill(PionPy);
	    hMCTruthPzPion->Fill(PionPz);
	    hMCTruthEPion->Fill(PionEnergy);
	    }
	 if (nmctrksInRange >= 2 && CCQE && checkFV )//&& containMuon && containProton) 
	    {
	    hCCQEConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), proton.X(), proton.Y(), proton.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, protonstart.X(), protonstart.Y(), protonstart.Z(), protonend.X(), protonend.Y(), protonend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCQEDoCA->Fill(closer);
	    hCCQEDoCA2->Fill(DoCA2_Event);
            for (int n = 0; n < nfls_simpleFlashBeam; n++)
               {
               hOpFlashPECCOther->Fill(flsPe_simpleFlashBeam[n]);
               std::cout<<"CCQE PE number = "<<flsPe_simpleFlashBeam[n]<<std::endl;
               }
            hCCQEVA->Fill(VAEnergy*1000);
	    }
	 if (nmctrksInRange >= 2 && CCRes && checkFV )//&& containMuon && containPion) 
	    {
	    hCCResConeAngle->Fill(ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hCCResDoCA->Fill(closer);
	    hCCResDoCA2->Fill(DoCA2_Event);
            for (int n = 0; n < nfls_simpleFlashBeam; n++)
               {
               hOpFlashPECCOther->Fill(flsPe_simpleFlashBeam[n]);
               std::cout<<"CCRes PE number = "<<flsPe_simpleFlashBeam[n]<<std::endl;
               }
            hCCResVA->Fill(VAEnergy*1000);
	    }
	 if (nmctrksInRange >= 2 && NCRes && checkFV )//&& containPion && containPion2) 
	    {
	    hNCResConeAngle->Fill(ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hNCResDoCA->Fill(closer);
	    hNCResDoCA2->Fill(DoCA2_Event);
            for (int n = 0; n < nfls_simpleFlashBeam; n++)
               {
               hOpFlashPENCOther->Fill(flsPe_simpleFlashBeam[n]);
               std::cout<<"NCRes PE number = "<<flsPe_simpleFlashBeam[n]<<std::endl;
               }
            hNCResVA->Fill(VAEnergy*1000);
	    }
	 if (nmctrksInRange >= 2 && NCDIS && checkFV )//&& containPion && containPion2) 
	    {
	    hNCDISConeAngle->Fill(ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI);
	    double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	    double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	    if (d1 <= d2) {closer = d1;}
	    if (d2 < d1) {closer = d2;}
	    hNCDISDoCA->Fill(closer);
	    hNCDISDoCA2->Fill(DoCA2_Event);
            for (int n = 0; n < nfls_simpleFlashBeam; n++)
               {
               hOpFlashPENCOther->Fill(flsPe_simpleFlashBeam[n]);
               std::cout<<"NCDIS PE number = "<<flsPe_simpleFlashBeam[n]<<std::endl;
               }
            hNCDISVA->Fill(VAEnergy*1000);
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
   TFile *TCCCohInfo = new TFile("Histograms_NewAnalysis_BKGD.root", "RECREATE");

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
   hCCCohDoCA2->Write();
   hCCQEDoCA->Write();
   hCCQEDoCA2->Write();
   hCCResDoCA->Write();
   hCCResDoCA2->Write();
   hNCResDoCA->Write();
   hNCResDoCA2->Write();
   hNCDISDoCA->Write();
   hNCDISDoCA2->Write();
   hCosmicDoCA->Write();
   hCosmicDoCA2->Write();

   hCCCohVA->Write();
   hCCQEVA->Write();
   hCCResVA->Write();
   hNCResVA->Write();
   hNCDISVA->Write();
   hCosmicVA->Write();

   hCCCohMuonVA->Write();
   hCCCohPionVA->Write();

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

   hOpFlashPECCCoh->Write();
   hOpFlashPECosmic->Write();
   hOpFlashPECCOther->Write();
   hOpFlashPENCOther->Write();

   h2DVertexActivity->Write();
   h2DMuonVertexActivity->Write();
   h2DPionVertexActivity->Write();
   hMuonEnergyVsConeAngle->Write();
   hPionEnergyVsConeAngle->Write();
   hQ2VsConeAngle->Write();

   hMCTruthQ2CCCoh->Write();
   hMCTruthTCCCoh->Write();

   hMCTruthPxMuon->Write();
   hMCTruthPyMuon->Write();
   hMCTruthPzMuon->Write();
   hMCTruthEMuon->Write();

   hMCTruthPxPion->Write();
   hMCTruthPyPion->Write();
   hMCTruthPzPion->Write();
   hMCTruthEPion->Write();

   hOpFlashVx->Write();
   hOpFlashVy->Write();
   hOpFlashVz->Write();

   hOpFlashX->Write();
   hOpFlashY->Write();
   hOpFlashZ->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

} // End NewAnalysisBKGD Loop
