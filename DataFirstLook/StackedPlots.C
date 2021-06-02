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
TFile *f7 = new TFile("MC_CCQE_Histograms.root"); // <-- File for New MC CCQE Information
TFile *f8 = new TFile("MC_CCRes_Histograms.root"); // <-- File for New MC CCRes Information
TFile *f9 = new TFile("MC_NCRes_Histograms.root"); // <-- File for New MC NCRes Information
TFile *f10 = new TFile("MC_CCDIS_Histograms.root"); // <-- File for New MC CCDIS Information
TFile *f11 = new TFile("MC_NCDIS_Histograms.root"); // <-- File for New MC NCDIS Information
TFile *f12 = new TFile("MC_Other_Histograms.root"); // <-- File for New MC Other Information





TH1D *hT = (TH1D*)f4->Get("hT");
TH1D *hTReco = (TH1D*)f5->Get("hT");
TH1D *hTRecoCCCoh = (TH1D*)f6->Get("hT");
TH1D *hTRecoCCQE = (TH1D*)f7->Get("hT");
TH1D *hTRecoCCRes = (TH1D*)f8->Get("hT");
TH1D *hTRecoNCRes = (TH1D*)f9->Get("hT");
TH1D *hTRecoCCDIS = (TH1D*)f10->Get("hT");
TH1D *hTRecoNCDIS = (TH1D*)f11->Get("hT");
TH1D *hTRecoOther = (TH1D*)f12->Get("hT");

hT->Sumw2();
hTReco->Sumw2();
hTRecoCCCoh->Sumw2();
hTRecoCCQE->Sumw2();
hTRecoCCRes->Sumw2();
hTRecoNCRes->Sumw2();
hTRecoCCDIS->Sumw2();
hTRecoNCDIS->Sumw2();
hTRecoOther->Sumw2();


TH1D *hTPC = (TH1D*)f4->Get("hTPionCandidate");
TH1D *hTPCReco = (TH1D*)f5->Get("hTPionCandidate");
TH1D *hTPCRecoCCCoh = (TH1D*)f6->Get("hTPionCandidate");
TH1D *hTPCRecoCCQE = (TH1D*)f7->Get("hTPionCandidate");
TH1D *hTPCRecoCCRes = (TH1D*)f8->Get("hTPionCandidate");
TH1D *hTPCRecoNCRes = (TH1D*)f9->Get("hTPionCandidate");
TH1D *hTPCRecoCCDIS = (TH1D*)f10->Get("hTPionCandidate");
TH1D *hTPCRecoNCDIS = (TH1D*)f11->Get("hTPionCandidate");
TH1D *hTPCRecoOther = (TH1D*)f12->Get("hTPionCandidate");

hTPC->Sumw2();
hTPCReco->Sumw2();
hTPCRecoCCCoh->Sumw2();
hTPCRecoCCQE->Sumw2();
hTPCRecoCCRes->Sumw2();
hTPCRecoNCRes->Sumw2();
hTPCRecoCCDIS->Sumw2();
hTPCRecoNCDIS->Sumw2();
hTPCRecoOther->Sumw2();


TH1D *hTOA = (TH1D*)f4->Get("hTOA");
TH1D *hTOAReco = (TH1D*)f5->Get("hTOA");
TH1D *hTOARecoCCCoh = (TH1D*)f6->Get("hTOA");
TH1D *hTOARecoCCQE = (TH1D*)f7->Get("hTOA");
TH1D *hTOARecoCCRes = (TH1D*)f8->Get("hTOA");
TH1D *hTOARecoNCRes = (TH1D*)f9->Get("hTOA");
TH1D *hTOARecoCCDIS = (TH1D*)f10->Get("hTOA");
TH1D *hTOARecoNCDIS = (TH1D*)f11->Get("hTOA");
TH1D *hTOARecoOther = (TH1D*)f12->Get("hTOA");

hTOA->Sumw2();
hTOAReco->Sumw2();
hTOARecoCCCoh->Sumw2();
hTOARecoCCQE->Sumw2();
hTOARecoCCRes->Sumw2();
hTOARecoNCRes->Sumw2();
hTOARecoCCDIS->Sumw2();
hTOARecoNCDIS->Sumw2();
hTOARecoOther->Sumw2();


TH1D *hRecoMuonCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCOther = (TH1D*)f12->Get("hRecoMuonCandidateMomentumAfterPC");

hRecoMuonCandidateMomentumAfterPCData->Sumw2();
hRecoMuonCandidateMomentumAfterPCMC->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCQE->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCRes->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCNCRes->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCOther->Sumw2();


TH1D *hRecoMuonCandidateMomentumAfterOAData = (TH1D*)f4->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCOther = (TH1D*)f12->Get("hRecoMuonCandidateMomentumAfterOA");

hRecoMuonCandidateMomentumAfterOAData->Sumw2();
hRecoMuonCandidateMomentumAfterOAMC->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCQE->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCRes->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCNCRes->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCOther->Sumw2();


TH1D *hRecoPionCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCQE = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCRes = (TH1D*)f8->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCNCRes = (TH1D*)f9->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCOther = (TH1D*)f12->Get("hRecoPionCandidateMomentumAfterPC");

hRecoPionCandidateMomentumAfterPCData->Sumw2();
hRecoPionCandidateMomentumAfterPCMC->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCCoh->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCQE->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCRes->Sumw2();
hRecoPionCandidateMomentumAfterPCMCNCRes->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCDIS->Sumw2();
hRecoPionCandidateMomentumAfterPCMCNCDIS->Sumw2();
hRecoPionCandidateMomentumAfterPCMCOther->Sumw2();


TH1D *hRecoPionCandidateMomentumAfterOAData = (TH1D*)f4->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMC = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCQE = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCRes = (TH1D*)f8->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCNCRes = (TH1D*)f9->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCOther = (TH1D*)f12->Get("hRecoPionCandidateMomentumAfterOA");

hRecoPionCandidateMomentumAfterOAData->Sumw2();
hRecoPionCandidateMomentumAfterOAMC->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCCoh->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCQE->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCRes->Sumw2();
hRecoPionCandidateMomentumAfterOAMCNCRes->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCDIS->Sumw2();
hRecoPionCandidateMomentumAfterOAMCNCDIS->Sumw2();
hRecoPionCandidateMomentumAfterOAMCOther->Sumw2();


TH1D *hDeltaPTT = (TH1D*)f4->Get("hDeltaPTT");
TH1D *hDeltaPTTPC = (TH1D*)f4->Get("hDeltaPTTPC");
TH1D *hDeltaPTTMC = (TH1D*)f5->Get("hDeltaPTT");
TH1D *hDeltaPTTPCMC = (TH1D*)f5->Get("hDeltaPTTPC");
TH1D *hDeltaPTTCCCoh = (TH1D*)f6->Get("hDeltaPTT");
TH1D *hDeltaPTTPCCCCoh = (TH1D*)f6->Get("hDeltaPTTPC");
TH1D *hDeltaPTTCCQE = (TH1D*)f7->Get("hDeltaPTT");
TH1D *hDeltaPTTPCCCQE = (TH1D*)f7->Get("hDeltaPTTPC");
TH1D *hDeltaPTTCCRes = (TH1D*)f8->Get("hDeltaPTT");
TH1D *hDeltaPTTPCCCRes = (TH1D*)f8->Get("hDeltaPTTPC");
TH1D *hDeltaPTTNCRes = (TH1D*)f9->Get("hDeltaPTT");
TH1D *hDeltaPTTPCNCRes = (TH1D*)f9->Get("hDeltaPTTPC");
TH1D *hDeltaPTTCCDIS = (TH1D*)f10->Get("hDeltaPTT");
TH1D *hDeltaPTTPCCCDIS = (TH1D*)f10->Get("hDeltaPTTPC");
TH1D *hDeltaPTTNCDIS = (TH1D*)f11->Get("hDeltaPTT");
TH1D *hDeltaPTTPCNCDIS = (TH1D*)f11->Get("hDeltaPTTPC");
TH1D *hDeltaPTTOther = (TH1D*)f12->Get("hDeltaPTT");
TH1D *hDeltaPTTPCOther = (TH1D*)f12->Get("hDeltaPTTPC");

hDeltaPTT->Sumw2();
hDeltaPTTPC->Sumw2();
hDeltaPTTMC->Sumw2();
hDeltaPTTPCMC->Sumw2();
hDeltaPTTCCCoh->Sumw2();
hDeltaPTTPCCCCoh->Sumw2();
hDeltaPTTCCQE->Sumw2();
hDeltaPTTPCCCQE->Sumw2();
hDeltaPTTCCRes->Sumw2();
hDeltaPTTPCCCRes->Sumw2();
hDeltaPTTNCRes->Sumw2();
hDeltaPTTPCNCRes->Sumw2();
hDeltaPTTCCDIS->Sumw2();
hDeltaPTTPCCCDIS->Sumw2();
hDeltaPTTNCDIS->Sumw2();
hDeltaPTTPCNCDIS->Sumw2();
hDeltaPTTOther->Sumw2();
hDeltaPTTPCOther->Sumw2();


TH1D *hPN = (TH1D*)f4->Get("hPN");
TH1D *hPNPC = (TH1D*)f4->Get("hPNPC");
TH1D *hPNMC = (TH1D*)f5->Get("hPN");
TH1D *hPNPCMC = (TH1D*)f5->Get("hPNPC");
TH1D *hPNCCCoh = (TH1D*)f6->Get("hPN");
TH1D *hPNPCCCCoh = (TH1D*)f6->Get("hPNPC");
TH1D *hPNCCQE = (TH1D*)f7->Get("hPN");
TH1D *hPNPCCCQE = (TH1D*)f7->Get("hPNPC");
TH1D *hPNCCRes = (TH1D*)f8->Get("hPN");
TH1D *hPNPCCCRes = (TH1D*)f8->Get("hPNPC");
TH1D *hPNNCRes = (TH1D*)f9->Get("hPN");
TH1D *hPNPCNCRes = (TH1D*)f9->Get("hPNPC");
TH1D *hPNCCDIS = (TH1D*)f10->Get("hPN");
TH1D *hPNPCCCDIS = (TH1D*)f10->Get("hPNPC");
TH1D *hPNNCDIS = (TH1D*)f11->Get("hPN");
TH1D *hPNPCNCDIS = (TH1D*)f11->Get("hPNPC");
TH1D *hPNOther = (TH1D*)f12->Get("hPN");
TH1D *hPNPCOther = (TH1D*)f12->Get("hPNPC");

hPN->Sumw2();
hPNPC->Sumw2();
hPNMC->Sumw2();
hPNPCMC->Sumw2();
hPNCCCoh->Sumw2();
hPNPCCCCoh->Sumw2();
hPNCCQE->Sumw2();
hPNPCCCQE->Sumw2();
hPNCCRes->Sumw2();
hPNPCCCRes->Sumw2();
hPNNCRes->Sumw2();
hPNPCNCRes->Sumw2();
hPNCCDIS->Sumw2();
hPNPCCCDIS->Sumw2();
hPNNCDIS->Sumw2();
hPNPCNCDIS->Sumw2();
hPNOther->Sumw2();
hPNPCOther->Sumw2();


TH1D *hDeltaAlphaT = (TH1D*)f4->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPC = (TH1D*)f4->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTMC = (TH1D*)f5->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCMC = (TH1D*)f5->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTCCCoh = (TH1D*)f6->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCCCCoh = (TH1D*)f6->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTCCQE = (TH1D*)f7->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCCCQE = (TH1D*)f7->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTCCRes = (TH1D*)f8->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCCCRes = (TH1D*)f8->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTNCRes = (TH1D*)f9->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCNCRes = (TH1D*)f9->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTCCDIS = (TH1D*)f10->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCCCDIS = (TH1D*)f10->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTNCDIS = (TH1D*)f11->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCNCDIS = (TH1D*)f11->Get("hDeltaAlphaTPC");
TH1D *hDeltaAlphaTOther = (TH1D*)f12->Get("hDeltaAlphaT");
TH1D *hDeltaAlphaTPCOther = (TH1D*)f12->Get("hDeltaAlphaTPC");

hDeltaAlphaT->Sumw2();
hDeltaAlphaTPC->Sumw2();
hDeltaAlphaTMC->Sumw2();
hDeltaAlphaTPCMC->Sumw2();
hDeltaAlphaTCCCoh->Sumw2();
hDeltaAlphaTPCCCCoh->Sumw2();
hDeltaAlphaTCCQE->Sumw2();
hDeltaAlphaTPCCCQE->Sumw2();
hDeltaAlphaTCCRes->Sumw2();
hDeltaAlphaTPCCCRes->Sumw2();
hDeltaAlphaTNCRes->Sumw2();
hDeltaAlphaTPCNCRes->Sumw2();
hDeltaAlphaTCCDIS->Sumw2();
hDeltaAlphaTPCCCDIS->Sumw2();
hDeltaAlphaTNCDIS->Sumw2();
hDeltaAlphaTPCNCDIS->Sumw2();
hDeltaAlphaTOther->Sumw2();
hDeltaAlphaTPCOther->Sumw2();


TH1D *hConeAngleFor2Tracks = (TH1D*)f4->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleFor2TracksReco = (TH1D*)f5->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleFor2TracksRecoCCCoh = (TH1D*)f6->Get("hConeAngleFor2Tracks");

hConeAngleFor2Tracks->Sumw2();
hConeAngleFor2TracksReco->Sumw2();
hConeAngleFor2TracksRecoCCCoh->Sumw2();


// Creating the Stacked Histogram
THStack *hTStacked = new THStack("hTStacked", "|t| Stacked for Events Passing 2-Tracks Selection");
THStack *hTPCStacked = new THStack("hTPCStacked", "|t| Stacked for Events Passing Pion Candidacy Selection");
THStack *hTOAStacked = new THStack("hTOAStacked", "|t| Stacked for Events Passing Opening Angle Selection");
THStack *hMPPCStacked = new THStack("hMPPCStacked", "Muon Candidate Momentum Stacked for Events Passing Pion Candidacy Selection");
THStack *hMPOAStacked = new THStack("hMPOAStacked", "Muon Candidate Momentum Stacked for Events Passing Opening Angle Selection");
THStack *hPPPCStacked = new THStack("hPPPCStacked", "Pion Candidate Momentum Stacked for Events Passing Pion Candidacy Selection");
THStack *hPPOAStacked = new THStack("hPPOAStacked", "Pion Candidate Momentum Stacked for Events Passing Opening Angle Selection");
THStack *hOAPCStacked = new THStack("hOAPCStacked", "Opening Angle Stacked for Events Passing Pion Candidacy Selection");
THStack *hOAOAStacked = new THStack("hOAOAStacked", "Opening Angle Stacked for Events Passing Opening Angle Selection");
THStack *hDeltaPTTStacked = new THStack("hDeltaPTTStacked", "Delta_PTT Stacked for Events Passing 2-Tracks Selection");
THStack *hDeltaPTTPCStacked = new THStack("hDeltaPTTPCStacked", "Delta_PTT Stacked for Events Passing Pion Candidacy Selection");
THStack *hPNStacked = new THStack("hPNStacked", "PN Stacked for Events Passing 2-Tracks Selection");
THStack *hPNPCStacked = new THStack("hPNPCStacked", "PN Stacked for Events Passing Pion Candidacy Selection");
THStack *hDeltaAlphaTStacked = new THStack("hDeltaAlphaTStacked", "Delta_AlphaT Stacked for Events Passing 2-Tracks Selection");
THStack *hDeltaAlphaTPCStacked = new THStack("hDeltaAlphaTPCStacked", "Delta_AlphaT Stacked for Events Passing Pion Candidacy Selection");
THStack *hConeAngleStacked = new THStack("hConeAngleStacked", "Cone Angle Stacked for Events Passing 2-Tracks Selection");


double Run1ScaleFactorMC = 0.05/1.2847059;





TCanvas *c1 = new TCanvas("c1", "Stacked Reco |t| After 2 Tracks");
c1->SetTicks();
c1->SetFillColor(kWhite);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Rebin(50);
hT->SetMarkerStyle(20);
hTRecoCCCoh->SetFillColor(kBlue);
hTRecoCCCoh->Scale(Run1ScaleFactorMC);
hTRecoCCCoh->Rebin(50);
hTRecoCCQE->SetFillColor(kViolet);
hTRecoCCQE->Scale(Run1ScaleFactorMC);
hTRecoCCQE->Rebin(50);
hTRecoCCRes->SetFillColor(kRed);
hTRecoCCRes->Scale(Run1ScaleFactorMC);
hTRecoCCRes->Rebin(50);
hTRecoNCRes->SetFillColor(kGreen);
hTRecoNCRes->Scale(Run1ScaleFactorMC);
hTRecoNCRes->Rebin(50);
hTRecoCCDIS->SetFillColor(kCyan-8);
hTRecoCCDIS->Scale(Run1ScaleFactorMC);
hTRecoCCDIS->Rebin(50);
hTRecoNCDIS->SetFillColor(kGray);
hTRecoNCDIS->Scale(Run1ScaleFactorMC);
hTRecoNCDIS->Rebin(50);
hTReco->SetFillColor(kOrange);
hTReco->Scale(Run1ScaleFactorMC);
hTReco->Rebin(50);
hTReco->Add(hTRecoCCCoh, -1);
hTReco->Add(hTRecoCCQE, -1);
hTReco->Add(hTRecoCCRes, -1);
hTReco->Add(hTRecoNCRes, -1);
hTReco->Add(hTRecoCCDIS, -1);
hTReco->Add(hTRecoNCDIS, -1);
hTStacked->Add(hTReco);
hTStacked->Add(hTRecoCCQE);
hTStacked->Add(hTRecoCCRes);
hTStacked->Add(hTRecoNCRes);
hTStacked->Add(hTRecoCCDIS);
hTStacked->Add(hTRecoNCDIS);
hTStacked->Add(hTRecoCCCoh);


hT->Draw("E1");
hTStacked->Draw("HISTsame");
hT->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hT->GetXaxis()->CenterTitle();
hT->GetYaxis()->SetTitle("Number of Events");
hT->GetYaxis()->CenterTitle();

hT->Draw("E1same");
c1->Modified();

// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Channel");
leg1->AddEntry(hT,"Data");
leg1->AddEntry(hTRecoCCCoh,"Reco CC-Coh");
leg1->AddEntry(hTRecoCCQE,"Reco CC-QE");
leg1->AddEntry(hTRecoCCRes,"Reco CC-Res");
leg1->AddEntry(hTRecoNCRes,"Reco NC-Res");
leg1->AddEntry(hTRecoCCDIS,"Reco CC-DIS");
leg1->AddEntry(hTRecoNCDIS,"Reco NC-DIS");
leg1->AddEntry(hTReco,"Reco Other");
leg1->Draw();





TCanvas *c2 = new TCanvas("c2", "Stacked Reco |t| After Pion Candidacy");
c2->SetTicks();
c2->SetFillColor(kWhite);

hTPC->SetLineColor(kBlack);
hTPC->SetLineWidth(2);
hTPC->Rebin(50);
hTPC->SetMarkerStyle(20);
hTPCRecoCCCoh->SetFillColor(kBlue);
hTPCRecoCCCoh->Scale(Run1ScaleFactorMC);
hTPCRecoCCCoh->Rebin(50);
hTPCRecoCCQE->SetFillColor(kViolet);
hTPCRecoCCQE->Scale(Run1ScaleFactorMC);
hTPCRecoCCQE->Rebin(50);
hTPCRecoCCRes->SetFillColor(kRed);
hTPCRecoCCRes->Scale(Run1ScaleFactorMC);
hTPCRecoCCRes->Rebin(50);
hTPCRecoNCRes->SetFillColor(kGreen);
hTPCRecoNCRes->Scale(Run1ScaleFactorMC);
hTPCRecoNCRes->Rebin(50);
hTPCRecoCCDIS->SetFillColor(kCyan-8);
hTPCRecoCCDIS->Scale(Run1ScaleFactorMC);
hTPCRecoCCDIS->Rebin(50);
hTPCRecoNCDIS->SetFillColor(kGray);
hTPCRecoNCDIS->Scale(Run1ScaleFactorMC);
hTPCRecoNCDIS->Rebin(50);
hTPCReco->SetFillColor(kOrange);
hTPCReco->Scale(Run1ScaleFactorMC);
hTPCReco->Rebin(50);
hTPCReco->Add(hTPCRecoCCCoh, -1);
hTPCReco->Add(hTPCRecoCCQE, -1);
hTPCReco->Add(hTPCRecoCCRes, -1);
hTPCReco->Add(hTPCRecoNCRes, -1);
hTPCReco->Add(hTPCRecoCCDIS, -1);
hTPCReco->Add(hTPCRecoNCDIS, -1);
hTPCStacked->Add(hTPCReco);
hTPCStacked->Add(hTPCRecoCCQE);
hTPCStacked->Add(hTPCRecoCCRes);
hTPCStacked->Add(hTPCRecoNCRes);
hTPCStacked->Add(hTPCRecoCCDIS);
hTPCStacked->Add(hTPCRecoNCDIS);
hTPCStacked->Add(hTPCRecoCCCoh);

//hTPC->Draw("E1");
hTPCStacked->Draw("HIST");
hTPCStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTPCStacked->GetXaxis()->CenterTitle();
hTPCStacked->GetYaxis()->SetTitle("Number of Events");
hTPCStacked->GetYaxis()->CenterTitle();

//hTPC->Draw("E1same");
c2->Modified();

// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Channel");
//leg2->AddEntry(hTPC,"Data");
leg2->AddEntry(hTPCRecoCCCoh,"Reco CC-Coh");
leg2->AddEntry(hTPCRecoCCQE,"Reco CC-QE");
leg2->AddEntry(hTPCRecoCCRes,"Reco CC-Res");
leg2->AddEntry(hTPCRecoNCRes,"Reco NC-Res");
leg2->AddEntry(hTPCRecoCCDIS,"Reco CC-DIS");
leg2->AddEntry(hTPCRecoNCDIS,"Reco NC-DIS");
leg2->AddEntry(hTPCReco,"Reco Other");
leg2->Draw();





TCanvas *c3 = new TCanvas("c3", "Stacked Reco |t| After Opening Angle");
c3->SetTicks();
c3->SetFillColor(kWhite);

hTOA->SetLineColor(kBlack);
hTOA->SetLineWidth(2);
hTOA->Rebin(50);
hTOA->SetMarkerStyle(20);
hTOARecoCCCoh->SetFillColor(kBlue);
hTOARecoCCCoh->Scale(Run1ScaleFactorMC);
hTOARecoCCCoh->Rebin(50);
hTOARecoCCQE->SetFillColor(kViolet);
hTOARecoCCQE->Scale(Run1ScaleFactorMC);
hTOARecoCCQE->Rebin(50);
hTOARecoCCRes->SetFillColor(kRed);
hTOARecoCCRes->Scale(Run1ScaleFactorMC);
hTOARecoCCRes->Rebin(50);
hTOARecoNCRes->SetFillColor(kGreen);
hTOARecoNCRes->Scale(Run1ScaleFactorMC);
hTOARecoNCRes->Rebin(50);
hTOARecoCCDIS->SetFillColor(kCyan-8);
hTOARecoCCDIS->Scale(Run1ScaleFactorMC);
hTOARecoCCDIS->Rebin(50);
hTOARecoNCDIS->SetFillColor(kGray);
hTOARecoNCDIS->Scale(Run1ScaleFactorMC);
hTOARecoNCDIS->Rebin(50);
hTOAReco->SetFillColor(kOrange);
hTOAReco->Scale(Run1ScaleFactorMC);
hTOAReco->Rebin(50);
hTOAReco->Add(hTOARecoCCCoh, -1);
hTOAReco->Add(hTOARecoCCQE, -1);
hTOAReco->Add(hTOARecoCCRes, -1);
hTOAReco->Add(hTOARecoNCRes, -1);
hTOAReco->Add(hTOARecoCCDIS, -1);
hTOAReco->Add(hTOARecoNCDIS, -1);
hTOAStacked->Add(hTOAReco);
hTOAStacked->Add(hTOARecoCCQE);
hTOAStacked->Add(hTOARecoCCRes);
hTOAStacked->Add(hTOARecoNCRes);
hTOAStacked->Add(hTOARecoCCDIS);
hTOAStacked->Add(hTOARecoNCDIS);
hTOAStacked->Add(hTOARecoCCCoh);


//hTOA->Draw("E1");
hTOAStacked->Draw("HIST");
hTOAStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTOAStacked->GetXaxis()->CenterTitle();
hTOAStacked->GetYaxis()->SetTitle("Number of Events");
hTOAStacked->GetYaxis()->CenterTitle();

//hTOA->Draw("E1same");
c3->Modified();

// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Channel");
//leg3->AddEntry(hTOA,"Data");
leg3->AddEntry(hTOARecoCCCoh,"Reco CC-Coh");
leg3->AddEntry(hTOARecoCCQE,"Reco CC-QE");
leg3->AddEntry(hTOARecoCCRes,"Reco CC-Res");
leg3->AddEntry(hTOARecoNCRes,"Reco NC-Res");
leg3->AddEntry(hTOARecoCCDIS,"Reco CC-DIS");
leg3->AddEntry(hTOARecoNCDIS,"Reco NC-DIS");
leg3->AddEntry(hTOAReco,"Reco Other");
leg3->Draw();





TCanvas *c4 = new TCanvas("c4", "Stacked Reco Muon Candidate Momentum After Pion Candidacy");
c4->SetTicks();
c4->SetFillColor(kWhite);

hRecoMuonCandidateMomentumAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterPCData->Rebin(25);
hRecoMuonCandidateMomentumAfterPCData->SetMarkerStyle(20);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMCCCQE->SetFillColor(kViolet);
hRecoMuonCandidateMomentumAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCQE->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMCCCRes->SetFillColor(kRed);
hRecoMuonCandidateMomentumAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCRes->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMCNCRes->SetFillColor(kGreen);
hRecoMuonCandidateMomentumAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCNCRes->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->SetFillColor(kCyan-8);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->SetFillColor(kGray);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMC->SetFillColor(kOrange);
hRecoMuonCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMC->Rebin(25);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCCoh, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCQE, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCRes, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCNCRes, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCDIS, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCNCDIS, -1);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMC);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCQE);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCRes);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCNCRes);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCDIS);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCNCDIS);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCCoh);

hRecoMuonCandidateMomentumAfterPCData->Draw("E1");
hMPPCStacked->Draw("HISTsame");
hRecoMuonCandidateMomentumAfterPCData->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentumAfterPCData->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentumAfterPCData->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentumAfterPCData->GetYaxis()->SetTitle("Number of Events");
hRecoMuonCandidateMomentumAfterPCData->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentumAfterPCData->Draw("E1same");
c4->Modified();

// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,1.00,1.00);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Channel");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCData,"Data");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCCCCoh,"Reco CC-Coh");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCCCQE,"Reco CC-QE");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCCCRes,"Reco CC-Res");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCNCRes,"Reco NC-Res");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCCCDIS,"Reco CC-DIS");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMCNCDIS,"Reco NC-DIS");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCMC,"Reco Other");
leg4->Draw();





TCanvas *c5 = new TCanvas("c5", "Stacked Reco Muon Candidate Momentum After Opening Angle");
c5->SetTicks();
c5->SetFillColor(kWhite);

hRecoMuonCandidateMomentumAfterOAData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumAfterOAData->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterOAData->Rebin(25);
hRecoMuonCandidateMomentumAfterOAData->SetMarkerStyle(20);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMCCCQE->SetFillColor(kViolet);
hRecoMuonCandidateMomentumAfterOAMCCCQE->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCQE->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMCCCRes->SetFillColor(kRed);
hRecoMuonCandidateMomentumAfterOAMCCCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCRes->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMCNCRes->SetFillColor(kGreen);
hRecoMuonCandidateMomentumAfterOAMCNCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCNCRes->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->SetFillColor(kCyan-8);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->SetFillColor(kGray);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMC->SetFillColor(kOrange);
hRecoMuonCandidateMomentumAfterOAMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMC->Rebin(25);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCCoh, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCQE, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCRes, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCNCRes, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCDIS, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCNCDIS, -1);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMC);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCQE);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCRes);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCNCRes);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCDIS);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCNCDIS);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCCoh);

hRecoMuonCandidateMomentumAfterOAData->Draw("E1");
hMPOAStacked->Draw("HISTsame");
hRecoMuonCandidateMomentumAfterOAData->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentumAfterOAData->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentumAfterOAData->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentumAfterOAData->GetYaxis()->SetTitle("Number of Events");
hRecoMuonCandidateMomentumAfterOAData->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentumAfterOAData->Draw("E1same");
c5->Modified();

// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,1.00,1.00);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Channel");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAData,"Data");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCCCCoh,"Reco CC-Coh");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCCCQE,"Reco CC-QE");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCCCRes,"Reco CC-Res");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCNCRes,"Reco NC-Res");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCCCDIS,"Reco CC-DIS");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMCNCDIS,"Reco NC-DIS");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAMC,"Reco Other");
leg5->Draw();





TCanvas *c6 = new TCanvas("c6", "Stacked Reco Pion Candidate Momentum After Pion Candidacy");
c6->SetTicks();
c6->SetFillColor(kWhite);

hRecoPionCandidateMomentumAfterPCData->SetLineColor(kBlack);
hRecoPionCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoPionCandidateMomentumAfterPCData->Rebin(25);
hRecoPionCandidateMomentumAfterPCData->SetMarkerStyle(20);
hRecoPionCandidateMomentumAfterPCMCCCCoh->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Rebin(25);
hRecoPionCandidateMomentumAfterPCMCCCQE->SetFillColor(kViolet);
hRecoPionCandidateMomentumAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCQE->Rebin(25);
hRecoPionCandidateMomentumAfterPCMCCCRes->SetFillColor(kRed);
hRecoPionCandidateMomentumAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCRes->Rebin(25);
hRecoPionCandidateMomentumAfterPCMCNCRes->SetFillColor(kGreen);
hRecoPionCandidateMomentumAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCNCRes->Rebin(25);
hRecoPionCandidateMomentumAfterPCMCCCDIS->SetFillColor(kCyan-8);
hRecoPionCandidateMomentumAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCDIS->Rebin(25);
hRecoPionCandidateMomentumAfterPCMCNCDIS->SetFillColor(kGray);
hRecoPionCandidateMomentumAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCNCDIS->Rebin(25);
hRecoPionCandidateMomentumAfterPCMC->SetFillColor(kOrange);
hRecoPionCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMC->Rebin(25);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCCoh, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCQE, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCRes, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCNCRes, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCDIS, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCNCDIS, -1);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMC);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCQE);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCRes);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCNCRes);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCDIS);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCNCDIS);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCCoh);

hRecoPionCandidateMomentumAfterPCData->Draw("E1");
hPPPCStacked->Draw("HISTsame");
hRecoPionCandidateMomentumAfterPCData->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentumAfterPCData->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumAfterPCData->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentumAfterPCData->GetYaxis()->SetTitle("Number of Events");
hRecoPionCandidateMomentumAfterPCData->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumAfterPCData->Draw("E1same");
c6->Modified();

// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,1.00,1.00);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("Channel");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCData,"Data");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCCCCoh,"Reco CC-Coh");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCCCQE,"Reco CC-QE");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCCCRes,"Reco CC-Res");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCNCRes,"Reco NC-Res");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCCCDIS,"Reco CC-DIS");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMCNCDIS,"Reco NC-DIS");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCMC,"Reco Other");
leg6->Draw();





TCanvas *c7 = new TCanvas("c7", "Stacked Reco Pion Candidate Momentum After Opening Angle");
c7->SetTicks();
c7->SetFillColor(kWhite);

hRecoPionCandidateMomentumAfterOAData->SetLineColor(kBlack);
hRecoPionCandidateMomentumAfterOAData->SetLineWidth(2);
hRecoPionCandidateMomentumAfterOAData->Rebin(25);
hRecoPionCandidateMomentumAfterOAData->SetMarkerStyle(20);
hRecoPionCandidateMomentumAfterOAMCCCCoh->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterOAMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCCoh->Rebin(25);
hRecoPionCandidateMomentumAfterOAMCCCQE->SetFillColor(kViolet);
hRecoPionCandidateMomentumAfterOAMCCCQE->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCQE->Rebin(25);
hRecoPionCandidateMomentumAfterOAMCCCRes->SetFillColor(kRed);
hRecoPionCandidateMomentumAfterOAMCCCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCRes->Rebin(25);
hRecoPionCandidateMomentumAfterOAMCNCRes->SetFillColor(kGreen);
hRecoPionCandidateMomentumAfterOAMCNCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCNCRes->Rebin(25);
hRecoPionCandidateMomentumAfterOAMCCCDIS->SetFillColor(kCyan-8);
hRecoPionCandidateMomentumAfterOAMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCDIS->Rebin(25);
hRecoPionCandidateMomentumAfterOAMCNCDIS->SetFillColor(kGray);
hRecoPionCandidateMomentumAfterOAMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCNCDIS->Rebin(25);
hRecoPionCandidateMomentumAfterOAMC->SetFillColor(kOrange);
hRecoPionCandidateMomentumAfterOAMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMC->Rebin(25);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCCoh, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCQE, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCRes, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCNCRes, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCDIS, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCNCDIS, -1);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMC);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCQE);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCRes);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCNCRes);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCDIS);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCNCDIS);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCCoh);

hRecoPionCandidateMomentumAfterOAData->Draw("E1");
hPPOAStacked->Draw("HISTsame");
hRecoPionCandidateMomentumAfterOAData->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentumAfterOAData->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumAfterOAData->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentumAfterOAData->GetYaxis()->SetTitle("Number of Events");
hRecoPionCandidateMomentumAfterOAData->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumAfterOAData->Draw("E1same");
c7->Modified();

// ### Defining the legend for the plot ###
TLegend *leg7 = new TLegend();
leg7 = new TLegend(0.58,0.65,1.00,1.00);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Channel");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAData,"Data");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCCCCoh,"Reco CC-Coh");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCCCQE,"Reco CC-QE");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCCCRes,"Reco CC-Res");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCNCRes,"Reco NC-Res");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCCCDIS,"Reco CC-DIS");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMCNCDIS,"Reco NC-DIS");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAMC,"Reco Other");
leg7->Draw();





TCanvas *c8 = new TCanvas("c8", "Stacked Delta_PTT After 2-Tracks Selection");
c8->SetTicks();
c8->SetFillColor(kWhite);

hDeltaPTT->SetLineColor(kBlack);
hDeltaPTT->SetLineWidth(2);
hDeltaPTT->Rebin(50);
hDeltaPTT->SetMarkerStyle(20);
hDeltaPTTCCCoh->SetFillColor(kBlue);
hDeltaPTTCCCoh->Scale(Run1ScaleFactorMC);
hDeltaPTTCCCoh->Rebin(50);
hDeltaPTTCCQE->SetFillColor(kViolet);
hDeltaPTTCCQE->Scale(Run1ScaleFactorMC);
hDeltaPTTCCQE->Rebin(50);
hDeltaPTTCCRes->SetFillColor(kRed);
hDeltaPTTCCRes->Scale(Run1ScaleFactorMC);
hDeltaPTTCCRes->Rebin(50);
hDeltaPTTNCRes->SetFillColor(kGreen);
hDeltaPTTNCRes->Scale(Run1ScaleFactorMC);
hDeltaPTTNCRes->Rebin(50);
hDeltaPTTCCDIS->SetFillColor(kCyan-8);
hDeltaPTTCCDIS->Scale(Run1ScaleFactorMC);
hDeltaPTTCCDIS->Rebin(50);
hDeltaPTTNCDIS->SetFillColor(kGray);
hDeltaPTTNCDIS->Scale(Run1ScaleFactorMC);
hDeltaPTTNCDIS->Rebin(50);
hDeltaPTTMC->SetFillColor(kOrange);
hDeltaPTTMC->Scale(Run1ScaleFactorMC);
hDeltaPTTMC->Rebin(50);
hDeltaPTTMC->Add(hDeltaPTTCCCoh, -1);
hDeltaPTTMC->Add(hDeltaPTTCCQE, -1);
hDeltaPTTMC->Add(hDeltaPTTCCRes, -1);
hDeltaPTTMC->Add(hDeltaPTTNCRes, -1);
hDeltaPTTMC->Add(hDeltaPTTCCDIS, -1);
hDeltaPTTMC->Add(hDeltaPTTNCDIS, -1);
hDeltaPTTStacked->Add(hDeltaPTTMC);
hDeltaPTTStacked->Add(hDeltaPTTCCQE);
hDeltaPTTStacked->Add(hDeltaPTTCCRes);
hDeltaPTTStacked->Add(hDeltaPTTNCRes);
hDeltaPTTStacked->Add(hDeltaPTTCCDIS);
hDeltaPTTStacked->Add(hDeltaPTTNCDIS);
hDeltaPTTStacked->Add(hDeltaPTTCCCoh);

hDeltaPTT->Draw("E1");
hDeltaPTTStacked->Draw("HISTsame");
hDeltaPTT->GetXaxis()->SetTitle("#Deltap_{TT} [GeV/c]");
hDeltaPTT->GetXaxis()->CenterTitle();
//hDeltaPTT->GetXaxis()->SetRangeUser(0, 3);
hDeltaPTT->GetYaxis()->SetTitle("Number of Events");
hDeltaPTT->GetYaxis()->CenterTitle();

hDeltaPTT->Draw("E1same");
c8->Modified();

// ### Defining the legend for the plot ###
TLegend *leg8 = new TLegend();
leg8 = new TLegend(0.58,0.65,1.00,1.00);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Channel");
leg8->AddEntry(hDeltaPTT,"Data");
leg8->AddEntry(hDeltaPTTCCCoh,"Reco CC-Coh");
leg8->AddEntry(hDeltaPTTCCQE,"Reco CC-QE");
leg8->AddEntry(hDeltaPTTCCRes,"Reco CC-Res");
leg8->AddEntry(hDeltaPTTNCRes,"Reco NC-Res");
leg8->AddEntry(hDeltaPTTCCDIS,"Reco CC-DIS");
leg8->AddEntry(hDeltaPTTNCDIS,"Reco NC-DIS");
leg8->AddEntry(hDeltaPTTMC,"Reco Other");
leg8->Draw();





TCanvas *c9 = new TCanvas("c9", "Stacked Delta_PTT After Pion Candidacy Selection");
c9->SetTicks();
c9->SetFillColor(kWhite);

hDeltaPTTPC->SetLineColor(kBlack);
hDeltaPTTPC->SetLineWidth(2);
hDeltaPTTPC->Rebin(50);
hDeltaPTTPC->SetMarkerStyle(20);
hDeltaPTTPCCCCoh->SetFillColor(kBlue);
hDeltaPTTPCCCCoh->Scale(Run1ScaleFactorMC);
hDeltaPTTPCCCCoh->Rebin(50);
hDeltaPTTPCCCQE->SetFillColor(kViolet);
hDeltaPTTPCCCQE->Scale(Run1ScaleFactorMC);
hDeltaPTTPCCCQE->Rebin(50);
hDeltaPTTPCCCRes->SetFillColor(kRed);
hDeltaPTTPCCCRes->Scale(Run1ScaleFactorMC);
hDeltaPTTPCCCRes->Rebin(50);
hDeltaPTTPCNCRes->SetFillColor(kGreen);
hDeltaPTTPCNCRes->Scale(Run1ScaleFactorMC);
hDeltaPTTPCNCRes->Rebin(50);
hDeltaPTTPCCCDIS->SetFillColor(kCyan-8);
hDeltaPTTPCCCDIS->Scale(Run1ScaleFactorMC);
hDeltaPTTPCCCDIS->Rebin(50);
hDeltaPTTPCNCDIS->SetFillColor(kGray);
hDeltaPTTPCNCDIS->Scale(Run1ScaleFactorMC);
hDeltaPTTPCNCDIS->Rebin(50);
hDeltaPTTPCMC->SetFillColor(kOrange);
hDeltaPTTPCMC->Scale(Run1ScaleFactorMC);
hDeltaPTTPCMC->Rebin(50);
hDeltaPTTPCMC->Add(hDeltaPTTPCCCCoh, -1);
hDeltaPTTPCMC->Add(hDeltaPTTPCCCQE, -1);
hDeltaPTTPCMC->Add(hDeltaPTTPCCCRes, -1);
hDeltaPTTPCMC->Add(hDeltaPTTPCNCRes, -1);
hDeltaPTTPCMC->Add(hDeltaPTTPCCCDIS, -1);
hDeltaPTTPCMC->Add(hDeltaPTTPCNCDIS, -1);
hDeltaPTTPCStacked->Add(hDeltaPTTPCMC);
hDeltaPTTPCStacked->Add(hDeltaPTTPCCCQE);
hDeltaPTTPCStacked->Add(hDeltaPTTPCCCRes);
hDeltaPTTPCStacked->Add(hDeltaPTTPCNCRes);
hDeltaPTTPCStacked->Add(hDeltaPTTPCCCDIS);
hDeltaPTTPCStacked->Add(hDeltaPTTPCNCDIS);
hDeltaPTTPCStacked->Add(hDeltaPTTPCCCCoh);

hDeltaPTTPC->Draw("E1");
hDeltaPTTPCStacked->Draw("HISTsame");
hDeltaPTTPC->GetXaxis()->SetTitle("#Deltap_{TT} [GeV/c]");
hDeltaPTTPC->GetXaxis()->CenterTitle();
//hDeltaPTTPC->GetXaxis()->SetRangeUser(0, 3);
hDeltaPTTPC->GetYaxis()->SetTitle("Number of Events");
hDeltaPTTPC->GetYaxis()->CenterTitle();

hDeltaPTTPC->Draw("E1same");
c9->Modified();

// ### Defining the legend for the plot ###
TLegend *leg9 = new TLegend();
leg9 = new TLegend(0.58,0.65,1.00,1.00);
leg9->SetTextSize(0.04);
leg9->SetTextAlign(12);
leg9->SetFillColor(kWhite);
leg9->SetLineColor(kWhite);
leg9->SetShadowColor(kWhite);
leg9->SetHeader("Channel");
leg9->AddEntry(hDeltaPTTPC,"Data");
leg9->AddEntry(hDeltaPTTPCCCCoh,"Reco CC-Coh");
leg9->AddEntry(hDeltaPTTPCCCQE,"Reco CC-QE");
leg9->AddEntry(hDeltaPTTPCCCRes,"Reco CC-Res");
leg9->AddEntry(hDeltaPTTPCNCRes,"Reco NC-Res");
leg9->AddEntry(hDeltaPTTPCCCDIS,"Reco CC-DIS");
leg9->AddEntry(hDeltaPTTPCNCDIS,"Reco NC-DIS");
leg9->AddEntry(hDeltaPTTPCMC,"Reco Other");
leg9->Draw();





TCanvas *c10 = new TCanvas("c10", "Stacked P_N After 2-Tracks Selection");
c10->SetTicks();
c10->SetFillColor(kWhite);

hPN->SetLineColor(kBlack);
hPN->SetLineWidth(2);
hPN->Rebin(50);
hPN->SetMarkerStyle(20);
hPNCCCoh->SetFillColor(kBlue);
hPNCCCoh->Scale(Run1ScaleFactorMC);
hPNCCCoh->Rebin(50);
hPNCCQE->SetFillColor(kViolet);
hPNCCQE->Scale(Run1ScaleFactorMC);
hPNCCQE->Rebin(50);
hPNCCRes->SetFillColor(kRed);
hPNCCRes->Scale(Run1ScaleFactorMC);
hPNCCRes->Rebin(50);
hPNNCRes->SetFillColor(kGreen);
hPNNCRes->Scale(Run1ScaleFactorMC);
hPNNCRes->Rebin(50);
hPNCCDIS->SetFillColor(kCyan-8);
hPNCCDIS->Scale(Run1ScaleFactorMC);
hPNCCDIS->Rebin(50);
hPNNCDIS->SetFillColor(kGray);
hPNNCDIS->Scale(Run1ScaleFactorMC);
hPNNCDIS->Rebin(50);
hPNMC->SetFillColor(kOrange);
hPNMC->Scale(Run1ScaleFactorMC);
hPNMC->Rebin(50);
hPNMC->Add(hPNCCCoh, -1);
hPNMC->Add(hPNCCQE, -1);
hPNMC->Add(hPNCCRes, -1);
hPNMC->Add(hPNNCRes, -1);
hPNMC->Add(hPNCCDIS, -1);
hPNMC->Add(hPNNCDIS, -1);
hPNStacked->Add(hPNMC);
hPNStacked->Add(hPNCCQE);
hPNStacked->Add(hPNCCRes);
hPNStacked->Add(hPNNCRes);
hPNStacked->Add(hPNCCDIS);
hPNStacked->Add(hPNNCDIS);
hPNStacked->Add(hPNCCCoh);

hPN->Draw("E1");
hPNStacked->Draw("HISTsame");
hPN->GetXaxis()->SetTitle("p_{N} [GeV/c]");
hPN->GetXaxis()->CenterTitle();
//hPN->GetXaxis()->SetRangeUser(0, 3);
hPN->GetYaxis()->SetTitle("Number of Events");
hPN->GetYaxis()->CenterTitle();

hPN->Draw("E1same");
c10->Modified();

// ### Defining the legend for the plot ###
TLegend *leg10 = new TLegend();
leg10 = new TLegend(0.58,0.65,1.00,1.00);
leg10->SetTextSize(0.04);
leg10->SetTextAlign(12);
leg10->SetFillColor(kWhite);
leg10->SetLineColor(kWhite);
leg10->SetShadowColor(kWhite);
leg10->SetHeader("Channel");
leg10->AddEntry(hPN,"Data");
leg10->AddEntry(hPNCCCoh,"Reco CC-Coh");
leg10->AddEntry(hPNCCQE,"Reco CC-QE");
leg10->AddEntry(hPNCCRes,"Reco CC-Res");
leg10->AddEntry(hPNNCRes,"Reco NC-Res");
leg10->AddEntry(hPNCCDIS,"Reco CC-DIS");
leg10->AddEntry(hPNNCDIS,"Reco NC-DIS");
leg10->AddEntry(hPNMC,"Reco Other");
leg10->Draw();





TCanvas *c11 = new TCanvas("c11", "Stacked P_N After Pion Candidacy Selection");
c11->SetTicks();
c11->SetFillColor(kWhite);

hPNPC->SetLineColor(kBlack);
hPNPC->SetLineWidth(2);
hPNPC->Rebin(50);
hPNPC->SetMarkerStyle(20);
hPNPCCCCoh->SetFillColor(kBlue);
hPNPCCCCoh->Scale(Run1ScaleFactorMC);
hPNPCCCCoh->Rebin(50);
hPNPCCCQE->SetFillColor(kViolet);
hPNPCCCQE->Scale(Run1ScaleFactorMC);
hPNPCCCQE->Rebin(50);
hPNPCCCRes->SetFillColor(kRed);
hPNPCCCRes->Scale(Run1ScaleFactorMC);
hPNPCCCRes->Rebin(50);
hPNPCNCRes->SetFillColor(kGreen);
hPNPCNCRes->Scale(Run1ScaleFactorMC);
hPNPCNCRes->Rebin(50);
hPNPCCCDIS->SetFillColor(kCyan-8);
hPNPCCCDIS->Scale(Run1ScaleFactorMC);
hPNPCCCDIS->Rebin(50);
hPNPCNCDIS->SetFillColor(kGray);
hPNPCNCDIS->Scale(Run1ScaleFactorMC);
hPNPCNCDIS->Rebin(50);
hPNPCMC->SetFillColor(kOrange);
hPNPCMC->Scale(Run1ScaleFactorMC);
hPNPCMC->Rebin(50);
hPNPCMC->Add(hPNPCCCCoh, -1);
hPNPCMC->Add(hPNPCCCQE, -1);
hPNPCMC->Add(hPNPCCCRes, -1);
hPNPCMC->Add(hPNPCNCRes, -1);
hPNPCMC->Add(hPNPCCCDIS, -1);
hPNPCMC->Add(hPNPCNCDIS, -1);
hPNPCStacked->Add(hPNPCMC);
hPNPCStacked->Add(hPNPCCCQE);
hPNPCStacked->Add(hPNPCCCRes);
hPNPCStacked->Add(hPNPCNCRes);
hPNPCStacked->Add(hPNPCCCDIS);
hPNPCStacked->Add(hPNPCNCDIS);
hPNPCStacked->Add(hPNPCCCCoh);

hPNPC->Draw("E1");
hPNPCStacked->Draw("HISTsame");
hPNPC->GetXaxis()->SetTitle("p_{N} [GeV/c]");
hPNPC->GetXaxis()->CenterTitle();
//hPNPC->GetXaxis()->SetRangeUser(0, 3);
hPNPC->GetYaxis()->SetTitle("Number of Events");
hPNPC->GetYaxis()->CenterTitle();

hPNPC->Draw("E1same");
c11->Modified();

// ### Defining the legend for the plot ###
TLegend *leg11 = new TLegend();
leg11 = new TLegend(0.58,0.65,1.00,1.00);
leg11->SetTextSize(0.04);
leg11->SetTextAlign(12);
leg11->SetFillColor(kWhite);
leg11->SetLineColor(kWhite);
leg11->SetShadowColor(kWhite);
leg11->SetHeader("Channel");
leg11->AddEntry(hPNPC,"Data");
leg11->AddEntry(hPNPCCCCoh,"Reco CC-Coh");
leg11->AddEntry(hPNPCCCQE,"Reco CC-QE");
leg11->AddEntry(hPNPCCCRes,"Reco CC-Res");
leg11->AddEntry(hPNPCNCRes,"Reco NC-Res");
leg11->AddEntry(hPNPCCCDIS,"Reco CC-DIS");
leg11->AddEntry(hPNPCNCDIS,"Reco NC-DIS");
leg11->AddEntry(hPNPCMC,"Reco Other");
leg11->Draw();





TCanvas *c12 = new TCanvas("c12", "Stacked Delta_Alpha_T After 2-Tracks Selection");
c12->SetTicks();
c12->SetFillColor(kWhite);

hDeltaAlphaT->SetLineColor(kBlack);
hDeltaAlphaT->SetLineWidth(2);
hDeltaAlphaT->Rebin(9);
hDeltaAlphaT->SetMarkerStyle(20);
hDeltaAlphaTCCCoh->SetFillColor(kBlue);
hDeltaAlphaTCCCoh->Scale(Run1ScaleFactorMC);
hDeltaAlphaTCCCoh->Rebin(9);
hDeltaAlphaTCCQE->SetFillColor(kViolet);
hDeltaAlphaTCCQE->Scale(Run1ScaleFactorMC);
hDeltaAlphaTCCQE->Rebin(9);
hDeltaAlphaTCCRes->SetFillColor(kRed);
hDeltaAlphaTCCRes->Scale(Run1ScaleFactorMC);
hDeltaAlphaTCCRes->Rebin(9);
hDeltaAlphaTNCRes->SetFillColor(kGreen);
hDeltaAlphaTNCRes->Scale(Run1ScaleFactorMC);
hDeltaAlphaTNCRes->Rebin(9);
hDeltaAlphaTCCDIS->SetFillColor(kCyan-8);
hDeltaAlphaTCCDIS->Scale(Run1ScaleFactorMC);
hDeltaAlphaTCCDIS->Rebin(9);
hDeltaAlphaTNCDIS->SetFillColor(kGray);
hDeltaAlphaTNCDIS->Scale(Run1ScaleFactorMC);
hDeltaAlphaTNCDIS->Rebin(9);
hDeltaAlphaTMC->SetFillColor(kOrange);
hDeltaAlphaTMC->Scale(Run1ScaleFactorMC);
hDeltaAlphaTMC->Rebin(9);
hDeltaAlphaTMC->Add(hDeltaAlphaTCCCoh, -1);
hDeltaAlphaTMC->Add(hDeltaAlphaTCCQE, -1);
hDeltaAlphaTMC->Add(hDeltaAlphaTCCRes, -1);
hDeltaAlphaTMC->Add(hDeltaAlphaTNCRes, -1);
hDeltaAlphaTMC->Add(hDeltaAlphaTCCDIS, -1);
hDeltaAlphaTMC->Add(hDeltaAlphaTNCDIS, -1);
hDeltaAlphaTStacked->Add(hDeltaAlphaTMC);
hDeltaAlphaTStacked->Add(hDeltaAlphaTCCQE);
hDeltaAlphaTStacked->Add(hDeltaAlphaTCCRes);
hDeltaAlphaTStacked->Add(hDeltaAlphaTNCRes);
hDeltaAlphaTStacked->Add(hDeltaAlphaTCCDIS);
hDeltaAlphaTStacked->Add(hDeltaAlphaTNCDIS);
hDeltaAlphaTStacked->Add(hDeltaAlphaTCCCoh);

hDeltaAlphaT->Draw("E1");
hDeltaAlphaTStacked->Draw("HISTsame");
hDeltaAlphaT->GetXaxis()->SetTitle("#Delta#alpha_{T} [Degrees]");
hDeltaAlphaT->GetXaxis()->CenterTitle();
//hDeltaAlphaT->GetXaxis()->SetRangeUser(0, 3);
hDeltaAlphaT->GetYaxis()->SetTitle("Number of Events");
hDeltaAlphaT->GetYaxis()->CenterTitle();

hDeltaAlphaT->Draw("E1same");
c12->Modified();

// ### Defining the legend for the plot ###
TLegend *leg12 = new TLegend();
leg12 = new TLegend(0.58,0.65,1.00,1.00);
leg12->SetTextSize(0.04);
leg12->SetTextAlign(12);
leg12->SetFillColor(kWhite);
leg12->SetLineColor(kWhite);
leg12->SetShadowColor(kWhite);
leg12->SetHeader("Channel");
leg12->AddEntry(hDeltaAlphaT,"Data");
leg12->AddEntry(hDeltaAlphaTCCCoh,"Reco CC-Coh");
leg12->AddEntry(hDeltaAlphaTCCQE,"Reco CC-QE");
leg12->AddEntry(hDeltaAlphaTCCRes,"Reco CC-Res");
leg12->AddEntry(hDeltaAlphaTNCRes,"Reco NC-Res");
leg12->AddEntry(hDeltaAlphaTCCDIS,"Reco CC-DIS");
leg12->AddEntry(hDeltaAlphaTNCDIS,"Reco NC-DIS");
leg12->AddEntry(hDeltaAlphaTMC,"Reco Other");
leg12->Draw();





TCanvas *c13 = new TCanvas("c13", "Stacked Delta_Alpha_T After Pion Candidacy Selection");
c13->SetTicks();
c13->SetFillColor(kWhite);

hDeltaAlphaTPC->SetLineColor(kBlack);
hDeltaAlphaTPC->SetLineWidth(2);
hDeltaAlphaTPC->Rebin(9);
hDeltaAlphaTPC->SetMarkerStyle(20);
hDeltaAlphaTPCCCCoh->SetFillColor(kBlue);
hDeltaAlphaTPCCCCoh->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCCCCoh->Rebin(9);
hDeltaAlphaTPCCCQE->SetFillColor(kViolet);
hDeltaAlphaTPCCCQE->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCCCQE->Rebin(9);
hDeltaAlphaTPCCCRes->SetFillColor(kRed);
hDeltaAlphaTPCCCRes->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCCCRes->Rebin(9);
hDeltaAlphaTPCNCRes->SetFillColor(kGreen);
hDeltaAlphaTPCNCRes->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCNCRes->Rebin(9);
hDeltaAlphaTPCCCDIS->SetFillColor(kCyan-8);
hDeltaAlphaTPCCCDIS->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCCCDIS->Rebin(9);
hDeltaAlphaTPCNCDIS->SetFillColor(kGray);
hDeltaAlphaTPCNCDIS->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCNCDIS->Rebin(9);
hDeltaAlphaTPCMC->SetFillColor(kOrange);
hDeltaAlphaTPCMC->Scale(Run1ScaleFactorMC);
hDeltaAlphaTPCMC->Rebin(9);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCCCCoh, -1);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCCCQE, -1);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCCCRes, -1);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCNCRes, -1);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCCCDIS, -1);
hDeltaAlphaTPCMC->Add(hDeltaAlphaTPCNCDIS, -1);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCMC);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCCCQE);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCCCRes);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCNCRes);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCCCDIS);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCNCDIS);
hDeltaAlphaTPCStacked->Add(hDeltaAlphaTPCCCCoh);

hDeltaAlphaTPC->Draw("E1");
hDeltaAlphaTPCStacked->Draw("HISTsame");
hDeltaAlphaTPC->GetXaxis()->SetTitle("#Delta#alpha_{T} [Degrees]");
hDeltaAlphaTPC->GetXaxis()->CenterTitle();
//hDeltaAlphaTPC->GetXaxis()->SetRangeUser(0, 3);
hDeltaAlphaTPC->GetYaxis()->SetTitle("Number of Events");
hDeltaAlphaTPC->GetYaxis()->CenterTitle();

hDeltaAlphaTPC->Draw("E1same");
c13->Modified();

// ### Defining the legend for the plot ###
TLegend *leg13 = new TLegend();
leg13 = new TLegend(0.58,0.65,1.00,1.00);
leg13->SetTextSize(0.04);
leg13->SetTextAlign(12);
leg13->SetFillColor(kWhite);
leg13->SetLineColor(kWhite);
leg13->SetShadowColor(kWhite);
leg13->SetHeader("Channel");
leg13->AddEntry(hDeltaAlphaTPC,"Data");
leg13->AddEntry(hDeltaAlphaTPCCCCoh,"Reco CC-Coh");
leg13->AddEntry(hDeltaAlphaTPCCCQE,"Reco CC-QE");
leg13->AddEntry(hDeltaAlphaTPCCCRes,"Reco CC-Res");
leg13->AddEntry(hDeltaAlphaTPCNCRes,"Reco NC-Res");
leg13->AddEntry(hDeltaAlphaTPCCCDIS,"Reco CC-DIS");
leg13->AddEntry(hDeltaAlphaTPCNCDIS,"Reco NC-DIS");
leg13->AddEntry(hDeltaAlphaTPCMC,"Reco Other");
leg13->Draw();
}
