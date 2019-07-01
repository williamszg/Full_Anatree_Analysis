#define NewAnalysisCCCoh_cxx
#include "NewAnalysisCCCoh.h"
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
TH1D *hCCDISConeAngle = new TH1D("hCCDISConeAngle", "The Cone Angle for CC-DIS Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCResConeAngle = new TH1D("hNCResConeAngle", "The Cone Angle for NC-Res Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hNCDISConeAngle = new TH1D("hNCDISConeAngle", "The Cone Angle for NC-DIS Events with 2 or More MCTracks", 181, -0.5, 180.5);
TH1D *hCosmicConeAngle = new TH1D("hCosmicConeAngle", "The Cone Angle for Events with 2 or More Cosmic Tracks", 181, -0.5, 180.5);
TH1D *hOtherConeAngle = new TH1D("hOtherConeAngle", "The Cone Angle for Other Events with 2 or More MCTracks", 181, -0.5, 180.5);

TH1D *hCCCohDoCA = new TH1D("hCCCohDoCA", "The DoCA for CC-COH Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCCohDoCA2 = new TH1D("hCCCohDoCA2", "The DoCA for CC-COH Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCCQEDoCA = new TH1D("hCCQEDoCA", "The DoCA for CC-QE Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCQEDoCA2 = new TH1D("hCCQEDoCA2", "The DoCA for CC-QE Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCCResDoCA = new TH1D("hCCResDoCA", "The DoCA for CC-Res Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCResDoCA2 = new TH1D("hCCResDoCA2", "The DoCA for CC-Res Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCCDISDoCA = new TH1D("hCCDISDoCA", "The DoCA for CC-DIS Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hCCDISDoCA2 = new TH1D("hCCDISDoCA2", "The DoCA for CC-DIS Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hNCResDoCA = new TH1D("hNCResDoCA", "The DoCA for NC-Res Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hNCResDoCA2 = new TH1D("hNCResDoCA2", "The DoCA for NC-Res Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hNCDISDoCA = new TH1D("hNCDISDoCA", "The DoCA for NC-DIS Events with 2 or More MCTracks in cm", 500, 0, 500);
TH1D *hNCDISDoCA2 = new TH1D("hNCDISDoCA2", "The DoCA for NC-DIS Events with 2 or More MCTracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hCosmicDoCA2 = new TH1D("hCosmicDoCA2", "The DoCA for Events with 2 or More Cosmic Tracks in cm Using the Second Method", 1000, 0, 100);
TH1D *hOtherDoCA2 = new TH1D("hOtherDoCA2", "The DoCA for Events with 2 or More MCTracks that aren't any of the other categories in cm Using the Second Method", 1000, 0, 100);

TH1D *hCCCohVA = new TH1D("hCCCohVA", "The Vertex Activity for CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCQEVA = new TH1D("hCCQEVA", "The Vertex Activity for CC-QE Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCResVA = new TH1D("hCCResVA", "The Vertex Activity for CC-Res Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCDISVA = new TH1D("hCCDISVA", "The Vertex Activity for CC-DIS Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hNCResVA = new TH1D("hNCResVA", "The Vertex Activity for NC-Res Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hNCDISVA = new TH1D("hNCDISVA", "The Vertex Activity for NC-DIS Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCosmicVA = new TH1D("hCosmicVA", "The Vertex Activity for Cosmic Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hOtherVA = new TH1D("hOtherVA", "The Vertex Activity for Other Events within 10cm of Vertex in MeV", 100, 0, 500);

TH1D *hCCCohMuonVA = new TH1D("hCCCohMuonVA", "The Vertex Activity of Muons in CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);
TH1D *hCCCohPionVA = new TH1D("hCCCohPionVA", "The Vertex Activity of Pions in CC-COH Events within 10cm of Vertex in MeV", 100, 0, 500);

TH1D *hCCCohTableInformation = new TH1D("hCCCohTableInformation", "Table Information for CC-COH Events", 12, -0.5, 11.5);
TH1D *hCCQETableInformation = new TH1D("hCCQETableInformation", "Table Information for CC-QE Events", 12, -0.5, 11.5);
TH1D *hCCResTableInformation = new TH1D("hCCResTableInformation", "Table Information for CC-Res Events", 12, -0.5, 11.5);
TH1D *hCCDISTableInformation = new TH1D("hCCDISTableInformation", "Table Information for CC-DIS Events", 12, -0.5, 11.5);
TH1D *hNCResTableInformation = new TH1D("hNCResTableInformation", "Table Information for NC-Res Events", 12, -0.5, 11.5);
TH1D *hNCDISTableInformation = new TH1D("hNCDISTableInformation", "Table Information for NC-DIS Events", 12, -0.5, 11.5);
TH1D *hCosmicTableInformation = new TH1D("hCosmicTableInformation", "Table Information for Cosmics", 12, -0.5, 11.5);
TH1D *hOtherTableInformation = new TH1D("hOtherTableInformation", "Table Information for Other Events", 12, -0.5, 11.5);

TH1D *hNuStartVertexDistance = new TH1D("hNuStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuEndVertexDistance = new TH1D("hNuEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for Neutrino Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuCCCohStartVertexDistance = new TH1D("hNuCCCohStartVertexDistance", "Distance Between Neutrino Vertex and Start of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);
TH1D *hNuCCCohEndVertexDistance = new TH1D("hNuCCCohEndVertexDistance", "Distance Between Neutrino Vertex and End of Track for CCCoh Event Initiated Tracks with NumMCTracks >= 2", 101, -0.5, 100.5);

TH1D *hNuMCTrackMuonX = new TH1D("hNuMCTrackMuonX", "Starting X Position of a Muon From a Neutrino Interaction", 231, 9.5, 240.5);
TH1D *hNuMCTrackMuonY = new TH1D("hNuMCTrackMuonY", "Starting Y Position of a Muon From a Neutrino Interaction", 191, -95.5, 95.5);
TH1D *hNuMCTrackMuonZ = new TH1D("hNuMCTrackMuonZ", "Starting Z Position of a Muon From a Neutrino Interaction", 1021, 9.5, 1030.5);

TH1D *hOpFlashPECCCoh = new TH1D("hOpFlashPECCCoh", "Number of PE in a CCCoh Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECosmic = new TH1D("hOpFlashPECosmic", "Number of PE in a Cosmic Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECCOther = new TH1D("hOpFlashPECCOther", "Number of PE in a CCOther Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECCQE = new TH1D("hOpFlashPECCQE", "Number of PE in a CC-QE Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECCRes = new TH1D("hOpFlashPECCRes", "Number of PE in a CC-Res Interaction", 2000, 0, 20000);
TH1D *hOpFlashPECCDIS = new TH1D("hOpFlashPECCDIS", "Number of PE in a CC-DIS Interaction", 2000, 0, 20000);
TH1D *hOpFlashPENCOther = new TH1D("hOpFlashPENCOther", "Number of PE in a NCOther Interaction", 2000, 0, 20000);
TH1D *hOpFlashPENCRes = new TH1D("hOpFlashPENCRes", "Number of PE in a NC-Res Interaction", 2000, 0, 20000);
TH1D *hOpFlashPENCDIS = new TH1D("hOpFlashPENCDIS", "Number of PE in a NC-DIS Interaction", 2000, 0, 20000);
TH1D *hOpFlashPEOther = new TH1D("hOpFlashPEOther", "Number of PE in a Other Interaction", 2000, 0, 20000);

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

TH1D *hnCosmics = new TH1D("hnCosmics", "Number of Cosmics in an Event", 101, -0.5, 100.5);

TH1D *hCCCohVA2 = new TH1D("hCCCohVA2", "The Vertex Activity for CC-COH Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hCCQEVA2 = new TH1D("hCCQEVA2", "The Vertex Activity for CC-QE Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hCCResVA2 = new TH1D("hCCResVA2", "The Vertex Activity for CC-Res Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hCCDISVA2 = new TH1D("hCCDISVA2", "The Vertex Activity for CC-DIS Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hNCResVA2 = new TH1D("hNCResVA2", "The Vertex Activity for NC-Res Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hNCDISVA2 = new TH1D("hNCDISVA2", "The Vertex Activity for NC-DIS Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hOtherVA2 = new TH1D("hOtherVA2", "The Vertex Activity for Other Events within 10cm of Vertex in ADC", 500, 0, 50000);
TH1D *hNotAssociatedHitVA2 = new TH1D("hNotAssociatedHitVA2", "The Vertex Activity for Hits with No Track Association within 10cm of Vertex in ADC", 500, 0, 50000);

TH1D *hOpFlashPECCCoh2 = new TH1D("hOpFlashPECCCoh2", "Number of PE in a CCCoh Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCQE2 = new TH1D("hOpFlashPECCQE2", "Number of PE in a CC-QE Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCRes2 = new TH1D("hOpFlashPECCRes2", "Number of PE in a CC-Res Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCDIS2 = new TH1D("hOpFlashPECCDIS2", "Number of PE in a CC-DIS Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPENCRes2 = new TH1D("hOpFlashPENCRes2", "Number of PE in a NC-Res Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPENCDIS2 = new TH1D("hOpFlashPENCDIS2", "Number of PE in a NC-DIS Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECosmic2 = new TH1D("hOpFlashPECosmic2", "Number of PE for Cosmics for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPEOther2 = new TH1D("hOpFlashPEOther2", "Number of PE for Other Events for Table Information", 2000, 0, 20000);

TH1D *hOpFlashPECCCoh3 = new TH1D("hOpFlashPECCCoh3", "Number of PE in a CCCoh Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCQE3 = new TH1D("hOpFlashPECCQE3", "Number of PE in a CC-QE Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCRes3 = new TH1D("hOpFlashPECCRes3", "Number of PE in a CC-Res Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECCDIS3 = new TH1D("hOpFlashPECCDIS3", "Number of PE in a CC-DIS Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPENCRes3 = new TH1D("hOpFlashPENCRes3", "Number of PE in a NC-Res Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPENCDIS3 = new TH1D("hOpFlashPENCDIS3", "Number of PE in a NC-DIS Interaction for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPECosmic3 = new TH1D("hOpFlashPECosmic3", "Number of PE for Cosmics for Table Information", 2000, 0, 20000);
TH1D *hOpFlashPEOther3 = new TH1D("hOpFlashPEOther3", "Number of PE for Other Events for Table Information", 2000, 0, 20000);
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
// --- CC-DIS Event Check ---
// --------------------------
bool CCdis(int PDG, int ccnc, int mode)
{
   bool ccdis = false; // returned variable to declare whether or not event was CCDIS!
   if (PDG == 14 && ccnc == 0 && mode == 2) {ccdis = true;}
   return ccdis;
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


void NewAnalysisCCCoh::Loop()
{
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   int Nentries = nentries;
   //int Nentries = 10000;
   std::cout<<"nentries = "<<nentries<<std::endl;
   double POT = 0;

   // ------------------------------
   // --- Variable Used for Cuts ---
   // ------------------------------
   double VertexRangeCheck = 5; // Variable to check if a track is within this range of the vertex in cm
   double ConeAngleCut = 40; // in Degrees
   double DoCACut = 8; // in cm
   double VACut = 50; // in MeV
   // ------------------------------

   for (Long64_t jentry=0; jentry<Nentries; jentry++) 
      {

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if (jentry%10 == 0) {std::cout<<"Event = "<<jentry<<std::endl;}

      double FlashPECosmic = 0;
      double FlashPEBeam = 0;

      for (int n = 0; n < nfls_simpleFlashCosmic; n++) 
         {
         hOpFlashPECosmic->Fill(flsPe_simpleFlashCosmic[n]);
         FlashPECosmic += flsPe_simpleFlashCosmic[n];
         }
      
      for (int n = 0; n < nfls_simpleFlashBeam; n++) 
         {
         FlashPEBeam += flsPe_simpleFlashBeam[n];

         double Vx = nuvtxx_truth[0];
         double Vy = nuvtxy_truth[0];
         double Vz = nuvtxz_truth[0];

         hOpFlashVx->Fill(Vx - flsXcenter_simpleFlashBeam[n]*100);           
         hOpFlashVy->Fill(Vy - flsYcenter_simpleFlashBeam[n]*100);           
         hOpFlashVz->Fill(Vz - flsZcenter_simpleFlashBeam[n]*100);
           
         hOpFlashX->Fill(flsXcenter_simpleFlashBeam[n]*100);           
         hOpFlashY->Fill(flsYcenter_simpleFlashBeam[n]*100);           
         hOpFlashZ->Fill(flsZcenter_simpleFlashBeam[n]*100);
         }

      // ========================================
      // === Looping Over the Neutrino Events ===
      // ========================================
      for (int i = 0; i < mcevts_truth; i++)
	 {
         bool CCCOH = CCCoh(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool CCQE = CCqe(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool CCRes = CCres(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool CCDIS = CCdis(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool NCRes = NCres(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);
	 bool NCDIS = NCdis(nuPDG_truth[i], ccnc_truth[i], mode_truth[i]);

	 //if (!CCCOH && !CCQE && !CCRes && !NCRes && !NCDIS) {continue;}

         int nmctrksInRange = 0;

         double closer = -99;

         double VAdistanceCheck = 10;

         double Vx = nuvtxx_truth[i];
         double Vy = nuvtxy_truth[i];
         double Vz = nuvtxz_truth[i];

         double SCVx = sp_charge_corrected_nuvtxx_truth[i]; 
         double SCVy = sp_charge_corrected_nuvtxy_truth[i];
         double SCVz = sp_charge_corrected_nuvtxz_truth[i];

	 bool checkDV = Within(false, Vx, Vy, Vz);
	 bool checkFV = Within(true, Vx, Vy, Vz);
         bool Cosmic = false;
         bool Cosmic2 = false;

         int nCosmics = 0;
         int nCosmicsInRange = 0;
         double CosmicConeAngle = 720;
         double CosmicVAEnergy = 0;
         double DoCA2_Cosmic = 10000;
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
         /*for (int n = 0; n < nfls_simpleFlashBeam; n++)
            {
            hOpFlashVx->Fill(Vx - flsXcenter_simpleFlashBeam[n]*100);           
            hOpFlashVy->Fill(Vy - flsYcenter_simpleFlashBeam[n]*100);           
            hOpFlashVz->Fill(Vz - flsZcenter_simpleFlashBeam[n]*100);
           
            hOpFlashX->Fill(flsXcenter_simpleFlashBeam[n]*100);           
            hOpFlashY->Fill(flsYcenter_simpleFlashBeam[n]*100);           
            hOpFlashZ->Fill(flsZcenter_simpleFlashBeam[n]*100);
            }*/
         // --------------------------------

         // ====================
         // === Pandora Loop ===
         // ====================
         for (int t = 0; t < ntracks_pandora; t++)
            {
            //if (checkFV == false) continue;
            if (trkg4id_pandora[t] == -1) Cosmic = true;
            else Cosmic = false;

            if (Cosmic)
               {
               nCosmics++;
               TVector3 CosmicTrackStart(trkstartx_pandora[t] - Vx, trkstarty_pandora[t] - Vy, trkstartz_pandora[t] - Vz);
               TVector3 CosmicTrackEnd(trkendx_pandora[t] - Vx, trkendy_pandora[t] - Vy, trkendz_pandora[t] - Vz);
               if (CosmicTrackStart.Mag() < VertexRangeCheck || CosmicTrackEnd.Mag() < VertexRangeCheck) {nCosmicsInRange++;}   

               // -----------------
               // --- Cosmic VA ---
               // -----------------
               for (int j = 0; j < ntrkhits_pandora[t][2]; j++)
                  {
                  if (Distance(Vx,Vy,Vz,trkxyz_pandora[t][2][j][0],trkxyz_pandora[t][2][j][1],trkxyz_pandora[t][2][j][2]) <= VAdistanceCheck)
                     {
                     CosmicVAEnergy = CosmicVAEnergy + trkdedx_pandora[t][2][j]*trkpitchc_pandora[t][2];
                     }
                  }
               // -----------------

               for (int m = t+1; m < ntracks_pandora; m++)
                  {
                  if (trkg4id_pandora[m] == -1) Cosmic2 = true;
                  else Cosmic2 = false;
                     
                  // -------------------
                  // --- Cosmic DoCA ---
                  // -------------------
                  if (Cosmic2)
                     {
                     // ------------------------
                     // --- Cosmic ConeAngle ---
                     // ------------------------
                     TVector3 CosmicTrack(trkendx_pandora[t]-trkstartx_pandora[t], trkendy_pandora[t]-trkstarty_pandora[t], trkendz_pandora[t]-trkstartz_pandora[t]);
                     TVector3 CosmicTrack2(trkendx_pandora[m]-trkstartx_pandora[m], trkendy_pandora[m]-trkstarty_pandora[m], trkendz_pandora[m]-trkstartz_pandora[m]);

                     double CosmicConeAngleCheck = ConeAngle(CosmicTrack.X(), CosmicTrack.Y(), CosmicTrack.Z(), CosmicTrack2.X(), CosmicTrack2.Y(), CosmicTrack2.Z())*180/PI;

                     if (CosmicConeAngleCheck < CosmicConeAngle) {CosmicConeAngle = CosmicConeAngleCheck;}

                     hCosmicConeAngle->Fill(ConeAngle(CosmicTrack.X(), CosmicTrack.Y(), CosmicTrack.Z(), CosmicTrack2.X(), CosmicTrack2.Y(), CosmicTrack2.Z())*180/PI);
                     // ------------------------

                     // -------------------
                     // --- The x-Plane ---
                     // -------------------

                     /*for (int x = 0; x < 3; x++)
                        {
                        for (int j = 0; j < ntrkhits_pandora[t][x]; j++)
                           {
                           for (int y = 0; y < 3; y++)
                              {
                              for (int k = 0; k < ntrkhits_pandora[m][y]; k++)
                                 {
                                 double doca_checker = sqrt(pow(trkxyz_pandora[t][x][j][0]-trkxyz_pandora[m][y][k][0],2) + pow(trkxyz_pandora[t][x][j][1]-trkxyz_pandora[m][y][k][1],2) + pow(trkxyz_pandora[t][x][j][2]-trkxyz_pandora[m][y][k][2],2));
                                 if (doca_checker < DoCA2_Cosmic) DoCA2_Cosmic = doca_checker;
                                 }
                              }
                           }
                        }*/

                     // ---------------------

                     // -----------------------------
		     // --- Just Collection Plane ---
                     // -----------------------------

                     for (int j = 0; j < ntrkhits_pandora[t][2]; j++)
                        {
                        for (int k = 0; k < ntrkhits_pandora[m][2]; k++)
                           {
                           double doca_checker = sqrt(pow(trkxyz_pandora[t][2][j][0]-trkxyz_pandora[m][2][k][0],2) + pow(trkxyz_pandora[t][2][j][1]-trkxyz_pandora[m][2][k][1],2) + pow(trkxyz_pandora[t][2][j][2]-trkxyz_pandora[m][2][k][2],2));
                           if (doca_checker < DoCA2_Cosmic) DoCA2_Cosmic = doca_checker;
                           }
                        }
                     // -----------------------------

                     //std::cout<<"DoCA2_Cosmic = "<<DoCA2_Cosmic<<std::endl;
                     hCosmicDoCA2->Fill(DoCA2_Cosmic);
                     }
                  // -------------------

                  }
               }
            } // <--End ntracks_pandora t Loop
            
         //std::cout<<"CosmicVAEnergy = "<<CosmicVAEnergy<<std::endl;
         hCosmicVA->Fill(CosmicVAEnergy);        
         //std::cout<<"nCosmics = "<<nCosmics<<std::endl;
         hnCosmics->Fill(nCosmics);
         // ====================


         // +++++++++++++++++++++++++++++++++++++++
         // +++ New Vertex Activity Calculation +++
         // +++++++++++++++++++++++++++++++++++++++
         double VertexActivityADC = 0;
         double VertexActivityADC_noTRKID = 0;

         double XRange = 256.;
         double NumTimeTicks = 9600.;

         double ZConstant = 0.29976852;
         //double XConstant = 160000.*.0000005;
         double XConstant = XRange/NumTimeTicks;

         for (int ihit = 0; ihit < no_hits_stored; ihit++)
            {
            if (checkFV == false) continue;
            if (hit_plane[ihit] != 2) continue;
            
            //double XHitPos = XRange - XConstant*hit_peakT[ihit];
            double XHitPos = ((NumTimeTicks-hit_peakT[ihit])*XConstant);
            double ZHitPos = ZConstant*hit_wire[ihit];
            double DistanceFromVtx = sqrt(pow(SCVx - XHitPos,2) + pow(SCVz - ZHitPos,2));

            /*std::cout<<"|======================================|"<<std::endl;
            std::cout<<"  Vertex X =        "<<SCVx<<std::endl;
            std::cout<<"  Vertex Z =        "<<SCVz<<std::endl;
            std::cout<<"|--------------------------------------|"<<std::endl;
            std::cout<<"  XHitPos =         "<<XHitPos<<std::endl;
            std::cout<<"  ZHitPos =         "<<ZHitPos<<std::endl;
            std::cout<<"  DistanceFromVtx = "<<DistanceFromVtx<<std::endl;
            std::cout<<"|======================================|"<<std::endl;
            std::cout<<"  hit_trkid[ihit] = "<<hit_trkid[ihit]<<std::endl;
            std::cout<<"  hit_charge[ihit] = "<<hit_charge[ihit]<<std::endl;*/
            if (DistanceFromVtx > VAdistanceCheck) continue;

            if (hit_trkid[ihit] >= 0) VertexActivityADC = VertexActivityADC + hit_charge[ihit];
            else VertexActivityADC_noTRKID = VertexActivityADC_noTRKID + hit_charge[ihit];

            /*std::cout<<"|======================================|"<<std::endl;
            std::cout<<"  Vertex X = "<<Vx<<std::endl;
            std::cout<<"  Vertex Y = "<<Vy<<std::endl;
            std::cout<<"  Vertex Z = "<<Vz<<std::endl;
            std::cout<<"|--------------------------------------|"<<std::endl;
            std::cout<<"  hit_plane[ihit] = "<<hit_plane[ihit]<<std::endl;
            std::cout<<"  hit_wire[ihit] = "<<hit_wire[ihit]<<std::endl;
            std::cout<<"  hit_channel[ihit] = "<<hit_channel[ihit]<<std::endl;
            std::cout<<"  hit_peakT[ihit] = "<<hit_peakT[ihit]<<std::endl;
            std::cout<<"  hit_charge[ihit] = "<<hit_charge[ihit]<<std::endl;
            std::cout<<"|======================================|"<<std::endl;*/
            } // End the ihit loop 

         /*std::cout<<"|--------------------------------------------------------|"<<std::endl;
         std::cout<<"  VertexActivityADC =         "<<VertexActivityADC<<std::endl;
         std::cout<<"  VertexActivityADC_noTRKID = "<<VertexActivityADC_noTRKID<<std::endl;
         std::cout<<"|--------------------------------------------------------|"<<std::endl;*/
         // +++++++++++++++++++++++++++++++++++++++


         // ----------------------------------------------------------------
         // --- Looking into G4 Information for Vertex Activity and DoCA ---
         // ----------------------------------------------------------------
         for (int npriG4 = 0; npriG4 < no_primaries; npriG4++)
            {
            if (checkFV == false) continue;
             
            // Loop over the trajectory points
            for (int npriTrjPts = 0; npriTrjPts < NTrTrajPts[npriG4] - 1; npriTrjPts++)
               {
               double step = Distance(TrueTraj_X[npriG4][0], TrueTraj_Y[npriG4][0], TrueTraj_Z[npriG4][0], TrueTraj_X[npriG4][npriTrjPts+1], TrueTraj_Y[npriG4][npriTrjPts+1], TrueTraj_Z[npriG4][npriTrjPts+1]);
               double EnergyStep = TrueTraj_E[npriG4][0] - TrueTraj_E[npriG4][npriTrjPts+1];
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
               //if (npriTrjPts>0)
		  //{
		  for (int j = npriG4+1; j < no_primaries; j++)
		     {
                     //for (int k = 1; k < NTrTrajPts[j]; k++)
                     for (int k = 0; k < NTrTrajPts[j]; k++)
		        {
		        double doca_checker = DoCA2(TrueTraj_X[npriG4][npriTrjPts], TrueTraj_Y[npriG4][npriTrjPts], TrueTraj_Z[npriG4][npriTrjPts], TrueTraj_X[j][k], TrueTraj_Y[j][k], TrueTraj_Z[j][k]);
		        if (doca_checker < DoCA2_Event) {DoCA2_Event = doca_checker;}
		        }
	             }
		  //}
               }
            }
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

         double EventsConeAngle = 720;

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

            int pandoraTrackID1 = -1;



            // ------------------------------------------ |
            // --- Messing Around with Truth Matching --- |
            // ------------------------------------------ |
            /*for (int ipandora = 0; ipandora < ntracks_pandora; ipandora++)
               {
               if (checkFV == false) continue;
               if (mctrk_TrackId[j] == trkidtruth_pandora[ipandora][0] || mctrk_TrackId[j] == trkidtruth_pandora[ipandora][1] || mctrk_TrackId[j] == trkidtruth_pandora[ipandora][2]) pandoraTrackID1 = ipandora;
               } */
            /*
            if (pandoraTrackID1 != -1) 
               {
               std::cout<<"======================================================================="<<std::endl;
               std::cout<<"mctrk_TrackId[j] = "<<mctrk_TrackId[j]<<std::endl;
               std::cout<<"trkidtruth_pandora[pandoraTrackID1][0] = "<<trkidtruth_pandora[pandoraTrackID1][0]<<std::endl;
               std::cout<<"trkidtruth_pandora[pandoraTrackID1][1] = "<<trkidtruth_pandora[pandoraTrackID1][1]<<std::endl;
               std::cout<<"trkidtruth_pandora[pandoraTrackID1][2] = "<<trkidtruth_pandora[pandoraTrackID1][2]<<std::endl;
               std::cout<<"pandoraTrackID1 = "<<pandoraTrackID1<<std::endl;
               std::cout<<"-----------------------------------------------------------------------"<<std::endl;
               std::cout<<"True PDG = "<<pdg[j]<<std::endl;
               std::cout<<"Pandora PDG Plane 0 = "<<trkpidpdg_pandora[pandoraTrackID1][0]<<std::endl;
               std::cout<<"Pandora PDG Plane 1 = "<<trkpidpdg_pandora[pandoraTrackID1][1]<<std::endl;
               std::cout<<"Pandora PDG Plane 2 = "<<trkpidpdg_pandora[pandoraTrackID1][2]<<std::endl;
               std::cout<<"======================================================================="<<std::endl;
               }
            // ------------------------------------------ |
            */


            if (mctrk_origin[j] == 1)
               {
               
               // ----------------------
               // --- New Cone Angle ---
               // ----------------------
               for (int itrk = j + 1; itrk < no_mctracks; itrk++)
                  {
                  if (mctrk_origin[itrk] != 1) {continue;}

	          double DeltaStartX2 = mctrk_startX[itrk] - Vx;
	          double DeltaStartY2 = mctrk_startY[itrk] - Vy;
	          double DeltaStartZ2 = mctrk_startZ[itrk] - Vz;
	          double DeltaStartMagnitude2 = sqrt(pow(DeltaStartX2, 2) + pow(DeltaStartY2, 2) + pow(DeltaStartZ2, 2));

	          double DeltaEndX2 = mctrk_endX[itrk] - Vx;
	          double DeltaEndY2 = mctrk_endY[itrk] - Vy;
	          double DeltaEndZ2 = mctrk_endZ[itrk] - Vz;
	          double DeltaEndMagnitude2 = sqrt(pow(DeltaEndX2, 2) + pow(DeltaEndY2, 2) + pow(DeltaEndZ2, 2));

                  if (DeltaStartMagnitude2 <= VertexRangeCheck || DeltaEndMagnitude2 <= VertexRangeCheck)
                     {
                     TVector3 track2(mctrk_endX[itrk] - mctrk_startX[itrk], mctrk_endY[itrk] - mctrk_startY[itrk], mctrk_endZ[itrk] - mctrk_startZ[itrk]);
                
                     double EventsConeAngleCheck = ConeAngle(track.X(), track.Y(), track.Z(), track2.X(), track2.Y(), track2.Z())*180/PI;
                     if (EventsConeAngleCheck < EventsConeAngle) {EventsConeAngle = EventsConeAngleCheck;}     
                     }

                  }
               // ----------------------

	       if (checkFV && no_primaries >= 2)
	          {
	          hNuStartVertexDistance->Fill(DeltaStartMagnitude);
	          hNuEndVertexDistance->Fill(DeltaEndMagnitude);

	          if (nuPDG_truth[i] == 14 && CCCOH)
		     {
	             hNuCCCohStartVertexDistance->Fill(DeltaStartMagnitude);
	             hNuCCCohEndVertexDistance->Fill(DeltaEndMagnitude);
	             }
	          }
	       if (mctrk_pdg[j] == 13) 
	          {
	          hasMuon = true;
   	          muonlength = mctrk_len_drifted[j];
	          muonstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	          muonend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
                  if (Within(true, muonstart.X(), muonstart.Y(), muonstart.Z()) && Within(true, muonend.X(), muonend.Y(), muonend.Z())) {containMuon = true;}
                  if (Within(true, muonstart.X(), muonstart.Y(), muonstart.Z()))
                     {
	             hNuMCTrackMuonX->Fill(muonstart.X());
	             hNuMCTrackMuonY->Fill(muonstart.Y());
	             hNuMCTrackMuonZ->Fill(muonstart.Z());
                     }
	          }
	       if (mctrk_pdg[j] == 211) 
	          {
	          hasPion = true;
	          pionlength = mctrk_len_drifted[j];
	          pionstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	          pionend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
                  if (Within(true, pionstart.X(), pionstart.Y(), pionstart.Z()) && Within(true, pionend.X(), pionend.Y(), pionend.Z())) {containPion = true;}
	          }
	       if (mctrk_pdg[j] == -211) 
	          {
	          hasPion2 = true;
	          pion2start.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	          pion2end.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
                  if (Within(true, pion2start.X(), pion2start.Y(), pion2start.Z()) && Within(true, pion2end.X(), pion2end.Y(), pion2end.Z())) {containPion2 = true;}
	          }
	       if (mctrk_pdg[j] == 2212) 
	          {
	          hasProton = true;
	          protonstart.SetXYZ(mctrk_startX[j], mctrk_startY[j], mctrk_startZ[j]);
	          protonend.SetXYZ(mctrk_endX[j], mctrk_endY[j], mctrk_endZ[j]);
                  if (Within(true, protonstart.X(), protonstart.Y(), protonstart.Z()) && Within(true, protonend.X(), protonend.Y(), protonend.Z())) {containProton = true;}
	          }
	       if (DeltaStartMagnitude <= VertexRangeCheck) 
	          {
	          nmctrksInRange++;
	          if (mctrk_pdg[j] == 13) {muon = track;}
	          if (mctrk_pdg[j] == 211) {pion = track;}
	          if (mctrk_pdg[j] == -211) {pion2 = track;}
	          if (mctrk_pdg[j] == 2212) {proton = track;}
	          }
               if (DeltaStartMagnitude > VertexRangeCheck && DeltaEndMagnitude <= VertexRangeCheck) 
	          {
	          nmctrksInRange++;
	          if (mctrk_pdg[j] == 13) {muon = track;}
	          if (mctrk_pdg[j] == 211) {pion = track;}
	          if (mctrk_pdg[j] == -211) {pion2 = track;}
	          if (mctrk_pdg[j] == 2212) {proton = track;}
	          }
	       }
            }

         hNuNMCTracksWithinRange->Fill(nmctrksInRange);



         // ========================================
         // === Filling Cosmic Table Information ===
         // ========================================
         hCosmicTableInformation->Fill(0);
         if (checkDV == true)
            {
            hCosmicTableInformation->Fill(1);
            if (checkFV == true) {hCosmicTableInformation->Fill(2);}
            }
         if (nCosmics >= 2 && checkFV)
            {
            hCosmicTableInformation->Fill(3);
            if (nmctrksInRange >= 2)
               {
               hCosmicTableInformation->Fill(4);
               if (CosmicConeAngle <= ConeAngleCut)
                  {
                  std::cout<<"Cosmic ConeAngle = "<<CosmicConeAngle<<std::endl;
                  hCosmicTableInformation->Fill(5);
                  if (DoCA2_Cosmic <= DoCACut)
                     {
                     hCosmicTableInformation->Fill(6);
                     if (CosmicVAEnergy <= VACut)
                        {
                        hCosmicTableInformation->Fill(7);
                        hOpFlashPECosmic2->Fill(FlashPECosmic);
                        } // Vertex Activity Less Than or Equal to VACut Check
                     } // DoCA Less Than or Equal to DoCACut Check
                  } // ConeAngle Less Than or Equal to ConeAngleCut Check
               } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
            if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)
               {
               hCosmicTableInformation->Fill(8);
               if (CosmicConeAngle <= ConeAngleCut)
                  {
                  std::cout<<"Exactly 2 Cosmic ConeAngle = "<<CosmicConeAngle<<std::endl;
                  hCosmicTableInformation->Fill(9);
                  if (DoCA2_Cosmic <= DoCACut)
                     {
                     hCosmicTableInformation->Fill(10);
                     if (CosmicVAEnergy <= VACut)
                        {
                        hCosmicTableInformation->Fill(11);
                        hOpFlashPECosmic3->Fill(FlashPECosmic);
                        } // Vertex Activity Less Than or Equal to VACut Check
                     } // DoCA Less Than or Equal to DoCACut Check
                  } // ConeAngle Less Than or Equal to ConeAngleCut Check
               } // Equal to 2 Tracks Within 5 cm of Vertex Check
            } // Greater than or equal to 2 Tracks Check
         // ========================================



         // =================================
         // === Filling Table Information ===
         // =================================
	 if (CCCOH) 
            {
            hCCCohTableInformation->Fill(0);
            if (checkDV == true)
               {
               hCCCohTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hCCCohTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hCCCohTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasMuon && hasPion)
                        {
                        hCCCohTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"CCCoh ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCCohTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCCohTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCCohTableInformation->Fill(7);
                                 hOpFlashPECCCoh2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasMuon && hasPion)
                        {
                        hCCCohTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 CCCoh ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCCohTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCCohTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCCohTableInformation->Fill(11);
                                 hOpFlashPECCCoh3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // CCCoh Check

	 if (CCQE) 
            {
            hCCQETableInformation->Fill(0);
            if (checkDV == true)
               {
               hCCQETableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hCCQETableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hCCQETableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasMuon && hasProton)
                        {
                        hCCQETableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), proton.X(), proton.Y(), proton.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"CCQE ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCQETableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCQETableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCQETableInformation->Fill(7);
                                 hOpFlashPECCQE2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasMuon && hasProton)
                        {
                        hCCQETableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), proton.X(), proton.Y(), proton.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 CCQE ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCQETableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCQETableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCQETableInformation->Fill(11);
                                 hOpFlashPECCQE3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // CCQE Check

	 if (CCRes) 
            {
            hCCResTableInformation->Fill(0);
            if (checkDV == true)
               {
               hCCResTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hCCResTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hCCResTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasMuon && hasPion)
                        {
                        hCCResTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"CCRes ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCResTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCResTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCResTableInformation->Fill(7);
                                 hOpFlashPECCRes2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasMuon && hasPion)
                        {
                        hCCResTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 CCRes ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCResTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCResTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCResTableInformation->Fill(11);
                                 hOpFlashPECCRes3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // CCRes Check

	 if (CCDIS) 
            {
            hCCDISTableInformation->Fill(0);
            if (checkDV == true)
               {
               hCCDISTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hCCDISTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hCCDISTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasMuon && hasPion)
                        {
                        hCCDISTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"CCDIS ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCDISTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCDISTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCDISTableInformation->Fill(7);
                                 hOpFlashPECCDIS2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasMuon && hasPion)
                        {
                        hCCDISTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 CCDIS ConeAngle = "<<EventsConeAngle<<std::endl;
                           hCCDISTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hCCDISTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hCCDISTableInformation->Fill(11);
                                 hOpFlashPECCDIS3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // CCDIS Check

	 if (NCRes) 
            {
            hNCResTableInformation->Fill(0);
            if (checkDV == true)
               {
               hNCResTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hNCResTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hNCResTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasPion && hasPion2)
                        {
                        hNCResTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"NCRes ConeAngle = "<<EventsConeAngle<<std::endl;
                           hNCResTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hNCResTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hNCResTableInformation->Fill(7);
                                 hOpFlashPENCRes2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasPion && hasPion2)
                        {
                        hNCResTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 NCRes ConeAngle = "<<EventsConeAngle<<std::endl;
                           hNCResTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hNCResTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hNCResTableInformation->Fill(11);
                                 hOpFlashPENCRes3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // NCRes Check

	 if (NCDIS) 
            {
            hNCDISTableInformation->Fill(0);
            if (checkDV == true)
               {
               hNCDISTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hNCDISTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hNCDISTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasPion && hasPion2)
                        {
                        hNCDISTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"NCDIS ConeAngle = "<<EventsConeAngle<<std::endl;
                           hNCDISTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hNCDISTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hNCDISTableInformation->Fill(7);
                                 hOpFlashPENCDIS2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasPion && hasPion2)
                        {
                        hNCDISTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(pion2.X(), pion2.Y(), pion2.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 NCDIS ConeAngle = "<<EventsConeAngle<<std::endl;
                           hNCDISTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hNCDISTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hNCDISTableInformation->Fill(11);
                                 hOpFlashPENCDIS3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // NCDIS Check

	 if (!CCCOH && !CCQE && !CCRes && !CCDIS && !NCRes && !NCDIS) 
            {
            hOtherTableInformation->Fill(0);
            if (checkDV == true)
               {
               hOtherTableInformation->Fill(1);
               if (checkFV == true)
                  {
                  hOtherTableInformation->Fill(2);
                  if (no_mctracks >= 2)
                     {
                     hOtherTableInformation->Fill(3);
                     if (nmctrksInRange >= 2 )//&& hasMuon && hasPion)
                        {
                        hOtherTableInformation->Fill(4);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Other ConeAngle = "<<EventsConeAngle<<std::endl;
                           hOtherTableInformation->Fill(5);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hOtherTableInformation->Fill(6);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hOtherTableInformation->Fill(7);
                                 hOpFlashPEOther2->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Greater than or equal to 2 Tracks Within 5 cm of Vertex Check
                     if ((nmctrksInRange + nCosmicsInRange) == 2 && nmctrksInRange == 2)//&& hasMuon && hasPion)
                        {
                        hOtherTableInformation->Fill(8);
                        //EventsConeAngle = ConeAngle(muon.X(), muon.Y(), muon.Z(), pion.X(), pion.Y(), pion.Z())*180/PI;
                        if (EventsConeAngle <= ConeAngleCut)
                           {
                           std::cout<<"Exactly 2 Other ConeAngle = "<<EventsConeAngle<<std::endl;
                           hOtherTableInformation->Fill(9);
                           if (DoCA2_Event <= DoCACut)
                              {
                              hOtherTableInformation->Fill(10);
                              if (VAEnergy*1000 <= VACut)
                                 {
                                 hOtherTableInformation->Fill(11);
                                 hOpFlashPEOther3->Fill(FlashPEBeam);
                                 } // Vertex Activity Less Than or Equal to VACut Check
                              } // DoCA Less Than or Equal to DoCACut Check
                           } // ConeAngle Less Than or Equal to ConeAngleCut Check
                        } // Equal to 2 Tracks Within 5 cm of Vertex Check
                     } // Greater than or equal to 2 Tracks Check
                  } // Within Fiducial Volume Check
               } // Within Active Volume Check
            } // Other Check
         // =================================

         if (nmctrksInRange >= 2 && checkFV)
            {
	    if (CCCOH )//&& hasMuon && hasPion) 
	       {
	       hCCCohConeAngle->Fill(EventsConeAngle);
               hMuonEnergyVsConeAngle->Fill(EventsConeAngle, MuonEnergy);
               hPionEnergyVsConeAngle->Fill(EventsConeAngle, PionEnergy);
               hQ2VsConeAngle->Fill(EventsConeAngle, Q2);
	       double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hCCCohDoCA->Fill(closer);
	       hCCCohDoCA2->Fill(DoCA2_Event);
               hOpFlashPECCCoh->Fill(FlashPEBeam);
	       t = abs(pow(NuEnergy - MuonEnergy - PionEnergy,2) - pow(NuPx - MuonPx - PionPx,2) - pow(NuPy - MuonPy - PionPy,2) - pow(NuPz - MuonPz - PionPz,2))/(1000000);
               hCCCohVA->Fill(VAEnergy*1000);
               hCCCohVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
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
	    if (CCQE )//&& hasMuon && hasProton) 
	       {
	       hCCQEConeAngle->Fill(EventsConeAngle);
	       double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, protonstart.X(), protonstart.Y(), protonstart.Z(), protonend.X(), protonend.Y(), protonend.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hCCQEDoCA->Fill(closer);
	       hCCQEDoCA2->Fill(DoCA2_Event);
               hOpFlashPECCOther->Fill(FlashPEBeam);
               hOpFlashPECCQE->Fill(FlashPEBeam);
               hCCQEVA->Fill(VAEnergy*1000);
               hCCQEVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
 	    if (CCRes )//&& hasMuon && hasPion) 
	       {
	       hCCResConeAngle->Fill(EventsConeAngle);
	       double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hCCResDoCA->Fill(closer);
	       hCCResDoCA2->Fill(DoCA2_Event);
               hOpFlashPECCOther->Fill(FlashPEBeam);
               hOpFlashPECCRes->Fill(FlashPEBeam);
               hCCResVA->Fill(VAEnergy*1000);
               hCCResVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
	    if (CCDIS )//&& hasPion && hasMuon) 
	       {
	       hCCDISConeAngle->Fill(EventsConeAngle);
	       double d1 = DoCA(Vx, Vy, Vz, muonstart.X(), muonstart.Y(), muonstart.Z(), muonend.X(), muonend.Y(), muonend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hCCDISDoCA->Fill(closer);
	       hCCDISDoCA2->Fill(DoCA2_Event);
               hOpFlashPECCOther->Fill(FlashPEBeam);
               hOpFlashPECCDIS->Fill(FlashPEBeam);
               hCCDISVA->Fill(VAEnergy*1000);
               hCCDISVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
 	    if (NCRes )//&& hasPion && hasPion2) 
	       {
	       hNCResConeAngle->Fill(EventsConeAngle);
	       double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hNCResDoCA->Fill(closer);
	       hNCResDoCA2->Fill(DoCA2_Event);
               hOpFlashPENCOther->Fill(FlashPEBeam);
               hOpFlashPENCRes->Fill(FlashPEBeam);
               hNCResVA->Fill(VAEnergy*1000);
               hNCResVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
	    if (NCDIS )//&& hasPion && hasPion2) 
	       {
	       hNCDISConeAngle->Fill(EventsConeAngle);
	       double d1 = DoCA(Vx, Vy, Vz, pionstart.X(), pionstart.Y(), pionstart.Z(), pionend.X(), pionend.Y(), pionend.Z());
	       double d2 = DoCA(Vx, Vy, Vz, pion2start.X(), pion2start.Y(), pion2start.Z(), pion2end.X(), pion2end.Y(), pion2end.Z());
	       if (d1 <= d2) {closer = d1;}
	       if (d2 < d1) {closer = d2;}
	       hNCDISDoCA->Fill(closer);
	       hNCDISDoCA2->Fill(DoCA2_Event);
               hOpFlashPENCOther->Fill(FlashPEBeam);
               hOpFlashPENCDIS->Fill(FlashPEBeam);
               hNCDISVA->Fill(VAEnergy*1000);
               hNCDISVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
	    if (!CCCOH && !CCQE && !CCRes && !CCDIS && !NCRes && !NCDIS) 
	       {
	       hOtherConeAngle->Fill(EventsConeAngle);
	       hOtherDoCA2->Fill(DoCA2_Event);
               hOpFlashPEOther->Fill(FlashPEBeam);
               hOtherVA->Fill(VAEnergy*1000);
               hOtherVA2->Fill(VertexActivityADC);
               hNotAssociatedHitVA2->Fill(VertexActivityADC_noTRKID);
	       }
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
   TFile *TCCCohInfo = new TFile("Histograms_NewAnalysis_CCCoh.root", "RECREATE");

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
   hCCDISConeAngle->Write();
   hNCResConeAngle->Write();
   hNCDISConeAngle->Write();
   hCosmicConeAngle->Write();
   hOtherConeAngle->Write();

   hCCCohDoCA->Write();
   hCCCohDoCA2->Write();
   hCCQEDoCA->Write();
   hCCQEDoCA2->Write();
   hCCResDoCA->Write();
   hCCResDoCA2->Write();
   hCCDISDoCA->Write();
   hCCDISDoCA2->Write();
   hNCResDoCA->Write();
   hNCResDoCA2->Write();
   hNCDISDoCA->Write();
   hNCDISDoCA2->Write();
   hCosmicDoCA2->Write();
   hOtherDoCA2->Write();

   hCCCohVA->Write();
   hCCQEVA->Write();
   hCCResVA->Write();
   hCCDISVA->Write();
   hNCResVA->Write();
   hNCDISVA->Write();
   hCosmicVA->Write();
   hOtherVA->Write();

   hCCCohMuonVA->Write();
   hCCCohPionVA->Write();

   hCCCohTableInformation->Write();
   hCCQETableInformation->Write();
   hCCResTableInformation->Write();
   hCCDISTableInformation->Write();
   hNCResTableInformation->Write();
   hNCDISTableInformation->Write();
   hCosmicTableInformation->Write();
   hOtherTableInformation->Write();

   hNuStartVertexDistance->Write();
   hNuEndVertexDistance->Write();
   hNuCCCohStartVertexDistance->Write();
   hNuCCCohEndVertexDistance->Write();

   hNuMCTrackMuonX->Write();
   hNuMCTrackMuonY->Write();
   hNuMCTrackMuonZ->Write();

   hOpFlashPECCCoh->Write();
   hOpFlashPECCQE->Write();
   hOpFlashPECCRes->Write();
   hOpFlashPECCDIS->Write();
   hOpFlashPENCRes->Write();
   hOpFlashPENCDIS->Write();
   hOpFlashPECosmic->Write();
   hOpFlashPECCOther->Write();
   hOpFlashPENCOther->Write();
   hOpFlashPEOther->Write();

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

   hnCosmics->Write();

   hCCCohVA2->Write();
   hCCQEVA2->Write();
   hCCResVA2->Write();
   hCCDISVA2->Write();
   hNCResVA2->Write();
   hNCDISVA2->Write();
   hOtherVA2->Write();
   hNotAssociatedHitVA2->Write();

   hOpFlashPECCCoh2->Write();
   hOpFlashPECCQE2->Write();
   hOpFlashPECCRes2->Write();
   hOpFlashPECCDIS2->Write();
   hOpFlashPENCRes2->Write();
   hOpFlashPENCDIS2->Write();
   hOpFlashPECosmic2->Write();
   hOpFlashPEOther2->Write();

   hOpFlashPECCCoh3->Write();
   hOpFlashPECCQE3->Write();
   hOpFlashPECCRes3->Write();
   hOpFlashPECCDIS3->Write();
   hOpFlashPENCRes3->Write();
   hOpFlashPENCDIS3->Write();
   hOpFlashPECosmic3->Write();
   hOpFlashPEOther3->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

} // End NewAnalysisCCCoh Loop
