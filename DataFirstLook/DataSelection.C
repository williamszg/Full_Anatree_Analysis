#define DataSelection_cxx
#include "DataSelection.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#define PI 3.14159265





// ---------------------------------------
// --- The Histograms Are Defined Here ---
// ---------------------------------------
TH1D *hNumMuonCandidates = new TH1D("hNumMuonCandidates", "The Number of Muon Candidates per Event", 30, 0, 30);
TH1D *hNumMuonCandidatesAfterCCInclusive = new TH1D("hNumMuonCandidatesAfterCCInclusive", "The Number of Muon Candidates per Event After the CC-Inclusive Selection", 30, 0, 30);
TH1D *hNumTrksWithin10 = new TH1D("hNumTrksWithin10", "The Number of Tracks Within 10cm of Neutrino Vertex", 16, -0.5, 15.5);
TH1D *hPassedCCInclusivePreSelection = new TH1D("hPassedCCInclusivePreSelection", "The Number of Events That Passed the CCInclusive PreSelection", 2, -0.5, 1.5);

TH1D *hConeAngleFor2Tracks = new TH1D("hConeAngleFor2Tracks", "The Cone Angle for Events with Exactly Equal to 2 Tracks Within 10cm of Reco Neutrino Vertex", 180, 0, 180);
TH1D *hConeAngleForPionCandidate = new TH1D("hConeAngleForPionCandidate", "The Cone Angle for Events with a Pion Candidate", 180, 0, 180);
TH1D *hConeAngleForOA = new TH1D("hConeAngleForOA", "The Cone Angle for Events with a Opening Angle", 180, 0, 180);
TH1D *hConeAngleForT = new TH1D("hConeAngleForT", "The Cone Angle for Events with a |t|", 180, 0, 180);
TH1D *hVertexActivityFor2Tracks = new TH1D("hVertexActivityFor2Tracks", "The Vertex Activity Within a Bubble of Radius 10cm for Events with Exactly Equal to 2 Tracks Within 10cm of Reco Neutrino Vertex", 5000, 0, 1000);
TH1D *hOpeningAngleFor2Tracks = new TH1D("hOpeningAngleFor2Tracks", "The Opening Angle for Events with Exactly Equal to 2 Tracks Within 10cm of Reco Neutrino Vertex", 180, 0, 180);
TH1D *hOpeningAngleForPionCandidate = new TH1D("hOpeningAngleForPionCandidate", "The Opening Angle for Events with a Pion Candidate", 180, 0, 180);
TH1D *hOpeningAngleForOA = new TH1D("hOpeningAngleForOA", "The Opening Angle for Events with a Opening Angle", 180, 0, 180);
TH1D *hOpeningAngleForT = new TH1D("hOpeningAngleForT", "The Opening Angle for Events with a |t|", 180, 0, 180);
TH1D *hT = new TH1D("hT", "Reco |t| After 2 Tracks", 1000, 0, 1.0);
TH1D *hTConeAngle = new TH1D("hTConeAngle", "Reco |t| After Cone Angle", 1000, 0, 1.0);
TH1D *hTDoCA = new TH1D("hTDoCA", "Reco |t| After DoCA", 1000, 0, 1.0);
TH1D *hTPionCandidate = new TH1D("hTPionCandidate", "Reco |t| After Pion Candidacy", 1000, 0, 1.0);
TH1D *hTOA = new TH1D("hTOA", "Reco |t| After Opening Angle", 1000, 0, 1.0);
TH1D *hTT = new TH1D("hTT", "Reco |t| After |t|", 1000, 0, 1.0);
TH1D *hDoCAFor2Tracks = new TH1D("hDoCAFor2Tracks", "The Distance of Closest Approach from Reconstructed Information for Data", 100, 0, 100);
TH1D *hDoCAVtxDistanceFor2Tracks = new TH1D("hDoCAVtxDistanceFor2Tracks", "The Distance of Closest Approach from Reconstructed Information for Data Using Vtx Distance", 100, 0, 100);

TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2 = new TH2D("hMuonCandidateTracksMuonChi2VsProtonChi2", "For Muon Candidate Tracks the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2 = new TH2D("hPionCandidateTracksMuonChi2VsProtonChi2", "For Pion Candidate Tracks the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);
TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA = new TH2D("hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA", "For Muon Candidate Tracks After DoCA Cut the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA = new TH2D("hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA", "For Pion Candidate Tracks After DoCA Cut the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);

TH1D *hRecoNuEnergyFiducialVolume = new TH1D("hRecoNuEnergyFiducialVolume", "The Reconstructed Neutrino Energy of Events That Pass the Fiducial Volume Selection", 1000, 0, 10);
TH1D *hRecoNuEnergy = new TH1D("hRecoNuEnergy", "The Reconstructed Neutrino Energy of Events That Pass the 2-Tracks Selection", 1000, 0, 10);
TH1D *hRecoNuEnergyConeAngle = new TH1D("hRecoNuEnergyConeAngle", "The Reconstructed Neutrino Energy of Events That Pass the Cone Angle Selection", 1000, 0, 10);
TH1D *hRecoNuEnergyDoCA = new TH1D("hRecoNuEnergyDoCA", "The Reconstructed Neutrino Energy of Events That Pass the DoCA Selection", 1000, 0, 10);
TH1D *hRecoNuEnergyPionCandidate = new TH1D("hRecoNuEnergyPionCandidate", "The Reconstructed Neutrino Energy of Events That Pass the Pion Candidacy Selection", 1000, 0, 10);
TH1D *hRecoNuEnergyOA = new TH1D("hRecoNuEnergyOA", "The Reconstructed Neutrino Energy of Events That Pass the Opening Angle Selection", 1000, 0, 10);
TH1D *hRecoNuEnergyT = new TH1D("hRecoNuEnergyT", "The Reconstructed Neutrino Energy of Events That Pass the |t| Selection", 1000, 0, 10);

TH1D *hDeltaPTT = new TH1D("hDeltaPTT", "The TKI Variable Known as DeltaP_TT for Events with 2-Tracks", 1000, 0, 1);
TH1D *hPN = new TH1D("hPN", "The TKI Variable Known as P_N for Events with 2-Tracks", 1000, 0, 10);
TH1D *hDeltaAlphaT = new TH1D("hDeltaAlphaT", "The TKI Variable Known as DeltaAlpha_T for Events with 2-Tracks", 180, 0, 180);
TH1D *hDeltaPTTPC = new TH1D("hDeltaPTTPC", "The TKI Variable Known as DeltaP_TT for Events with 2-Tracks after Pion Candidacy", 1000, 0, 1);
TH1D *hPNPC = new TH1D("hPNPC", "The TKI Variable Known as P_N for Events with 2-Tracks after Pion Candidacy", 1000, 0, 10);
TH1D *hDeltaAlphaTPC = new TH1D("hDeltaAlphaTPC", "The TKI Variable Known as DeltaAlpha_T for Events with 2-Tracks after Pion Candidacy", 180, 0, 180);

TH1D *hNSliceNumberAfterMuon = new TH1D("hNSliceNumberAfterMuon", "The Number of Neutrino Slices Identified by the Slice ID After Muon Candidacy", 2, -0.5, 1.5);
TH1D *hNSliceNumberAfterPion = new TH1D("hNSliceNumberAfterPion", "The Number of Neutrino Slices Identified by the Slice ID After Pion Candidacy", 2, -0.5, 1.5);

TH1D *hRecoMuonCandidateMomentum = new TH1D("hRecoMuonCandidateMomentum", "The Muon Candidates Reconstructed Momentum After 2-Tracks Selection", 1000, 0, 10);
TH1D *hRecoPionCandidateMomentum = new TH1D("hRecoPionCandidateMomentum", "The Pion Candidates Reconstructed Momentum After 2-Tracks Selection", 1000, 0, 10);
TH1D *hRecoMuonCandidateMomentumAfterPC = new TH1D("hRecoMuonCandidateMomentumAfterPC", "The Muon Candidates Reconstructed Momentum After Pion Candidacy", 1000, 0, 10);
TH1D *hRecoPionCandidateMomentumAfterPC = new TH1D("hRecoPionCandidateMomentumAfterPC", "The Pion Candidates Reconstructed Momentum After Pion Candidacy", 1000, 0, 10);
TH1D *hRecoMuonCandidateMomentumAfterOA = new TH1D("hRecoMuonCandidateMomentumAfterOA", "The Muon Candidates Reconstructed Momentum After Opening Angle", 1000, 0, 10);
TH1D *hRecoPionCandidateMomentumAfterOA = new TH1D("hRecoPionCandidateMomentumAfterOA", "The Pion Candidates Reconstructed Momentum After Opening Angle", 1000, 0, 10);
TH1D *hRecoMuonCandidateMomentumAfterT = new TH1D("hRecoMuonCandidateMomentumAfterT", "The Muon Candidates Reconstructed Momentum After |t|", 1000, 0, 10);
TH1D *hRecoPionCandidateMomentumAfterT = new TH1D("hRecoPionCandidateMomentumAfterT", "The Pion Candidates Reconstructed Momentum After |t|", 1000, 0, 10);

TH1D *hRecoMuonCandidateTheta = new TH1D("hRecoMuonCandidateTheta", "The Muon Candidates Reconstructed #theta_{#mu} After 2-Tracks Selection", 1000, 0, 180);
TH1D *hRecoPionCandidateTheta = new TH1D("hRecoPionCandidateTheta", "The Pion Candidates Reconstructed #theta_{#pi} After 2-Tracks Selection", 1000, 0, 180);
TH1D *hRecoMuonCandidateThetaAfterPC = new TH1D("hRecoMuonCandidateThetaAfterPC", "The Muon Candidates Reconstructed #theta_{#mu} After Pion Candidacy", 1000, 0, 180);
TH1D *hRecoPionCandidateThetaAfterPC = new TH1D("hRecoPionCandidateThetaAfterPC", "The Pion Candidates Reconstructed #theta_{#pi} After Pion Candidacy", 1000, 0, 180);
TH1D *hRecoMuonCandidateThetaAfterOA = new TH1D("hRecoMuonCandidateThetaAfterOA", "The Muon Candidates Reconstructed #theta_{#mu} After Opening Angle", 1000, 0, 180);
TH1D *hRecoPionCandidateThetaAfterOA = new TH1D("hRecoPionCandidateThetaAfterOA", "The Pion Candidates Reconstructed #theta_{#pi} After Opening Angle", 1000, 0, 180);
TH1D *hRecoMuonCandidateThetaAfterT = new TH1D("hRecoMuonCandidateThetaAfterT", "The Muon Candidates Reconstructed #theta_{#mu} After |t|", 1000, 0, 180);
TH1D *hRecoPionCandidateThetaAfterT = new TH1D("hRecoPionCandidateThetaAfterT", "The Pion Candidates Reconstructed #theta_{#pi} After |t|", 1000, 0, 180);

TH1D *hRecoMuonCandidateCosTheta = new TH1D("hRecoMuonCandidateCosTheta", "The Muon Candidates Reconstructed Cos(#theta_{#mu}) After 2-Tracks Selection", 1000, 0, 1);
TH1D *hRecoPionCandidateCosTheta = new TH1D("hRecoPionCandidateCosTheta", "The Pion Candidates Reconstructed Cos(#theta_{#pi}) After 2-Tracks Selection", 1000, 0, 1);
TH1D *hRecoMuonCandidateCosThetaAfterPC = new TH1D("hRecoMuonCandidateCosThetaAfterPC", "The Muon Candidates Reconstructed Cos(#theta_{#mu}) After Pion Candidacy", 1000, 0, 1);
TH1D *hRecoPionCandidateCosThetaAfterPC = new TH1D("hRecoPionCandidateCosThetaAfterPC", "The Pion Candidates Reconstructed Cos(#theta_{#pi}) After Pion Candidacy", 1000, 0, 1);
TH1D *hRecoMuonCandidateCosThetaAfterOA = new TH1D("hRecoMuonCandidateCosThetaAfterOA", "The Muon Candidates Reconstructed Cos(#theta_{#mu}) After Opening Angle", 1000, 0, 1);
TH1D *hRecoPionCandidateCosThetaAfterOA = new TH1D("hRecoPionCandidateCosThetaAfterOA", "The Pion Candidates Reconstructed Cos(#theta_{#pi}) After Opening Angle", 1000, 0, 1);
TH1D *hRecoMuonCandidateCosThetaAfterT = new TH1D("hRecoMuonCandidateCosThetaAfterT", "The Muon Candidates Reconstructed Cos(#theta_{#mu}) After |t|", 1000, 0, 1);
TH1D *hRecoPionCandidateCosThetaAfterT = new TH1D("hRecoPionCandidateCosThetaAfterT", "The Pion Candidates Reconstructed Cos(#theta_{#pi}) After |t|", 1000, 0, 1);

TH1D *hRecoMuonCandidatePhi = new TH1D("hRecoMuonCandidatePhi", "The Muon Candidates Reconstructed #phi_{#mu} After 2-Tracks Selection", 1000, -180, 180);
TH1D *hRecoPionCandidatePhi = new TH1D("hRecoPionCandidatePhi", "The Pion Candidates Reconstructed #phi_{#pi} After 2-Tracks Selection", 1000, -180, 180);
TH1D *hRecoMuonCandidatePhiAfterPC = new TH1D("hRecoMuonCandidatePhiAfterPC", "The Muon Candidates Reconstructed #phi_{#mu} After Pion Candidacy", 1000, -180, 180);
TH1D *hRecoPionCandidatePhiAfterPC = new TH1D("hRecoPionCandidatePhiAfterPC", "The Pion Candidates Reconstructed #phi_{#pi} After Pion Candidacy", 1000, -180, 180);
TH1D *hRecoMuonCandidatePhiAfterOA = new TH1D("hRecoMuonCandidatePhiAfterOA", "The Muon Candidates Reconstructed #phi_{#mu} After Opening Angle", 1000, -180, 180);
TH1D *hRecoPionCandidatePhiAfterOA = new TH1D("hRecoPionCandidatePhiAfterOA", "The Pion Candidates Reconstructed #phi_{#pi} After Opening Angle", 1000, -180, 180);
TH1D *hRecoMuonCandidatePhiAfterT = new TH1D("hRecoMuonCandidatePhiAfterT", "The Muon Candidates Reconstructed #phi_{#mu} After |t|", 1000, -180, 180);
TH1D *hRecoPionCandidatePhiAfterT = new TH1D("hRecoPionCandidatePhiAfterT", "The Pion Candidates Reconstructed #phi_{#pi} After |t|", 1000, -180, 180);

TH2D *hOpeningAngleVsConeAngle2Tracks = new TH2D("hOpeningAngleVsConeAngle2Tracks", "#theta_{#mu#pi} Vs Cone Angle After 2-Tracks Selection", 180, 0, 180, 180, 0, 180);
TH2D *hOpeningAngleVsConeAnglePC = new TH2D("hOpeningAngleVsConeAnglePC", "#theta_{#mu#pi} Vs Cone Angle After Pion Candidacy", 180, 0, 180, 180, 0, 180);

TH1D *hRecoMuonCandidateCaloU = new TH1D("hRecoMuonCandidateCaloU", "The Muon Candidates Reconstructed Calo Energy in U-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoPionCandidateCaloU = new TH1D("hRecoPionCandidateCaloU", "The Pion Candidates Reconstructed Calo Energy in U-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoCaloU = new TH1D("hRecoCaloU", "The Reconstructed Calo Energy in U-Plane After 2-Tracks Selection", 1000, 0, 5000);

TH1D *hRecoMuonCandidateCaloV = new TH1D("hRecoMuonCandidateCaloV", "The Muon Candidates Reconstructed Calo Energy in V-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoPionCandidateCaloV = new TH1D("hRecoPionCandidateCaloV", "The Pion Candidates Reconstructed Calo Energy in V-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoCaloV = new TH1D("hRecoCaloV", "The Reconstructed Calo Energy in V-Plane After 2-Tracks Selection", 1000, 0, 5000);

TH1D *hRecoMuonCandidateCaloY = new TH1D("hRecoMuonCandidateCaloY", "The Muon Candidates Reconstructed Calo Energy in Y-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoPionCandidateCaloY = new TH1D("hRecoPionCandidateCaloY", "The Pion Candidates Reconstructed Calo Energy in Y-Plane After 2-Tracks Selection", 1000, 0, 5000);
TH1D *hRecoCaloY = new TH1D("hRecoCaloY", "The Reconstructed Calo Energy in Y-Plane After 2-Tracks Selection", 1000, 0, 5000);

TH1D *hMuonCandidateTrkLLRPIDScore = new TH1D("hMuonCandidateTrkLLRPIDScore", "The LLR PID Score for Muon Candidate Tracks After 2-Tracks Selection", 1000, -1, 1);
TH1D *hPionCandidateTrkLLRPIDScore = new TH1D("hPionCandidateTrkLLRPIDScore", "The LLR PID Score for Pion Candidate Tracks After 2-Tracks Selection", 1000, -1, 1);
TH1D *hMuonCandidateTrkLLRPIDScoreAfterVA = new TH1D("hMuonCandidateTrkLLRPIDScoreAfterVA", "The LLR PID Score for Muon Candidate Tracks After Vertex Activity Selection", 1000, -1, 1);
TH1D *hPionCandidateTrkLLRPIDScoreAfterVA = new TH1D("hPionCandidateTrkLLRPIDScoreAfterVA", "The LLR PID Score for Pion Candidate Tracks After Vertex Activity Selection", 1000, -1, 1);
TH1D *hMuonCandidateTrkLLRPIDScoreAfterPC = new TH1D("hMuonCandidateTrkLLRPIDScoreAfterPC", "The LLR PID Score for Muon Candidate Tracks After Pion Candidacy Selection", 1000, -1, 1);
TH1D *hPionCandidateTrkLLRPIDScoreAfterPC = new TH1D("hPionCandidateTrkLLRPIDScoreAfterPC", "The LLR PID Score for Pion Candidate Tracks After Pion Candidacy Selection", 1000, -1, 1);
// ---------------------------------------





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
   double xDi = 0, xDf = 256.4;
   double yDi = -116.5, yDf = 116.5;
   double zDi = 0, zDf = 1036.8;
   
   // #######################
   // ### Fiducial Volume ###
   // #######################
   double xFi = xDi+10., xFf = xDf-10.;
   double yFi = yDi+10., yFf = yDf-10.;
   double zFi = zDi+10., zFf = zDf-50.;

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


// ================================================
// === Within 10cm of Detector Borders Function ===
// ================================================
bool WithinBorder(double x, double y, double z)
{
   bool withinBorder = false; // This is the value returned after the check, 0 means out, 1 means in

   // #######################
   // ### Detector Volume ###
   // #######################
   double xDi = 0, xDf = 256.4;
   double yDi = -116.5, yDf = 116.5;
   double zDi = 0, zDf = 1036.8;
   
   // #######################
   // ### Fiducial Volume ###
   // #######################
   double xFi = xDi+10., xFf = xDf-10.;
   double yFi = yDi+10., yFf = yDf-10.;
   double zFi = zDi+10., zFf = zDf-10.;

   if (x >= xFi && x <= xFf && y >= yFi && y <= yFf && z >= zFi && z <= zFf) {withinBorder = true;}

   return withinBorder;
} // End WithinBorder Function
// ================================================


// ============================================
// === Distance Between Two Points Function ===
// ============================================
double Distance(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v01(x0-x1, y0-y1, z0-z1);
   d = v01.Mag();
   return d;
}
// ============================================


// =======================================
// === Absolute Difference Calculation ===
// =======================================
double Difference(double x0, double x1)
{
   double d = -999;
   TVector3 v01(x0-x1, 0, 0);
   d = v01.Mag();
   return d;
} // End Difference Function
// =======================================


// ========================
// === Wire Calculation ===
// ========================
double Wire(double x)
{
   double w = (3.33328*x) + 4799.19;
   return w;
} // End Wire Function
// ========================


// ========================
// === Tick Calculation ===
// ========================
double Tick(double x)
{
   double t = (18.2148*x) + 818.351;
   return t;
} // End Tick Function
// ========================


// ===========================
// === Cone Angle Function ===
// ===========================
double ConeAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
   TVector3 v1(x1, y1, z1);
   TVector3 v2(x2, y2, z2);
   TVector3 z(0, 0, 1);
   TVector3 v3 = v1 + v2;
   Double_t coneangle = v3.Angle(z);
   return coneangle;
}
// ===========================


// ==============================
// === Opening Angle Function ===
// ==============================
double OpeningAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
   TVector3 v1(x1, y1, z1);
   TVector3 v2(x2, y2, z2);
   Double_t openingangle = v1.Angle(v2);
   return openingangle;
}
// ==============================


// ===========================
// === Delta P_TT Function ===
// ===========================
double DeltaP_TT(double nu_x, double nu_y, double nu_z, double mu_x, double mu_y, double mu_z, double pi_x, double pi_y, double pi_z)
{
   TVector3 nu(nu_x, nu_y, nu_z);
   TVector3 mu(mu_x, mu_y, mu_z);
   TVector3 pi(pi_x, pi_y, pi_z);
   TVector3 numu = nu.Cross(mu);
   double deltap_tt = (numu.Dot(pi))/(numu.Mag());
   return deltap_tt;
}
// ===========================


// ======================================
// === P_N and Delta_Alpha_T Function ===
// ======================================
double P_N_Alpha_T(bool w, double mu_x, double mu_y, double mu_z, double E_mu, double pi_x, double pi_y, double pi_z, double E_pi)
{
   // If bool w input is 0, then you are asking for P_N
   // If bool w input is 1, then you are asking for Delta_Alpha_T

   TVector3 mu(mu_x, mu_y, mu_z);
   TVector3 muT(mu_x, mu_y, 0);
   TVector3 pi(pi_x, pi_y, pi_z);
   double M_A = 37.2113351; // That's the mass of an argon atom in GeV/c^2
   TVector3 DeltaP_T(mu_x+pi_x, mu_y+pi_y, 0);
   double P_L_First = (M_A + mu.Z() + pi.Z() - E_mu - E_pi);
   double P_L = 0.5*P_L_First - 0.5*((DeltaP_T.Mag2() + pow(M_A, 2))/P_L_First);
   if (w == false) {
      double P_N = pow(DeltaP_T.Mag2() + P_L*P_L, 0.5);
      return P_N;
   }
   if (w == true) {
      double DeltaAlpha_T = acos(-(muT.Dot(DeltaP_T))/((muT.Mag())*(DeltaP_T.Mag())));
      return DeltaAlpha_T;
   }
}
// ======================================





void DataSelection::Loop()
{
   // ===============================================
   // === The Total Number of Events of This File ===
   // ===============================================
   Long64_t numberofentries = fChain->GetEntriesFast();
   std::cout<<"The Total Number of Events of This File = "<<numberofentries<<std::endl;
   // ===============================================


   // |----------------|
   // |--- Counters ---|
   // |----------------|
   bool WithinTPCDV = 0;
   bool WithinTPCFV = 0;
   int NumberEvents = 0;
   int NumberEventsWithRecoNuVtxWithinTPCDV = 0;
   int NumberEventsWithRecoNuVtxWithinTPCFV = 0;
   int NumberSelected = 0;
   double PassingPercentage = 0;
   double PassingPercentageDV = 0;
   double PassingPercentageFV = 0;
   double PercentageDV = 0;
   double PercentageFV = 0;
   int SWTriggers = 0;
   // |----------------|


   // |=========================================|
   // |=== CC-Inclusive Selection Parameters ===|
   // |=========================================|
   int NumMuonCandidatesCut = 1;
   double ProtonChi2Cut = 60.;
   double MuonChi2Cut = 30.;
   double RatioChi2Cut = 7.;
   double TrackScoreCut = 0.85;
   double VtxDistanceCut = 4.0;
   double GenerationCut = 2;
   double TrackLengthCut = 20;
   int PandoraPDGCut = 14;
   double FlashChi2Cut = 10.0;
   double FlashTopologicalCut = 0.25;
   double TopologicalScoreCut = 0.06;
   double StartVtxDaughtersCut = 10.0;
   double FlashRatioCut = 5.0;
   // |=========================================|


   // |=======================================|
   // |=== CC-Inclusive Selection Counters ===|
   // |=======================================|
   int NumMuonCandidates = 0;
   int NumProtonChi2 = 0;
   int NumMuonChi2 = 0;
   int NumRatioChi2 = 0;
   int NumTrackScore = 0;
   int NumVtxDistance = 0;
   int NumGeneration = 0;
   int NumTrackLength = 0;
   int NumPandoraPDG = 0;
   int NumFlashTopological = 0;
   int NumTopologicalScore = 0;
   int NumStartVtxDaughters = 0;
   int NumFlashRatio = 0;
   int NumCCInclusivePreSelection = 0;
   // |=======================================|


   // |=======================================|
   // |=== CC-Inclusive Selection Booleans ===|
   // |=======================================|
   bool NumberMuonCandidates = 0;
   bool ProtonChi2 = 0;
   bool MuonChi2 = 0;
   bool RatioChi2 = 0;
   bool TrackScore = 0;
   bool VtxDistance = 0;
   bool Generation = 0;
   bool TrackLength = 0;
   bool PandoraPDG = 0;
   bool StartVtxDaughters = 0;
   bool NuVtxFiducialVolume = 0;
   bool TopologicalScore = 0;
   bool FlashRatio = 0;
   bool FlashTopological = 0;
   bool MuonCandidate = 0;
   bool CCInclusivePreSelection = 0;
   // |=======================================|


   // |========================================|
   // |=== CC-Coherent Selection Parameters ===|
   // |========================================|
   int NumTrksWithin10Cut = 2;
   double ConeAngleCut = 20;
   double DoCACut = 7;
   double VAWithin = 10; // For calculating the vertex activity within this amount of cm
   //double VACut = 2000;
   double VACut = 50;
   double PionCandidateMuonCut = 20;
   double PionCandidateProtonCut = 50;
   double LLRCut = 0.7;
   //double OpeningAngleCut = 90;
   double OpeningAngleCut = 60;
   //double TCut = 0.25;
   double TCut = 0.05;
   // |========================================|


   // |======================================|
   // |=== CC-Coherent Selection Counters ===|
   // |======================================|
   int NumTrksWithin10 = 0;
   int NumEventsWithTrksWithin10 = 0;
   int NumEventsWithConeAngle = 0;
   int NumEventsWithDoCA = 0;
   int NumEventsWithVA = 0;
   int NumEventsWithPionCandidate = 0;
   int NumEventsWithLLR = 0;
   int NumEventsWithOA = 0;
   int NumEventsWithT = 0;
   // |======================================|


   if (fChain == 0) return;

   //Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   //for (Long64_t jentry=0; jentry<nentries;jentry++) {
   for (Long64_t jentry=0; jentry<numberofentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      if (jentry%10000==0) std::cout<<"Event = "<<jentry<<std::endl;
      WithinTPCDV = Within(0, reco_nu_vtx_sce_x, reco_nu_vtx_sce_y, reco_nu_vtx_sce_z);
      WithinTPCFV = Within(1, reco_nu_vtx_sce_x, reco_nu_vtx_sce_y, reco_nu_vtx_sce_z);

      NumberEvents++;
      if (WithinTPCDV==1) NumberEventsWithRecoNuVtxWithinTPCDV++;
      if (WithinTPCFV==1) NumberEventsWithRecoNuVtxWithinTPCFV++;
      if (selected==1) NumberSelected++;

      SWTriggers += swtrig;

      // :::::::::::::::::::::::::::::::::::::::::::::
      // ::: Setting Counters and Booleans to Zero :::
      // :::::::::::::::::::::::::::::::::::::::::::::
      NumStartVtxDaughters = 0;
      NumMuonCandidates = 0;
      NumTrksWithin10 = 0;
      NumGeneration = 0;
      PandoraPDG = 0;
      StartVtxDaughters = 0;
      NuVtxFiducialVolume = 0;
      FlashTopological = 0;
      TopologicalScore = 0;
      FlashRatio = 0;
      NumberMuonCandidates = 0;
      CCInclusivePreSelection = 0;
      double SavedConeAngle = 900;
      TVector3 p1;
      TVector3 p2;
      TVector3 e1;
      TVector3 e2;
      int Trk1MuonCandidate = 0;
      int Trk2MuonCandidate = 0;
      double Trk1TrackLength = 0;
      double Trk2TrackLength = 0;
      double Trk1Chi2Muon = 0;
      double Trk2Chi2Muon = 0;
      double Trk1Chi2Proton = 0;
      double Trk2Chi2Proton = 0;
      double Trk1MuEnergy = 0;
      double Trk2MuEnergy = 0;
      double Trk1LLRPIDScore = 0;
      double Trk2LLRPIDScore = 0;
      double DoCA_VtxDistance = 999;
      double DoCA_TrkStarts = 999;
      double TotalDaughterTracksEnergy = 0;
      // :::::::::::::::::::::::::::::::::::::::::::::

      // |======================================================|
      // |=== Ensuring I'm Selecting CC-Coh Pion Events Here ===|
      // |======================================================|
      //if (nu_pdg == 14 && ccnc == 0 && interaction == 3) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |======================================================|

      // |================================================|
      // |=== Ensuring I'm Selecting CC-QE Events Here ===|
      // |================================================|
      //if (nu_pdg == 14 && ccnc == 0 && interaction == 0) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |================================================|

      // |=================================================|
      // |=== Ensuring I'm Selecting CC-Res Events Here ===|
      // |=================================================|
      //if (nu_pdg == 14 && ccnc == 0 && interaction == 1) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |=================================================|

      // |=================================================|
      // |=== Ensuring I'm Selecting NC-Res Events Here ===|
      // |=================================================|
      //if (nu_pdg == 14 && ccnc == 1 && interaction == 1) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |=================================================|

      // |=================================================|
      // |=== Ensuring I'm Selecting CC-DIS Events Here ===|
      // |=================================================|
      //if (nu_pdg == 14 && ccnc == 0 && interaction == 2) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |=================================================|

      // |=================================================|
      // |=== Ensuring I'm Selecting NC-DIS Events Here ===|
      // |=================================================|
      //if (nu_pdg == 14 && ccnc == 1 && interaction == 2) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |=================================================|

      // |================================================|
      // |=== Ensuring I'm Selecting Other Events Here ===|
      // |================================================|
      //if ((nu_pdg == 14 && interaction == 0 && ccnc == 1) || (nu_pdg == 14 && interaction == 3 && ccnc == 1) || nu_pdg == 12 || (interaction != 1 && interaction != 2 && interaction != 0 && interaction != 3)) { // 0 for QE 1 for Res 2 for DIS and 3 for Coh and 0 for CC and 1 for NC for ccnc
      // |================================================|

      /*// |::::::::::::::::::::::::::::::::::::::::::::::::::::|
      // |::: Vertex Activity Calculation and DoCA is Here :::|
      // |::::::::::::::::::::::::::::::::::::::::::::::::::::|
      double TotalVertexActivity = 0;
      double TotalDoCA = 1000;
      for (int j = 0; j < trk_plane_v->size(); j++) {
         if (Distance(trk_calo_x_v->at(j), trk_calo_y_v->at(j), trk_calo_z_v->at(j), reco_nu_vtx_sce_x, reco_nu_vtx_sce_y, reco_nu_vtx_sce_z) <= VAWithin && trk_plane_v->at(j) == 0) {
            TotalVertexActivity = TotalVertexActivity + trk_de_v->at(j);
	 } // Close IF statement to include this energy in the VA Calculation
	 for (int k = j+1; k < trk_plane_v->size(); k++) {
	    double NewDoCA = 1001;
	    if (trk_calo_pfp_id_v->at(j) != trk_calo_pfp_id_v->at(k)) {
	       NewDoCA = Distance(trk_calo_x_v->at(j), trk_calo_y_v->at(j), trk_calo_z_v->at(j), trk_calo_x_v->at(k), trk_calo_y_v->at(k), trk_calo_z_v->at(k));
	    }
	    if (NewDoCA <= TotalDoCA) {
	       TotalDoCA = NewDoCA;
	    }
	 } // Close DoCA Calculation For Loop
      } // Close VA Calculation and DoCA For Loop
      // |:::::::::::::::::::::::::::::::::::::::::::| */

      // |=========================================|
      // |=== CC-Inclusive PreSelection Is Here ===|
      // |=========================================|
      //for (int i = 0; i < n_tracks; i++) {
      for (int i = 0; i < n_pfps; i++) {

         TrackScore = 0;
	 VtxDistance = 0;
	 Generation = 0;
	 TrackLength = 0;
         ProtonChi2 = 0;
	 MuonChi2 = 0;
         RatioChi2 = 0;

	 if (trk_score_v->at(i) > TrackScoreCut) TrackScore = 1;
	 if (trk_distance_v->at(i) < VtxDistanceCut) VtxDistance = 1;
         
	 // ----------------------------------
	 // --- DoCA Calculation Goes Here ---
	 // ----------------------------------
	 if (trk_distance_v->at(i) < DoCA_VtxDistance) DoCA_VtxDistance = trk_distance_v->at(i);
	 // ----------------------------------


	 if (pfp_generation_v->at(i) == GenerationCut) {
            Generation = 1;
	    TotalDaughterTracksEnergy = TotalDaughterTracksEnergy + trk_calo_energy_u_v->at(i);
	    NumGeneration++;
	 }
	 if (trk_len_v->at(i) > TrackLengthCut) TrackLength = 1;
	 if (trk_pid_chipr_v->at(i) > ProtonChi2Cut) ProtonChi2 = 1;
	 if (trk_pid_chimu_v->at(i) < MuonChi2Cut) MuonChi2 = 1;
	 if ((trk_pid_chipr_v->at(i)/trk_pid_chimu_v->at(i)) > RatioChi2Cut) RatioChi2 = 1;

	 if (TrackScore && VtxDistance && Generation && TrackLength && ProtonChi2 && MuonChi2 && RatioChi2) NumMuonCandidates++;

	 if (Generation && WithinBorder(trk_sce_start_x_v->at(i), trk_sce_start_y_v->at(i), trk_sce_start_z_v->at(i))) NumStartVtxDaughters++;
	 if (Distance(reco_nu_vtx_sce_x, reco_nu_vtx_sce_y, reco_nu_vtx_sce_z, trk_sce_start_x_v->at(i), trk_sce_start_y_v->at(i), trk_sce_start_z_v->at(i)) <= NumTrksWithin10Cut) {
            NumTrksWithin10++;

	    // ---------------------------------------
	    // --- This Calculates the Cone Angles ---
	    // ---------------------------------------
	    double TheConeAngle = 900;
	    double TrackMom = trk_mcs_muon_mom_v->at(i);
	    if (Within(1, trk_sce_end_x_v->at(i), trk_sce_end_y_v->at(i), trk_sce_end_z_v->at(i))) TrackMom = trk_range_muon_mom_v->at(i);
	    for (int j = 0; j < n_pfps; j++) {
	       if (j == i) continue;
	       double DoCADistance = Distance(trk_sce_start_x_v->at(i), trk_sce_start_y_v->at(i), trk_sce_start_z_v->at(i), trk_sce_start_x_v->at(j), trk_sce_start_y_v->at(j), trk_sce_start_z_v->at(j));
	       if (DoCADistance < DoCA_TrkStarts) DoCA_TrkStarts = DoCADistance;
	       double CheckTrackMom = trk_mcs_muon_mom_v->at(j);
	       double CheckConeAngle = ConeAngle(CheckTrackMom*trk_dir_x_v->at(j), CheckTrackMom*trk_dir_y_v->at(j), CheckTrackMom*trk_dir_z_v->at(j), TrackMom*trk_dir_x_v->at(i), TrackMom*trk_dir_y_v->at(i), TrackMom*trk_dir_z_v->at(i))*180/PI;
	       if (TheConeAngle > CheckConeAngle) TheConeAngle = CheckConeAngle;
	    }
	    if (SavedConeAngle > TheConeAngle) SavedConeAngle = TheConeAngle;
	    // ---------------------------------------

            if (NumTrksWithin10 == 1) {
	       p1.SetXYZ(TrackMom*trk_dir_x_v->at(i), TrackMom*trk_dir_y_v->at(i), TrackMom*trk_dir_z_v->at(i));
	       if (p1.Z() < 0) {
		  p1.SetX(-1*TrackMom*trk_dir_x_v->at(i));
		  p1.SetY(-1*TrackMom*trk_dir_y_v->at(i));
	          p1.SetZ(-1*TrackMom*trk_dir_z_v->at(i));
	       }
	       e1.SetXYZ(trk_calo_energy_u_v->at(i), trk_calo_energy_v_v->at(i), trk_calo_energy_y_v->at(i));
	       if (TrackScore && VtxDistance && Generation && TrackLength && ProtonChi2 && MuonChi2 && RatioChi2) Trk1MuonCandidate = 1;
	       Trk1TrackLength = trk_len_v->at(i);
	       Trk1Chi2Muon = trk_pid_chimu_v->at(i);
	       Trk1Chi2Proton = trk_pid_chipr_v->at(i);
	       Trk1MuEnergy = trk_energy_muon_v->at(i);
               Trk1LLRPIDScore = trk_llr_pid_score_v->at(i);
	       //if (jentry%1000==0) std::cout<<"Track1 PFP pdg = "<<pfpdg->at(i)<<std::endl;
	    }
            if (NumTrksWithin10 == 2) {
	       p2.SetXYZ(TrackMom*trk_dir_x_v->at(i), TrackMom*trk_dir_y_v->at(i), TrackMom*trk_dir_z_v->at(i));
	       if (p2.Z() < 0) {
		  p2.SetX(-1*TrackMom*trk_dir_x_v->at(i));
		  p2.SetY(-1*TrackMom*trk_dir_y_v->at(i));
	          p2.SetZ(-1*TrackMom*trk_dir_z_v->at(i));
	       }
	       e2.SetXYZ(trk_calo_energy_u_v->at(i), trk_calo_energy_v_v->at(i), trk_calo_energy_y_v->at(i));
	       if (TrackScore && VtxDistance && Generation && TrackLength && ProtonChi2 && MuonChi2 && RatioChi2) Trk2MuonCandidate = 1; 
	       Trk2TrackLength = trk_len_v->at(i);
	       Trk2Chi2Muon = trk_pid_chimu_v->at(i);
	       Trk2Chi2Proton = trk_pid_chipr_v->at(i);
	       Trk2MuEnergy = trk_energy_muon_v->at(i);
               Trk2LLRPIDScore = trk_llr_pid_score_v->at(i);
	       //if (jentry%1000==0) std::cout<<"Track2 PFP pdg = "<<pfpdg->at(i)<<std::endl;
	    }
	 }
         
	 
	 //if (jentry%10000==0) std::cout<<"The trk pfp id = "<<trk_pfp_id_v->at(i)<<std::endl;
         // trk_mcs_muon_mom_v
         // trk_range_muon_mom_v
      }

      hNumMuonCandidates->Fill(NumMuonCandidates);

      /*
      if (jentry%10000==0) std::cout<<"The Nu Flash Match Score = "<<nu_flashmatch_score<<std::endl;
      if (jentry%10000==0) std::cout<<"The Cosmic Flash Match Score = "<<best_cosmic_flashmatch_score<<std::endl;
      if (jentry%10000==0) std::cout<<"The Obvious Cosmic Flash Match Score = "<<best_obviouscosmic_flashmatch_score<<std::endl;
      if (jentry%10000==0) std::cout<<"The Flash Ratio Score = "<<nu_flashmatch_score/best_cosmic_flashmatch_score<<std::endl;
      */

      if (NumMuonCandidates >= NumMuonCandidatesCut) NumberMuonCandidates = 1;

      // |---------------------------------------|
      // |--- Further Event Selection Is Here ---|
      // |---------------------------------------|
      if (slpdg == PandoraPDGCut) PandoraPDG = 1;
      if (NumStartVtxDaughters == NumGeneration) StartVtxDaughters = 1;
      if (WithinTPCFV) NuVtxFiducialVolume = 1;
      if (nu_flashmatch_score  < FlashChi2Cut || topological_score > FlashTopologicalCut) FlashTopological = 1;
      if (topological_score > TopologicalScoreCut) TopologicalScore = 1;
      if (nu_flashmatch_score/best_cosmic_flashmatch_score < FlashRatioCut && nu_flashmatch_score/best_cosmic_flashmatch_score != 1) FlashRatio = 1;
      // |---------------------------------------|

      if (NuVtxFiducialVolume == 1) hRecoNuEnergyFiducialVolume->Fill(TotalDaughterTracksEnergy/1000);

      if (NumberMuonCandidates && PandoraPDG && StartVtxDaughters && NuVtxFiducialVolume && FlashTopological && TopologicalScore && FlashRatio) {
         double TotalVertexActivity = -999;
         //double TotalDoCA = 1000;
	 int NumberOfTimesWithinDistanceForVA = 0;
	 if (NumTrksWithin10 == NumTrksWithin10Cut) {

            // |::::::::::::::::::::::::::::::::::::::::::::::::::::|
            // |::: Vertex Activity Calculation and DoCA is Here :::|
            // |::::::::::::::::::::::::::::::::::::::::::::::::::::|
            //double TotalVertexActivity = 0;
            //double TotalDoCA = 1000;
            for (int j = 0; j < trk_plane_v->size(); j++) {
               if (Distance(trk_calo_x_v->at(j), trk_calo_y_v->at(j), trk_calo_z_v->at(j), reco_nu_vtx_sce_x, reco_nu_vtx_sce_y, reco_nu_vtx_sce_z) <= VAWithin && trk_plane_v->at(j) == 0) {
                  if (NumberOfTimesWithinDistanceForVA == 0) {
		     TotalVertexActivity = 0;
		  }
		  TotalVertexActivity = TotalVertexActivity + trk_de_v->at(j);
		  NumberOfTimesWithinDistanceForVA++;
	       } // Close IF statement to include this energy in the VA Calculation
	       /*for (int k = j+1; k < trk_plane_v->size(); k++) {
	          double NewDoCA = 1001;
	          if (trk_calo_pfp_id_v->at(j) != trk_calo_pfp_id_v->at(k)) {
	             NewDoCA = Distance(trk_calo_x_v->at(j), trk_calo_y_v->at(j), trk_calo_z_v->at(j), trk_calo_x_v->at(k), trk_calo_y_v->at(k), trk_calo_z_v->at(k));
	          }
	          if (NewDoCA <= TotalDoCA) {
	             TotalDoCA = NewDoCA;
	          }
	       } // Close DoCA Calculation For Loop*/
            } // Close VA Calculation and DoCA For Loop
            // |:::::::::::::::::::::::::::::::::::::::::::|

            // ================================================
            // === Vertex Activity Calculation Happens Here ===
            // ================================================
            float vtxactivity = 0;
            float withinwires = 33;
            float withinticks = 182;
            float WIRE = Wire(reco_nu_vtx_z);
            float TICK = Tick(reco_nu_vtx_x);

            //if (jentry%10 == 0) std::cout<<"Wire = "<<WIRE<<", Tick = "<<TICK<<std::endl;

            for (int l = 0; l < nallhits; l++) {
	       if ((Difference(hit_channel[l], WIRE) <= withinwires) && (Difference(hit_peakT[l], TICK) <= withinticks)) {
  	          vtxactivity = vtxactivity + hit_charge[i];
	       }// <-- Close Hit is Within Range Defined Condition
            }// <-- Close Hits For Loop
            // ================================================
	 
         }
         CCInclusivePreSelection = 1;
         hNumTrksWithin10->Fill(NumTrksWithin10);
	 NumCCInclusivePreSelection++;
	 hPassedCCInclusivePreSelection->Fill(1);
	 hNSliceNumberAfterMuon->Fill(nslice);
         hNumMuonCandidatesAfterCCInclusive->Fill(NumMuonCandidates);
	 if (NumTrksWithin10 == NumTrksWithin10Cut) {
	    NumEventsWithTrksWithin10++;
	    hConeAngleFor2Tracks->Fill(SavedConeAngle);
	    hDoCAFor2Tracks->Fill(DoCA_TrkStarts); // This was my old way of calculating the DoCA
	    //hDoCAFor2Tracks->Fill(TotalDoCA);
	    hDoCAVtxDistanceFor2Tracks->Fill(DoCA_VtxDistance);
	    hVertexActivityFor2Tracks->Fill(TotalVertexActivity); // Filling in the new VA Plot after updating the ana module
            double t = pow(Trk1MuEnergy+Trk2MuEnergy-p1.Z()-p2.Z(),2) + pow((p1.X()+p2.X()),2) + pow((p1.Y()+p2.Y()),2);
	    hT->Fill(t);
	    double MuonCandidateMuonChi2 = 999;
	    double MuonCandidateProtonChi2 = 999;
	    double MuonCandidateLLRPIDScore = 999;
	    double PionCandidateMuonChi2 = 999;
	    double PionCandidateProtonChi2 = 999;
	    double PionCandidateLLRPIDScore = 999;
	    TVector3 mu;
	    TVector3 pi;
	    TVector3 muE;
	    TVector3 piE;
	    if (Trk1MuonCandidate == 1 && Trk2MuonCandidate == 1) {
	       if (Trk1TrackLength > Trk2TrackLength) {
                  hMuonCandidateTracksMuonChi2VsProtonChi2->Fill(Trk1Chi2Proton, Trk1Chi2Muon);
                  hPionCandidateTracksMuonChi2VsProtonChi2->Fill(Trk2Chi2Proton, Trk2Chi2Muon);
	          MuonCandidateMuonChi2 = Trk1Chi2Muon;
	          MuonCandidateProtonChi2 = Trk1Chi2Proton;
		  MuonCandidateLLRPIDScore = Trk1LLRPIDScore;
		  mu.SetXYZ(p1.X(), p1.Y(), p1.Z());
		  muE.SetXYZ(e1.X(), e1.Y(), e1.Z());
	          PionCandidateMuonChi2 = Trk2Chi2Muon;
	          PionCandidateProtonChi2 = Trk2Chi2Proton;
	          PionCandidateLLRPIDScore = Trk2LLRPIDScore;
		  pi.SetXYZ(p2.X(), p2.Y(), p2.Z());
		  piE.SetXYZ(e2.X(), e2.Y(), e2.Z());
	       }
	       if (Trk2TrackLength > Trk1TrackLength) {
                  hMuonCandidateTracksMuonChi2VsProtonChi2->Fill(Trk2Chi2Proton, Trk2Chi2Muon);
                  hPionCandidateTracksMuonChi2VsProtonChi2->Fill(Trk1Chi2Proton, Trk1Chi2Muon);
	          MuonCandidateMuonChi2 = Trk2Chi2Muon;
	          MuonCandidateProtonChi2 = Trk2Chi2Proton;
		  MuonCandidateLLRPIDScore = Trk2LLRPIDScore;
		  mu.SetXYZ(p2.X(), p2.Y(), p2.Z());
		  muE.SetXYZ(e2.X(), e2.Y(), e2.Z());
	          PionCandidateMuonChi2 = Trk1Chi2Muon;
	          PionCandidateProtonChi2 = Trk1Chi2Proton;
	          PionCandidateLLRPIDScore = Trk1LLRPIDScore;
		  pi.SetXYZ(p1.X(), p1.Y(), p1.Z());
		  piE.SetXYZ(e1.X(), e1.Y(), e1.Z());
	       }
	    }
	    if (Trk1MuonCandidate == 1 && Trk2MuonCandidate != 1) {
               hMuonCandidateTracksMuonChi2VsProtonChi2->Fill(Trk1Chi2Proton, Trk1Chi2Muon);
               hPionCandidateTracksMuonChi2VsProtonChi2->Fill(Trk2Chi2Proton, Trk2Chi2Muon);
	       MuonCandidateMuonChi2 = Trk1Chi2Muon;
	       MuonCandidateProtonChi2 = Trk1Chi2Proton;
	       MuonCandidateLLRPIDScore = Trk1LLRPIDScore;
	       mu.SetXYZ(p1.X(), p1.Y(), p1.Z());
	       muE.SetXYZ(e1.X(), e1.Y(), e1.Z());
	       PionCandidateMuonChi2 = Trk2Chi2Muon;
	       PionCandidateProtonChi2 = Trk2Chi2Proton; 
	       PionCandidateLLRPIDScore = Trk2LLRPIDScore;
	       pi.SetXYZ(p2.X(), p2.Y(), p2.Z());
	       piE.SetXYZ(e2.X(), e2.Y(), e2.Z());
	    }
	    if (Trk2MuonCandidate == 1 && Trk1MuonCandidate != 1) {
               hMuonCandidateTracksMuonChi2VsProtonChi2->Fill(Trk2Chi2Proton, Trk2Chi2Muon);
               hPionCandidateTracksMuonChi2VsProtonChi2->Fill(Trk1Chi2Proton, Trk1Chi2Muon);
	       MuonCandidateMuonChi2 = Trk2Chi2Muon;
	       MuonCandidateProtonChi2 = Trk2Chi2Proton;
	       MuonCandidateLLRPIDScore = Trk2LLRPIDScore;
	       mu.SetXYZ(p2.X(), p2.Y(), p2.Z());
	       muE.SetXYZ(e2.X(), e2.Y(), e2.Z());
	       PionCandidateMuonChi2 = Trk1Chi2Muon;
	       PionCandidateProtonChi2 = Trk1Chi2Proton;
	       PionCandidateLLRPIDScore = Trk1LLRPIDScore;
	       pi.SetXYZ(p1.X(), p1.Y(), p1.Z());
	       piE.SetXYZ(e1.X(), e1.Y(), e1.Z());
            }

	    double SavedOpeningAngle = OpeningAngle(mu.X(), mu.Y(), mu.Z(), pi.X(), pi.Y(), pi.Z())*180/PI;
	    hOpeningAngleFor2Tracks->Fill(SavedOpeningAngle);
	    hOpeningAngleVsConeAngle2Tracks->Fill(SavedConeAngle, SavedOpeningAngle);

	    hDeltaPTT->Fill(DeltaP_TT(0, 0, 1, mu.X(), mu.Y(), mu.Z(), pi.X(), pi.Y(), pi.Z()));
	    hPN->Fill(P_N_Alpha_T(0, mu.X(), mu.Y(), mu.Z(), Trk1MuEnergy, pi.X(), pi.Y(), pi.Z(), Trk2MuEnergy));
	    hDeltaAlphaT->Fill(P_N_Alpha_T(1, mu.X(), mu.Y(), mu.Z(), Trk1MuEnergy, pi.X(), pi.Y(), pi.Z(), Trk2MuEnergy)*180/PI);

	    //hRecoNuEnergy->Fill(Trk1MuEnergy + Trk2MuEnergy);
	    hRecoNuEnergy->Fill(TotalDaughterTracksEnergy/1000);
	    hRecoMuonCandidateMomentum->Fill(mu.Mag());
	    hRecoPionCandidateMomentum->Fill(pi.Mag());
	    hRecoMuonCandidateTheta->Fill(mu.Theta()*180/PI);
	    hRecoPionCandidateTheta->Fill(pi.Theta()*180/PI);
	    hRecoMuonCandidateCosTheta->Fill(mu.CosTheta());
	    hRecoPionCandidateCosTheta->Fill(pi.CosTheta());
	    hRecoMuonCandidatePhi->Fill(mu.Phi()*180/PI);
	    hRecoPionCandidatePhi->Fill(pi.Phi()*180/PI);
	    hRecoMuonCandidateCaloU->Fill(muE.X());
	    hRecoPionCandidateCaloU->Fill(piE.X());
	    hRecoCaloU->Fill(muE.X() + piE.X());
	    hRecoMuonCandidateCaloV->Fill(muE.Y());
	    hRecoPionCandidateCaloV->Fill(piE.Y());
	    hRecoCaloV->Fill(muE.Y() + piE.Y());
	    hRecoMuonCandidateCaloY->Fill(muE.Z());
	    hRecoPionCandidateCaloY->Fill(piE.Z());
	    hRecoCaloY->Fill(muE.Z() + piE.Z());
	    hMuonCandidateTrkLLRPIDScore->Fill(MuonCandidateLLRPIDScore);
	    hPionCandidateTrkLLRPIDScore->Fill(PionCandidateLLRPIDScore);
	    if (SavedConeAngle <= ConeAngleCut) {
	       NumEventsWithConeAngle++;
	       hTConeAngle->Fill(t);
	       //hRecoNuEnergyConeAngle->Fill(Trk1MuEnergy + Trk2MuEnergy);
	       hRecoNuEnergyConeAngle->Fill(TotalDaughterTracksEnergy/1000);
	       //if (SavedConeAngle >= 5 && t >= 0 && t <= 0.15) std::cout<<evt<<", "<<run<<", "<<sub<<std::endl;
	       if (DoCA_TrkStarts < DoCACut) {
	          NumEventsWithDoCA++;
		  hTDoCA->Fill(t);
		  //hRecoNuEnergyDoCA->Fill(Trk1MuEnergy + Trk2MuEnergy);
		  hRecoNuEnergyDoCA->Fill(TotalDaughterTracksEnergy/1000);
		  hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Fill(MuonCandidateProtonChi2, MuonCandidateMuonChi2);
		  hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Fill(PionCandidateProtonChi2, PionCandidateMuonChi2);
		  //if (muE.X() + piE.X() < VACut) {
		  if (TotalVertexActivity < VACut) {
		     NumEventsWithVA++;
	             hMuonCandidateTrkLLRPIDScoreAfterVA->Fill(MuonCandidateLLRPIDScore);
	             hPionCandidateTrkLLRPIDScoreAfterVA->Fill(PionCandidateLLRPIDScore);
		  if (PionCandidateMuonChi2 < PionCandidateMuonCut && PionCandidateProtonChi2 > PionCandidateProtonCut) {
	             NumEventsWithPionCandidate++;
	             hMuonCandidateTrkLLRPIDScoreAfterPC->Fill(MuonCandidateLLRPIDScore);
	             hPionCandidateTrkLLRPIDScoreAfterPC->Fill(PionCandidateLLRPIDScore);
		     if (PionCandidateLLRPIDScore > LLRCut) {
		        NumEventsWithLLR++;
	                hConeAngleForPionCandidate->Fill(SavedConeAngle);
		        hOpeningAngleForPionCandidate->Fill(SavedOpeningAngle);
		        hTPionCandidate->Fill(t);
		        //hRecoNuEnergyPionCandidate->Fill(Trk1MuEnergy + Trk2MuEnergy);
		        hRecoNuEnergyPionCandidate->Fill(TotalDaughterTracksEnergy/1000);
	                hDeltaPTTPC->Fill(DeltaP_TT(0, 0, 1, mu.X(), mu.Y(), mu.Z(), pi.X(), pi.Y(), pi.Z()));
	                hPNPC->Fill(P_N_Alpha_T(0, mu.X(), mu.Y(), mu.Z(), Trk1MuEnergy, pi.X(), pi.Y(), pi.Z(), Trk2MuEnergy));
	                hDeltaAlphaTPC->Fill(P_N_Alpha_T(1, mu.X(), mu.Y(), mu.Z(), Trk1MuEnergy, pi.X(), pi.Y(), pi.Z(), Trk2MuEnergy)*180/PI);
		        hNSliceNumberAfterPion->Fill(nslice);
		        hRecoMuonCandidateMomentumAfterPC->Fill(mu.Mag());
		        hRecoPionCandidateMomentumAfterPC->Fill(pi.Mag());
		        hRecoMuonCandidateThetaAfterPC->Fill(mu.Theta()*180/PI);
		        hRecoPionCandidateThetaAfterPC->Fill(pi.Theta()*180/PI);
		        hRecoMuonCandidateCosThetaAfterPC->Fill(mu.CosTheta());
		        hRecoPionCandidateCosThetaAfterPC->Fill(pi.CosTheta());
		        hRecoMuonCandidatePhiAfterPC->Fill(mu.Phi()*180/PI);
		        hRecoPionCandidatePhiAfterPC->Fill(pi.Phi()*180/PI);
	                hOpeningAngleVsConeAnglePC->Fill(SavedConeAngle, SavedOpeningAngle);
		     if (SavedOpeningAngle < OpeningAngleCut) {
			NumEventsWithOA++;
	                hConeAngleForOA->Fill(SavedConeAngle);
		        hOpeningAngleForOA->Fill(SavedOpeningAngle);
		        hTOA->Fill(t);
	                //hRecoNuEnergyOA->Fill(Trk1MuEnergy + Trk2MuEnergy);
	                hRecoNuEnergyOA->Fill(TotalDaughterTracksEnergy/1000);
		        hRecoMuonCandidateMomentumAfterOA->Fill(mu.Mag());
		        hRecoPionCandidateMomentumAfterOA->Fill(pi.Mag());
		        hRecoMuonCandidateThetaAfterOA->Fill(mu.Theta()*180/PI);
		        hRecoPionCandidateThetaAfterOA->Fill(pi.Theta()*180/PI);
		        hRecoMuonCandidateCosThetaAfterOA->Fill(mu.CosTheta());
		        hRecoPionCandidateCosThetaAfterOA->Fill(pi.CosTheta());
		        hRecoMuonCandidatePhiAfterOA->Fill(mu.Phi()*180/PI);
		        hRecoPionCandidatePhiAfterOA->Fill(pi.Phi()*180/PI);
		        if (t < TCut) {
		           NumEventsWithT++;
	                   hConeAngleForT->Fill(SavedConeAngle);
		           hOpeningAngleForT->Fill(SavedOpeningAngle);
		           hTT->Fill(t);
			   //hRecoNuEnergyT->Fill(Trk1MuEnergy + Trk2MuEnergy);
			   hRecoNuEnergyT->Fill(TotalDaughterTracksEnergy/1000);
		           hRecoMuonCandidateMomentumAfterT->Fill(mu.Mag());
		           hRecoPionCandidateMomentumAfterT->Fill(pi.Mag());
		           hRecoMuonCandidateThetaAfterT->Fill(mu.Theta()*180/PI);
		           hRecoPionCandidateThetaAfterT->Fill(pi.Theta()*180/PI);
		           hRecoMuonCandidateCosThetaAfterT->Fill(mu.CosTheta());
		           hRecoPionCandidateCosThetaAfterT->Fill(pi.CosTheta());
		           hRecoMuonCandidatePhiAfterT->Fill(mu.Phi()*180/PI);
		           hRecoPionCandidatePhiAfterT->Fill(pi.Phi()*180/PI);
	                   //std::cout<<evt<<", "<<run<<", "<<sub<<std::endl;
		        }
		     }
		     }
	          }
		  }
	       }
	    }
	 }
      }
      //}// Closing If Statement Ensuring CC-Coh Pion Events

      if (!CCInclusivePreSelection) hPassedCCInclusivePreSelection->Fill(0);
      // |=========================================|


   }





   PassingPercentage = 100.*(NumberSelected*pow(NumberEvents, -1));
   PassingPercentageDV = 100.*(NumberSelected*pow(NumberEventsWithRecoNuVtxWithinTPCDV, -1));
   PassingPercentageFV = 100.*(NumberSelected*pow(NumberEventsWithRecoNuVtxWithinTPCFV, -1));
   PercentageDV = 100.*(NumberEventsWithRecoNuVtxWithinTPCDV*pow(NumberEvents, -1));
   PercentageFV = 100.*(NumberEventsWithRecoNuVtxWithinTPCFV*pow(NumberEvents, -1));
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events = "<<NumberEvents<<std::endl;
   std::cout<<"|- Total Number of Fiducial Events = "<<hRecoNuEnergyFiducialVolume->GetEntries()<<std::endl;
   std::cout<<"|- Total Number of Software Triggers = "<<SWTriggers<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Selected Events = "<<NumberSelected<<std::endl;
   std::cout<<"|- Total Number of Events Within the Detector Volume = "<<NumberEventsWithRecoNuVtxWithinTPCDV<<std::endl;
   std::cout<<"|- Total Number of Events Within the Fiducial Volume = "<<NumberEventsWithRecoNuVtxWithinTPCFV<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Percentage of Events Within the Detector Volume = "<<PercentageDV<<std::endl;
   std::cout<<"|- Percentage of Events Within the Fiducial Volume = "<<PercentageFV<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Percentage of Selected Events = "<<PassingPercentage<<std::endl;
   std::cout<<"|- Percentage of Selected Events Looking at Detector Volume = "<<PassingPercentageDV<<std::endl;
   std::cout<<"|- Percentage of Selected Events Looking at Fiducial Volume = "<<PassingPercentageFV<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing CC-Inclusive Pre-Selection = "<<NumCCInclusivePreSelection<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing Exactly 2-Tracks Cut = "<<NumEventsWithTrksWithin10<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing Cone Angle Cut = "<<NumEventsWithConeAngle<<std::endl;
   std::cout<<"|- Total Number of Events Passing DoCA Cut = "<<NumEventsWithDoCA<<std::endl;
   std::cout<<"|- Total Number of Events Passing Vertex Activity Cut = "<<NumEventsWithVA<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing Pion Candidacy Cut = "<<NumEventsWithPionCandidate<<std::endl;
   std::cout<<"|- Total Number of Events Passing LLR Cut = "<<NumEventsWithLLR<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing Opening Angle Cut = "<<NumEventsWithOA<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;
   std::cout<<"|- Total Number of Events Passing |t| Cut = "<<NumEventsWithT<<std::endl;
   std::cout<<"|-------------------------------------------------------------------------------|"<<std::endl;





   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // %%% Saving Histograms to a File Here %%%
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   TFile *TDataInfo = new TFile("Data_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_CCCoh_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_CCQE_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_CCRes_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_NCRes_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_CCDIS_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_NCDIS_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("MC_Other_Histograms_BothPC.root", "RECREATE");
   //TFile *TMCInfo = new TFile("CCCoh_Enhanced_Histograms_BothPC.root", "RECREATE");
   //TFile *TEXTInfo = new TFile("EXT_Histograms_BothPC.root", "RECREATE");
   //TFile *TDirtInfo = new TFile("Dirt_Histograms_BothPC.root", "RECREATE");

   hNumMuonCandidates->Write();
   hNumMuonCandidatesAfterCCInclusive->Write();
   hNumTrksWithin10->Write();
   hPassedCCInclusivePreSelection->Write();

   hConeAngleFor2Tracks->Write();
   hConeAngleForPionCandidate->Write();
   hConeAngleForOA->Write();
   hConeAngleForT->Write();
   hVertexActivityFor2Tracks->Write();
   hOpeningAngleFor2Tracks->Write();
   hOpeningAngleForPionCandidate->Write();
   hOpeningAngleForOA->Write();
   hOpeningAngleForT->Write();
   hT->Write();
   hTConeAngle->Write();
   hTDoCA->Write();
   hTPionCandidate->Write();
   hTOA->Write();
   hTT->Write();
   hDoCAFor2Tracks->Write();
   hDoCAVtxDistanceFor2Tracks->Write();

   hMuonCandidateTracksMuonChi2VsProtonChi2->Write();
   hPionCandidateTracksMuonChi2VsProtonChi2->Write();
   hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Write();
   hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Write();

   hRecoNuEnergyFiducialVolume->Write();
   hRecoNuEnergy->Write();
   hRecoNuEnergyConeAngle->Write();
   hRecoNuEnergyDoCA->Write();
   hRecoNuEnergyPionCandidate->Write();
   hRecoNuEnergyOA->Write();
   hRecoNuEnergyT->Write();

   hDeltaPTT->Write();
   hPN->Write();
   hDeltaAlphaT->Write();
   hDeltaPTTPC->Write();
   hPNPC->Write();
   hDeltaAlphaTPC->Write();

   hNSliceNumberAfterMuon->Write();
   hNSliceNumberAfterPion->Write();

   hRecoMuonCandidateMomentum->Write();
   hRecoPionCandidateMomentum->Write();
   hRecoMuonCandidateMomentumAfterPC->Write();
   hRecoPionCandidateMomentumAfterPC->Write();
   hRecoMuonCandidateMomentumAfterOA->Write();
   hRecoPionCandidateMomentumAfterOA->Write();
   hRecoMuonCandidateMomentumAfterT->Write();
   hRecoPionCandidateMomentumAfterT->Write();

   hRecoMuonCandidateTheta->Write();
   hRecoPionCandidateTheta->Write();
   hRecoMuonCandidateThetaAfterPC->Write();
   hRecoPionCandidateThetaAfterPC->Write();
   hRecoMuonCandidateThetaAfterOA->Write();
   hRecoPionCandidateThetaAfterOA->Write();
   hRecoMuonCandidateThetaAfterT->Write();
   hRecoPionCandidateThetaAfterT->Write();

   hRecoMuonCandidateCosTheta->Write();
   hRecoPionCandidateCosTheta->Write();
   hRecoMuonCandidateCosThetaAfterPC->Write();
   hRecoPionCandidateCosThetaAfterPC->Write();
   hRecoMuonCandidateCosThetaAfterOA->Write();
   hRecoPionCandidateCosThetaAfterOA->Write();
   hRecoMuonCandidateCosThetaAfterT->Write();
   hRecoPionCandidateCosThetaAfterT->Write();

   hRecoMuonCandidatePhi->Write();
   hRecoPionCandidatePhi->Write();
   hRecoMuonCandidatePhiAfterPC->Write();
   hRecoPionCandidatePhiAfterPC->Write();
   hRecoMuonCandidatePhiAfterOA->Write();
   hRecoPionCandidatePhiAfterOA->Write();
   hRecoMuonCandidatePhiAfterT->Write();
   hRecoPionCandidatePhiAfterT->Write();

   hOpeningAngleVsConeAngle2Tracks->Write();
   hOpeningAngleVsConeAnglePC->Write();

   hRecoMuonCandidateCaloU->Write();
   hRecoPionCandidateCaloU->Write();
   hRecoCaloU->Write();

   hRecoMuonCandidateCaloV->Write();
   hRecoPionCandidateCaloV->Write();
   hRecoCaloV->Write();

   hRecoMuonCandidateCaloY->Write();
   hRecoPionCandidateCaloY->Write();
   hRecoCaloY->Write();

   hMuonCandidateTrkLLRPIDScore->Write();
   hPionCandidateTrkLLRPIDScore->Write();
   hMuonCandidateTrkLLRPIDScoreAfterVA->Write();
   hPionCandidateTrkLLRPIDScoreAfterVA->Write();
   hMuonCandidateTrkLLRPIDScoreAfterPC->Write();
   hPionCandidateTrkLLRPIDScoreAfterPC->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
}
