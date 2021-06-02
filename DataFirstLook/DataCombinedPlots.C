#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("../Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("../CCCoh_Daughter_Information.root"); // <-- File for CCCoh Daughters Tree
TFile *f3 = new TFile("../Other_Daughter_Information.root"); // <-- File for Other Daughters Tree
TFile *f4 = new TFile("Data_Histograms.root"); // <-- File for Data Information
TFile *f5 = new TFile("MC_Histograms.root"); // <-- File for New MC Information
TFile *f6 = new TFile("MC_CCCoh_Histograms.root"); // <-- File for New MC CCCoh Information





TH1D *hT = (TH1D*)f4->Get("hT");
TH1D *hTReco = (TH1D*)f5->Get("hT");
TH1D *hTRecoCCCoh = (TH1D*)f6->Get("hT");
TH1D *hTAfter2RecoCCCoh = (TH1D*)f2->Get("hTAfter2Reco");
TH1D *hTAfter2RecoOther = (TH1D*)f3->Get("hTAfter2Reco");
TH1D *hTAfter2TrueCCCoh = (TH1D*)f2->Get("hTAfter2True");
TH1D *hTAfter2TrueOther = (TH1D*)f3->Get("hTAfter2True");

hT->Sumw2();
hTReco->Sumw2();
hTRecoCCCoh->Sumw2();
hTAfter2RecoCCCoh->Sumw2();
hTAfter2RecoOther->Sumw2();
hTAfter2TrueCCCoh->Sumw2();
hTAfter2TrueOther->Sumw2();


TH1D *hT2 = (TH1D*)f4->Get("hTPionCandidate");
TH1D *hT2Reco = (TH1D*)f5->Get("hTPionCandidate");
TH1D *hT2RecoCCCoh = (TH1D*)f6->Get("hTPionCandidate");
TH1D *hTAfterRecoCCCoh = (TH1D*)f2->Get("hTAfterReco");
TH1D *hTAfterRecoOther = (TH1D*)f3->Get("hTAfterReco");
TH1D *hTAfterTrueCCCoh = (TH1D*)f2->Get("hTAfterTrue");
TH1D *hTAfterTrueOther = (TH1D*)f3->Get("hTAfterTrue");

hT2->Sumw2();
hT2Reco->Sumw2();
hT2RecoCCCoh->Sumw2();
hTAfterRecoCCCoh->Sumw2();
hTAfterRecoOther->Sumw2();
hTAfterTrueCCCoh->Sumw2();
hTAfterTrueOther->Sumw2();


TH1D *hNumTrksWithin10 = (TH1D*)f4->Get("hNumTrksWithin10");
TH1D *hNTracksInBubbleCCCoh = (TH1D*)f2->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleOther = (TH1D*)f3->Get("hNTracksInBubble");
TH1D *hNumTrksWithin10MCReco = (TH1D*)f5->Get("hNumTrksWithin10");
TH1D *hNumTrksWithin10MCCCCoh = (TH1D*)f6->Get("hNumTrksWithin10");

hNumTrksWithin10->Sumw2();
hNTracksInBubbleCCCoh->Sumw2();
hNTracksInBubbleOther->Sumw2();
hNumTrksWithin10MCReco->Sumw2();
hNumTrksWithin10MCCCCoh->Sumw2();


TH1D *hNumMuonCandidates = (TH1D*)f4->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesCCCoh = (TH1D*)f2->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesOther = (TH1D*)f3->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesMCReco = (TH1D*)f5->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesMCCCCoh = (TH1D*)f6->Get("hNumMuonCandidates");

hNumMuonCandidates->Sumw2();
hNumMuonCandidatesCCCoh->Sumw2();
hNumMuonCandidatesOther->Sumw2();
hNumMuonCandidatesMCReco->Sumw2();
hNumMuonCandidatesMCCCCoh->Sumw2();


TH1D *hConeAngleFor2Tracks = (TH1D*)f4->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleFor2TracksReco = (TH1D*)f5->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleFor2TracksRecoCCCoh = (TH1D*)f6->Get("hConeAngleFor2Tracks");
TH1D *hRecoConeAngleCCCoh = (TH1D*)f2->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleOther = (TH1D*)f3->Get("hRecoConeAngleAfter2");
TH1D *hTrueConeAngleCCCoh = (TH1D*)f2->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleOther = (TH1D*)f3->Get("hTrueConeAngleAfter2");

hConeAngleFor2Tracks->Sumw2();
hConeAngleFor2TracksReco->Sumw2();
hConeAngleFor2TracksRecoCCCoh->Sumw2();
hRecoConeAngleCCCoh->Sumw2();
hRecoConeAngleOther->Sumw2();
hTrueConeAngleCCCoh->Sumw2();
hTrueConeAngleOther->Sumw2();


TH1D *hOpeningAngleFor2Tracks = (TH1D*)f4->Get("hOpeningAngleFor2Tracks");
TH1D *hRecoOpeningAngleCCCoh = (TH1D*)f2->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleOther = (TH1D*)f3->Get("hRecoOpeningAngleAfter2");
TH1D *hTrueOpeningAngleCCCoh = (TH1D*)f2->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleOther = (TH1D*)f3->Get("hTrueOpeningAngleAfter2");
TH1D *hOpeningAngleFor2TracksMCReco = (TH1D*)f5->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleFor2TracksMCCCCoh = (TH1D*)f6->Get("hOpeningAngleFor2Tracks");

hOpeningAngleFor2Tracks->Sumw2();
hRecoOpeningAngleCCCoh->Sumw2();
hRecoOpeningAngleOther->Sumw2();
hTrueOpeningAngleCCCoh->Sumw2();
hTrueOpeningAngleOther->Sumw2();
hOpeningAngleFor2TracksMCReco->Sumw2();
hOpeningAngleFor2TracksMCCCCoh->Sumw2();


TH1D *hOpeningAngleForPC = (TH1D*)f4->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleForPCMCReco = (TH1D*)f5->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleForPCMCCCCoh = (TH1D*)f6->Get("hOpeningAngleForPionCandidate");

hOpeningAngleForPC->Sumw2();
hOpeningAngleForPCMCReco->Sumw2();
hOpeningAngleForPCMCCCCoh->Sumw2();


TH1D *hRecoNuEnergyFiducialVolume = (TH1D*)f4->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergy = (TH1D*)f4->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyConeAngle = (TH1D*)f4->Get("hRecoNuEnergyConeAngle");
TH1D *hRecoNuEnergyDoCA = (TH1D*)f4->Get("hRecoNuEnergyDoCA");
TH1D *hRecoNuEnergyPionCandidate = (TH1D*)f4->Get("hRecoNuEnergyPionCandidate");
TH1D *hRecoNuEnergyOA = (TH1D*)f4->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyT = (TH1D*)f4->Get("hRecoNuEnergyT");

hRecoNuEnergyFiducialVolume->Sumw2();
hRecoNuEnergy->Sumw2();
hRecoNuEnergyConeAngle->Sumw2();
hRecoNuEnergyDoCA->Sumw2();
hRecoNuEnergyPionCandidate->Sumw2();
hRecoNuEnergyOA->Sumw2();
hRecoNuEnergyT->Sumw2();


TH1D *hRecoNuEnergyFiducialVolumeMC = (TH1D*)f5->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyMC = (TH1D*)f5->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyConeAngleMC = (TH1D*)f5->Get("hRecoNuEnergyConeAngle");
TH1D *hRecoNuEnergyDoCAMC = (TH1D*)f5->Get("hRecoNuEnergyDoCA");
TH1D *hRecoNuEnergyPionCandidateMC = (TH1D*)f5->Get("hRecoNuEnergyPionCandidate");
TH1D *hRecoNuEnergyOAMC = (TH1D*)f5->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyTMC = (TH1D*)f5->Get("hRecoNuEnergyT");

hRecoNuEnergyFiducialVolumeMC->Sumw2();
hRecoNuEnergyMC->Sumw2();
hRecoNuEnergyConeAngleMC->Sumw2();
hRecoNuEnergyDoCAMC->Sumw2();
hRecoNuEnergyPionCandidateMC->Sumw2();
hRecoNuEnergyOAMC->Sumw2();
hRecoNuEnergyTMC->Sumw2();


TH1D *hRecoNuEnergyFiducialVolumeMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyConeAngleMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyConeAngle");
TH1D *hRecoNuEnergyDoCAMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyDoCA");
TH1D *hRecoNuEnergyPionCandidateMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyPionCandidate");
TH1D *hRecoNuEnergyOAMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyTMCCCCoh = (TH1D*)f6->Get("hRecoNuEnergyT");

hRecoNuEnergyFiducialVolumeMCCCCoh->Sumw2();
hRecoNuEnergyMCCCCoh->Sumw2();
hRecoNuEnergyConeAngleMCCCCoh->Sumw2();
hRecoNuEnergyDoCAMCCCCoh->Sumw2();
hRecoNuEnergyPionCandidateMCCCCoh->Sumw2();
hRecoNuEnergyOAMCCCCoh->Sumw2();
hRecoNuEnergyTMCCCCoh->Sumw2();


TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2 = (TH2D*)f4->Get("hMuonCandidateTracksMuonChi2VsProtonChi2");
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2 = (TH2D*)f4->Get("hPionCandidateTracksMuonChi2VsProtonChi2");
TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA = (TH2D*)f4->Get("hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA");
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA = (TH2D*)f4->Get("hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA");


TH1D *hDeltaPTT = (TH1D*)f4->Get("hDeltaPTT");
TH1D *hDeltaPTTPC = (TH1D*)f4->Get("hDeltaPTTPC");
TH1D *hDeltaPTTCCCoh = (TH1D*)f6->Get("hDeltaPTT");
TH1D *hDeltaPTTPCCCCoh = (TH1D*)f6->Get("hDeltaPTTPC");

hDeltaPTT->Sumw2();
hDeltaPTTPC->Sumw2();
hDeltaPTTCCCoh->Sumw2();
hDeltaPTTPCCCCoh->Sumw2();


TH1D *hPN = (TH1D*)f4->Get("hPN");
TH1D *hPNPC = (TH1D*)f4->Get("hPNPC");
TH1D *hPNCCCoh = (TH1D*)f6->Get("hPN");
TH1D *hPNPCCCCoh = (TH1D*)f6->Get("hPNPC");

hPN->Sumw2();
hPNPC->Sumw2();
hPNCCCoh->Sumw2();
hPNPCCCCoh->Sumw2();


TH1D *hDeltaAlphaT = (TH1D*)f4->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPC = (TH1D*)f4->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTCCCoh = (TH1D*)f6->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCCCCoh = (TH1D*)f6->Get("hDeltaAlphaTPC");

hDeltaAlphaT->Sumw2();
hDeltaAlphaTPC->Sumw2();
hDeltaAlphaTCCCoh->Sumw2();
hDeltaAlphaTPCCCCoh->Sumw2();


// ==========================================
// === These are the kinematic histograms ===
// ==========================================
TH1D *hRecoMuonCandidateMomentumData = (TH1D*)f4->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentum");

hRecoMuonCandidateMomentumData->Sumw2();
hRecoMuonCandidateMomentumMC->Sumw2();
hRecoMuonCandidateMomentumMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentumAfterPC");

hRecoMuonCandidateMomentumAfterPCData->Sumw2();
hRecoMuonCandidateMomentumAfterPCMC->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateMomentumData = (TH1D*)f4->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumMC = (TH1D*)f5->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentum");

hRecoPionCandidateMomentumData->Sumw2();
hRecoPionCandidateMomentumMC->Sumw2();
hRecoPionCandidateMomentumMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentumAfterPC");

hRecoPionCandidateMomentumAfterPCData->Sumw2();
hRecoPionCandidateMomentumAfterPCMC->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidateCosThetaData = (TH1D*)f4->Get("hRecoMuonCandidateCosTheta");
TH1D *hRecoMuonCandidateCosThetaMC = (TH1D*)f5->Get("hRecoMuonCandidateCosTheta");
TH1D *hRecoMuonCandidateCosThetaMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateCosTheta");

hRecoMuonCandidateCosThetaData->Sumw2();
hRecoMuonCandidateCosThetaMC->Sumw2();
hRecoMuonCandidateCosThetaMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidateCosThetaAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateCosThetaAfterPC");
TH1D *hRecoMuonCandidateCosThetaAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateCosThetaAfterPC");
TH1D *hRecoMuonCandidateCosThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateCosThetaAfterPC");

hRecoMuonCandidateCosThetaAfterPCData->Sumw2();
hRecoMuonCandidateCosThetaAfterPCMC->Sumw2();
hRecoMuonCandidateCosThetaAfterPCMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateCosThetaData = (TH1D*)f4->Get("hRecoPionCandidateCosTheta");
TH1D *hRecoPionCandidateCosThetaMC = (TH1D*)f5->Get("hRecoPionCandidateCosTheta");
TH1D *hRecoPionCandidateCosThetaMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateCosTheta");

hRecoPionCandidateCosThetaData->Sumw2();
hRecoPionCandidateCosThetaMC->Sumw2();
hRecoPionCandidateCosThetaMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateCosThetaAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateCosThetaAfterPC");
TH1D *hRecoPionCandidateCosThetaAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateCosThetaAfterPC");
TH1D *hRecoPionCandidateCosThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateCosThetaAfterPC");

hRecoPionCandidateCosThetaAfterPCData->Sumw2();
hRecoPionCandidateCosThetaAfterPCMC->Sumw2();
hRecoPionCandidateCosThetaAfterPCMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidateThetaData = (TH1D*)f4->Get("hRecoMuonCandidateTheta");
TH1D *hRecoMuonCandidateThetaMC = (TH1D*)f5->Get("hRecoMuonCandidateTheta");
TH1D *hRecoMuonCandidateThetaMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateTheta");

hRecoMuonCandidateThetaData->Sumw2();
hRecoMuonCandidateThetaMC->Sumw2();
hRecoMuonCandidateThetaMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidateThetaAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hRecoMuonCandidateThetaAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hRecoMuonCandidateThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateThetaAfterPC");

hRecoMuonCandidateThetaAfterPCData->Sumw2();
hRecoMuonCandidateThetaAfterPCMC->Sumw2();
hRecoMuonCandidateThetaAfterPCMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateThetaData = (TH1D*)f4->Get("hRecoPionCandidateTheta");
TH1D *hRecoPionCandidateThetaMC = (TH1D*)f5->Get("hRecoPionCandidateTheta");
TH1D *hRecoPionCandidateThetaMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateTheta");

hRecoPionCandidateThetaData->Sumw2();
hRecoPionCandidateThetaMC->Sumw2();
hRecoPionCandidateThetaMCCCCoh->Sumw2();


TH1D *hRecoPionCandidateThetaAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hRecoPionCandidateThetaAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hRecoPionCandidateThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateThetaAfterPC");

hRecoPionCandidateThetaAfterPCData->Sumw2();
hRecoPionCandidateThetaAfterPCMC->Sumw2();
hRecoPionCandidateThetaAfterPCMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidatePhiData = (TH1D*)f4->Get("hRecoMuonCandidatePhi");
TH1D *hRecoMuonCandidatePhiMC = (TH1D*)f5->Get("hRecoMuonCandidatePhi");
TH1D *hRecoMuonCandidatePhiMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidatePhi");

hRecoMuonCandidatePhiData->Sumw2();
hRecoMuonCandidatePhiMC->Sumw2();
hRecoMuonCandidatePhiMCCCCoh->Sumw2();


TH1D *hRecoMuonCandidatePhiAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hRecoMuonCandidatePhiAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hRecoMuonCandidatePhiAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidatePhiAfterPC");

hRecoMuonCandidatePhiAfterPCData->Sumw2();
hRecoMuonCandidatePhiAfterPCMC->Sumw2();
hRecoMuonCandidatePhiAfterPCMCCCCoh->Sumw2();


TH1D *hRecoPionCandidatePhiData = (TH1D*)f4->Get("hRecoPionCandidatePhi");
TH1D *hRecoPionCandidatePhiMC = (TH1D*)f5->Get("hRecoPionCandidatePhi");
TH1D *hRecoPionCandidatePhiMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidatePhi");

hRecoPionCandidatePhiData->Sumw2();
hRecoPionCandidatePhiMC->Sumw2();
hRecoPionCandidatePhiMCCCCoh->Sumw2();


TH1D *hRecoPionCandidatePhiAfterPCData = (TH1D*)f4->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hRecoPionCandidatePhiAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hRecoPionCandidatePhiAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidatePhiAfterPC");

hRecoPionCandidatePhiAfterPCData->Sumw2();
hRecoPionCandidatePhiAfterPCMC->Sumw2();
hRecoPionCandidatePhiAfterPCMCCCCoh->Sumw2();
// ==========================================


TH1D *hRecoCaloU = (TH1D*)f4->Get("hRecoCaloU");
TH1D *hRecoCaloUMC = (TH1D*)f5->Get("hRecoCaloU");
TH1D *hRecoCaloUMCCCCoh = (TH1D*)f6->Get("hRecoCaloU");

hRecoCaloU->Sumw2();
hRecoCaloUMC->Sumw2();
hRecoCaloUMCCCCoh->Sumw2();


TH1D *hRecoCaloV = (TH1D*)f4->Get("hRecoCaloV");
TH1D *hRecoCaloVMC = (TH1D*)f5->Get("hRecoCaloV");
TH1D *hRecoCaloVMCCCCoh = (TH1D*)f6->Get("hRecoCaloV");

hRecoCaloV->Sumw2();
hRecoCaloVMC->Sumw2();
hRecoCaloVMCCCCoh->Sumw2();


TH1D *hRecoCaloY = (TH1D*)f4->Get("hRecoCaloY");
TH1D *hRecoCaloYMC = (TH1D*)f5->Get("hRecoCaloY");
TH1D *hRecoCaloYMCCCCoh = (TH1D*)f6->Get("hRecoCaloY");

hRecoCaloY->Sumw2();
hRecoCaloYMC->Sumw2();
hRecoCaloYMCCCCoh->Sumw2();




// ========================================
// === Defining Some Scale Factors Here ===
// ========================================
double After2TracksCutMCtoDataScaleFactor = 4132./17065.;
double Run1ScaleFactorData = 1.2847059/0.05;
double MCCCCohToDataScaleFactor = 378./121.;
//double Run1ScaleFactorMC = 0.05/1.2847059;
double Run1ScaleFactorMC = 0.0347;
// ========================================





TCanvas *c1 = new TCanvas("c1", "The Area Normalized |t| Plots After 2 Tracks Selection");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Adding the MC Histograms
hTAfter2RecoCCCoh->Add(hTAfter2RecoOther);
hTAfter2TrueCCCoh->Add(hTAfter2TrueOther);

// Area normalizing the plot 
//hTAfter2RecoCCCoh->Scale(1/hTAfter2RecoCCCoh->Integral());
//hTAfter2TrueCCCoh->Scale(1/hTAfter2TrueCCCoh->Integral());
//hT->Scale(1/hT->Integral());
//hTReco->Scale(1/hTReco->Integral());
//hTRecoCCCoh->Scale(1/hTRecoCCCoh->Integral());
hTAfter2RecoCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
hTAfter2TrueCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hT->Scale(Run1ScaleFactorData);
hTReco->Scale(Run1ScaleFactorMC);
hTRecoCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hTAfter2TrueCCCoh->SetLineColor(kBlue);
hTAfter2TrueCCCoh->SetLineWidth(2);
hTAfter2TrueCCCoh->Rebin(50);

hTAfter2RecoCCCoh->SetLineColor(kRed);
hTAfter2RecoCCCoh->SetLineWidth(2);
hTAfter2RecoCCCoh->Rebin(50);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Rebin(50);

hTReco->SetLineColor(kGreen);
hTReco->SetLineWidth(2);
hTReco->Rebin(50);

hTRecoCCCoh->SetLineColor(kViolet);
hTRecoCCCoh->SetLineWidth(2);
hTRecoCCCoh->Rebin(50);

hT->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hT->GetXaxis()->CenterTitle();

hT->GetYaxis()->SetTitle("Normalized Events");
hT->GetYaxis()->CenterTitle();

hT->Draw("E1");
hTReco->Draw("histosame");
hTRecoCCCoh->Draw("histosame");
hTAfter2RecoCCCoh->Draw("histosame");
hTAfter2TrueCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Samples");
leg1->AddEntry(hTAfter2TrueCCCoh,"MC True");
leg1->AddEntry(hTAfter2RecoCCCoh,"MC Reco");
leg1->AddEntry(hTReco,"MC Reco New");
leg1->AddEntry(hTRecoCCCoh,"MC Reco New CC-Coh");
leg1->AddEntry(hT,"Data");
leg1->Draw();




TCanvas *c2 = new TCanvas("c2", "The Area Normalized Number of Tracks Within 10cm of Neutrino Vertex");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Adding the MC Histograms
hNTracksInBubbleCCCoh->Add(hNTracksInBubbleOther);

// Area normalizing the plot 
//hNTracksInBubbleCCCoh->Scale(1/hNTracksInBubbleCCCoh->Integral());
//hNumTrksWithin10->Scale(1/hNumTrksWithin10->Integral());
//hNumTrksWithin10MCReco->Scale(1/hNumTrksWithin10MCReco->Integral());
//hNumTrksWithin10MCCCCoh->Scale(1/hNumTrksWithin10MCCCCoh->Integral());
hNTracksInBubbleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hNumTrksWithin10->Scale(Run1ScaleFactorData);
hNumTrksWithin10MCReco->Scale(Run1ScaleFactorMC);
hNumTrksWithin10MCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hNTracksInBubbleCCCoh->SetLineColor(kRed);
hNTracksInBubbleCCCoh->SetLineWidth(2);
//hNTracksInBubbleCCCoh->Rebin(50);

hNumTrksWithin10->SetLineColor(kBlack);
hNumTrksWithin10->SetLineWidth(2);
//hNumTrksWithin10->Rebin(50);

hNumTrksWithin10MCReco->SetLineColor(kGreen);
hNumTrksWithin10MCReco->SetLineWidth(2);
//hNumTrksWithin10MCReco->Rebin(50);

hNumTrksWithin10MCCCCoh->SetLineColor(kViolet);
hNumTrksWithin10MCCCCoh->SetLineWidth(2);
//hNumTrksWithin10MCCCCoh->Rebin(50);

hNumTrksWithin10->GetXaxis()->SetTitle("Number of Tracks");
hNumTrksWithin10->GetXaxis()->CenterTitle();

hNumTrksWithin10->GetYaxis()->SetTitle("Normalized Events");
hNumTrksWithin10->GetYaxis()->CenterTitle();

hNumTrksWithin10->Draw("E1");
hNTracksInBubbleCCCoh->Draw("histosame");
hNumTrksWithin10MCReco->Draw("histosame");
hNumTrksWithin10MCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Samples");
leg2->AddEntry(hNTracksInBubbleCCCoh,"MC Reco");
leg2->AddEntry(hNumTrksWithin10MCReco,"MC Reco New");
leg2->AddEntry(hNumTrksWithin10MCCCCoh,"MC Reco New CC-Coh");
leg2->AddEntry(hNumTrksWithin10,"Data");
leg2->Draw();




TCanvas *c3 = new TCanvas("c3", "The Area Normalized Number of Muon Candidates for Events");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Adding the MC Histograms
hNumMuonCandidatesCCCoh->Add(hNumMuonCandidatesOther);

// Area normalizing the plot 
//hNumMuonCandidatesCCCoh->Scale(1/hNumMuonCandidatesCCCoh->Integral());
//hNumMuonCandidates->Scale(1/hNumMuonCandidates->Integral());
//hNumMuonCandidatesMCReco->Scale(1/hNumMuonCandidatesMCReco->Integral());
//hNumMuonCandidatesMCCCCoh->Scale(1/hNumMuonCandidatesMCCCCoh->Integral());
hNumMuonCandidatesCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hNumMuonCandidates->Scale(Run1ScaleFactorData);
hNumMuonCandidatesMCReco->Scale(Run1ScaleFactorMC);
hNumMuonCandidatesMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hNumMuonCandidatesCCCoh->SetLineColor(kRed);
hNumMuonCandidatesCCCoh->SetLineWidth(2);
//hNumMuonCandidatesCCCoh->Rebin(50);

hNumMuonCandidates->SetLineColor(kBlack);
hNumMuonCandidates->SetLineWidth(2);
//hNumMuonCandidates->Rebin(50);

hNumMuonCandidatesMCReco->SetLineColor(kGreen);
hNumMuonCandidatesMCReco->SetLineWidth(2);
//hNumMuonCandidatesMCReco->Rebin(50);

hNumMuonCandidatesMCCCCoh->SetLineColor(kViolet);
hNumMuonCandidatesMCCCCoh->SetLineWidth(2);
//hNumMuonCandidatesMCCCCoh->Rebin(50);

hNumMuonCandidates->GetXaxis()->SetTitle("Number of Muon Candidates");
hNumMuonCandidates->GetXaxis()->CenterTitle();

hNumMuonCandidates->GetYaxis()->SetTitle("Normalized Events");
hNumMuonCandidates->GetYaxis()->CenterTitle();

hNumMuonCandidates->Draw("E1");
hNumMuonCandidatesCCCoh->Draw("histosame");
hNumMuonCandidatesMCReco->Draw("histosame");
hNumMuonCandidatesMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Samples");
leg3->AddEntry(hNumMuonCandidatesCCCoh,"MC Reco");
leg3->AddEntry(hNumMuonCandidatesMCReco,"MC Reco New");
leg3->AddEntry(hNumMuonCandidatesMCCCCoh,"MC Reco New CC-Coh");
leg3->AddEntry(hNumMuonCandidates,"Data");
leg3->Draw();




TCanvas *c4 = new TCanvas("c4", "The Area Normalized Cone Angle for Events Passing 2 Tracks");
c4->SetTicks();
c4->SetFillColor(kWhite);

// Adding the MC Histograms
hRecoConeAngleCCCoh->Add(hRecoConeAngleOther);
hTrueConeAngleCCCoh->Add(hTrueConeAngleOther);

// Area normalizing the plot 
//hRecoConeAngleCCCoh->Scale(1/hRecoConeAngleCCCoh->Integral());
//hTrueConeAngleCCCoh->Scale(1/hTrueConeAngleCCCoh->Integral());
//hConeAngleFor2Tracks->Scale(1/hConeAngleFor2Tracks->Integral());
//hConeAngleFor2TracksReco->Scale(1/hConeAngleFor2TracksReco->Integral());
//hConeAngleFor2TracksRecoCCCoh->Scale(1/hConeAngleFor2TracksRecoCCCoh->Integral());
hRecoConeAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
hTrueConeAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hConeAngleFor2Tracks->Scale(Run1ScaleFactorData);
hConeAngleFor2TracksReco->Scale(Run1ScaleFactorMC);
hConeAngleFor2TracksRecoCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hTrueConeAngleCCCoh->SetLineColor(kBlue);
hTrueConeAngleCCCoh->SetLineWidth(2);
hTrueConeAngleCCCoh->Rebin(9);

hRecoConeAngleCCCoh->SetLineColor(kRed);
hRecoConeAngleCCCoh->SetLineWidth(2);
hRecoConeAngleCCCoh->Rebin(9);

hConeAngleFor2Tracks->SetLineColor(kBlack);
hConeAngleFor2Tracks->SetLineWidth(2);
hConeAngleFor2Tracks->Rebin(9);

hConeAngleFor2TracksReco->SetLineColor(kGreen);
hConeAngleFor2TracksReco->SetLineWidth(2);
hConeAngleFor2TracksReco->Rebin(9);

hConeAngleFor2TracksRecoCCCoh->SetLineColor(kViolet);
hConeAngleFor2TracksRecoCCCoh->SetLineWidth(2);
hConeAngleFor2TracksRecoCCCoh->Rebin(9);

hConeAngleFor2Tracks->GetXaxis()->SetTitle("Cone Angles [Degrees]");
hConeAngleFor2Tracks->GetXaxis()->CenterTitle();

hConeAngleFor2Tracks->GetYaxis()->SetTitle("Normalized Events");
hConeAngleFor2Tracks->GetYaxis()->CenterTitle();

hConeAngleFor2Tracks->Draw("E1");
hTrueConeAngleCCCoh->Draw("histosame");
hRecoConeAngleCCCoh->Draw("histosame");
hConeAngleFor2TracksReco->Draw("histosame");
hConeAngleFor2TracksRecoCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,1.00,1.00);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Samples");
leg4->AddEntry(hTrueConeAngleCCCoh,"MC True");
leg4->AddEntry(hRecoConeAngleCCCoh,"MC Reco");
leg4->AddEntry(hConeAngleFor2TracksReco,"MC Reco New");
leg4->AddEntry(hConeAngleFor2TracksRecoCCCoh,"MC Reco New CC-Coh");
leg4->AddEntry(hConeAngleFor2Tracks,"Data");
leg4->Draw();




TCanvas *c5 = new TCanvas("c5", "The Area Normalized Opening Angle for Events Passing 2 Tracks");
c5->SetTicks();
c5->SetFillColor(kWhite);

// Adding the MC Histograms
hRecoOpeningAngleCCCoh->Add(hRecoOpeningAngleOther);
hTrueOpeningAngleCCCoh->Add(hTrueOpeningAngleOther);

// Area normalizing the plot 
//hRecoOpeningAngleCCCoh->Scale(1/hRecoOpeningAngleCCCoh->Integral());
//hTrueOpeningAngleCCCoh->Scale(1/hTrueOpeningAngleCCCoh->Integral());
//hOpeningAngleFor2Tracks->Scale(1/hOpeningAngleFor2Tracks->Integral());
//hOpeningAngleFor2TracksMCReco->Scale(1/hOpeningAngleFor2TracksMCReco->Integral());
//hOpeningAngleFor2TracksMCCCCoh->Scale(1/hOpeningAngleFor2TracksMCCCCoh->Integral());
hRecoOpeningAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
hTrueOpeningAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hOpeningAngleFor2Tracks->Scale(Run1ScaleFactorData);
hOpeningAngleFor2TracksMCReco->Scale(Run1ScaleFactorMC);
hOpeningAngleFor2TracksMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hTrueOpeningAngleCCCoh->SetLineColor(kBlue);
hTrueOpeningAngleCCCoh->SetLineWidth(2);
hTrueOpeningAngleCCCoh->Rebin(9);

hRecoOpeningAngleCCCoh->SetLineColor(kRed);
hRecoOpeningAngleCCCoh->SetLineWidth(2);
hRecoOpeningAngleCCCoh->Rebin(9);

hOpeningAngleFor2Tracks->SetLineColor(kBlack);
hOpeningAngleFor2Tracks->SetLineWidth(2);
hOpeningAngleFor2Tracks->Rebin(9);

hOpeningAngleFor2TracksMCReco->SetLineColor(kGreen);
hOpeningAngleFor2TracksMCReco->SetLineWidth(2);
hOpeningAngleFor2TracksMCReco->Rebin(9);

hOpeningAngleFor2TracksMCCCCoh->SetLineColor(kViolet);
hOpeningAngleFor2TracksMCCCCoh->SetLineWidth(2);
hOpeningAngleFor2TracksMCCCCoh->Rebin(9);

hOpeningAngleFor2Tracks->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleFor2Tracks->GetXaxis()->CenterTitle();

hOpeningAngleFor2Tracks->GetYaxis()->SetTitle("Normalized Events");
hOpeningAngleFor2Tracks->GetYaxis()->CenterTitle();

hOpeningAngleFor2Tracks->Draw("E1");
hRecoOpeningAngleCCCoh->Draw("histosame");
hTrueOpeningAngleCCCoh->Draw("histosame");
hOpeningAngleFor2TracksMCReco->Draw("histosame");
hOpeningAngleFor2TracksMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,1.00,1.00);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Samples");
leg5->AddEntry(hTrueOpeningAngleCCCoh,"MC True");
leg5->AddEntry(hRecoOpeningAngleCCCoh,"MC Reco");
leg5->AddEntry(hOpeningAngleFor2TracksMCReco,"MC Reco New");
leg5->AddEntry(hOpeningAngleFor2TracksMCCCCoh,"MC Reco New CC-Coh");
leg5->AddEntry(hOpeningAngleFor2Tracks,"Data");
leg5->Draw();




TCanvas *c6 = new TCanvas("c6", "The Reconstructed Neutrino Energy for Events After 2-Tracks Selection");
c6->SetTicks();
c6->SetFillColor(kWhite);

// Setting Drawing Parameters
hRecoNuEnergy->SetLineColor(kBlack);
hRecoNuEnergy->SetLineWidth(2);
hRecoNuEnergy->Rebin(50);

hRecoNuEnergyConeAngle->SetLineColor(kBlue);
hRecoNuEnergyConeAngle->SetLineWidth(2);
hRecoNuEnergyConeAngle->Rebin(50);

hRecoNuEnergyDoCA->SetLineColor(kRed);
hRecoNuEnergyDoCA->SetLineWidth(2);
hRecoNuEnergyDoCA->Rebin(50);

hRecoNuEnergyPionCandidate->SetLineColor(kGreen);
hRecoNuEnergyPionCandidate->SetLineWidth(2);
hRecoNuEnergyPionCandidate->Rebin(50);

hRecoNuEnergyT->SetLineColor(kGray);
hRecoNuEnergyT->SetLineWidth(2);
hRecoNuEnergyT->Rebin(50);

hRecoNuEnergy->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hRecoNuEnergy->GetXaxis()->CenterTitle();

hRecoNuEnergy->GetYaxis()->SetTitle("Events");
hRecoNuEnergy->GetYaxis()->CenterTitle();

hRecoNuEnergy->Draw("E1");
hRecoNuEnergyConeAngle->Draw("E1same");
hRecoNuEnergyDoCA->Draw("E1same");
hRecoNuEnergyPionCandidate->Draw("E1same");
hRecoNuEnergyT->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,1.00,1.00);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("After Which Selection");
leg6->AddEntry(hRecoNuEnergy,"2-Tracks");
leg6->AddEntry(hRecoNuEnergyConeAngle,"Cone Angle");
leg6->AddEntry(hRecoNuEnergyDoCA,"DoCA");
leg6->AddEntry(hRecoNuEnergyPionCandidate,"Pion Candidacy");
leg6->AddEntry(hRecoNuEnergyT,"|t|");
leg6->Draw();




TCanvas *c7 = new TCanvas("c7", "Muon Candidate Tracks After 2-Tracks Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c7->SetTicks();
c7->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2->Draw("COLZ");




TCanvas *c8 = new TCanvas("c8", "Pion Candidate Tracks After 2-Tracks Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c8->SetTicks();
c8->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2->Draw("COLZ");




TCanvas *c9 = new TCanvas("c9", "Muon Candidate Tracks After DoCA Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c9->SetTicks();
c9->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Draw("COLZ");




TCanvas *c10 = new TCanvas("c10", "Pion Candidate Tracks After DoCA Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c10->SetTicks();
c10->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Draw("COLZ");





TCanvas *c11 = new TCanvas("c11", "The Area Normalized |t| Plots After Pion Candidate Selection");
c11->SetTicks();
c11->SetFillColor(kWhite);

// Adding the MC Histograms
hTAfterRecoCCCoh->Add(hTAfterRecoOther);
hTAfterTrueCCCoh->Add(hTAfterTrueOther);

// Area normalizing the plot 
//hTAfterRecoCCCoh->Scale(1/hTAfterRecoCCCoh->Integral());
//hTAfterTrueCCCoh->Scale(1/hTAfterTrueCCCoh->Integral());
//hT2->Scale(1/hT2->Integral());
//hT2Reco->Scale(1/hT2Reco->Integral());
//hT2RecoCCCoh->Scale(1/hT2RecoCCCoh->Integral());
hTAfterRecoCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
hTAfterTrueCCCoh->Scale(After2TracksCutMCtoDataScaleFactor*Run1ScaleFactorMC);
//hT2->Scale(Run1ScaleFactorData);
hT2Reco->Scale(Run1ScaleFactorMC);
hT2RecoCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hTAfterTrueCCCoh->SetLineColor(kBlue);
hTAfterTrueCCCoh->SetLineWidth(2);
hTAfterTrueCCCoh->Rebin(50);

hTAfterRecoCCCoh->SetLineColor(kRed);
hTAfterRecoCCCoh->SetLineWidth(2);
hTAfterRecoCCCoh->Rebin(50);

hT2->SetLineColor(kBlack);
hT2->SetLineWidth(2);
hT2->Rebin(50);

hT2Reco->SetLineColor(kGreen);
hT2Reco->SetLineWidth(2);
hT2Reco->Rebin(50);

hT2RecoCCCoh->SetLineColor(kViolet);
hT2RecoCCCoh->SetLineWidth(2);
hT2RecoCCCoh->Rebin(50);

hT2->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hT2->GetXaxis()->CenterTitle();

hT2->GetYaxis()->SetTitle("Normalized Events");
hT2->GetYaxis()->CenterTitle();

hT2->Draw("E1");
hT2Reco->Draw("histosame");
hT2RecoCCCoh->Draw("histosame");
hTAfterRecoCCCoh->Draw("histosame");
hTAfterTrueCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg11 = new TLegend();
leg11 = new TLegend(0.58,0.65,1.00,1.00);
leg11->SetTextSize(0.04);
leg11->SetTextAlign(12);
leg11->SetFillColor(kWhite);
leg11->SetLineColor(kWhite);
leg11->SetShadowColor(kWhite);
leg11->SetHeader("Samples");
leg11->AddEntry(hTAfterTrueCCCoh,"MC True");
leg11->AddEntry(hTAfterRecoCCCoh,"MC Reco");
leg11->AddEntry(hT2Reco,"MC Reco New");
leg11->AddEntry(hT2RecoCCCoh,"MC Reco New CC-Coh");
leg11->AddEntry(hT2,"Data");
leg11->Draw();





TCanvas *c12 = new TCanvas("c12", "The TKI Variable DeltaP_TT Plots After 2-Tracks and After Pion Candidate Selection");
c12->SetTicks();
c12->SetFillColor(kWhite);

// Area normalizing the plot 
hDeltaPTTCCCoh->Scale(MCCCCohToDataScaleFactor);
hDeltaPTTPCCCCoh->Scale(MCCCCohToDataScaleFactor);

// Setting Drawing Parameters
hDeltaPTT->SetLineColor(kBlue);
hDeltaPTT->SetLineWidth(2);
hDeltaPTT->Rebin(20);

hDeltaPTTPC->SetLineColor(kRed);
hDeltaPTTPC->SetLineWidth(2);
hDeltaPTTPC->Rebin(20);

hDeltaPTTCCCoh->SetLineColor(kCyan);
hDeltaPTTCCCoh->SetLineWidth(2);
hDeltaPTTCCCoh->Rebin(20);

hDeltaPTTPCCCCoh->SetLineColor(kMagenta);
hDeltaPTTPCCCCoh->SetLineWidth(2);
hDeltaPTTPCCCCoh->Rebin(20);

hDeltaPTT->GetXaxis()->SetTitle("#deltap_{TT} [GeV/c]");
hDeltaPTT->GetXaxis()->CenterTitle();

hDeltaPTT->GetYaxis()->SetTitle("Normalized Events");
hDeltaPTT->GetYaxis()->CenterTitle();

hDeltaPTT->Draw("E1");
hDeltaPTTPC->Draw("E1same");
hDeltaPTTCCCoh->Draw("histosame");
hDeltaPTTPCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg12 = new TLegend();
leg12 = new TLegend(0.58,0.65,1.00,1.00);
leg12->SetTextSize(0.04);
leg12->SetTextAlign(12);
leg12->SetFillColor(kWhite);
leg12->SetLineColor(kWhite);
leg12->SetShadowColor(kWhite);
leg12->SetHeader("After Which Selection");
leg12->AddEntry(hDeltaPTT,"2-Tracks");
leg12->AddEntry(hDeltaPTTPC,"Pion Candidacy");
leg12->AddEntry(hDeltaPTTCCCoh,"2-Tracks MC New CC-Coh");
leg12->AddEntry(hDeltaPTTPCCCCoh,"Pion Candidacy MC New CC-Coh");
leg12->Draw();





TCanvas *c13 = new TCanvas("c13", "The TKI Variable P_N Plots After 2-Tracks and After Pion Candidate Selection");
c13->SetTicks();
c13->SetFillColor(kWhite);

// Area normalizing the plot 
hPNCCCoh->Scale(MCCCCohToDataScaleFactor);
hPNPCCCCoh->Scale(MCCCCohToDataScaleFactor);

// Setting Drawing Parameters
hPN->SetLineColor(kBlue);
hPN->SetLineWidth(2);
hPN->Rebin(20);

hPNPC->SetLineColor(kRed);
hPNPC->SetLineWidth(2);
hPNPC->Rebin(20);

hPNCCCoh->SetLineColor(kCyan);
hPNCCCoh->SetLineWidth(2);
hPNCCCoh->Rebin(20);

hPNPCCCCoh->SetLineColor(kMagenta);
hPNPCCCCoh->SetLineWidth(2);
hPNPCCCCoh->Rebin(20);

hPN->GetXaxis()->SetTitle("p_{N} [GeV/c]");
hPN->GetXaxis()->CenterTitle();

hPN->GetYaxis()->SetTitle("Normalized Events");
hPN->GetYaxis()->CenterTitle();

hPN->Draw("E1");
hPNPC->Draw("E1same");
hPNCCCoh->Draw("histosame");
hPNPCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg13 = new TLegend();
leg13 = new TLegend(0.58,0.65,1.00,1.00);
leg13->SetTextSize(0.04);
leg13->SetTextAlign(12);
leg13->SetFillColor(kWhite);
leg13->SetLineColor(kWhite);
leg13->SetShadowColor(kWhite);
leg13->SetHeader("After Which Selection");
leg13->AddEntry(hPN,"2-Tracks");
leg13->AddEntry(hPNPC,"Pion Candidacy");
leg13->AddEntry(hPNCCCoh,"2-Tracks MC New CC-Coh");
leg13->AddEntry(hPNPCCCCoh,"Pion Candidacy MC New CC-Coh");
leg13->Draw();





TCanvas *c14 = new TCanvas("c14", "The TKI Variable DeltaAlpha_T Plots After 2-Tracks and After Pion Candidate Selection");
c14->SetTicks();
c14->SetFillColor(kWhite);

// Area normalizing the plot 
hDeltaAlphaTCCCoh->Scale(MCCCCohToDataScaleFactor);
hDeltaAlphaTPCCCCoh->Scale(MCCCCohToDataScaleFactor);

// Setting Drawing Parameters
hDeltaAlphaT->SetLineColor(kBlue);
hDeltaAlphaT->SetLineWidth(2);
hDeltaAlphaT->Rebin(5);

hDeltaAlphaTPC->SetLineColor(kRed);
hDeltaAlphaTPC->SetLineWidth(2);
hDeltaAlphaTPC->Rebin(5);

hDeltaAlphaTCCCoh->SetLineColor(kCyan);
hDeltaAlphaTCCCoh->SetLineWidth(2);
hDeltaAlphaTCCCoh->Rebin(5);

hDeltaAlphaTPCCCCoh->SetLineColor(kMagenta);
hDeltaAlphaTPCCCCoh->SetLineWidth(2);
hDeltaAlphaTPCCCCoh->Rebin(5);

hDeltaAlphaT->GetXaxis()->SetTitle("#delta#alpha_{T} [Degrees]");
hDeltaAlphaT->GetXaxis()->CenterTitle();

hDeltaAlphaT->GetYaxis()->SetTitle("Normalized Events");
hDeltaAlphaT->GetYaxis()->CenterTitle();

hDeltaAlphaT->Draw("E1");
hDeltaAlphaTPC->Draw("E1same");
hDeltaAlphaTCCCoh->Draw("histosame");
hDeltaAlphaTPCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg14 = new TLegend();
leg14 = new TLegend(0.58,0.65,1.00,1.00);
leg14->SetTextSize(0.04);
leg14->SetTextAlign(12);
leg14->SetFillColor(kWhite);
leg14->SetLineColor(kWhite);
leg14->SetShadowColor(kWhite);
leg14->SetHeader("After Which Selection");
leg14->AddEntry(hDeltaAlphaT,"2-Tracks");
leg14->AddEntry(hDeltaAlphaTPC,"Pion Candidacy");
leg14->AddEntry(hDeltaAlphaTCCCoh,"2-Tracks MC New CC-Coh");
leg14->AddEntry(hDeltaAlphaTPCCCCoh,"Pion Candidacy MC New CC-Coh");
leg14->Draw();





TCanvas *c15 = new TCanvas("c15", "The Muon Candidate and Pion Candidate Momenta After 2-Track Selection");
c15->SetTicks();
c15->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateMomentumMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateMomentumData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumData->SetLineWidth(2);
hRecoMuonCandidateMomentumData->Rebin(10);

hRecoMuonCandidateMomentumMC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumMC->SetLineWidth(2);
hRecoMuonCandidateMomentumMC->Rebin(10);

hRecoMuonCandidateMomentumMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateMomentumMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateMomentumMCCCCoh->Rebin(10);

hRecoPionCandidateMomentumData->SetLineColor(kGray + 1);
hRecoPionCandidateMomentumData->SetLineWidth(2);
hRecoPionCandidateMomentumData->Rebin(10);

hRecoPionCandidateMomentumMC->SetLineColor(kBlue);
hRecoPionCandidateMomentumMC->SetLineWidth(2);
hRecoPionCandidateMomentumMC->Rebin(10);

hRecoPionCandidateMomentumMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateMomentumMCCCCoh->SetLineWidth(2);
hRecoPionCandidateMomentumMCCCCoh->Rebin(10);

hRecoPionCandidateMomentumData->GetXaxis()->SetTitle("p [GeV/c]");
hRecoPionCandidateMomentumData->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumData->GetXaxis()->SetRangeUser(0, 3);

hRecoPionCandidateMomentumData->GetYaxis()->SetTitle("Normalized Events");
hRecoPionCandidateMomentumData->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumData->Draw("E1");
hRecoMuonCandidateMomentumData->Draw("E1same");
hRecoMuonCandidateMomentumMC->Draw("histosame");
hRecoPionCandidateMomentumMC->Draw("histosame");
hRecoMuonCandidateMomentumMCCCCoh->Draw("histosame");
hRecoPionCandidateMomentumMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg15 = new TLegend();
leg15 = new TLegend(0.58,0.65,1.00,1.00);
leg15->SetTextSize(0.04);
leg15->SetTextAlign(12);
leg15->SetFillColor(kWhite);
leg15->SetLineColor(kWhite);
leg15->SetShadowColor(kWhite);
leg15->SetHeader("Which Particle Candidate");
leg15->AddEntry(hRecoMuonCandidateMomentumData,"#mu Candidate Data");
leg15->AddEntry(hRecoPionCandidateMomentumData,"#pi Candidate Data");
leg15->AddEntry(hRecoMuonCandidateMomentumMC,"#mu Candidate MC");
leg15->AddEntry(hRecoPionCandidateMomentumMC,"#pi Candidate MC");
leg15->AddEntry(hRecoMuonCandidateMomentumMCCCCoh,"#mu Candidate MC CC-Coh");
leg15->AddEntry(hRecoPionCandidateMomentumMCCCCoh,"#pi Candidate MC CC-Coh");
leg15->Draw();





TCanvas *c16 = new TCanvas("c16", "The Muon Candidate and Pion Candidate Momenta After Opening Angle");
c16->SetTicks();
c16->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateMomentumAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterPCData->Rebin(10);

hRecoMuonCandidateMomentumAfterPCMC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumAfterPCMC->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterPCMC->Rebin(10);

hRecoMuonCandidateMomentumAfterPCMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Rebin(10);

hRecoPionCandidateMomentumAfterPCData->SetLineColor(kGray+2);
hRecoPionCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoPionCandidateMomentumAfterPCData->Rebin(10);

hRecoPionCandidateMomentumAfterPCMC->SetLineColor(kBlue);
hRecoPionCandidateMomentumAfterPCMC->SetLineWidth(2);
hRecoPionCandidateMomentumAfterPCMC->Rebin(10);

hRecoPionCandidateMomentumAfterPCMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateMomentumAfterPCMCCCCoh->SetLineWidth(2);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Rebin(10);

hRecoPionCandidateMomentumAfterPCData->GetXaxis()->SetTitle("p [GeV/c]");
hRecoPionCandidateMomentumAfterPCData->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumAfterPCData->GetXaxis()->SetRangeUser(0, 3);

hRecoPionCandidateMomentumAfterPCData->GetYaxis()->SetTitle("Normalized Events");
hRecoPionCandidateMomentumAfterPCData->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumAfterPCData->Draw("E1");
hRecoMuonCandidateMomentumAfterPCData->Draw("E1same");
hRecoMuonCandidateMomentumAfterPCMC->Draw("histosame");
hRecoPionCandidateMomentumAfterPCMC->Draw("histosame");
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Draw("histosame");
hRecoPionCandidateMomentumAfterPCMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg16 = new TLegend();
leg16 = new TLegend(0.58,0.65,1.00,1.00);
leg16->SetTextSize(0.04);
leg16->SetTextAlign(12);
leg16->SetFillColor(kWhite);
leg16->SetLineColor(kWhite);
leg16->SetShadowColor(kWhite);
leg16->SetHeader("Which Particle Candidate");
leg16->AddEntry(hRecoMuonCandidateMomentumAfterPCData,"#mu Candidate Data");
leg16->AddEntry(hRecoPionCandidateMomentumAfterPCData,"#pi Candidate Data");
leg16->AddEntry(hRecoMuonCandidateMomentumAfterPCMC,"#mu Candidate MC");
leg16->AddEntry(hRecoPionCandidateMomentumAfterPCMC,"#pi Candidate MC");
leg16->AddEntry(hRecoMuonCandidateMomentumAfterPCMCCCCoh,"#mu Candidate MC CC-Coh");
leg16->AddEntry(hRecoPionCandidateMomentumAfterPCMCCCCoh,"#pi Candidate MC CC-Coh");
leg16->Draw();





TCanvas *c17 = new TCanvas("c17", "The Muon Candidate and Pion Candidate Cos(#theta) After 2-Track Selection");
c17->SetTicks();
c17->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateCosThetaMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateCosThetaMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateCosThetaMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateCosThetaMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateCosThetaData->SetLineColor(kBlack);
hRecoMuonCandidateCosThetaData->SetLineWidth(2);
hRecoMuonCandidateCosThetaData->Rebin(50);

hRecoMuonCandidateCosThetaMC->SetLineColor(kGreen);
hRecoMuonCandidateCosThetaMC->SetLineWidth(2);
hRecoMuonCandidateCosThetaMC->Rebin(50);

hRecoMuonCandidateCosThetaMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateCosThetaMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateCosThetaMCCCCoh->Rebin(50);

hRecoPionCandidateCosThetaData->SetLineColor(kGray);
hRecoPionCandidateCosThetaData->SetLineWidth(2);
hRecoPionCandidateCosThetaData->Rebin(50);

hRecoPionCandidateCosThetaMC->SetLineColor(kBlue);
hRecoPionCandidateCosThetaMC->SetLineWidth(2);
hRecoPionCandidateCosThetaMC->Rebin(50);

hRecoPionCandidateCosThetaMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateCosThetaMCCCCoh->SetLineWidth(2);
hRecoPionCandidateCosThetaMCCCCoh->Rebin(50);

hRecoMuonCandidateCosThetaData->GetXaxis()->SetTitle("Cos(#theta)");
hRecoMuonCandidateCosThetaData->GetXaxis()->CenterTitle();

hRecoMuonCandidateCosThetaData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidateCosThetaData->GetYaxis()->CenterTitle();

hRecoMuonCandidateCosThetaData->Draw("E1");
hRecoPionCandidateCosThetaData->Draw("E1same");
hRecoMuonCandidateCosThetaMC->Draw("histosame");
hRecoPionCandidateCosThetaMC->Draw("histosame");
hRecoMuonCandidateCosThetaMCCCCoh->Draw("histosame");
hRecoPionCandidateCosThetaMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg17 = new TLegend();
leg17 = new TLegend(0.58,0.65,1.00,1.00);
leg17->SetTextSize(0.04);
leg17->SetTextAlign(12);
leg17->SetFillColor(kWhite);
leg17->SetLineColor(kWhite);
leg17->SetShadowColor(kWhite);
leg17->SetHeader("Which Particle Candidate");
leg17->AddEntry(hRecoMuonCandidateCosThetaData,"#mu Candidate Data");
leg17->AddEntry(hRecoPionCandidateCosThetaData,"#pi Candidate Data");
leg17->AddEntry(hRecoMuonCandidateCosThetaMC,"#mu Candidate MC");
leg17->AddEntry(hRecoPionCandidateCosThetaMC,"#pi Candidate MC");
leg17->AddEntry(hRecoMuonCandidateCosThetaMCCCCoh,"#mu Candidate MC CC-Coh");
leg17->AddEntry(hRecoPionCandidateCosThetaMCCCCoh,"#pi Candidate MC CC-Coh");
leg17->Draw();





TCanvas *c18 = new TCanvas("c18", "The Muon Candidate and Pion Candidate Cos(#theta) After Pion Candidacy");
c18->SetTicks();
c18->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateCosThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateCosThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateCosThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateCosThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateCosThetaAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidateCosThetaAfterPCData->SetLineWidth(2);
hRecoMuonCandidateCosThetaAfterPCData->Rebin(50);

hRecoMuonCandidateCosThetaAfterPCMC->SetLineColor(kGreen);
hRecoMuonCandidateCosThetaAfterPCMC->SetLineWidth(2);
hRecoMuonCandidateCosThetaAfterPCMC->Rebin(50);

hRecoMuonCandidateCosThetaAfterPCMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateCosThetaAfterPCMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateCosThetaAfterPCMCCCCoh->Rebin(50);

hRecoPionCandidateCosThetaAfterPCData->SetLineColor(kGray);
hRecoPionCandidateCosThetaAfterPCData->SetLineWidth(2);
hRecoPionCandidateCosThetaAfterPCData->Rebin(50);

hRecoPionCandidateCosThetaAfterPCMC->SetLineColor(kBlue);
hRecoPionCandidateCosThetaAfterPCMC->SetLineWidth(2);
hRecoPionCandidateCosThetaAfterPCMC->Rebin(50);

hRecoPionCandidateCosThetaAfterPCMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateCosThetaAfterPCMCCCCoh->SetLineWidth(2);
hRecoPionCandidateCosThetaAfterPCMCCCCoh->Rebin(50);

hRecoMuonCandidateCosThetaAfterPCData->GetXaxis()->SetTitle("Cos(#theta)");
hRecoMuonCandidateCosThetaAfterPCData->GetXaxis()->CenterTitle();

hRecoMuonCandidateCosThetaAfterPCData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidateCosThetaAfterPCData->GetYaxis()->CenterTitle();

hRecoMuonCandidateCosThetaAfterPCData->Draw("E1");
hRecoPionCandidateCosThetaAfterPCData->Draw("E1same");
hRecoMuonCandidateCosThetaAfterPCMC->Draw("histosame");
hRecoPionCandidateCosThetaAfterPCMC->Draw("histosame");
hRecoMuonCandidateCosThetaAfterPCMCCCCoh->Draw("histosame");
hRecoPionCandidateCosThetaAfterPCMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg18 = new TLegend();
leg18 = new TLegend(0.58,0.65,1.00,1.00);
leg18->SetTextSize(0.04);
leg18->SetTextAlign(12);
leg18->SetFillColor(kWhite);
leg18->SetLineColor(kWhite);
leg18->SetShadowColor(kWhite);
leg18->SetHeader("Which Particle Candidate");
leg18->AddEntry(hRecoMuonCandidateCosThetaAfterPCData,"#mu Candidate Data");
leg18->AddEntry(hRecoPionCandidateCosThetaAfterPCData,"#pi Candidate Data");
leg18->AddEntry(hRecoMuonCandidateCosThetaAfterPCMC,"#mu Candidate MC");
leg18->AddEntry(hRecoPionCandidateCosThetaAfterPCMC,"#pi Candidate MC");
leg18->AddEntry(hRecoMuonCandidateCosThetaAfterPCMCCCCoh,"#mu Candidate MC CC-Coh");
leg18->AddEntry(hRecoPionCandidateCosThetaAfterPCMCCCCoh,"#pi Candidate MC CC-Coh");
leg18->Draw();





TCanvas *c19 = new TCanvas("c19", "The Muon Candidate and Pion Candidate #theta After 2-Track Selection");
c19->SetTicks();
c19->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateThetaMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateThetaMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateThetaMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateThetaMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateThetaData->SetLineColor(kBlack);
hRecoMuonCandidateThetaData->SetLineWidth(2);
hRecoMuonCandidateThetaData->Rebin(25);

hRecoMuonCandidateThetaMC->SetLineColor(kGreen);
hRecoMuonCandidateThetaMC->SetLineWidth(2);
hRecoMuonCandidateThetaMC->Rebin(25);

hRecoMuonCandidateThetaMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateThetaMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateThetaMCCCCoh->Rebin(25);

hRecoPionCandidateThetaData->SetLineColor(kGray);
hRecoPionCandidateThetaData->SetLineWidth(2);
hRecoPionCandidateThetaData->Rebin(25);

hRecoPionCandidateThetaMC->SetLineColor(kBlue);
hRecoPionCandidateThetaMC->SetLineWidth(2);
hRecoPionCandidateThetaMC->Rebin(25);

hRecoPionCandidateThetaMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateThetaMCCCCoh->SetLineWidth(2);
hRecoPionCandidateThetaMCCCCoh->Rebin(25);

hRecoMuonCandidateThetaData->GetXaxis()->SetTitle("#theta [Degrees]");
hRecoMuonCandidateThetaData->GetXaxis()->CenterTitle();
hRecoMuonCandidateThetaData->GetXaxis()->SetRangeUser(0, 90);

hRecoMuonCandidateThetaData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidateThetaData->GetYaxis()->CenterTitle();

hRecoMuonCandidateThetaData->Draw("E1");
hRecoPionCandidateThetaData->Draw("E1same");
hRecoMuonCandidateThetaMC->Draw("histosame");
hRecoPionCandidateThetaMC->Draw("histosame");
hRecoMuonCandidateThetaMCCCCoh->Draw("histosame");
hRecoPionCandidateThetaMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg19 = new TLegend();
leg19 = new TLegend(0.58,0.65,1.00,1.00);
leg19->SetTextSize(0.04);
leg19->SetTextAlign(12);
leg19->SetFillColor(kWhite);
leg19->SetLineColor(kWhite);
leg19->SetShadowColor(kWhite);
leg19->SetHeader("Which Particle Candidate");
leg19->AddEntry(hRecoMuonCandidateThetaData,"#mu Candidate Data");
leg19->AddEntry(hRecoPionCandidateThetaData,"#pi Candidate Data");
leg19->AddEntry(hRecoMuonCandidateThetaMC,"#mu Candidate MC");
leg19->AddEntry(hRecoPionCandidateThetaMC,"#pi Candidate MC");
leg19->AddEntry(hRecoMuonCandidateThetaMCCCCoh,"#mu Candidate MC CC-Coh");
leg19->AddEntry(hRecoPionCandidateThetaMCCCCoh,"#pi Candidate MC CC-Coh");
leg19->Draw();





TCanvas *c20 = new TCanvas("c20", "The Muon Candidate and Pion Candidate #theta After Pion Candidacy");
c20->SetTicks();
c20->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidateThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidateThetaAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidateThetaAfterPCData->SetLineWidth(2);
hRecoMuonCandidateThetaAfterPCData->Rebin(25);

hRecoMuonCandidateThetaAfterPCMC->SetLineColor(kGreen);
hRecoMuonCandidateThetaAfterPCMC->SetLineWidth(2);
hRecoMuonCandidateThetaAfterPCMC->Rebin(25);

hRecoMuonCandidateThetaAfterPCMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidateThetaAfterPCMCCCCoh->SetLineWidth(2);
hRecoMuonCandidateThetaAfterPCMCCCCoh->Rebin(25);

hRecoPionCandidateThetaAfterPCData->SetLineColor(kGray);
hRecoPionCandidateThetaAfterPCData->SetLineWidth(2);
hRecoPionCandidateThetaAfterPCData->Rebin(25);

hRecoPionCandidateThetaAfterPCMC->SetLineColor(kBlue);
hRecoPionCandidateThetaAfterPCMC->SetLineWidth(2);
hRecoPionCandidateThetaAfterPCMC->Rebin(25);

hRecoPionCandidateThetaAfterPCMCCCCoh->SetLineColor(kRed);
hRecoPionCandidateThetaAfterPCMCCCCoh->SetLineWidth(2);
hRecoPionCandidateThetaAfterPCMCCCCoh->Rebin(25);

hRecoMuonCandidateThetaAfterPCData->GetXaxis()->SetTitle("#theta [Degrees]");
hRecoMuonCandidateThetaAfterPCData->GetXaxis()->CenterTitle();
hRecoMuonCandidateThetaAfterPCData->GetXaxis()->SetRangeUser(0, 90);

hRecoMuonCandidateThetaAfterPCData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidateThetaAfterPCData->GetYaxis()->CenterTitle();

hRecoMuonCandidateThetaAfterPCData->Draw("E1");
hRecoPionCandidateThetaAfterPCData->Draw("E1same");
hRecoMuonCandidateThetaAfterPCMC->Draw("histosame");
hRecoPionCandidateThetaAfterPCMC->Draw("histosame");
hRecoMuonCandidateThetaAfterPCMCCCCoh->Draw("histosame");
hRecoPionCandidateThetaAfterPCMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg20 = new TLegend();
leg20 = new TLegend(0.58,0.65,1.00,1.00);
leg20->SetTextSize(0.04);
leg20->SetTextAlign(12);
leg20->SetFillColor(kWhite);
leg20->SetLineColor(kWhite);
leg20->SetShadowColor(kWhite);
leg20->SetHeader("Which Particle Candidate");
leg20->AddEntry(hRecoMuonCandidateThetaAfterPCData,"#mu Candidate Data");
leg20->AddEntry(hRecoPionCandidateThetaAfterPCData,"#pi Candidate Data");
leg20->AddEntry(hRecoMuonCandidateThetaAfterPCMC,"#mu Candidate MC");
leg20->AddEntry(hRecoPionCandidateThetaAfterPCMC,"#pi Candidate MC");
leg20->AddEntry(hRecoMuonCandidateThetaAfterPCMCCCCoh,"#mu Candidate MC CC-Coh");
leg20->AddEntry(hRecoPionCandidateThetaAfterPCMCCCCoh,"#pi Candidate MC CC-Coh");
leg20->Draw();





TCanvas *c21 = new TCanvas("c21", "The Muon Candidate and Pion Candidate #phi After 2-Track Selection");
c21->SetTicks();
c21->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidatePhiMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidatePhiMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidatePhiMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidatePhiMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidatePhiData->SetLineColor(kBlack);
hRecoMuonCandidatePhiData->SetLineWidth(2);
hRecoMuonCandidatePhiData->Rebin(40);

hRecoMuonCandidatePhiMC->SetLineColor(kGreen);
hRecoMuonCandidatePhiMC->SetLineWidth(2);
hRecoMuonCandidatePhiMC->Rebin(40);

hRecoMuonCandidatePhiMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidatePhiMCCCCoh->SetLineWidth(2);
hRecoMuonCandidatePhiMCCCCoh->Rebin(40);

hRecoPionCandidatePhiData->SetLineColor(kGray);
hRecoPionCandidatePhiData->SetLineWidth(2);
hRecoPionCandidatePhiData->Rebin(40);

hRecoPionCandidatePhiMC->SetLineColor(kBlue);
hRecoPionCandidatePhiMC->SetLineWidth(2);
hRecoPionCandidatePhiMC->Rebin(40);

hRecoPionCandidatePhiMCCCCoh->SetLineColor(kRed);
hRecoPionCandidatePhiMCCCCoh->SetLineWidth(2);
hRecoPionCandidatePhiMCCCCoh->Rebin(40);

hRecoMuonCandidatePhiData->GetXaxis()->SetTitle("#phi [Degrees]");
hRecoMuonCandidatePhiData->GetXaxis()->CenterTitle();

hRecoMuonCandidatePhiData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidatePhiData->GetYaxis()->CenterTitle();
//hRecoMuonCandidatePhiData->GetYaxis()->SetRangeUser(0, 6500);

hRecoMuonCandidatePhiData->Draw("E1");
hRecoPionCandidatePhiData->Draw("E1same");
hRecoMuonCandidatePhiMC->Draw("histosame");
hRecoPionCandidatePhiMC->Draw("histosame");
hRecoMuonCandidatePhiMCCCCoh->Draw("histosame");
hRecoPionCandidatePhiMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg21 = new TLegend();
leg21 = new TLegend(0.58,0.65,1.00,1.00);
leg21->SetTextSize(0.04);
leg21->SetTextAlign(12);
leg21->SetFillColor(kWhite);
leg21->SetLineColor(kWhite);
leg21->SetShadowColor(kWhite);
leg21->SetHeader("Which Particle Candidate");
leg21->AddEntry(hRecoMuonCandidatePhiData,"#mu Candidate Data");
leg21->AddEntry(hRecoPionCandidatePhiData,"#pi Candidate Data");
leg21->AddEntry(hRecoMuonCandidatePhiMC,"#mu Candidate MC");
leg21->AddEntry(hRecoPionCandidatePhiMC,"#pi Candidate MC");
leg21->AddEntry(hRecoMuonCandidatePhiMCCCCoh,"#mu Candidate MC CC-Coh");
leg21->AddEntry(hRecoPionCandidatePhiMCCCCoh,"#pi Candidate MC CC-Coh");
leg21->Draw();





TCanvas *c22 = new TCanvas("c22", "The Muon Candidate and Pion Candidate #phi After Pion Candidacy");
c22->SetTicks();
c22->SetFillColor(kWhite);

// Area normalizing the plot 
hRecoMuonCandidatePhiAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidatePhiAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidatePhiAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidatePhiAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoMuonCandidatePhiAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidatePhiAfterPCData->SetLineWidth(2);
hRecoMuonCandidatePhiAfterPCData->Rebin(40);

hRecoMuonCandidatePhiAfterPCMC->SetLineColor(kGreen);
hRecoMuonCandidatePhiAfterPCMC->SetLineWidth(2);
hRecoMuonCandidatePhiAfterPCMC->Rebin(40);

hRecoMuonCandidatePhiAfterPCMCCCCoh->SetLineColor(kViolet);
hRecoMuonCandidatePhiAfterPCMCCCCoh->SetLineWidth(2);
hRecoMuonCandidatePhiAfterPCMCCCCoh->Rebin(40);

hRecoPionCandidatePhiAfterPCData->SetLineColor(kGray);
hRecoPionCandidatePhiAfterPCData->SetLineWidth(2);
hRecoPionCandidatePhiAfterPCData->Rebin(40);

hRecoPionCandidatePhiAfterPCMC->SetLineColor(kBlue);
hRecoPionCandidatePhiAfterPCMC->SetLineWidth(2);
hRecoPionCandidatePhiAfterPCMC->Rebin(40);

hRecoPionCandidatePhiAfterPCMCCCCoh->SetLineColor(kRed);
hRecoPionCandidatePhiAfterPCMCCCCoh->SetLineWidth(2);
hRecoPionCandidatePhiAfterPCMCCCCoh->Rebin(40);

hRecoMuonCandidatePhiAfterPCData->GetXaxis()->SetTitle("#phi [Degrees]");
hRecoMuonCandidatePhiAfterPCData->GetXaxis()->CenterTitle();

hRecoMuonCandidatePhiAfterPCData->GetYaxis()->SetTitle("Normalized Events");
hRecoMuonCandidatePhiAfterPCData->GetYaxis()->CenterTitle();
//hRecoMuonCandidatePhiAfterPCData->GetYaxis()->SetRangeUser(0, 950);

hRecoMuonCandidatePhiAfterPCData->Draw("E1");
hRecoPionCandidatePhiAfterPCData->Draw("E1same");
hRecoMuonCandidatePhiAfterPCMC->Draw("histosame");
hRecoPionCandidatePhiAfterPCMC->Draw("histosame");
hRecoMuonCandidatePhiAfterPCMCCCCoh->Draw("histosame");
hRecoPionCandidatePhiAfterPCMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg22 = new TLegend();
leg22 = new TLegend(0.58,0.65,1.00,1.00);
leg22->SetTextSize(0.04);
leg22->SetTextAlign(12);
leg22->SetFillColor(kWhite);
leg22->SetLineColor(kWhite);
leg22->SetShadowColor(kWhite);
leg22->SetHeader("Which Particle Candidate");
leg22->AddEntry(hRecoMuonCandidatePhiAfterPCData,"#mu Candidate Data");
leg22->AddEntry(hRecoPionCandidatePhiAfterPCData,"#pi Candidate Data");
leg22->AddEntry(hRecoMuonCandidatePhiAfterPCMC,"#mu Candidate MC");
leg22->AddEntry(hRecoPionCandidatePhiAfterPCMC,"#pi Candidate MC");
leg22->AddEntry(hRecoMuonCandidatePhiAfterPCMCCCCoh,"#mu Candidate MC CC-Coh");
leg22->AddEntry(hRecoPionCandidatePhiAfterPCMCCCCoh,"#pi Candidate MC CC-Coh");
leg22->Draw();




TCanvas *c23 = new TCanvas("c23", "The Opening Angle for Events Passing Pion Candidacy");
c23->SetTicks();
c23->SetFillColor(kWhite);

// Area normalizing the plot 
hOpeningAngleForPCMCReco->Scale(Run1ScaleFactorMC);
hOpeningAngleForPCMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hOpeningAngleForPC->SetLineColor(kBlack);
hOpeningAngleForPC->SetLineWidth(2);
hOpeningAngleForPC->Rebin(9);

hOpeningAngleForPCMCReco->SetLineColor(kGreen);
hOpeningAngleForPCMCReco->SetLineWidth(2);
hOpeningAngleForPCMCReco->Rebin(9);

hOpeningAngleForPCMCCCCoh->SetLineColor(kViolet);
hOpeningAngleForPCMCCCCoh->SetLineWidth(2);
hOpeningAngleForPCMCCCCoh->Rebin(9);

hOpeningAngleForPC->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleForPC->GetXaxis()->CenterTitle();

hOpeningAngleForPC->GetYaxis()->SetTitle("Normalized Events");
hOpeningAngleForPC->GetYaxis()->CenterTitle();

hOpeningAngleForPC->Draw("E1");
hOpeningAngleForPCMCReco->Draw("histosame");
hOpeningAngleForPCMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg23 = new TLegend();
leg23 = new TLegend(0.58,0.65,1.00,1.00);
leg23->SetTextSize(0.04);
leg23->SetTextAlign(12);
leg23->SetFillColor(kWhite);
leg23->SetLineColor(kWhite);
leg23->SetShadowColor(kWhite);
leg23->SetHeader("Samples");
leg23->AddEntry(hOpeningAngleForPCMCReco,"MC Reco");
leg23->AddEntry(hOpeningAngleForPCMCCCCoh,"MC Reco CC-Coh");
leg23->AddEntry(hOpeningAngleForPC,"Data");
leg23->Draw();




TCanvas *c24 = new TCanvas("c24", "The Efficiency for Reconstructed Neutrino Energy Over My Selection Through Opening Angle");
c24->SetTicks();
c24->SetFillColor(kWhite);

// Rebinning Histograms Before Ratio
hRecoNuEnergyFiducialVolume->Rebin(50);
//hRecoNuEnergy->Rebin(50);
hRecoNuEnergyOA->Rebin(50);
hRecoNuEnergyFiducialVolumeMC->Rebin(50);
hRecoNuEnergyMC->Rebin(50);
hRecoNuEnergyOAMC->Rebin(50);
hRecoNuEnergyFiducialVolumeMCCCCoh->Rebin(50);
hRecoNuEnergyMCCCCoh->Rebin(50);
hRecoNuEnergyOAMCCCCoh->Rebin(50);

// Dividing the two plots 
hRecoNuEnergyOA->Divide(hRecoNuEnergyFiducialVolume);
hRecoNuEnergyOAMC->Divide(hRecoNuEnergyFiducialVolumeMC);
hRecoNuEnergyOAMCCCCoh->Divide(hRecoNuEnergyFiducialVolumeMCCCCoh);
//hRecoNuEnergyOA->Divide(hRecoNuEnergy);
//hRecoNuEnergyOAMC->Divide(hRecoNuEnergyMC);
//hRecoNuEnergyOAMCCCCoh->Divide(hRecoNuEnergyMCCCCoh);

// Setting Drawing Parameters
hRecoNuEnergyOA->SetLineColor(kBlack);
hRecoNuEnergyOA->SetLineWidth(2);

hRecoNuEnergyOAMC->SetLineColor(kGreen);
hRecoNuEnergyOAMC->SetLineWidth(2);

hRecoNuEnergyOAMCCCCoh->SetLineColor(kViolet);
hRecoNuEnergyOAMCCCCoh->SetLineWidth(2);

hRecoNuEnergyOA->GetXaxis()->SetTitle("E_{#nu_{#mu}} [GeV]");
hRecoNuEnergyOA->GetXaxis()->CenterTitle();
hRecoNuEnergyOA->GetXaxis()->SetRangeUser(0, 4);

hRecoNuEnergyOA->GetYaxis()->SetTitle("Efficiency");
hRecoNuEnergyOA->GetYaxis()->CenterTitle();
hRecoNuEnergyOA->GetYaxis()->SetRangeUser(0, 1);

hRecoNuEnergyOA->Draw("E1");
hRecoNuEnergyOAMC->Draw("histosame");
hRecoNuEnergyOAMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg24 = new TLegend();
leg24 = new TLegend(0.58,0.65,1.00,1.00);
leg24->SetTextSize(0.04);
leg24->SetTextAlign(12);
leg24->SetFillColor(kWhite);
leg24->SetLineColor(kWhite);
leg24->SetShadowColor(kWhite);
leg24->SetHeader("Samples");
leg24->AddEntry(hRecoNuEnergyOAMC,"MC Reco New");
leg24->AddEntry(hRecoNuEnergyOAMCCCCoh,"MC Reco New CC-Coh");
leg24->AddEntry(hRecoNuEnergyOA,"Data");
leg24->Draw();




TCanvas *c25 = new TCanvas("c25", "The Efficiency for Reconstructed Neutrino Energy After 2-Tracks Selection");
c25->SetTicks();
c25->SetFillColor(kWhite);

// Dividing the two plots 
hRecoNuEnergy->Divide(hRecoNuEnergyFiducialVolume);
hRecoNuEnergyMC->Divide(hRecoNuEnergyFiducialVolumeMC);
hRecoNuEnergyMCCCCoh->Divide(hRecoNuEnergyFiducialVolumeMCCCCoh);

// Setting Drawing Parameters
hRecoNuEnergy->SetLineColor(kBlack);
hRecoNuEnergy->SetLineWidth(2);

hRecoNuEnergyMC->SetLineColor(kGreen);
hRecoNuEnergyMC->SetLineWidth(2);

hRecoNuEnergyMCCCCoh->SetLineColor(kViolet);
hRecoNuEnergyMCCCCoh->SetLineWidth(2);

hRecoNuEnergy->GetXaxis()->SetTitle("E_{#nu_{#mu}} [GeV]");
hRecoNuEnergy->GetXaxis()->CenterTitle();
hRecoNuEnergy->GetXaxis()->SetRangeUser(0, 4);

hRecoNuEnergy->GetYaxis()->SetTitle("Efficiency");
hRecoNuEnergy->GetYaxis()->CenterTitle();
hRecoNuEnergy->GetYaxis()->SetRangeUser(0, 1);

hRecoNuEnergy->Draw("E1");
hRecoNuEnergyMC->Draw("histosame");
hRecoNuEnergyMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg25 = new TLegend();
leg25 = new TLegend(0.58,0.65,1.00,1.00);
leg25->SetTextSize(0.04);
leg25->SetTextAlign(12);
leg25->SetFillColor(kWhite);
leg25->SetLineColor(kWhite);
leg25->SetShadowColor(kWhite);
leg25->SetHeader("Samples");
leg25->AddEntry(hRecoNuEnergyMC,"MC Reco New");
leg25->AddEntry(hRecoNuEnergyMCCCCoh,"MC Reco New CC-Coh");
leg25->AddEntry(hRecoNuEnergy,"Data");
leg25->Draw();




TCanvas *c26 = new TCanvas("c26", "The Added Calorimetric Energy of Muon and Pion Candidates in Plane U");
c26->SetTicks();
c26->SetFillColor(kWhite);

// Scaling the MC Plots
hRecoCaloUMC->Scale(Run1ScaleFactorMC);
hRecoCaloUMCCCCoh->Scale(Run1ScaleFactorMC);

// Setting Drawing Parameters
hRecoCaloU->SetLineColor(kBlack);
hRecoCaloU->SetLineWidth(2);
hRecoCaloU->Rebin(50);

hRecoCaloUMC->SetLineColor(kGreen);
hRecoCaloUMC->SetLineWidth(2);
hRecoCaloUMC->Rebin(50);

hRecoCaloUMCCCCoh->SetLineColor(kViolet);
hRecoCaloUMCCCCoh->SetLineWidth(2);
hRecoCaloUMCCCCoh->Rebin(50);

hRecoCaloU->GetXaxis()->SetTitle("E_{calo#mu} + E_{calo#pi} [MeV]");
hRecoCaloU->GetXaxis()->CenterTitle();
//hRecoCaloU->GetXaxis()->SetRangeUser(0, 4);

hRecoCaloU->GetYaxis()->SetTitle("Number of Events");
hRecoCaloU->GetYaxis()->CenterTitle();
//hRecoCaloU->GetYaxis()->SetRangeUser(0, 1);

hRecoCaloU->Draw("E1");
hRecoCaloUMC->Draw("histosame");
hRecoCaloUMCCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg26 = new TLegend();
leg26 = new TLegend(0.58,0.65,1.00,1.00);
leg26->SetTextSize(0.04);
leg26->SetTextAlign(12);
leg26->SetFillColor(kWhite);
leg26->SetLineColor(kWhite);
leg26->SetShadowColor(kWhite);
leg26->SetHeader("Samples");
leg26->AddEntry(hRecoCaloUMC,"MC Reco New");
leg26->AddEntry(hRecoCaloUMCCCCoh,"MC Reco New CC-Coh");
leg26->AddEntry(hRecoCaloU,"Data");
leg26->Draw();
}
