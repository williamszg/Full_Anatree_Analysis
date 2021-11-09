#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("../Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("../CCCoh_Daughter_Information.root"); // <-- File for CCCoh Daughters Tree
TFile *f3 = new TFile("../Other_Daughter_Information.root"); // <-- File for Other Daughters Tree
TFile *f4 = new TFile("UpdatedVertexActivity/Data_Histograms_BothPC.root"); // <-- File for Data Information
TFile *f5 = new TFile("UpdatedVertexActivity/MC_Histograms_BothPC.root"); // <-- File for New MC Information
TFile *f6 = new TFile("UpdatedVertexActivity/MC_CCCoh_Histograms_BothPC.root"); // <-- File for New MC CCCoh Information
TFile *f7 = new TFile("UpdatedVertexActivity/MC_CCQE_Histograms_BothPC.root"); // <-- File for New MC CCQE Information
TFile *f8 = new TFile("UpdatedVertexActivity/MC_CCRes_Histograms_BothPC.root"); // <-- File for New MC CCRes Information
TFile *f9 = new TFile("UpdatedVertexActivity/MC_NCRes_Histograms_BothPC.root"); // <-- File for New MC NCRes Information
TFile *f10 = new TFile("UpdatedVertexActivity/MC_CCDIS_Histograms_BothPC.root"); // <-- File for New MC CCDIS Information
TFile *f11 = new TFile("UpdatedVertexActivity/MC_NCDIS_Histograms_BothPC.root"); // <-- File for New MC NCDIS Information
TFile *f12 = new TFile("UpdatedVertexActivity/MC_Other_Histograms_BothPC.root"); // <-- File for New MC Other Information
TFile *f13 = new TFile("UpdatedVertexActivity/CCCoh_Enhanced_Histograms_BothPC.root"); // <-- File for New MC CCCoh Enhanced Information
TFile *f14 = new TFile("UpdatedVertexActivity/EXT_Histograms_BothPC.root"); // <-- File for EXT Information
TFile *f15 = new TFile("UpdatedVertexActivity/Dirt_Histograms_BothPC.root"); // <-- File for Dirt Information
TFile *f16 = new TFile("POT_Counting/POT_BKGD.root"); // <-- File for POT of BKGD Sample
TFile *f17 = new TFile("POT_Counting/POT_CCCoh.root"); // <-- File for POT of CCCoh Sample
TFile *f18 = new TFile("POT_Counting/POT_Dirt.root"); // <-- File for POT of Dirt Sample





TH1D *hT = (TH1D*)f4->Get("hT");
TH1D *hTReco = (TH1D*)f5->Get("hT");
TH1D *hTRecoCCCoh = (TH1D*)f6->Get("hT");
TH1D *hTRecoCCQE = (TH1D*)f7->Get("hT");
TH1D *hTRecoCCRes = (TH1D*)f8->Get("hT");
TH1D *hTRecoNCRes = (TH1D*)f9->Get("hT");
TH1D *hTRecoCCDIS = (TH1D*)f10->Get("hT");
TH1D *hTRecoNCDIS = (TH1D*)f11->Get("hT");
TH1D *hTRecoOther = (TH1D*)f12->Get("hT");
TH1D *hTRecoCCCohEn = (TH1D*)f13->Get("hT");
TH1D *hTRecoEXT = (TH1D*)f14->Get("hT");
TH1D *hTRecoDirt = (TH1D*)f15->Get("hT");

hT->Sumw2();
hTReco->Sumw2();
hTRecoCCCoh->Sumw2();
hTRecoCCQE->Sumw2();
hTRecoCCRes->Sumw2();
hTRecoNCRes->Sumw2();
hTRecoCCDIS->Sumw2();
hTRecoNCDIS->Sumw2();
hTRecoOther->Sumw2();
hTRecoCCCohEn->Sumw2();
hTRecoEXT->Sumw2();
hTRecoDirt->Sumw2();


TH1D *hTPC = (TH1D*)f4->Get("hTPionCandidate");
TH1D *hTPCReco = (TH1D*)f5->Get("hTPionCandidate");
TH1D *hTPCRecoCCCoh = (TH1D*)f6->Get("hTPionCandidate");
TH1D *hTPCRecoCCQE = (TH1D*)f7->Get("hTPionCandidate");
TH1D *hTPCRecoCCRes = (TH1D*)f8->Get("hTPionCandidate");
TH1D *hTPCRecoNCRes = (TH1D*)f9->Get("hTPionCandidate");
TH1D *hTPCRecoCCDIS = (TH1D*)f10->Get("hTPionCandidate");
TH1D *hTPCRecoNCDIS = (TH1D*)f11->Get("hTPionCandidate");
TH1D *hTPCRecoOther = (TH1D*)f12->Get("hTPionCandidate");
TH1D *hTPCRecoCCCohEn = (TH1D*)f13->Get("hTPionCandidate");
TH1D *hTPCRecoEXT = (TH1D*)f14->Get("hTPionCandidate");
TH1D *hTPCRecoDirt = (TH1D*)f15->Get("hTPionCandidate");

hTPC->Sumw2();
hTPCReco->Sumw2();
hTPCRecoCCCoh->Sumw2();
hTPCRecoCCQE->Sumw2();
hTPCRecoCCRes->Sumw2();
hTPCRecoNCRes->Sumw2();
hTPCRecoCCDIS->Sumw2();
hTPCRecoNCDIS->Sumw2();
hTPCRecoOther->Sumw2();
hTPCRecoCCCohEn->Sumw2();
hTPCRecoEXT->Sumw2();
hTPCRecoDirt->Sumw2();


TH1D *hTOA = (TH1D*)f4->Get("hTOA");
TH1D *hTOAReco = (TH1D*)f5->Get("hTOA");
TH1D *hTOARecoCCCoh = (TH1D*)f6->Get("hTOA");
TH1D *hTOARecoCCQE = (TH1D*)f7->Get("hTOA");
TH1D *hTOARecoCCRes = (TH1D*)f8->Get("hTOA");
TH1D *hTOARecoNCRes = (TH1D*)f9->Get("hTOA");
TH1D *hTOARecoCCDIS = (TH1D*)f10->Get("hTOA");
TH1D *hTOARecoNCDIS = (TH1D*)f11->Get("hTOA");
TH1D *hTOARecoOther = (TH1D*)f12->Get("hTOA");
TH1D *hTOARecoCCCohEn = (TH1D*)f13->Get("hTOA");
TH1D *hTOARecoEXT = (TH1D*)f14->Get("hTOA");
TH1D *hTOARecoDirt = (TH1D*)f15->Get("hTOA");

hTOA->Sumw2();
hTOAReco->Sumw2();
hTOARecoCCCoh->Sumw2();
hTOARecoCCQE->Sumw2();
hTOARecoCCRes->Sumw2();
hTOARecoNCRes->Sumw2();
hTOARecoCCDIS->Sumw2();
hTOARecoNCDIS->Sumw2();
hTOARecoOther->Sumw2();
hTOARecoCCCohEn->Sumw2();
hTOARecoEXT->Sumw2();
hTOARecoDirt->Sumw2();


TH1D *hRecoMuonCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCOther = (TH1D*)f12->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCEXT = (TH1D*)f14->Get("hRecoMuonCandidateMomentumAfterPC");
TH1D *hRecoMuonCandidateMomentumAfterPCDirt = (TH1D*)f15->Get("hRecoMuonCandidateMomentumAfterPC");

hRecoMuonCandidateMomentumAfterPCData->Sumw2();
hRecoMuonCandidateMomentumAfterPCMC->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCQE->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCRes->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCNCRes->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCOther->Sumw2();
hRecoMuonCandidateMomentumAfterPCMCCCCohEn->Sumw2();
hRecoMuonCandidateMomentumAfterPCEXT->Sumw2();
hRecoMuonCandidateMomentumAfterPCDirt->Sumw2();


TH1D *hRecoMuonCandidateMomentumAfterOAData = (TH1D*)f4->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMC = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCOther = (TH1D*)f12->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAMCCCCohEn = (TH1D*)f13->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOAEXT = (TH1D*)f14->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumAfterOADirt = (TH1D*)f15->Get("hRecoMuonCandidateMomentumAfterOA");

hRecoMuonCandidateMomentumAfterOAData->Sumw2();
hRecoMuonCandidateMomentumAfterOAMC->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCQE->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCRes->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCNCRes->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCOther->Sumw2();
hRecoMuonCandidateMomentumAfterOAMCCCCohEn->Sumw2();
hRecoMuonCandidateMomentumAfterOAEXT->Sumw2();
hRecoMuonCandidateMomentumAfterOADirt->Sumw2();


TH1D *hRecoPionCandidateMomentumAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCQE = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCRes = (TH1D*)f8->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCNCRes = (TH1D*)f9->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCOther = (TH1D*)f12->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCEXT = (TH1D*)f14->Get("hRecoPionCandidateMomentumAfterPC");
TH1D *hRecoPionCandidateMomentumAfterPCDirt = (TH1D*)f15->Get("hRecoPionCandidateMomentumAfterPC");

hRecoPionCandidateMomentumAfterPCData->Sumw2();
hRecoPionCandidateMomentumAfterPCMC->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCCoh->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCQE->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCRes->Sumw2();
hRecoPionCandidateMomentumAfterPCMCNCRes->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCDIS->Sumw2();
hRecoPionCandidateMomentumAfterPCMCNCDIS->Sumw2();
hRecoPionCandidateMomentumAfterPCMCOther->Sumw2();
hRecoPionCandidateMomentumAfterPCMCCCCohEn->Sumw2();
hRecoPionCandidateMomentumAfterPCEXT->Sumw2();
hRecoPionCandidateMomentumAfterPCDirt->Sumw2();


TH1D *hRecoPionCandidateMomentumAfterOAData = (TH1D*)f4->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMC = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCQE = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCRes = (TH1D*)f8->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCNCRes = (TH1D*)f9->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCOther = (TH1D*)f12->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAMCCCCohEn = (TH1D*)f13->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOAEXT = (TH1D*)f14->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumAfterOADirt = (TH1D*)f15->Get("hRecoPionCandidateMomentumAfterOA");

hRecoPionCandidateMomentumAfterOAData->Sumw2();
hRecoPionCandidateMomentumAfterOAMC->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCCoh->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCQE->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCRes->Sumw2();
hRecoPionCandidateMomentumAfterOAMCNCRes->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCDIS->Sumw2();
hRecoPionCandidateMomentumAfterOAMCNCDIS->Sumw2();
hRecoPionCandidateMomentumAfterOAMCOther->Sumw2();
hRecoPionCandidateMomentumAfterOAMCCCCohEn->Sumw2();
hRecoPionCandidateMomentumAfterOAEXT->Sumw2();
hRecoPionCandidateMomentumAfterOADirt->Sumw2();


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


TH1D *hPionCandidateTrkLLRPIDScoreAfterVAData = (TH1D*)f4->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVAMC = (TH1D*)f5->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVACCCoh = (TH1D*)f6->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVACCQE = (TH1D*)f7->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVACCRes = (TH1D*)f8->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVANCRes = (TH1D*)f9->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVACCDIS = (TH1D*)f10->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVANCDIS = (TH1D*)f11->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVAOther = (TH1D*)f12->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVACCCohEn = (TH1D*)f13->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVAEXT = (TH1D*)f14->Get("hPionCandidateTrkLLRPIDScoreAfterVA");
TH1D *hPionCandidateTrkLLRPIDScoreAfterVADirt = (TH1D*)f15->Get("hPionCandidateTrkLLRPIDScoreAfterVA");

hPionCandidateTrkLLRPIDScoreAfterVAData->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVAMC->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVACCCoh->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVACCQE->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVACCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVANCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVACCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVANCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVAOther->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVACCCohEn->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVAEXT->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterVADirt->Sumw2();


TH1D *hPionCandidateTrkLLRPIDScoreAfterPCData = (TH1D*)f4->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCMC = (TH1D*)f5->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCCCCoh = (TH1D*)f6->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCCCQE = (TH1D*)f7->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCCCRes = (TH1D*)f8->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCNCRes = (TH1D*)f9->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCCCDIS = (TH1D*)f10->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCNCDIS = (TH1D*)f11->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCOther = (TH1D*)f12->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn = (TH1D*)f13->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCEXT = (TH1D*)f14->Get("hPionCandidateTrkLLRPIDScoreAfterPC");
TH1D *hPionCandidateTrkLLRPIDScoreAfterPCDirt = (TH1D*)f15->Get("hPionCandidateTrkLLRPIDScoreAfterPC");

hPionCandidateTrkLLRPIDScoreAfterPCData->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCMC->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCCCCoh->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCCCQE->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCCCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCNCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCCCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCNCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCOther->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCEXT->Sumw2();
hPionCandidateTrkLLRPIDScoreAfterPCDirt->Sumw2();


TH1D *hVertexActivityData = (TH1D*)f4->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityMC = (TH1D*)f5->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityCCCoh = (TH1D*)f6->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityCCQE = (TH1D*)f7->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityCCRes = (TH1D*)f8->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityNCRes = (TH1D*)f9->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityCCDIS = (TH1D*)f10->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityNCDIS = (TH1D*)f11->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityOther = (TH1D*)f12->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityCCCohEn = (TH1D*)f13->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityEXT = (TH1D*)f14->Get("hVertexActivityFor2Tracks");
TH1D *hVertexActivityDirt = (TH1D*)f15->Get("hVertexActivityFor2Tracks");

hVertexActivityData->Sumw2();
hVertexActivityMC->Sumw2();
hVertexActivityCCCoh->Sumw2();
hVertexActivityCCQE->Sumw2();
hVertexActivityCCRes->Sumw2();
hVertexActivityNCRes->Sumw2();
hVertexActivityCCDIS->Sumw2();
hVertexActivityNCDIS->Sumw2();
hVertexActivityOther->Sumw2();
hVertexActivityCCCohEn->Sumw2();
hVertexActivityEXT->Sumw2();
hVertexActivityDirt->Sumw2();


TH1D *hPionCandidateTrkLLRPIDScoreData = (TH1D*)f4->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreMC = (TH1D*)f5->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreCCCoh = (TH1D*)f6->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreCCQE = (TH1D*)f7->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreCCRes = (TH1D*)f8->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreNCRes = (TH1D*)f9->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreCCDIS = (TH1D*)f10->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreNCDIS = (TH1D*)f11->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreOther = (TH1D*)f12->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreCCCohEn = (TH1D*)f13->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreEXT = (TH1D*)f14->Get("hPionCandidateTrkLLRPIDScore");
TH1D *hPionCandidateTrkLLRPIDScoreDirt = (TH1D*)f15->Get("hPionCandidateTrkLLRPIDScore");

hPionCandidateTrkLLRPIDScoreData->Sumw2();
hPionCandidateTrkLLRPIDScoreMC->Sumw2();
hPionCandidateTrkLLRPIDScoreCCCoh->Sumw2();
hPionCandidateTrkLLRPIDScoreCCQE->Sumw2();
hPionCandidateTrkLLRPIDScoreCCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreNCRes->Sumw2();
hPionCandidateTrkLLRPIDScoreCCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreNCDIS->Sumw2();
hPionCandidateTrkLLRPIDScoreOther->Sumw2();
hPionCandidateTrkLLRPIDScoreCCCohEn->Sumw2();
hPionCandidateTrkLLRPIDScoreEXT->Sumw2();
hPionCandidateTrkLLRPIDScoreDirt->Sumw2();


TH1D *hMuonCandidateTrkLLRPIDScoreData = (TH1D*)f4->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreMC = (TH1D*)f5->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreCCCoh = (TH1D*)f6->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreCCQE = (TH1D*)f7->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreCCRes = (TH1D*)f8->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreNCRes = (TH1D*)f9->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreCCDIS = (TH1D*)f10->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreNCDIS = (TH1D*)f11->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreOther = (TH1D*)f12->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreCCCohEn = (TH1D*)f13->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreEXT = (TH1D*)f14->Get("hMuonCandidateTrkLLRPIDScore");
TH1D *hMuonCandidateTrkLLRPIDScoreDirt = (TH1D*)f15->Get("hMuonCandidateTrkLLRPIDScore");

hMuonCandidateTrkLLRPIDScoreData->Sumw2();
hMuonCandidateTrkLLRPIDScoreMC->Sumw2();
hMuonCandidateTrkLLRPIDScoreCCCoh->Sumw2();
hMuonCandidateTrkLLRPIDScoreCCQE->Sumw2();
hMuonCandidateTrkLLRPIDScoreCCRes->Sumw2();
hMuonCandidateTrkLLRPIDScoreNCRes->Sumw2();
hMuonCandidateTrkLLRPIDScoreCCDIS->Sumw2();
hMuonCandidateTrkLLRPIDScoreNCDIS->Sumw2();
hMuonCandidateTrkLLRPIDScoreOther->Sumw2();
hMuonCandidateTrkLLRPIDScoreCCCohEn->Sumw2();
hMuonCandidateTrkLLRPIDScoreEXT->Sumw2();
hMuonCandidateTrkLLRPIDScoreDirt->Sumw2();


TH1D *hConeAngleData = (TH1D*)f4->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleMC = (TH1D*)f5->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleCCCoh = (TH1D*)f6->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleCCQE = (TH1D*)f7->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleCCRes = (TH1D*)f8->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleNCRes = (TH1D*)f9->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleCCDIS = (TH1D*)f10->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleNCDIS = (TH1D*)f11->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleOther = (TH1D*)f12->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleCCCohEn = (TH1D*)f13->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleEXT = (TH1D*)f14->Get("hConeAngleFor2Tracks");
TH1D *hConeAngleDirt = (TH1D*)f15->Get("hConeAngleFor2Tracks");

hConeAngleData->Sumw2();
hConeAngleMC->Sumw2();
hConeAngleCCCoh->Sumw2();
hConeAngleCCQE->Sumw2();
hConeAngleCCRes->Sumw2();
hConeAngleNCRes->Sumw2();
hConeAngleCCDIS->Sumw2();
hConeAngleNCDIS->Sumw2();
hConeAngleOther->Sumw2();
hConeAngleCCCohEn->Sumw2();
hConeAngleEXT->Sumw2();
hConeAngleDirt->Sumw2();


TH1D *hOpeningAngleData = (TH1D*)f4->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleMC = (TH1D*)f5->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleCCCoh = (TH1D*)f6->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleCCQE = (TH1D*)f7->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleCCRes = (TH1D*)f8->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleNCRes = (TH1D*)f9->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleCCDIS = (TH1D*)f10->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleNCDIS = (TH1D*)f11->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleOther = (TH1D*)f12->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleCCCohEn = (TH1D*)f13->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleEXT = (TH1D*)f14->Get("hOpeningAngleFor2Tracks");
TH1D *hOpeningAngleDirt = (TH1D*)f15->Get("hOpeningAngleFor2Tracks");

hOpeningAngleData->Sumw2();
hOpeningAngleMC->Sumw2();
hOpeningAngleCCCoh->Sumw2();
hOpeningAngleCCQE->Sumw2();
hOpeningAngleCCRes->Sumw2();
hOpeningAngleNCRes->Sumw2();
hOpeningAngleCCDIS->Sumw2();
hOpeningAngleNCDIS->Sumw2();
hOpeningAngleOther->Sumw2();
hOpeningAngleCCCohEn->Sumw2();
hOpeningAngleEXT->Sumw2();
hOpeningAngleDirt->Sumw2();


TH1D *hOpeningAngleDataForPC = (TH1D*)f4->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleMCForPC = (TH1D*)f5->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleCCCohForPC = (TH1D*)f6->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleCCQEForPC = (TH1D*)f7->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleCCResForPC = (TH1D*)f8->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleNCResForPC = (TH1D*)f9->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleCCDISForPC = (TH1D*)f10->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleNCDISForPC = (TH1D*)f11->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleOtherForPC = (TH1D*)f12->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleCCCohEnForPC = (TH1D*)f13->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleEXTForPC = (TH1D*)f14->Get("hOpeningAngleForPionCandidate");
TH1D *hOpeningAngleDirtForPC = (TH1D*)f15->Get("hOpeningAngleForPionCandidate");

hOpeningAngleDataForPC->Sumw2();
hOpeningAngleMCForPC->Sumw2();
hOpeningAngleCCCohForPC->Sumw2();
hOpeningAngleCCQEForPC->Sumw2();
hOpeningAngleCCResForPC->Sumw2();
hOpeningAngleNCResForPC->Sumw2();
hOpeningAngleCCDISForPC->Sumw2();
hOpeningAngleNCDISForPC->Sumw2();
hOpeningAngleOtherForPC->Sumw2();
hOpeningAngleCCCohEnForPC->Sumw2();
hOpeningAngleEXTForPC->Sumw2();
hOpeningAngleDirtForPC->Sumw2();


TH1D *hRecoNuEnergyFVData = (TH1D*)f4->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVMC = (TH1D*)f5->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVCCCoh = (TH1D*)f6->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVCCQE = (TH1D*)f7->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVCCRes = (TH1D*)f8->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVNCRes = (TH1D*)f9->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVCCDIS = (TH1D*)f10->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVNCDIS = (TH1D*)f11->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVOther = (TH1D*)f12->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVCCCohEn = (TH1D*)f13->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVEXT = (TH1D*)f14->Get("hRecoNuEnergyFiducialVolume");
TH1D *hRecoNuEnergyFVDirt = (TH1D*)f15->Get("hRecoNuEnergyFiducialVolume");

hRecoNuEnergyFVData->Sumw2();
hRecoNuEnergyFVMC->Sumw2();
hRecoNuEnergyFVCCCoh->Sumw2();
hRecoNuEnergyFVCCQE->Sumw2();
hRecoNuEnergyFVCCRes->Sumw2();
hRecoNuEnergyFVNCRes->Sumw2();
hRecoNuEnergyFVCCDIS->Sumw2();
hRecoNuEnergyFVNCDIS->Sumw2();
hRecoNuEnergyFVOther->Sumw2();
hRecoNuEnergyFVCCCohEn->Sumw2();
hRecoNuEnergyFVEXT->Sumw2();
hRecoNuEnergyFVDirt->Sumw2();


TH1D *hRecoNuEnergyData = (TH1D*)f4->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyMC = (TH1D*)f5->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyCCCoh = (TH1D*)f6->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyCCQE = (TH1D*)f7->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyCCRes = (TH1D*)f8->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyNCRes = (TH1D*)f9->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyCCDIS = (TH1D*)f10->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyNCDIS = (TH1D*)f11->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyOther = (TH1D*)f12->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyCCCohEn = (TH1D*)f13->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyEXT = (TH1D*)f14->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyDirt = (TH1D*)f15->Get("hRecoNuEnergy");

hRecoNuEnergyData->Sumw2();
hRecoNuEnergyMC->Sumw2();
hRecoNuEnergyCCCoh->Sumw2();
hRecoNuEnergyCCQE->Sumw2();
hRecoNuEnergyCCRes->Sumw2();
hRecoNuEnergyNCRes->Sumw2();
hRecoNuEnergyCCDIS->Sumw2();
hRecoNuEnergyNCDIS->Sumw2();
hRecoNuEnergyOther->Sumw2();
hRecoNuEnergyCCCohEn->Sumw2();
hRecoNuEnergyEXT->Sumw2();
hRecoNuEnergyDirt->Sumw2();


TH1D *hRecoNuEnergyOAData = (TH1D*)f4->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOAMC = (TH1D*)f5->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOACCCoh = (TH1D*)f6->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOACCQE = (TH1D*)f7->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOACCRes = (TH1D*)f8->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOANCRes = (TH1D*)f9->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOACCDIS = (TH1D*)f10->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOANCDIS = (TH1D*)f11->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOAOther = (TH1D*)f12->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOACCCohEn = (TH1D*)f13->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOAEXT = (TH1D*)f14->Get("hRecoNuEnergyOA");
TH1D *hRecoNuEnergyOADirt = (TH1D*)f15->Get("hRecoNuEnergyOA");

hRecoNuEnergyOAData->Sumw2();
hRecoNuEnergyOAMC->Sumw2();
hRecoNuEnergyOACCCoh->Sumw2();
hRecoNuEnergyOACCQE->Sumw2();
hRecoNuEnergyOACCRes->Sumw2();
hRecoNuEnergyOANCRes->Sumw2();
hRecoNuEnergyOACCDIS->Sumw2();
hRecoNuEnergyOANCDIS->Sumw2();
hRecoNuEnergyOAOther->Sumw2();
hRecoNuEnergyOACCCohEn->Sumw2();
hRecoNuEnergyOAEXT->Sumw2();
hRecoNuEnergyOADirt->Sumw2();


TH1D *hMuonCandidateThetaAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCOther = (TH1D*)f12->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCEXT = (TH1D*)f14->Get("hRecoMuonCandidateThetaAfterPC");
TH1D *hMuonCandidateThetaAfterPCDirt = (TH1D*)f15->Get("hRecoMuonCandidateThetaAfterPC");

hMuonCandidateThetaAfterPCData->Sumw2();
hMuonCandidateThetaAfterPCMC->Sumw2();
hMuonCandidateThetaAfterPCMCCCCoh->Sumw2();
hMuonCandidateThetaAfterPCMCCCQE->Sumw2();
hMuonCandidateThetaAfterPCMCCCRes->Sumw2();
hMuonCandidateThetaAfterPCMCNCRes->Sumw2();
hMuonCandidateThetaAfterPCMCCCDIS->Sumw2();
hMuonCandidateThetaAfterPCMCNCDIS->Sumw2();
hMuonCandidateThetaAfterPCMCOther->Sumw2();
hMuonCandidateThetaAfterPCMCCCCohEn->Sumw2();
hMuonCandidateThetaAfterPCEXT->Sumw2();
hMuonCandidateThetaAfterPCDirt->Sumw2();


TH1D *hPionCandidateThetaAfterPCData = (TH1D*)f4->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCCCQE = (TH1D*)f7->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCCCRes = (TH1D*)f8->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCNCRes = (TH1D*)f9->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCOther = (TH1D*)f12->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCEXT = (TH1D*)f14->Get("hRecoPionCandidateThetaAfterPC");
TH1D *hPionCandidateThetaAfterPCDirt = (TH1D*)f15->Get("hRecoPionCandidateThetaAfterPC");

hPionCandidateThetaAfterPCData->Sumw2();
hPionCandidateThetaAfterPCMC->Sumw2();
hPionCandidateThetaAfterPCMCCCCoh->Sumw2();
hPionCandidateThetaAfterPCMCCCQE->Sumw2();
hPionCandidateThetaAfterPCMCCCRes->Sumw2();
hPionCandidateThetaAfterPCMCNCRes->Sumw2();
hPionCandidateThetaAfterPCMCCCDIS->Sumw2();
hPionCandidateThetaAfterPCMCNCDIS->Sumw2();
hPionCandidateThetaAfterPCMCOther->Sumw2();
hPionCandidateThetaAfterPCMCCCCohEn->Sumw2();
hPionCandidateThetaAfterPCEXT->Sumw2();
hPionCandidateThetaAfterPCDirt->Sumw2();


TH1D *hMuonCandidatePhiAfterPCData = (TH1D*)f4->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMC = (TH1D*)f5->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCCCQE = (TH1D*)f7->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCCCRes = (TH1D*)f8->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCNCRes = (TH1D*)f9->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCOther = (TH1D*)f12->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCEXT = (TH1D*)f14->Get("hRecoMuonCandidatePhiAfterPC");
TH1D *hMuonCandidatePhiAfterPCDirt = (TH1D*)f15->Get("hRecoMuonCandidatePhiAfterPC");

hMuonCandidatePhiAfterPCData->Sumw2();
hMuonCandidatePhiAfterPCMC->Sumw2();
hMuonCandidatePhiAfterPCMCCCCoh->Sumw2();
hMuonCandidatePhiAfterPCMCCCQE->Sumw2();
hMuonCandidatePhiAfterPCMCCCRes->Sumw2();
hMuonCandidatePhiAfterPCMCNCRes->Sumw2();
hMuonCandidatePhiAfterPCMCCCDIS->Sumw2();
hMuonCandidatePhiAfterPCMCNCDIS->Sumw2();
hMuonCandidatePhiAfterPCMCOther->Sumw2();
hMuonCandidatePhiAfterPCMCCCCohEn->Sumw2();
hMuonCandidatePhiAfterPCEXT->Sumw2();
hMuonCandidatePhiAfterPCDirt->Sumw2();


TH1D *hPionCandidatePhiAfterPCData = (TH1D*)f4->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMC = (TH1D*)f5->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCCCCoh = (TH1D*)f6->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCCCQE = (TH1D*)f7->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCCCRes = (TH1D*)f8->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCNCRes = (TH1D*)f9->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCCCDIS = (TH1D*)f10->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCNCDIS = (TH1D*)f11->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCOther = (TH1D*)f12->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCMCCCCohEn = (TH1D*)f13->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCEXT = (TH1D*)f14->Get("hRecoPionCandidatePhiAfterPC");
TH1D *hPionCandidatePhiAfterPCDirt = (TH1D*)f15->Get("hRecoPionCandidatePhiAfterPC");

hPionCandidatePhiAfterPCData->Sumw2();
hPionCandidatePhiAfterPCMC->Sumw2();
hPionCandidatePhiAfterPCMCCCCoh->Sumw2();
hPionCandidatePhiAfterPCMCCCQE->Sumw2();
hPionCandidatePhiAfterPCMCCCRes->Sumw2();
hPionCandidatePhiAfterPCMCNCRes->Sumw2();
hPionCandidatePhiAfterPCMCCCDIS->Sumw2();
hPionCandidatePhiAfterPCMCNCDIS->Sumw2();
hPionCandidatePhiAfterPCMCOther->Sumw2();
hPionCandidatePhiAfterPCMCCCCohEn->Sumw2();
hPionCandidatePhiAfterPCEXT->Sumw2();
hPionCandidatePhiAfterPCDirt->Sumw2();


TH1D *hNVertexActivityData = (TH1D*)f4->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityMC = (TH1D*)f5->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityCCCoh = (TH1D*)f6->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityCCQE = (TH1D*)f7->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityCCRes = (TH1D*)f8->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityNCRes = (TH1D*)f9->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityCCDIS = (TH1D*)f10->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityNCDIS = (TH1D*)f11->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityOther = (TH1D*)f12->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityCCCohEn = (TH1D*)f13->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityEXT = (TH1D*)f14->Get("hVertexActivityFor2TracksNew");
TH1D *hNVertexActivityDirt = (TH1D*)f15->Get("hVertexActivityFor2TracksNew");

hNVertexActivityData->Sumw2();
hNVertexActivityMC->Sumw2();
hNVertexActivityCCCoh->Sumw2();
hNVertexActivityCCQE->Sumw2();
hNVertexActivityCCRes->Sumw2();
hNVertexActivityNCRes->Sumw2();
hNVertexActivityCCDIS->Sumw2();
hNVertexActivityNCDIS->Sumw2();
hNVertexActivityOther->Sumw2();
hNVertexActivityCCCohEn->Sumw2();
hNVertexActivityEXT->Sumw2();
hNVertexActivityDirt->Sumw2();


TH1D *hPOTCountingBKGD = (TH1D*)f16->Get("hPOTCounting");
TH1D *hPOTCountingCCCoh = (TH1D*)f17->Get("hPOTCounting");
TH1D *hPOTCountingDirt = (TH1D*)f18->Get("hPOTCounting");

hPOTCountingBKGD->Sumw2();
hPOTCountingCCCoh->Sumw2();
hPOTCountingDirt->Sumw2();


// Creating the Stacked Histograms
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
THStack *hOpeningAngleStacked = new THStack("hOpeningAngleStacked", "Opening Angle Stacked for Events Passing 2-Tracks Selection");
THStack *hOpeningAngleStackedForPC = new THStack("hOpeningAngleStackedForPC", "Opening Angle Stacked for Events Passing Pion Candidacy Selection");
THStack *hPionCandidateTrkLLRPIDScoreAfterVAStacked = new THStack("hPionCandidateTrkLLRPIDScoreAfterVAStacked", "Pion Candidate LLR Stacked for Events Passing Vertex Activity Selection");
THStack *hPionCandidateTrkLLRPIDScoreAfterPCStacked = new THStack("hPionCandidateTrkLLRPIDScoreAfterPCStacked", "Pion Candidate LLR Stacked for Events Passing Pion Candidacy Selection");
THStack *hVertexActivityStacked = new THStack("hVertexActivityStacked", "Vertex Activity Stacked After 2-Tracks Selection");
THStack *hPionCandidateTrkLLRPIDScoreStacked = new THStack("hPionCandidateTrkLLRPIDScoreStacked", "Pion Candidate LLR Stacked for Events Passing 2-Tracks Selection");
THStack *hMuonCandidateTrkLLRPIDScoreStacked = new THStack("hMuonCandidateTrkLLRPIDScoreStacked", "Muon Candidate LLR Stacked for Events Passing 2-Tracks Selection");
THStack *hRecoNuEnergyFVStacked = new THStack("hRecoNuEnergyFVStacked", "The Reco Neutrino Energy for Events in the Fiducial Volume");
THStack *hRecoNuEnergyStacked = new THStack("hRecoNuEnergyStacked", "The Reco Neutrino Energy for Events Passing 2-Tracks Selection");
THStack *hRecoNuEnergyOAStacked = new THStack("hRecoNuEnergyOAStacked", "The Reco Neutrino Energy for Events Passing Opening Angle Selection");
THStack *hMuonCandidateThetaAfterPCStacked = new THStack("hMuonCandidateThetaAfterPCStacked", "Muon Candidate #theta_{#mu} Stacked for Events Passing Pion Candidacy Selection");
THStack *hPionCandidateThetaAfterPCStacked = new THStack("hPionCandidateThetaAfterPCStacked", "Pion Candidate #theta_{#pi} Stacked for Events Passing Pion Candidacy Selection");
THStack *hMuonCandidatePhiAfterPCStacked = new THStack("hMuonCandidatePhiAfterPCStacked", "Muon Candidate #phi_{#mu} Stacked for Events Passing Pion Candidacy Selection");
THStack *hPionCandidatePhiAfterPCStacked = new THStack("hPionCandidatePhiAfterPCStacked", "Pion Candidate #phi_{#pi} Stacked for Events Passing Pion Candidacy Selection");
THStack *hNVertexActivityStacked = new THStack("hNVertexActivityStacked", "New Vertex Activity Stacked After 2-Tracks Selection");


//double Run1ScaleFactorMC = 0.05/1.2847059;
//double Run1ScaleFactorMC = 0.0465663;
//double Run1ScaleFactorMC = 0.0454/1.2847059;
//double Run1ScaleFactorMC = 0.0534/1.2847059; //<-- The one I've been using
//double Run1ScaleFactorMC = 1.02028*(0.0534/1.2847059);
//double Run1ScaleFactorMC = 0.00704;
double Run1ScaleFactorMC = 0.0398;
//double EnhancedCCCohScaleFactor = 172./7390.;
//double EnhancedCCCohScaleFactor = 150./7390.; //<-- The one I've been using
double EnhancedCCCohScaleFactor = 0.0158;
//double Run1ScaleFactorDirt = 0.0288; //<-- The one I've been using
double Run1ScaleFactorDirt = 0.0701;
double Run1ScaleFactorEXT = 1; //<-- The one I've been using
//double Run1ScaleFactorEXT = 2.252;


// |-------------------------------------------|
// |--- Setting The Scale Factors Using POT ---|
// |-------------------------------------------|
//double POTValue = 5.21E19; // This is the set value that's standard to this sample (or the quoted value for this data sample)
double POTValue = 5.21E19; // This is me messing around with the number
Run1ScaleFactorMC = (POTValue)/((hPOTCountingBKGD->Integral())*(hPOTCountingBKGD->GetMean()));
EnhancedCCCohScaleFactor = ((hPOTCountingBKGD->Integral())*(hPOTCountingBKGD->GetMean()))/((hPOTCountingCCCoh->Integral())*(hPOTCountingCCCoh->GetMean()));
Run1ScaleFactorDirt = (POTValue)/((hPOTCountingDirt->Integral())*(hPOTCountingDirt->GetMean()));
Run1ScaleFactorEXT = 176429./191286.;
std::cout<<"Run1ScaleFactorMC = "<<Run1ScaleFactorMC<<std::endl;
std::cout<<"EnhancedCCCohScaleFactor = "<<EnhancedCCCohScaleFactor<<std::endl;
std::cout<<"Run1ScaleFactorDirt = "<<Run1ScaleFactorDirt<<std::endl;
std::cout<<"Run1ScaleFactorEXT = "<<Run1ScaleFactorEXT<<std::endl;
// |-------------------------------------------|


// |====================================|
// |=== Rebinning Variables Are Here ===|
// |====================================|
int RebinT = 100; // Variable used to rebin the |t| Plots
int RebinP = 20; // Variable used to rebin the Momentum Plots
int RebinTheta = 40; // Variable used to rebin the Theta Plots
int RebinPhi = 20; // Variable used to rebin the Theta Plots
int RebinOA = 10; // Variable used to rebin the Opening Angle Plots
int VARebin = 200; // Variable used to rebin the NEW Vertex Activity Plots
Double_t edges[5] = {0.0, 0.1, 0.2, 0.4, 1.0}; // This is to make plots pretty!
RebinT = 4;
// |====================================|





TCanvas *c1 = new TCanvas("c1", "Stacked Reco |t| After 2 Tracks");
c1->SetTicks();
c1->SetFillColor(kWhite);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Rebin(RebinT);
hT->SetMarkerStyle(20);
hTRecoCCCoh->SetFillColor(kBlue);
hTRecoCCCoh->SetLineColor(kBlack);
hTRecoCCCoh->Scale(Run1ScaleFactorMC);
hTRecoCCCoh->Rebin(RebinT);
hTRecoCCQE->SetFillColor(kViolet);
hTRecoCCQE->SetLineColor(kBlack);
hTRecoCCQE->Scale(Run1ScaleFactorMC);
hTRecoCCQE->Rebin(RebinT);
hTRecoCCRes->SetFillColor(kRed);
hTRecoCCRes->SetLineColor(kBlack);
hTRecoCCRes->Scale(Run1ScaleFactorMC);
hTRecoCCRes->Rebin(RebinT);
hTRecoNCRes->SetFillColor(kGreen);
hTRecoNCRes->SetLineColor(kBlack);
hTRecoNCRes->Scale(Run1ScaleFactorMC);
hTRecoNCRes->Rebin(RebinT);
hTRecoCCDIS->SetFillColor(kCyan-8);
hTRecoCCDIS->SetLineColor(kBlack);
hTRecoCCDIS->Scale(Run1ScaleFactorMC);
hTRecoCCDIS->Rebin(RebinT);
hTRecoNCDIS->SetFillColor(kGray);
hTRecoNCDIS->SetLineColor(kBlack);
hTRecoNCDIS->Scale(Run1ScaleFactorMC);
hTRecoNCDIS->Rebin(RebinT);
hTRecoCCCohEn->SetFillColor(kBlue);
hTRecoCCCohEn->SetLineColor(kBlack);
hTRecoCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hTRecoCCCohEn->Rebin(RebinT);
hTReco->SetFillColor(kOrange);
hTReco->Scale(Run1ScaleFactorMC);
hTReco->Rebin(RebinT);
hTReco->Add(hTRecoCCCoh, -1);
hTReco->Add(hTRecoCCQE, -1);
hTReco->Add(hTRecoCCRes, -1);
hTReco->Add(hTRecoNCRes, -1);
hTReco->Add(hTRecoCCDIS, -1);
hTReco->Add(hTRecoNCDIS, -1);
hTRecoEXT->SetFillColor(kGray+4);
hTRecoEXT->SetLineColor(kBlack);
hTRecoEXT->Scale(Run1ScaleFactorEXT);
hTRecoEXT->Rebin(RebinT);
hTRecoDirt->SetFillColor(kOrange+5);
hTRecoDirt->SetLineColor(kBlack);
hTRecoDirt->Scale(Run1ScaleFactorDirt);
hTRecoDirt->Rebin(RebinT);
hTStacked->Add(hTReco);
hTStacked->Add(hTRecoEXT);
hTStacked->Add(hTRecoDirt);
hTStacked->Add(hTRecoCCQE);
hTStacked->Add(hTRecoCCRes);
hTStacked->Add(hTRecoNCRes);
hTStacked->Add(hTRecoCCDIS);
hTStacked->Add(hTRecoNCDIS);
hTStacked->Add(hTRecoCCCohEn);


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
leg1->AddEntry(hTRecoEXT,"EXT");
leg1->AddEntry(hTRecoDirt,"Dirt");
leg1->Draw();





TCanvas *c2 = new TCanvas("c2", "Stacked Reco |t| After Pion Candidacy");
c2->SetTicks();
c2->SetFillColor(kWhite);

hTPC->SetLineColor(kBlack);
hTPC->SetLineWidth(2);
hTPC->Rebin(RebinT);
hTPC->SetMarkerStyle(20);
hTPCRecoCCCoh->SetFillColor(kBlue);
hTPCRecoCCCoh->Scale(Run1ScaleFactorMC);
hTPCRecoCCCoh->Rebin(RebinT);
hTPCRecoCCQE->SetFillColor(kViolet);
hTPCRecoCCQE->Scale(Run1ScaleFactorMC);
hTPCRecoCCQE->Rebin(RebinT);
hTPCRecoCCRes->SetFillColor(kRed);
hTPCRecoCCRes->Scale(Run1ScaleFactorMC);
hTPCRecoCCRes->Rebin(RebinT);
hTPCRecoNCRes->SetFillColor(kGreen);
hTPCRecoNCRes->Scale(Run1ScaleFactorMC);
hTPCRecoNCRes->Rebin(RebinT);
hTPCRecoCCDIS->SetFillColor(kCyan-8);
hTPCRecoCCDIS->Scale(Run1ScaleFactorMC);
hTPCRecoCCDIS->Rebin(RebinT);
hTPCRecoNCDIS->SetFillColor(kGray);
hTPCRecoNCDIS->Scale(Run1ScaleFactorMC);
hTPCRecoNCDIS->Rebin(RebinT);
hTPCRecoCCCohEn->SetFillColor(kBlue);
hTPCRecoCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hTPCRecoCCCohEn->Rebin(RebinT);
hTPCReco->SetFillColor(kOrange);
hTPCReco->Scale(Run1ScaleFactorMC);
hTPCReco->Rebin(RebinT);
hTPCReco->Add(hTPCRecoCCCoh, -1);
hTPCReco->Add(hTPCRecoCCQE, -1);
hTPCReco->Add(hTPCRecoCCRes, -1);
hTPCReco->Add(hTPCRecoNCRes, -1);
hTPCReco->Add(hTPCRecoCCDIS, -1);
hTPCReco->Add(hTPCRecoNCDIS, -1);
hTPCRecoEXT->SetFillColor(kGray+4);
hTPCRecoEXT->Scale(Run1ScaleFactorEXT);
hTPCRecoEXT->Rebin(RebinT);
hTPCRecoDirt->SetFillColor(kOrange+5);
hTPCRecoDirt->Scale(Run1ScaleFactorDirt);
hTPCRecoDirt->Rebin(RebinT);
hTPCStacked->Add(hTPCReco);
hTPCStacked->Add(hTPCRecoEXT);
hTPCStacked->Add(hTPCRecoDirt);
hTPCStacked->Add(hTPCRecoCCQE);
hTPCStacked->Add(hTPCRecoCCRes);
hTPCStacked->Add(hTPCRecoNCRes);
hTPCStacked->Add(hTPCRecoCCDIS);
hTPCStacked->Add(hTPCRecoNCDIS);
hTPCStacked->Add(hTPCRecoCCCohEn);

hTPC->Draw("E1");
hTPCStacked->Draw("HISTsame");
hTPC->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTPC->GetXaxis()->CenterTitle();
hTPC->GetYaxis()->SetTitle("Number of Events");
hTPC->GetYaxis()->CenterTitle();

hTPC->Draw("E1same");
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
leg2->AddEntry(hTPC,"Data");
leg2->AddEntry(hTPCRecoCCCoh,"Reco CC-Coh");
leg2->AddEntry(hTPCRecoCCQE,"Reco CC-QE");
leg2->AddEntry(hTPCRecoCCRes,"Reco CC-Res");
leg2->AddEntry(hTPCRecoNCRes,"Reco NC-Res");
leg2->AddEntry(hTPCRecoCCDIS,"Reco CC-DIS");
leg2->AddEntry(hTPCRecoNCDIS,"Reco NC-DIS");
leg2->AddEntry(hTPCReco,"Reco Other");
leg2->AddEntry(hTPCRecoEXT,"EXT");
leg2->AddEntry(hTPCRecoDirt,"Dirt");
leg2->Draw();





TCanvas *c3 = new TCanvas("c3", "Stacked Reco |t| After Opening Angle");
c3->SetTicks();
c3->SetFillColor(kWhite);

hTOA->SetLineColor(kBlack);
hTOA->SetLineWidth(2);
//hTOA->Rebin(RebinT);
hTOA->SetMarkerStyle(20);
hTOANew = hTOA->Rebin(RebinT, "hTOANew", edges);
hTOARecoCCCoh->SetFillColor(kBlue);
hTOARecoCCCoh->Scale(Run1ScaleFactorMC);
//hTOARecoCCCoh->Rebin(RebinT);
hTOARecoCCCohNew = hTOARecoCCCoh->Rebin(RebinT, "hTOARecoCCCohNew", edges);
hTOARecoCCQE->SetFillColor(kViolet);
hTOARecoCCQE->Scale(Run1ScaleFactorMC);
//hTOARecoCCQE->Rebin(RebinT);
hTOARecoCCQENew = hTOARecoCCQE->Rebin(RebinT, "hTOARecoCCQENew", edges);
hTOARecoCCRes->SetFillColor(kRed);
hTOARecoCCRes->Scale(Run1ScaleFactorMC);
//hTOARecoCCRes->Rebin(RebinT);
hTOARecoCCResNew = hTOARecoCCRes->Rebin(RebinT, "hTOARecoCCResNew", edges);
hTOARecoNCRes->SetFillColor(kGreen);
hTOARecoNCRes->Scale(Run1ScaleFactorMC);
//hTOARecoNCRes->Rebin(RebinT);
hTOARecoNCResNew = hTOARecoNCRes->Rebin(RebinT, "hTOARecoNCResNew", edges);
hTOARecoCCDIS->SetFillColor(kCyan-8);
hTOARecoCCDIS->Scale(Run1ScaleFactorMC);
//hTOARecoCCDIS->Rebin(RebinT);
hTOARecoCCDISNew = hTOARecoCCDIS->Rebin(RebinT, "hTOARecoCCDISNew", edges);
hTOARecoNCDIS->SetFillColor(kGray);
hTOARecoNCDIS->Scale(Run1ScaleFactorMC);
//hTOARecoNCDIS->Rebin(RebinT);
hTOARecoNCDISNew = hTOARecoNCDIS->Rebin(RebinT, "hTOARecoNCDISNew", edges);
hTOARecoCCCohEn->SetFillColor(kBlue);
hTOARecoCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
//hTOARecoCCCohEn->Rebin(RebinT);
hTOARecoCCCohEnNew = hTOARecoCCCohEn->Rebin(RebinT, "hTOARecoCCCohEnNew", edges);
hTOAReco->SetFillColor(kOrange);
hTOAReco->Scale(Run1ScaleFactorMC);
//hTOAReco->Rebin(RebinT);
hTOARecoNew = hTOAReco->Rebin(RebinT, "hTOARecoNew", edges);
/*hTOAReco->Add(hTOARecoCCCoh, -1);
hTOAReco->Add(hTOARecoCCQE, -1);
hTOAReco->Add(hTOARecoCCRes, -1);
hTOAReco->Add(hTOARecoNCRes, -1);
hTOAReco->Add(hTOARecoCCDIS, -1);
hTOAReco->Add(hTOARecoNCDIS, -1);*/
hTOARecoNew->Add(hTOARecoCCCohNew, -1);
hTOARecoNew->Add(hTOARecoCCQENew, -1);
hTOARecoNew->Add(hTOARecoCCResNew, -1);
hTOARecoNew->Add(hTOARecoNCResNew, -1);
hTOARecoNew->Add(hTOARecoCCDISNew, -1);
hTOARecoNew->Add(hTOARecoNCDISNew, -1);
hTOARecoEXT->SetFillColor(kGray+4);
hTOARecoEXT->Scale(Run1ScaleFactorEXT);
//hTOARecoEXT->Rebin(RebinT);
hTOARecoEXTNew = hTOARecoEXT->Rebin(RebinT, "hTOARecoEXTNew", edges);
hTOARecoDirt->SetFillColor(kOrange+5);
hTOARecoDirt->Scale(Run1ScaleFactorDirt);
//hTOARecoDirt->Rebin(RebinT);
hTOARecoDirtNew = hTOARecoDirt->Rebin(RebinT, "hTOARecoDirtNew", edges);
/*hTOAStacked->Add(hTOAReco);
hTOAStacked->Add(hTOARecoEXT);
hTOAStacked->Add(hTOARecoDirt);
hTOAStacked->Add(hTOARecoCCQE);
hTOAStacked->Add(hTOARecoCCRes);
hTOAStacked->Add(hTOARecoNCRes);
hTOAStacked->Add(hTOARecoCCDIS);
hTOAStacked->Add(hTOARecoNCDIS);
hTOAStacked->Add(hTOARecoCCCohEn);*/
hTOAStacked->Add(hTOARecoNew);
hTOAStacked->Add(hTOARecoEXTNew);
hTOAStacked->Add(hTOARecoDirtNew);
hTOAStacked->Add(hTOARecoCCQENew);
hTOAStacked->Add(hTOARecoCCResNew);
hTOAStacked->Add(hTOARecoNCResNew);
hTOAStacked->Add(hTOARecoCCDISNew);
hTOAStacked->Add(hTOARecoNCDISNew);
hTOAStacked->Add(hTOARecoCCCohEnNew);


/*hTOA->Draw("E1");
hTOAStacked->Draw("HISTsame");
hTOA->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTOA->GetXaxis()->CenterTitle();
hTOA->GetYaxis()->SetTitle("Number of Events");
hTOA->GetYaxis()->CenterTitle();*/
hTOANew->Draw("E1");
hTOAStacked->Draw("HISTsame");
hTOANew->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTOANew->GetXaxis()->CenterTitle();
hTOANew->GetYaxis()->SetTitle("Number of Events");
hTOANew->GetYaxis()->CenterTitle();

//hTOA->Draw("E1same");
hTOANew->Draw("E1same");
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
leg3->AddEntry(hTOA,"Data");
leg3->AddEntry(hTOARecoCCCoh,"Reco CC-Coh");
leg3->AddEntry(hTOARecoCCQE,"Reco CC-QE");
leg3->AddEntry(hTOARecoCCRes,"Reco CC-Res");
leg3->AddEntry(hTOARecoNCRes,"Reco NC-Res");
leg3->AddEntry(hTOARecoCCDIS,"Reco CC-DIS");
leg3->AddEntry(hTOARecoNCDIS,"Reco NC-DIS");
leg3->AddEntry(hTOAReco,"Reco Other");
leg3->AddEntry(hTOARecoEXT,"EXT");
leg3->AddEntry(hTOARecoDirt,"Dirt");
leg3->Draw();





TCanvas *c4 = new TCanvas("c4", "Stacked Reco Muon Candidate Momentum After Pion Candidacy");
c4->SetTicks();
c4->SetFillColor(kWhite);

hRecoMuonCandidateMomentumAfterPCData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterPCData->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCData->SetMarkerStyle(20);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCCoh->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCCCQE->SetFillColor(kViolet);
hRecoMuonCandidateMomentumAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCQE->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCCCRes->SetFillColor(kRed);
hRecoMuonCandidateMomentumAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCRes->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCNCRes->SetFillColor(kGreen);
hRecoMuonCandidateMomentumAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCNCRes->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->SetFillColor(kCyan-8);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCDIS->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->SetFillColor(kGray);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCNCDIS->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMCCCCohEn->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMCCCCohEn->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMC->SetFillColor(kOrange);
hRecoMuonCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterPCMC->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCCoh, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCQE, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCRes, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCNCRes, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCCCDIS, -1);
hRecoMuonCandidateMomentumAfterPCMC->Add(hRecoMuonCandidateMomentumAfterPCMCNCDIS, -1);
hRecoMuonCandidateMomentumAfterPCEXT->SetFillColor(kGray+4);
hRecoMuonCandidateMomentumAfterPCEXT->Scale(Run1ScaleFactorEXT);
hRecoMuonCandidateMomentumAfterPCEXT->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterPCDirt->SetFillColor(kOrange+5);
hRecoMuonCandidateMomentumAfterPCDirt->Scale(Run1ScaleFactorDirt);
hRecoMuonCandidateMomentumAfterPCDirt->Rebin(RebinP);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMC);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCEXT);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCDirt);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCQE);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCRes);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCNCRes);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCDIS);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCNCDIS);
hMPPCStacked->Add(hRecoMuonCandidateMomentumAfterPCMCCCCohEn);

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
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCEXT,"EXT");
leg4->AddEntry(hRecoMuonCandidateMomentumAfterPCDirt,"Dirt");
leg4->Draw();





TCanvas *c5 = new TCanvas("c5", "Stacked Reco Muon Candidate Momentum After Opening Angle");
c5->SetTicks();
c5->SetFillColor(kWhite);

hRecoMuonCandidateMomentumAfterOAData->SetLineColor(kBlack);
hRecoMuonCandidateMomentumAfterOAData->SetLineWidth(2);
hRecoMuonCandidateMomentumAfterOAData->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAData->SetMarkerStyle(20);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCCoh->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCCCQE->SetFillColor(kViolet);
hRecoMuonCandidateMomentumAfterOAMCCCQE->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCQE->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCCCRes->SetFillColor(kRed);
hRecoMuonCandidateMomentumAfterOAMCCCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCRes->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCNCRes->SetFillColor(kGreen);
hRecoMuonCandidateMomentumAfterOAMCNCRes->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCNCRes->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->SetFillColor(kCyan-8);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCDIS->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->SetFillColor(kGray);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCNCDIS->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMCCCCohEn->SetFillColor(kBlue);
hRecoMuonCandidateMomentumAfterOAMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMCCCCohEn->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMC->SetFillColor(kOrange);
hRecoMuonCandidateMomentumAfterOAMC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumAfterOAMC->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCCoh, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCQE, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCRes, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCNCRes, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCCCDIS, -1);
hRecoMuonCandidateMomentumAfterOAMC->Add(hRecoMuonCandidateMomentumAfterOAMCNCDIS, -1);
hRecoMuonCandidateMomentumAfterOAEXT->SetFillColor(kGray+4);
hRecoMuonCandidateMomentumAfterOAEXT->Scale(Run1ScaleFactorEXT);
hRecoMuonCandidateMomentumAfterOAEXT->Rebin(RebinP);
hRecoMuonCandidateMomentumAfterOADirt->SetFillColor(kOrange+5);
hRecoMuonCandidateMomentumAfterOADirt->Scale(Run1ScaleFactorDirt);
hRecoMuonCandidateMomentumAfterOADirt->Rebin(RebinP);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMC);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAEXT);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOADirt);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCQE);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCRes);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCNCRes);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCDIS);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCNCDIS);
hMPOAStacked->Add(hRecoMuonCandidateMomentumAfterOAMCCCCohEn);

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
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOAEXT,"EXT");
leg5->AddEntry(hRecoMuonCandidateMomentumAfterOADirt,"Dirt");
leg5->Draw();





TCanvas *c6 = new TCanvas("c6", "Stacked Reco Pion Candidate Momentum After Pion Candidacy");
c6->SetTicks();
c6->SetFillColor(kWhite);

hRecoPionCandidateMomentumAfterPCData->SetLineColor(kBlack);
hRecoPionCandidateMomentumAfterPCData->SetLineWidth(2);
hRecoPionCandidateMomentumAfterPCData->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCData->SetMarkerStyle(20);
hRecoPionCandidateMomentumAfterPCMCCCCoh->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCCoh->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCCCQE->SetFillColor(kViolet);
hRecoPionCandidateMomentumAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCQE->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCCCRes->SetFillColor(kRed);
hRecoPionCandidateMomentumAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCRes->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCNCRes->SetFillColor(kGreen);
hRecoPionCandidateMomentumAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCNCRes->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCCCDIS->SetFillColor(kCyan-8);
hRecoPionCandidateMomentumAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCDIS->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCNCDIS->SetFillColor(kGray);
hRecoPionCandidateMomentumAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCNCDIS->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMCCCCohEn->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMCCCCohEn->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMC->SetFillColor(kOrange);
hRecoPionCandidateMomentumAfterPCMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterPCMC->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCCoh, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCQE, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCRes, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCNCRes, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCCCDIS, -1);
hRecoPionCandidateMomentumAfterPCMC->Add(hRecoPionCandidateMomentumAfterPCMCNCDIS, -1);
hRecoPionCandidateMomentumAfterPCEXT->SetFillColor(kGray+4);
hRecoPionCandidateMomentumAfterPCEXT->Scale(Run1ScaleFactorEXT);
hRecoPionCandidateMomentumAfterPCEXT->Rebin(RebinP);
hRecoPionCandidateMomentumAfterPCDirt->SetFillColor(kOrange+5);
hRecoPionCandidateMomentumAfterPCDirt->Scale(Run1ScaleFactorDirt);
hRecoPionCandidateMomentumAfterPCDirt->Rebin(RebinP);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMC);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCEXT);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCDirt);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCQE);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCRes);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCNCRes);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCDIS);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCNCDIS);
hPPPCStacked->Add(hRecoPionCandidateMomentumAfterPCMCCCCohEn);

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
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCEXT,"EXT");
leg6->AddEntry(hRecoPionCandidateMomentumAfterPCDirt,"Dirt");
leg6->Draw();





TCanvas *c7 = new TCanvas("c7", "Stacked Reco Pion Candidate Momentum After Opening Angle");
c7->SetTicks();
c7->SetFillColor(kWhite);

hRecoPionCandidateMomentumAfterOAData->SetLineColor(kBlack);
hRecoPionCandidateMomentumAfterOAData->SetLineWidth(2);
hRecoPionCandidateMomentumAfterOAData->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAData->SetMarkerStyle(20);
hRecoPionCandidateMomentumAfterOAMCCCCoh->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterOAMCCCCoh->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCCoh->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCCCQE->SetFillColor(kViolet);
hRecoPionCandidateMomentumAfterOAMCCCQE->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCQE->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCCCRes->SetFillColor(kRed);
hRecoPionCandidateMomentumAfterOAMCCCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCRes->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCNCRes->SetFillColor(kGreen);
hRecoPionCandidateMomentumAfterOAMCNCRes->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCNCRes->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCCCDIS->SetFillColor(kCyan-8);
hRecoPionCandidateMomentumAfterOAMCCCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCDIS->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCNCDIS->SetFillColor(kGray);
hRecoPionCandidateMomentumAfterOAMCNCDIS->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCNCDIS->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMCCCCohEn->SetFillColor(kBlue);
hRecoPionCandidateMomentumAfterOAMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMCCCCohEn->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMC->SetFillColor(kOrange);
hRecoPionCandidateMomentumAfterOAMC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumAfterOAMC->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCCoh, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCQE, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCRes, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCNCRes, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCCCDIS, -1);
hRecoPionCandidateMomentumAfterOAMC->Add(hRecoPionCandidateMomentumAfterOAMCNCDIS, -1);
hRecoPionCandidateMomentumAfterOAEXT->SetFillColor(kGray+4);
hRecoPionCandidateMomentumAfterOAEXT->Scale(Run1ScaleFactorEXT);
hRecoPionCandidateMomentumAfterOAEXT->Rebin(RebinP);
hRecoPionCandidateMomentumAfterOADirt->SetFillColor(kOrange+5);
hRecoPionCandidateMomentumAfterOADirt->Scale(Run1ScaleFactorDirt);
hRecoPionCandidateMomentumAfterOADirt->Rebin(RebinP);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMC);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAEXT);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOADirt);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCQE);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCRes);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCNCRes);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCDIS);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCNCDIS);
hPPOAStacked->Add(hRecoPionCandidateMomentumAfterOAMCCCCohEn);

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
leg7->AddEntry(hRecoPionCandidateMomentumAfterOAEXT,"EXT");
leg7->AddEntry(hRecoPionCandidateMomentumAfterOADirt,"Dirt");
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





TCanvas *c14 = new TCanvas("c14", "Stacked Pion Candidates LLR After Vertex Activity Selection");
c14->SetTicks();
c14->SetFillColor(kWhite);

hPionCandidateTrkLLRPIDScoreAfterVAData->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVAData->SetLineWidth(2);
hPionCandidateTrkLLRPIDScoreAfterVAData->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVAData->SetMarkerStyle(20);
hPionCandidateTrkLLRPIDScoreAfterVACCCoh->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreAfterVACCCoh->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVACCCoh->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVACCCoh->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVACCQE->SetFillColor(kViolet);
hPionCandidateTrkLLRPIDScoreAfterVACCQE->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVACCQE->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVACCQE->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVACCRes->SetFillColor(kRed);
hPionCandidateTrkLLRPIDScoreAfterVACCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVACCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVACCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVANCRes->SetFillColor(kGreen);
hPionCandidateTrkLLRPIDScoreAfterVANCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVANCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVANCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVACCDIS->SetFillColor(kCyan-8);
hPionCandidateTrkLLRPIDScoreAfterVACCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVACCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVACCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVANCDIS->SetFillColor(kGray);
hPionCandidateTrkLLRPIDScoreAfterVANCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVANCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVANCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVACCCohEn->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreAfterVACCCohEn->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVACCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVACCCohEn->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVAMC->SetFillColor(kOrange);
hPionCandidateTrkLLRPIDScoreAfterVAMC->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVACCCoh, -1);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVACCQE, -1);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVACCRes, -1);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVANCRes, -1);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVACCDIS, -1);
hPionCandidateTrkLLRPIDScoreAfterVAMC->Add(hPionCandidateTrkLLRPIDScoreAfterVANCDIS, -1);
hPionCandidateTrkLLRPIDScoreAfterVAEXT->SetFillColor(kGray+4);
hPionCandidateTrkLLRPIDScoreAfterVAEXT->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVAEXT->Scale(Run1ScaleFactorEXT);
hPionCandidateTrkLLRPIDScoreAfterVAEXT->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVADirt->SetFillColor(kOrange+5);
hPionCandidateTrkLLRPIDScoreAfterVADirt->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterVADirt->Scale(Run1ScaleFactorDirt);
hPionCandidateTrkLLRPIDScoreAfterVADirt->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVAMC);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVAEXT);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVADirt);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVACCQE);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVACCRes);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVANCRes);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVACCDIS);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVANCDIS);
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Add(hPionCandidateTrkLLRPIDScoreAfterVACCCohEn);

hPionCandidateTrkLLRPIDScoreAfterVAData->Draw("E1");
hPionCandidateTrkLLRPIDScoreAfterVAStacked->Draw("HISTsame");
hPionCandidateTrkLLRPIDScoreAfterVAData->GetXaxis()->SetTitle("LLR");
hPionCandidateTrkLLRPIDScoreAfterVAData->GetXaxis()->CenterTitle();
//hPionCandidateTrkLLRPIDScoreAfterVAData->GetXaxis()->SetRangeUser(0, 3);
hPionCandidateTrkLLRPIDScoreAfterVAData->GetYaxis()->SetTitle("Number of Events");
hPionCandidateTrkLLRPIDScoreAfterVAData->GetYaxis()->CenterTitle();

hPionCandidateTrkLLRPIDScoreAfterVAData->Draw("E1same");
c14->Modified();

// ### Defining the legend for the plot ###
TLegend *leg14 = new TLegend();
leg14 = new TLegend(0.58,0.65,1.00,1.00);
leg14->SetTextSize(0.04);
leg14->SetTextAlign(12);
leg14->SetFillColor(kWhite);
leg14->SetLineColor(kWhite);
leg14->SetShadowColor(kWhite);
leg14->SetHeader("Channel");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVAData,"Data");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVACCCoh,"Reco CC-Coh");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVACCQE,"Reco CC-QE");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVACCRes,"Reco CC-Res");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVANCRes,"Reco NC-Res");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVACCDIS,"Reco CC-DIS");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVANCDIS,"Reco NC-DIS");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVAMC,"Reco Other");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVAEXT,"EXT");
leg14->AddEntry(hPionCandidateTrkLLRPIDScoreAfterVADirt,"Dirt");
leg14->Draw();





TCanvas *c15 = new TCanvas("c15", "Stacked Pion Candidates LLR After Pion Candidacy Selection");
c15->SetTicks();
c15->SetFillColor(kWhite);

hPionCandidateTrkLLRPIDScoreAfterPCData->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCData->SetLineWidth(2);
hPionCandidateTrkLLRPIDScoreAfterPCData->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCData->SetMarkerStyle(20);
hPionCandidateTrkLLRPIDScoreAfterPCCCCoh->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreAfterPCCCCoh->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCCCCoh->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCCCCoh->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCCCQE->SetFillColor(kViolet);
hPionCandidateTrkLLRPIDScoreAfterPCCCQE->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCCCQE->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCCCQE->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCCCRes->SetFillColor(kRed);
hPionCandidateTrkLLRPIDScoreAfterPCCCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCCCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCCCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCNCRes->SetFillColor(kGreen);
hPionCandidateTrkLLRPIDScoreAfterPCNCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCNCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCNCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCCCDIS->SetFillColor(kCyan-8);
hPionCandidateTrkLLRPIDScoreAfterPCCCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCCCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCCCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCNCDIS->SetFillColor(kGray);
hPionCandidateTrkLLRPIDScoreAfterPCNCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCNCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCNCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCMC->SetFillColor(kOrange);
hPionCandidateTrkLLRPIDScoreAfterPCMC->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCCoh, -1);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCQE, -1);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCRes, -1);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCNCRes, -1);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCDIS, -1);
hPionCandidateTrkLLRPIDScoreAfterPCMC->Add(hPionCandidateTrkLLRPIDScoreAfterPCNCDIS, -1);
hPionCandidateTrkLLRPIDScoreAfterPCEXT->SetFillColor(kGray+4);
hPionCandidateTrkLLRPIDScoreAfterPCEXT->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCEXT->Scale(Run1ScaleFactorEXT);
hPionCandidateTrkLLRPIDScoreAfterPCEXT->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCDirt->SetFillColor(kOrange+5);
hPionCandidateTrkLLRPIDScoreAfterPCDirt->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreAfterPCDirt->Scale(Run1ScaleFactorDirt);
hPionCandidateTrkLLRPIDScoreAfterPCDirt->Rebin(25);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCMC);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCEXT);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCDirt);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCQE);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCRes);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCNCRes);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCDIS);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCNCDIS);
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Add(hPionCandidateTrkLLRPIDScoreAfterPCCCCohEn);

hPionCandidateTrkLLRPIDScoreAfterPCData->Draw("E1");
hPionCandidateTrkLLRPIDScoreAfterPCStacked->Draw("HISTsame");
hPionCandidateTrkLLRPIDScoreAfterPCData->GetXaxis()->SetTitle("LLR");
hPionCandidateTrkLLRPIDScoreAfterPCData->GetXaxis()->CenterTitle();
//hPionCandidateTrkLLRPIDScoreAfterPCData->GetXaxis()->SetRangeUser(0, 3);
hPionCandidateTrkLLRPIDScoreAfterPCData->GetYaxis()->SetTitle("Number of Events");
hPionCandidateTrkLLRPIDScoreAfterPCData->GetYaxis()->CenterTitle();

hPionCandidateTrkLLRPIDScoreAfterPCData->Draw("E1same");
c15->Modified();

// ### Defining the legend for the plot ###
TLegend *leg15 = new TLegend();
leg15 = new TLegend(0.58,0.65,1.00,1.00);
leg15->SetTextSize(0.04);
leg15->SetTextAlign(12);
leg15->SetFillColor(kWhite);
leg15->SetLineColor(kWhite);
leg15->SetShadowColor(kWhite);
leg15->SetHeader("Channel");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCData,"Data");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCCCCoh,"Reco CC-Coh");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCCCQE,"Reco CC-QE");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCCCRes,"Reco CC-Res");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCNCRes,"Reco NC-Res");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCCCDIS,"Reco CC-DIS");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCNCDIS,"Reco NC-DIS");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCMC,"Reco Other");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCEXT,"EXT");
leg15->AddEntry(hPionCandidateTrkLLRPIDScoreAfterPCDirt,"Dirt");
leg15->Draw();





TCanvas *c16 = new TCanvas("c16", "Stacked Vertex Activity");
c16->SetTicks();
c16->SetFillColor(kWhite);

hVertexActivityData->SetLineColor(kBlack);
hVertexActivityData->SetLineWidth(2);
hVertexActivityData->Rebin(200);
hVertexActivityData->SetMarkerStyle(20);
hVertexActivityCCCoh->SetFillColor(kBlue);
hVertexActivityCCCoh->SetLineColor(kBlack);
hVertexActivityCCCoh->Scale(Run1ScaleFactorMC);
hVertexActivityCCCoh->Rebin(200);
hVertexActivityCCQE->SetFillColor(kViolet);
hVertexActivityCCQE->SetLineColor(kBlack);
hVertexActivityCCQE->Scale(Run1ScaleFactorMC);
hVertexActivityCCQE->Rebin(200);
hVertexActivityCCRes->SetFillColor(kRed);
hVertexActivityCCRes->SetLineColor(kBlack);
hVertexActivityCCRes->Scale(Run1ScaleFactorMC);
hVertexActivityCCRes->Rebin(200);
hVertexActivityNCRes->SetFillColor(kGreen);
hVertexActivityNCRes->SetLineColor(kBlack);
hVertexActivityNCRes->Scale(Run1ScaleFactorMC);
hVertexActivityNCRes->Rebin(200);
hVertexActivityCCDIS->SetFillColor(kCyan-8);
hVertexActivityCCDIS->SetLineColor(kBlack);
hVertexActivityCCDIS->Scale(Run1ScaleFactorMC);
hVertexActivityCCDIS->Rebin(200);
hVertexActivityNCDIS->SetFillColor(kGray);
hVertexActivityNCDIS->SetLineColor(kBlack);
hVertexActivityNCDIS->Scale(Run1ScaleFactorMC);
hVertexActivityNCDIS->Rebin(200);
hVertexActivityCCCohEn->SetFillColor(kBlue);
hVertexActivityCCCohEn->SetLineColor(kBlack);
hVertexActivityCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hVertexActivityCCCohEn->Rebin(200);
hVertexActivityMC->SetFillColor(kOrange);
hVertexActivityMC->SetLineColor(kBlack);
hVertexActivityMC->Scale(Run1ScaleFactorMC);
hVertexActivityMC->Rebin(200);
hVertexActivityMC->Add(hVertexActivityCCCoh, -1);
hVertexActivityMC->Add(hVertexActivityCCQE, -1);
hVertexActivityMC->Add(hVertexActivityCCRes, -1);
hVertexActivityMC->Add(hVertexActivityNCRes, -1);
hVertexActivityMC->Add(hVertexActivityCCDIS, -1);
hVertexActivityMC->Add(hVertexActivityNCDIS, -1);
hVertexActivityEXT->SetFillColor(kGray+4);
hVertexActivityEXT->SetLineColor(kBlack);
hVertexActivityEXT->Scale(Run1ScaleFactorEXT);
hVertexActivityEXT->Rebin(200);
hVertexActivityDirt->SetFillColor(kOrange+5);
hVertexActivityDirt->SetLineColor(kBlack);
hVertexActivityDirt->Scale(Run1ScaleFactorDirt);
hVertexActivityDirt->Rebin(200);
hVertexActivityStacked->Add(hVertexActivityMC);
hVertexActivityStacked->Add(hVertexActivityEXT);
hVertexActivityStacked->Add(hVertexActivityDirt);
hVertexActivityStacked->Add(hVertexActivityCCQE);
hVertexActivityStacked->Add(hVertexActivityCCRes);
hVertexActivityStacked->Add(hVertexActivityNCRes);
hVertexActivityStacked->Add(hVertexActivityCCDIS);
hVertexActivityStacked->Add(hVertexActivityNCDIS);
hVertexActivityStacked->Add(hVertexActivityCCCohEn);

hVertexActivityData->Draw("E1");
hVertexActivityStacked->Draw("HISTsame");
hVertexActivityData->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hVertexActivityData->GetXaxis()->CenterTitle();
hVertexActivityData->GetXaxis()->SetRangeUser(0, 500);
hVertexActivityData->GetYaxis()->SetTitle("Number of Events");
hVertexActivityData->GetYaxis()->CenterTitle();

hVertexActivityData->Draw("E1same");
c16->Modified();

// ### Defining the legend for the plot ###
TLegend *leg16 = new TLegend();
leg16 = new TLegend(0.58,0.65,1.00,1.00);
leg16->SetTextSize(0.04);
leg16->SetTextAlign(12);
leg16->SetFillColor(kWhite);
leg16->SetLineColor(kWhite);
leg16->SetShadowColor(kWhite);
leg16->SetHeader("Channel");
leg16->AddEntry(hVertexActivityData,"Data");
leg16->AddEntry(hVertexActivityCCCoh,"Reco CC-Coh");
leg16->AddEntry(hVertexActivityCCQE,"Reco CC-QE");
leg16->AddEntry(hVertexActivityCCRes,"Reco CC-Res");
leg16->AddEntry(hVertexActivityNCRes,"Reco NC-Res");
leg16->AddEntry(hVertexActivityCCDIS,"Reco CC-DIS");
leg16->AddEntry(hVertexActivityNCDIS,"Reco NC-DIS");
leg16->AddEntry(hVertexActivityMC,"Reco Other");
leg16->AddEntry(hVertexActivityEXT,"EXT");
leg16->AddEntry(hVertexActivityDirt,"Dirt");
leg16->Draw();





TCanvas *c17 = new TCanvas("c17", "Stacked Pion Candidates LLR After 2-Tracks Selection");
c17->SetTicks();
c17->SetFillColor(kWhite);

hPionCandidateTrkLLRPIDScoreData->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreData->SetLineWidth(2);
hPionCandidateTrkLLRPIDScoreData->Rebin(25);
hPionCandidateTrkLLRPIDScoreData->SetMarkerStyle(20);
hPionCandidateTrkLLRPIDScoreCCCoh->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreCCCoh->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreCCCoh->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreCCCoh->Rebin(25);
hPionCandidateTrkLLRPIDScoreCCQE->SetFillColor(kViolet);
hPionCandidateTrkLLRPIDScoreCCQE->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreCCQE->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreCCQE->Rebin(25);
hPionCandidateTrkLLRPIDScoreCCRes->SetFillColor(kRed);
hPionCandidateTrkLLRPIDScoreCCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreCCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreCCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreNCRes->SetFillColor(kGreen);
hPionCandidateTrkLLRPIDScoreNCRes->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreNCRes->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreNCRes->Rebin(25);
hPionCandidateTrkLLRPIDScoreCCDIS->SetFillColor(kCyan-8);
hPionCandidateTrkLLRPIDScoreCCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreCCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreCCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreNCDIS->SetFillColor(kGray);
hPionCandidateTrkLLRPIDScoreNCDIS->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreNCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreNCDIS->Rebin(25);
hPionCandidateTrkLLRPIDScoreCCCohEn->SetFillColor(kBlue);
hPionCandidateTrkLLRPIDScoreCCCohEn->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreCCCohEn->Rebin(25);
hPionCandidateTrkLLRPIDScoreMC->SetFillColor(kOrange);
hPionCandidateTrkLLRPIDScoreMC->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreMC->Scale(Run1ScaleFactorMC);
hPionCandidateTrkLLRPIDScoreMC->Rebin(25);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreCCCoh, -1);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreCCQE, -1);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreCCRes, -1);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreNCRes, -1);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreCCDIS, -1);
hPionCandidateTrkLLRPIDScoreMC->Add(hPionCandidateTrkLLRPIDScoreNCDIS, -1);
hPionCandidateTrkLLRPIDScoreEXT->SetFillColor(kGray+4);
hPionCandidateTrkLLRPIDScoreEXT->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreEXT->Scale(Run1ScaleFactorEXT);
hPionCandidateTrkLLRPIDScoreEXT->Rebin(25);
hPionCandidateTrkLLRPIDScoreDirt->SetFillColor(kOrange+5);
hPionCandidateTrkLLRPIDScoreDirt->SetLineColor(kBlack);
hPionCandidateTrkLLRPIDScoreDirt->Scale(Run1ScaleFactorDirt);
hPionCandidateTrkLLRPIDScoreDirt->Rebin(25);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreMC);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreEXT);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreDirt);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreCCQE);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreCCRes);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreNCRes);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreCCDIS);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreNCDIS);
hPionCandidateTrkLLRPIDScoreStacked->Add(hPionCandidateTrkLLRPIDScoreCCCohEn);

hPionCandidateTrkLLRPIDScoreData->Draw("E1");
hPionCandidateTrkLLRPIDScoreStacked->Draw("HISTsame");
hPionCandidateTrkLLRPIDScoreData->GetXaxis()->SetTitle("LLR");
hPionCandidateTrkLLRPIDScoreData->GetXaxis()->CenterTitle();
//hPionCandidateTrkLLRPIDScoreData->GetXaxis()->SetRangeUser(0, 3);
hPionCandidateTrkLLRPIDScoreData->GetYaxis()->SetTitle("Number of Events");
hPionCandidateTrkLLRPIDScoreData->GetYaxis()->CenterTitle();

hPionCandidateTrkLLRPIDScoreData->Draw("E1same");
c17->Modified();

// ### Defining the legend for the plot ###
TLegend *leg17 = new TLegend();
leg17 = new TLegend(0.58,0.65,1.00,1.00);
leg17->SetTextSize(0.04);
leg17->SetTextAlign(12);
leg17->SetFillColor(kWhite);
leg17->SetLineColor(kWhite);
leg17->SetShadowColor(kWhite);
leg17->SetHeader("Channel");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreData,"Data");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreCCCoh,"Reco CC-Coh");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreCCQE,"Reco CC-QE");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreCCRes,"Reco CC-Res");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreNCRes,"Reco NC-Res");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreCCDIS,"Reco CC-DIS");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreNCDIS,"Reco NC-DIS");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreMC,"Reco Other");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreEXT,"EXT");
leg17->AddEntry(hPionCandidateTrkLLRPIDScoreDirt,"Dirt");
leg17->Draw();





TCanvas *c18 = new TCanvas("c18", "Stacked Muon Candidates LLR After 2-Tracks Selection");
c18->SetTicks();
c18->SetFillColor(kWhite);

hMuonCandidateTrkLLRPIDScoreData->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreData->SetLineWidth(2);
hMuonCandidateTrkLLRPIDScoreData->Rebin(25);
hMuonCandidateTrkLLRPIDScoreData->SetMarkerStyle(20);
hMuonCandidateTrkLLRPIDScoreCCCoh->SetFillColor(kBlue);
hMuonCandidateTrkLLRPIDScoreCCCoh->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreCCCoh->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreCCCoh->Rebin(25);
hMuonCandidateTrkLLRPIDScoreCCQE->SetFillColor(kViolet);
hMuonCandidateTrkLLRPIDScoreCCQE->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreCCQE->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreCCQE->Rebin(25);
hMuonCandidateTrkLLRPIDScoreCCRes->SetFillColor(kRed);
hMuonCandidateTrkLLRPIDScoreCCRes->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreCCRes->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreCCRes->Rebin(25);
hMuonCandidateTrkLLRPIDScoreNCRes->SetFillColor(kGreen);
hMuonCandidateTrkLLRPIDScoreNCRes->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreNCRes->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreNCRes->Rebin(25);
hMuonCandidateTrkLLRPIDScoreCCDIS->SetFillColor(kCyan-8);
hMuonCandidateTrkLLRPIDScoreCCDIS->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreCCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreCCDIS->Rebin(25);
hMuonCandidateTrkLLRPIDScoreNCDIS->SetFillColor(kGray);
hMuonCandidateTrkLLRPIDScoreNCDIS->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreNCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreNCDIS->Rebin(25);
hMuonCandidateTrkLLRPIDScoreCCCohEn->SetFillColor(kBlue);
hMuonCandidateTrkLLRPIDScoreCCCohEn->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreCCCohEn->Rebin(25);
hMuonCandidateTrkLLRPIDScoreMC->SetFillColor(kOrange);
hMuonCandidateTrkLLRPIDScoreMC->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreMC->Scale(Run1ScaleFactorMC);
hMuonCandidateTrkLLRPIDScoreMC->Rebin(25);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreCCCoh, -1);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreCCQE, -1);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreCCRes, -1);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreNCRes, -1);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreCCDIS, -1);
hMuonCandidateTrkLLRPIDScoreMC->Add(hMuonCandidateTrkLLRPIDScoreNCDIS, -1);
hMuonCandidateTrkLLRPIDScoreEXT->SetFillColor(kGray+4);
hMuonCandidateTrkLLRPIDScoreEXT->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreEXT->Scale(Run1ScaleFactorEXT);
hMuonCandidateTrkLLRPIDScoreEXT->Rebin(25);
hMuonCandidateTrkLLRPIDScoreDirt->SetFillColor(kOrange+5);
hMuonCandidateTrkLLRPIDScoreDirt->SetLineColor(kBlack);
hMuonCandidateTrkLLRPIDScoreDirt->Scale(Run1ScaleFactorDirt);
hMuonCandidateTrkLLRPIDScoreDirt->Rebin(25);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreMC);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreEXT);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreDirt);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreCCQE);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreCCRes);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreNCRes);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreCCDIS);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreNCDIS);
hMuonCandidateTrkLLRPIDScoreStacked->Add(hMuonCandidateTrkLLRPIDScoreCCCohEn);

hMuonCandidateTrkLLRPIDScoreData->Draw("E1");
hMuonCandidateTrkLLRPIDScoreStacked->Draw("HISTsame");
hMuonCandidateTrkLLRPIDScoreData->GetXaxis()->SetTitle("LLR");
hMuonCandidateTrkLLRPIDScoreData->GetXaxis()->CenterTitle();
//hMuonCandidateTrkLLRPIDScoreData->GetXaxis()->SetRangeUser(0, 3);
hMuonCandidateTrkLLRPIDScoreData->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateTrkLLRPIDScoreData->GetYaxis()->CenterTitle();

hMuonCandidateTrkLLRPIDScoreData->Draw("E1same");
c18->Modified();

// ### Defining the legend for the plot ###
TLegend *leg18 = new TLegend();
leg18 = new TLegend(0.58,0.65,1.00,1.00);
leg18->SetTextSize(0.04);
leg18->SetTextAlign(12);
leg18->SetFillColor(kWhite);
leg18->SetLineColor(kWhite);
leg18->SetShadowColor(kWhite);
leg18->SetHeader("Channel");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreData,"Data");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreCCCoh,"Reco CC-Coh");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreCCQE,"Reco CC-QE");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreCCRes,"Reco CC-Res");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreNCRes,"Reco NC-Res");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreCCDIS,"Reco CC-DIS");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreNCDIS,"Reco NC-DIS");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreMC,"Reco Other");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreEXT,"EXT");
leg18->AddEntry(hMuonCandidateTrkLLRPIDScoreDirt,"Dirt");
leg18->Draw();





TCanvas *c19 = new TCanvas("c19", "Stacked Cone Angle");
c19->SetTicks();
c19->SetFillColor(kWhite);

hConeAngleData->SetLineColor(kBlack);
hConeAngleData->SetLineWidth(2);
hConeAngleData->Rebin(10);
hConeAngleData->SetMarkerStyle(20);
hConeAngleCCCoh->SetFillColor(kBlue);
hConeAngleCCCoh->SetLineColor(kBlack);
hConeAngleCCCoh->Scale(Run1ScaleFactorMC);
hConeAngleCCCoh->Rebin(10);
hConeAngleCCQE->SetFillColor(kViolet);
hConeAngleCCQE->SetLineColor(kBlack);
hConeAngleCCQE->Scale(Run1ScaleFactorMC);
hConeAngleCCQE->Rebin(10);
hConeAngleCCRes->SetFillColor(kRed);
hConeAngleCCRes->SetLineColor(kBlack);
hConeAngleCCRes->Scale(Run1ScaleFactorMC);
hConeAngleCCRes->Rebin(10);
hConeAngleNCRes->SetFillColor(kGreen);
hConeAngleNCRes->SetLineColor(kBlack);
hConeAngleNCRes->Scale(Run1ScaleFactorMC);
hConeAngleNCRes->Rebin(10);
hConeAngleCCDIS->SetFillColor(kCyan-8);
hConeAngleCCDIS->SetLineColor(kBlack);
hConeAngleCCDIS->Scale(Run1ScaleFactorMC);
hConeAngleCCDIS->Rebin(10);
hConeAngleNCDIS->SetFillColor(kGray);
hConeAngleNCDIS->SetLineColor(kBlack);
hConeAngleNCDIS->Scale(Run1ScaleFactorMC);
hConeAngleNCDIS->Rebin(10);
hConeAngleCCCohEn->SetFillColor(kBlue);
hConeAngleCCCohEn->SetLineColor(kBlack);
hConeAngleCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hConeAngleCCCohEn->Rebin(10);
hConeAngleMC->SetFillColor(kOrange);
hConeAngleMC->SetLineColor(kBlack);
hConeAngleMC->Scale(Run1ScaleFactorMC);
hConeAngleMC->Rebin(10);
hConeAngleMC->Add(hConeAngleCCCoh, -1);
hConeAngleMC->Add(hConeAngleCCQE, -1);
hConeAngleMC->Add(hConeAngleCCRes, -1);
hConeAngleMC->Add(hConeAngleNCRes, -1);
hConeAngleMC->Add(hConeAngleCCDIS, -1);
hConeAngleMC->Add(hConeAngleNCDIS, -1);
hConeAngleEXT->SetFillColor(kGray+4);
hConeAngleEXT->SetLineColor(kBlack);
hConeAngleEXT->Scale(Run1ScaleFactorEXT);
hConeAngleEXT->Rebin(10);
hConeAngleDirt->SetFillColor(kOrange+5);
hConeAngleDirt->SetLineColor(kBlack);
hConeAngleDirt->Scale(Run1ScaleFactorDirt);
hConeAngleDirt->Rebin(10);
hConeAngleStacked->Add(hConeAngleMC);
hConeAngleStacked->Add(hConeAngleEXT);
hConeAngleStacked->Add(hConeAngleDirt);
hConeAngleStacked->Add(hConeAngleCCQE);
hConeAngleStacked->Add(hConeAngleCCRes);
hConeAngleStacked->Add(hConeAngleNCRes);
hConeAngleStacked->Add(hConeAngleCCDIS);
hConeAngleStacked->Add(hConeAngleNCDIS);
hConeAngleStacked->Add(hConeAngleCCCohEn);

hConeAngleData->Draw("E1");
hConeAngleStacked->Draw("HISTsame");
hConeAngleData->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hConeAngleData->GetXaxis()->CenterTitle();
hConeAngleData->GetXaxis()->SetRangeUser(0, 180);
hConeAngleData->GetYaxis()->SetTitle("Number of Events");
hConeAngleData->GetYaxis()->CenterTitle();

hConeAngleData->Draw("E1same");
c19->Modified();

// ### Defining the legend for the plot ###
TLegend *leg19 = new TLegend();
leg19 = new TLegend(0.58,0.65,1.00,1.00);
leg19->SetTextSize(0.04);
leg19->SetTextAlign(12);
leg19->SetFillColor(kWhite);
leg19->SetLineColor(kWhite);
leg19->SetShadowColor(kWhite);
leg19->SetHeader("Channel");
leg19->AddEntry(hConeAngleData,"Data");
leg19->AddEntry(hConeAngleCCCoh,"Reco CC-Coh");
leg19->AddEntry(hConeAngleCCQE,"Reco CC-QE");
leg19->AddEntry(hConeAngleCCRes,"Reco CC-Res");
leg19->AddEntry(hConeAngleNCRes,"Reco NC-Res");
leg19->AddEntry(hConeAngleCCDIS,"Reco CC-DIS");
leg19->AddEntry(hConeAngleNCDIS,"Reco NC-DIS");
leg19->AddEntry(hConeAngleMC,"Reco Other");
leg19->AddEntry(hConeAngleEXT,"EXT");
leg19->AddEntry(hConeAngleDirt,"Dirt");
leg19->Draw();





TCanvas *c20 = new TCanvas("c20", "Stacked Opening Angle");
c20->SetTicks();
c20->SetFillColor(kWhite);

hOpeningAngleData->SetLineColor(kBlack);
hOpeningAngleData->SetLineWidth(2);
hOpeningAngleData->Rebin(RebinOA);
hOpeningAngleData->SetMarkerStyle(20);
hOpeningAngleCCCoh->SetFillColor(kBlue);
hOpeningAngleCCCoh->SetLineColor(kBlack);
hOpeningAngleCCCoh->Scale(Run1ScaleFactorMC);
hOpeningAngleCCCoh->Rebin(RebinOA);
hOpeningAngleCCQE->SetFillColor(kViolet);
hOpeningAngleCCQE->SetLineColor(kBlack);
hOpeningAngleCCQE->Scale(Run1ScaleFactorMC);
hOpeningAngleCCQE->Rebin(RebinOA);
hOpeningAngleCCRes->SetFillColor(kRed);
hOpeningAngleCCRes->SetLineColor(kBlack);
hOpeningAngleCCRes->Scale(Run1ScaleFactorMC);
hOpeningAngleCCRes->Rebin(RebinOA);
hOpeningAngleNCRes->SetFillColor(kGreen);
hOpeningAngleNCRes->SetLineColor(kBlack);
hOpeningAngleNCRes->Scale(Run1ScaleFactorMC);
hOpeningAngleNCRes->Rebin(RebinOA);
hOpeningAngleCCDIS->SetFillColor(kCyan-8);
hOpeningAngleCCDIS->SetLineColor(kBlack);
hOpeningAngleCCDIS->Scale(Run1ScaleFactorMC);
hOpeningAngleCCDIS->Rebin(RebinOA);
hOpeningAngleNCDIS->SetFillColor(kGray);
hOpeningAngleNCDIS->SetLineColor(kBlack);
hOpeningAngleNCDIS->Scale(Run1ScaleFactorMC);
hOpeningAngleNCDIS->Rebin(RebinOA);
hOpeningAngleCCCohEn->SetFillColor(kBlue);
hOpeningAngleCCCohEn->SetLineColor(kBlack);
hOpeningAngleCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hOpeningAngleCCCohEn->Rebin(RebinOA);
hOpeningAngleMC->SetFillColor(kOrange);
hOpeningAngleMC->SetLineColor(kBlack);
hOpeningAngleMC->Scale(Run1ScaleFactorMC);
hOpeningAngleMC->Rebin(RebinOA);
hOpeningAngleMC->Add(hOpeningAngleCCCoh, -1);
hOpeningAngleMC->Add(hOpeningAngleCCQE, -1);
hOpeningAngleMC->Add(hOpeningAngleCCRes, -1);
hOpeningAngleMC->Add(hOpeningAngleNCRes, -1);
hOpeningAngleMC->Add(hOpeningAngleCCDIS, -1);
hOpeningAngleMC->Add(hOpeningAngleNCDIS, -1);
hOpeningAngleEXT->SetFillColor(kGray+4);
hOpeningAngleEXT->SetLineColor(kBlack);
hOpeningAngleEXT->Scale(Run1ScaleFactorEXT);
hOpeningAngleEXT->Rebin(RebinOA);
hOpeningAngleDirt->SetFillColor(kOrange+5);
hOpeningAngleDirt->SetLineColor(kBlack);
hOpeningAngleDirt->Scale(Run1ScaleFactorDirt);
hOpeningAngleDirt->Rebin(RebinOA);
hOpeningAngleStacked->Add(hOpeningAngleMC);
hOpeningAngleStacked->Add(hOpeningAngleEXT);
hOpeningAngleStacked->Add(hOpeningAngleDirt);
hOpeningAngleStacked->Add(hOpeningAngleCCQE);
hOpeningAngleStacked->Add(hOpeningAngleCCRes);
hOpeningAngleStacked->Add(hOpeningAngleNCRes);
hOpeningAngleStacked->Add(hOpeningAngleCCDIS);
hOpeningAngleStacked->Add(hOpeningAngleNCDIS);
hOpeningAngleStacked->Add(hOpeningAngleCCCohEn);

hOpeningAngleData->Draw("E1");
hOpeningAngleStacked->Draw("HISTsame");
hOpeningAngleData->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleData->GetXaxis()->CenterTitle();
hOpeningAngleData->GetXaxis()->SetRangeUser(0, 180);
hOpeningAngleData->GetYaxis()->SetTitle("Number of Events");
hOpeningAngleData->GetYaxis()->CenterTitle();

hOpeningAngleData->Draw("E1same");
c20->Modified();

// ### Defining the legend for the plot ###
TLegend *leg20 = new TLegend();
leg20 = new TLegend(0.58,0.65,1.00,1.00);
leg20->SetTextSize(0.04);
leg20->SetTextAlign(12);
leg20->SetFillColor(kWhite);
leg20->SetLineColor(kWhite);
leg20->SetShadowColor(kWhite);
leg20->SetHeader("Channel");
leg20->AddEntry(hOpeningAngleData,"Data");
leg20->AddEntry(hOpeningAngleCCCoh,"Reco CC-Coh");
leg20->AddEntry(hOpeningAngleCCQE,"Reco CC-QE");
leg20->AddEntry(hOpeningAngleCCRes,"Reco CC-Res");
leg20->AddEntry(hOpeningAngleNCRes,"Reco NC-Res");
leg20->AddEntry(hOpeningAngleCCDIS,"Reco CC-DIS");
leg20->AddEntry(hOpeningAngleNCDIS,"Reco NC-DIS");
leg20->AddEntry(hOpeningAngleMC,"Reco Other");
leg20->AddEntry(hOpeningAngleEXT,"EXT");
leg20->AddEntry(hOpeningAngleDirt,"Dirt");
leg20->Draw();





TCanvas *c21 = new TCanvas("c21", "Stacked Opening Angle After Pion Candidacy");
c21->SetTicks();
c21->SetFillColor(kWhite);

hOpeningAngleDataForPC->SetLineColor(kBlack);
hOpeningAngleDataForPC->SetLineWidth(2);
hOpeningAngleDataForPC->Rebin(RebinOA);
hOpeningAngleDataForPC->SetMarkerStyle(20);
hOpeningAngleCCCohForPC->SetFillColor(kBlue);
hOpeningAngleCCCohForPC->SetLineColor(kBlack);
hOpeningAngleCCCohForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleCCCohForPC->Rebin(RebinOA);
hOpeningAngleCCQEForPC->SetFillColor(kViolet);
hOpeningAngleCCQEForPC->SetLineColor(kBlack);
hOpeningAngleCCQEForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleCCQEForPC->Rebin(RebinOA);
hOpeningAngleCCResForPC->SetFillColor(kRed);
hOpeningAngleCCResForPC->SetLineColor(kBlack);
hOpeningAngleCCResForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleCCResForPC->Rebin(RebinOA);
hOpeningAngleNCResForPC->SetFillColor(kGreen);
hOpeningAngleNCResForPC->SetLineColor(kBlack);
hOpeningAngleNCResForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleNCResForPC->Rebin(RebinOA);
hOpeningAngleCCDISForPC->SetFillColor(kCyan-8);
hOpeningAngleCCDISForPC->SetLineColor(kBlack);
hOpeningAngleCCDISForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleCCDISForPC->Rebin(RebinOA);
hOpeningAngleNCDISForPC->SetFillColor(kGray);
hOpeningAngleNCDISForPC->SetLineColor(kBlack);
hOpeningAngleNCDISForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleNCDISForPC->Rebin(RebinOA);
hOpeningAngleCCCohEnForPC->SetFillColor(kBlue);
hOpeningAngleCCCohEnForPC->SetLineColor(kBlack);
hOpeningAngleCCCohEnForPC->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hOpeningAngleCCCohEnForPC->Rebin(RebinOA);
hOpeningAngleMCForPC->SetFillColor(kOrange);
hOpeningAngleMCForPC->SetLineColor(kBlack);
hOpeningAngleMCForPC->Scale(Run1ScaleFactorMC);
hOpeningAngleMCForPC->Rebin(RebinOA);
hOpeningAngleMCForPC->Add(hOpeningAngleCCCohForPC, -1);
hOpeningAngleMCForPC->Add(hOpeningAngleCCQEForPC, -1);
hOpeningAngleMCForPC->Add(hOpeningAngleCCResForPC, -1);
hOpeningAngleMCForPC->Add(hOpeningAngleNCResForPC, -1);
hOpeningAngleMCForPC->Add(hOpeningAngleCCDISForPC, -1);
hOpeningAngleMCForPC->Add(hOpeningAngleNCDISForPC, -1);
hOpeningAngleEXTForPC->SetFillColor(kGray+4);
hOpeningAngleEXTForPC->SetLineColor(kBlack);
hOpeningAngleEXTForPC->Scale(Run1ScaleFactorEXT);
hOpeningAngleEXTForPC->Rebin(RebinOA);
hOpeningAngleDirtForPC->SetFillColor(kOrange+5);
hOpeningAngleDirtForPC->SetLineColor(kBlack);
hOpeningAngleDirtForPC->Scale(Run1ScaleFactorDirt);
hOpeningAngleDirtForPC->Rebin(RebinOA);
hOpeningAngleStackedForPC->Add(hOpeningAngleMCForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleEXTForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleDirtForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleCCQEForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleCCResForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleNCResForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleCCDISForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleNCDISForPC);
hOpeningAngleStackedForPC->Add(hOpeningAngleCCCohEnForPC);

hOpeningAngleDataForPC->Draw("E1");
hOpeningAngleStackedForPC->Draw("HISTsame");
hOpeningAngleDataForPC->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleDataForPC->GetXaxis()->CenterTitle();
hOpeningAngleDataForPC->GetXaxis()->SetRangeUser(0, 180);
hOpeningAngleDataForPC->GetYaxis()->SetTitle("Number of Events");
hOpeningAngleDataForPC->GetYaxis()->CenterTitle();

hOpeningAngleDataForPC->Draw("E1same");
c21->Modified();

// ### Defining the legend for the plot ###
TLegend *leg21 = new TLegend();
leg21 = new TLegend(0.58,0.65,1.00,1.00);
leg21->SetTextSize(0.04);
leg21->SetTextAlign(12);
leg21->SetFillColor(kWhite);
leg21->SetLineColor(kWhite);
leg21->SetShadowColor(kWhite);
leg21->SetHeader("Channel");
leg21->AddEntry(hOpeningAngleDataForPC,"Data");
leg21->AddEntry(hOpeningAngleCCCohForPC,"Reco CC-Coh");
leg21->AddEntry(hOpeningAngleCCQEForPC,"Reco CC-QE");
leg21->AddEntry(hOpeningAngleCCResForPC,"Reco CC-Res");
leg21->AddEntry(hOpeningAngleNCResForPC,"Reco NC-Res");
leg21->AddEntry(hOpeningAngleCCDISForPC,"Reco CC-DIS");
leg21->AddEntry(hOpeningAngleNCDISForPC,"Reco NC-DIS");
leg21->AddEntry(hOpeningAngleMCForPC,"Reco Other");
leg21->AddEntry(hOpeningAngleEXTForPC,"EXT");
leg21->AddEntry(hOpeningAngleDirtForPC,"Dirt");
leg21->Draw();





TCanvas *c22 = new TCanvas("c22", "Ratio of Data/MC for |t| After Opening Angle");
c22->SetTicks();
c22->SetFillColor(kWhite);

// Creating the Divided Histograms
TH1D *hTOADivided = (TH1D*)hTOA->Clone();
TH1D *hTOATool = new TH1D("hTOATool", "The Histogram Used for Dividing |t| After Opening Angle", 10, 0, 1);
hTOATool->Sumw2();

hTOATool->Add(hTOARecoCCCohEn);
hTOATool->Add(hTOARecoCCQE);
hTOATool->Add(hTOARecoCCRes);
hTOATool->Add(hTOARecoNCRes);
hTOATool->Add(hTOARecoCCDIS);
hTOATool->Add(hTOARecoNCDIS);
hTOATool->Add(hTOAReco);
hTOATool->Add(hTOARecoEXT);
hTOATool->Add(hTOARecoDirt);

hTOADivided->Divide(hTOATool);
hTOADivided->SetLineColor(kBlack);
hTOADivided->SetLineWidth(2);
hTOADivided->SetMarkerStyle(20);

hTOADivided->Draw("E1");
hTOADivided->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTOADivided->GetXaxis()->CenterTitle();
hTOADivided->GetYaxis()->SetTitle("Data/(MC+EXT)");
hTOADivided->GetYaxis()->CenterTitle();
//hTOADivided->GetYaxis()->SetRangeUser(0.5, 1.5);

c22->Modified();





TCanvas *c23 = new TCanvas("c23", "Ratio of Data/MC for Opening Angle After Pion Candidacy");
c23->SetTicks();
c23->SetFillColor(kWhite);

// Creating the Divided Histograms
TH1D *hOAPCDivided = (TH1D*)hOpeningAngleDataForPC->Clone();
TH1D *hOAPCTool = new TH1D("hOAPCTool", "The Histogram Used for Dividing OpeningAngle After Pion Candidacy", 18, 0, 180);
hOAPCTool->Sumw2();

hOAPCTool->Add(hOpeningAngleCCCohEnForPC);
hOAPCTool->Add(hOpeningAngleCCQEForPC);
hOAPCTool->Add(hOpeningAngleCCResForPC);
hOAPCTool->Add(hOpeningAngleNCResForPC);
hOAPCTool->Add(hOpeningAngleCCDISForPC);
hOAPCTool->Add(hOpeningAngleNCDISForPC);
hOAPCTool->Add(hOpeningAngleMCForPC);
hOAPCTool->Add(hOpeningAngleEXTForPC);
hOAPCTool->Add(hOpeningAngleDirtForPC);

hOAPCDivided->Divide(hOAPCTool);
hOAPCDivided->SetLineColor(kBlack);
hOAPCDivided->SetLineWidth(2);
hOAPCDivided->SetMarkerStyle(20);

hOAPCDivided->Draw("E1");
hOAPCDivided->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOAPCDivided->GetXaxis()->CenterTitle();
hOAPCDivided->GetYaxis()->SetTitle("Data/(MC+EXT)");
hOAPCDivided->GetYaxis()->CenterTitle();
//hOAPCDivided->GetYaxis()->SetRangeUser(0.5, 1.5);

c23->Modified();





TCanvas *c24 = new TCanvas("c24", "Stacked Reco Neutrino Energy within Fiducial Volume");
c24->SetTicks();
c24->SetFillColor(kWhite);

hRecoNuEnergyFVData->SetLineColor(kBlack);
hRecoNuEnergyFVData->SetLineWidth(2);
hRecoNuEnergyFVData->Rebin(20);
hRecoNuEnergyFVData->SetMarkerStyle(20);
hRecoNuEnergyFVCCCoh->SetFillColor(kBlue);
hRecoNuEnergyFVCCCoh->SetLineColor(kBlack);
hRecoNuEnergyFVCCCoh->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVCCCoh->Rebin(20);
hRecoNuEnergyFVCCQE->SetFillColor(kViolet);
hRecoNuEnergyFVCCQE->SetLineColor(kBlack);
hRecoNuEnergyFVCCQE->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVCCQE->Rebin(20);
hRecoNuEnergyFVCCRes->SetFillColor(kRed);
hRecoNuEnergyFVCCRes->SetLineColor(kBlack);
hRecoNuEnergyFVCCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVCCRes->Rebin(20);
hRecoNuEnergyFVNCRes->SetFillColor(kGreen);
hRecoNuEnergyFVNCRes->SetLineColor(kBlack);
hRecoNuEnergyFVNCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVNCRes->Rebin(20);
hRecoNuEnergyFVCCDIS->SetFillColor(kCyan-8);
hRecoNuEnergyFVCCDIS->SetLineColor(kBlack);
hRecoNuEnergyFVCCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVCCDIS->Rebin(20);
hRecoNuEnergyFVNCDIS->SetFillColor(kGray);
hRecoNuEnergyFVNCDIS->SetLineColor(kBlack);
hRecoNuEnergyFVNCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVNCDIS->Rebin(20);
hRecoNuEnergyFVCCCohEn->SetFillColor(kBlue);
hRecoNuEnergyFVCCCohEn->SetLineColor(kBlack);
hRecoNuEnergyFVCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoNuEnergyFVCCCohEn->Rebin(20);
hRecoNuEnergyFVMC->SetFillColor(kOrange);
hRecoNuEnergyFVMC->SetLineColor(kBlack);
hRecoNuEnergyFVMC->Scale(Run1ScaleFactorMC);
hRecoNuEnergyFVMC->Rebin(20);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVCCCoh, -1);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVCCQE, -1);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVCCRes, -1);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVNCRes, -1);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVCCDIS, -1);
hRecoNuEnergyFVMC->Add(hRecoNuEnergyFVNCDIS, -1);
hRecoNuEnergyFVEXT->SetFillColor(kGray+4);
hRecoNuEnergyFVEXT->SetLineColor(kBlack);
hRecoNuEnergyFVEXT->Scale(Run1ScaleFactorEXT);
hRecoNuEnergyFVEXT->Rebin(20);
hRecoNuEnergyFVDirt->SetFillColor(kOrange+5);
hRecoNuEnergyFVDirt->SetLineColor(kBlack);
hRecoNuEnergyFVDirt->Scale(Run1ScaleFactorDirt);
hRecoNuEnergyFVDirt->Rebin(20);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVMC);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVEXT);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVDirt);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVCCQE);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVCCRes);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVNCRes);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVCCDIS);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVNCDIS);
hRecoNuEnergyFVStacked->Add(hRecoNuEnergyFVCCCohEn);

hRecoNuEnergyFVData->Draw("E1");
hRecoNuEnergyFVStacked->Draw("HISTsame");
hRecoNuEnergyFVData->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hRecoNuEnergyFVData->GetXaxis()->CenterTitle();
hRecoNuEnergyFVData->GetXaxis()->SetRangeUser(0, 3);
hRecoNuEnergyFVData->GetYaxis()->SetTitle("Number of Events");
hRecoNuEnergyFVData->GetYaxis()->CenterTitle();

hRecoNuEnergyFVData->Draw("E1same");
c24->Modified();

// ### Defining the legend for the plot ###
TLegend *leg24 = new TLegend();
leg24 = new TLegend(0.58,0.65,1.00,1.00);
leg24->SetTextSize(0.04);
leg24->SetTextAlign(12);
leg24->SetFillColor(kWhite);
leg24->SetLineColor(kWhite);
leg24->SetShadowColor(kWhite);
leg24->SetHeader("Channel");
leg24->AddEntry(hRecoNuEnergyFVData,"Data");
leg24->AddEntry(hRecoNuEnergyFVCCCoh,"Reco CC-Coh");
leg24->AddEntry(hRecoNuEnergyFVCCQE,"Reco CC-QE");
leg24->AddEntry(hRecoNuEnergyFVCCRes,"Reco CC-Res");
leg24->AddEntry(hRecoNuEnergyFVNCRes,"Reco NC-Res");
leg24->AddEntry(hRecoNuEnergyFVCCDIS,"Reco CC-DIS");
leg24->AddEntry(hRecoNuEnergyFVNCDIS,"Reco NC-DIS");
leg24->AddEntry(hRecoNuEnergyFVMC,"Reco Other");
leg24->AddEntry(hRecoNuEnergyFVEXT,"EXT");
leg24->AddEntry(hRecoNuEnergyFVDirt,"Dirt");
leg24->Draw();





TCanvas *c25 = new TCanvas("c25", "Stacked Reco Neutrino Energy After 2-Tracks Selection");
c25->SetTicks();
c25->SetFillColor(kWhite);

hRecoNuEnergyData->SetLineColor(kBlack);
hRecoNuEnergyData->SetLineWidth(2);
hRecoNuEnergyData->Rebin(20);
hRecoNuEnergyData->SetMarkerStyle(20);
hRecoNuEnergyCCCoh->SetFillColor(kBlue);
hRecoNuEnergyCCCoh->SetLineColor(kBlack);
hRecoNuEnergyCCCoh->Scale(Run1ScaleFactorMC);
hRecoNuEnergyCCCoh->Rebin(20);
hRecoNuEnergyCCQE->SetFillColor(kViolet);
hRecoNuEnergyCCQE->SetLineColor(kBlack);
hRecoNuEnergyCCQE->Scale(Run1ScaleFactorMC);
hRecoNuEnergyCCQE->Rebin(20);
hRecoNuEnergyCCRes->SetFillColor(kRed);
hRecoNuEnergyCCRes->SetLineColor(kBlack);
hRecoNuEnergyCCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyCCRes->Rebin(20);
hRecoNuEnergyNCRes->SetFillColor(kGreen);
hRecoNuEnergyNCRes->SetLineColor(kBlack);
hRecoNuEnergyNCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyNCRes->Rebin(20);
hRecoNuEnergyCCDIS->SetFillColor(kCyan-8);
hRecoNuEnergyCCDIS->SetLineColor(kBlack);
hRecoNuEnergyCCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyCCDIS->Rebin(20);
hRecoNuEnergyNCDIS->SetFillColor(kGray);
hRecoNuEnergyNCDIS->SetLineColor(kBlack);
hRecoNuEnergyNCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyNCDIS->Rebin(20);
hRecoNuEnergyCCCohEn->SetFillColor(kBlue);
hRecoNuEnergyCCCohEn->SetLineColor(kBlack);
hRecoNuEnergyCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoNuEnergyCCCohEn->Rebin(20);
hRecoNuEnergyMC->SetFillColor(kOrange);
hRecoNuEnergyMC->SetLineColor(kBlack);
hRecoNuEnergyMC->Scale(Run1ScaleFactorMC);
hRecoNuEnergyMC->Rebin(20);
hRecoNuEnergyMC->Add(hRecoNuEnergyCCCoh, -1);
hRecoNuEnergyMC->Add(hRecoNuEnergyCCQE, -1);
hRecoNuEnergyMC->Add(hRecoNuEnergyCCRes, -1);
hRecoNuEnergyMC->Add(hRecoNuEnergyNCRes, -1);
hRecoNuEnergyMC->Add(hRecoNuEnergyCCDIS, -1);
hRecoNuEnergyMC->Add(hRecoNuEnergyNCDIS, -1);
hRecoNuEnergyEXT->SetFillColor(kGray+4);
hRecoNuEnergyEXT->SetLineColor(kBlack);
hRecoNuEnergyEXT->Scale(Run1ScaleFactorEXT);
hRecoNuEnergyEXT->Rebin(20);
hRecoNuEnergyDirt->SetFillColor(kOrange+5);
hRecoNuEnergyDirt->SetLineColor(kBlack);
hRecoNuEnergyDirt->Scale(Run1ScaleFactorDirt);
hRecoNuEnergyDirt->Rebin(20);
hRecoNuEnergyStacked->Add(hRecoNuEnergyMC);
hRecoNuEnergyStacked->Add(hRecoNuEnergyEXT);
hRecoNuEnergyStacked->Add(hRecoNuEnergyDirt);
hRecoNuEnergyStacked->Add(hRecoNuEnergyCCQE);
hRecoNuEnergyStacked->Add(hRecoNuEnergyCCRes);
hRecoNuEnergyStacked->Add(hRecoNuEnergyNCRes);
hRecoNuEnergyStacked->Add(hRecoNuEnergyCCDIS);
hRecoNuEnergyStacked->Add(hRecoNuEnergyNCDIS);
hRecoNuEnergyStacked->Add(hRecoNuEnergyCCCohEn);

hRecoNuEnergyData->Draw("E1");
hRecoNuEnergyStacked->Draw("HISTsame");
hRecoNuEnergyData->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hRecoNuEnergyData->GetXaxis()->CenterTitle();
hRecoNuEnergyData->GetXaxis()->SetRangeUser(0, 3);
hRecoNuEnergyData->GetYaxis()->SetTitle("Number of Events");
hRecoNuEnergyData->GetYaxis()->CenterTitle();

hRecoNuEnergyData->Draw("E1same");
c25->Modified();

// ### Defining the legend for the plot ###
TLegend *leg25 = new TLegend();
leg25 = new TLegend(0.58,0.65,1.00,1.00);
leg25->SetTextSize(0.04);
leg25->SetTextAlign(12);
leg25->SetFillColor(kWhite);
leg25->SetLineColor(kWhite);
leg25->SetShadowColor(kWhite);
leg25->SetHeader("Channel");
leg25->AddEntry(hRecoNuEnergyData,"Data");
leg25->AddEntry(hRecoNuEnergyCCCoh,"Reco CC-Coh");
leg25->AddEntry(hRecoNuEnergyCCQE,"Reco CC-QE");
leg25->AddEntry(hRecoNuEnergyCCRes,"Reco CC-Res");
leg25->AddEntry(hRecoNuEnergyNCRes,"Reco NC-Res");
leg25->AddEntry(hRecoNuEnergyCCDIS,"Reco CC-DIS");
leg25->AddEntry(hRecoNuEnergyNCDIS,"Reco NC-DIS");
leg25->AddEntry(hRecoNuEnergyMC,"Reco Other");
leg25->AddEntry(hRecoNuEnergyEXT,"EXT");
leg25->AddEntry(hRecoNuEnergyDirt,"Dirt");
leg25->Draw();





TCanvas *c26 = new TCanvas("c26", "Stacked Reco Neutrino Energy After Opening Angle Selection");
c26->SetTicks();
c26->SetFillColor(kWhite);

hRecoNuEnergyOAData->SetLineColor(kBlack);
hRecoNuEnergyOAData->SetLineWidth(2);
hRecoNuEnergyOAData->Rebin(20);
hRecoNuEnergyOAData->SetMarkerStyle(20);
hRecoNuEnergyOACCCoh->SetFillColor(kBlue);
hRecoNuEnergyOACCCoh->SetLineColor(kBlack);
hRecoNuEnergyOACCCoh->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOACCCoh->Rebin(20);
hRecoNuEnergyOACCQE->SetFillColor(kViolet);
hRecoNuEnergyOACCQE->SetLineColor(kBlack);
hRecoNuEnergyOACCQE->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOACCQE->Rebin(20);
hRecoNuEnergyOACCRes->SetFillColor(kRed);
hRecoNuEnergyOACCRes->SetLineColor(kBlack);
hRecoNuEnergyOACCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOACCRes->Rebin(20);
hRecoNuEnergyOANCRes->SetFillColor(kGreen);
hRecoNuEnergyOANCRes->SetLineColor(kBlack);
hRecoNuEnergyOANCRes->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOANCRes->Rebin(20);
hRecoNuEnergyOACCDIS->SetFillColor(kCyan-8);
hRecoNuEnergyOACCDIS->SetLineColor(kBlack);
hRecoNuEnergyOACCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOACCDIS->Rebin(20);
hRecoNuEnergyOANCDIS->SetFillColor(kGray);
hRecoNuEnergyOANCDIS->SetLineColor(kBlack);
hRecoNuEnergyOANCDIS->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOANCDIS->Rebin(20);
hRecoNuEnergyOACCCohEn->SetFillColor(kBlue);
hRecoNuEnergyOACCCohEn->SetLineColor(kBlack);
hRecoNuEnergyOACCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hRecoNuEnergyOACCCohEn->Rebin(20);
hRecoNuEnergyOAMC->SetFillColor(kOrange);
hRecoNuEnergyOAMC->SetLineColor(kBlack);
hRecoNuEnergyOAMC->Scale(Run1ScaleFactorMC);
hRecoNuEnergyOAMC->Rebin(20);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOACCCoh, -1);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOACCQE, -1);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOACCRes, -1);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOANCRes, -1);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOACCDIS, -1);
hRecoNuEnergyOAMC->Add(hRecoNuEnergyOANCDIS, -1);
hRecoNuEnergyOAEXT->SetFillColor(kGray+4);
hRecoNuEnergyOAEXT->SetLineColor(kBlack);
hRecoNuEnergyOAEXT->Scale(Run1ScaleFactorEXT);
hRecoNuEnergyOAEXT->Rebin(20);
hRecoNuEnergyOADirt->SetFillColor(kOrange+5);
hRecoNuEnergyOADirt->SetLineColor(kBlack);
hRecoNuEnergyOADirt->Scale(Run1ScaleFactorDirt);
hRecoNuEnergyOADirt->Rebin(20);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOAMC);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOAEXT);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOADirt);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOACCQE);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOACCRes);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOANCRes);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOACCDIS);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOANCDIS);
hRecoNuEnergyOAStacked->Add(hRecoNuEnergyOACCCohEn);

hRecoNuEnergyOAData->Draw("E1");
hRecoNuEnergyOAStacked->Draw("HISTsame");
hRecoNuEnergyOAData->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hRecoNuEnergyOAData->GetXaxis()->CenterTitle();
hRecoNuEnergyOAData->GetXaxis()->SetRangeUser(0, 3);
hRecoNuEnergyOAData->GetYaxis()->SetTitle("Number of Events");
hRecoNuEnergyOAData->GetYaxis()->CenterTitle();

hRecoNuEnergyOAData->Draw("E1same");
c26->Modified();

// ### Defining the legend for the plot ###
TLegend *leg26 = new TLegend();
leg26 = new TLegend(0.58,0.65,1.00,1.00);
leg26->SetTextSize(0.04);
leg26->SetTextAlign(12);
leg26->SetFillColor(kWhite);
leg26->SetLineColor(kWhite);
leg26->SetShadowColor(kWhite);
leg26->SetHeader("Channel");
leg26->AddEntry(hRecoNuEnergyOAData,"Data");
leg26->AddEntry(hRecoNuEnergyOACCCoh,"Reco CC-Coh");
leg26->AddEntry(hRecoNuEnergyOACCQE,"Reco CC-QE");
leg26->AddEntry(hRecoNuEnergyOACCRes,"Reco CC-Res");
leg26->AddEntry(hRecoNuEnergyOANCRes,"Reco NC-Res");
leg26->AddEntry(hRecoNuEnergyOACCDIS,"Reco CC-DIS");
leg26->AddEntry(hRecoNuEnergyOANCDIS,"Reco NC-DIS");
leg26->AddEntry(hRecoNuEnergyOAMC,"Reco Other");
leg26->AddEntry(hRecoNuEnergyOAEXT,"EXT");
leg26->AddEntry(hRecoNuEnergyOADirt,"Dirt");
leg26->Draw();





TCanvas *c27 = new TCanvas("c27", "Stacked Reco Muon Candidate Theta After Pion Candidacy");
c27->SetTicks();
c27->SetFillColor(kWhite);

hMuonCandidateThetaAfterPCData->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCData->SetLineWidth(2);
hMuonCandidateThetaAfterPCData->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCData->SetMarkerStyle(20);
hMuonCandidateThetaAfterPCMCCCCoh->SetFillColor(kBlue);
hMuonCandidateThetaAfterPCMCCCCoh->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCCCCoh->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCCCQE->SetFillColor(kViolet);
hMuonCandidateThetaAfterPCMCCCQE->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCCCQE->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCCCRes->SetFillColor(kRed);
hMuonCandidateThetaAfterPCMCCCRes->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCCCRes->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCNCRes->SetFillColor(kGreen);
hMuonCandidateThetaAfterPCMCNCRes->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCNCRes->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCCCDIS->SetFillColor(kCyan-8);
hMuonCandidateThetaAfterPCMCCCDIS->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCCCDIS->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCNCDIS->SetFillColor(kGray);
hMuonCandidateThetaAfterPCMCNCDIS->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCNCDIS->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMCCCCohEn->SetFillColor(kBlue);
hMuonCandidateThetaAfterPCMCCCCohEn->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMCCCCohEn->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMC->SetFillColor(kOrange);
hMuonCandidateThetaAfterPCMC->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hMuonCandidateThetaAfterPCMC->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCCCCoh, -1);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCCCQE, -1);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCCCRes, -1);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCNCRes, -1);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCCCDIS, -1);
hMuonCandidateThetaAfterPCMC->Add(hMuonCandidateThetaAfterPCMCNCDIS, -1);
hMuonCandidateThetaAfterPCEXT->SetFillColor(kGray+4);
hMuonCandidateThetaAfterPCEXT->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCEXT->Scale(Run1ScaleFactorEXT);
hMuonCandidateThetaAfterPCEXT->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCDirt->SetFillColor(kOrange+5);
hMuonCandidateThetaAfterPCDirt->SetLineColor(kBlack);
hMuonCandidateThetaAfterPCDirt->Scale(Run1ScaleFactorDirt);
hMuonCandidateThetaAfterPCDirt->Rebin(RebinTheta);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMC);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCEXT);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCDirt);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCCCQE);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCCCRes);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCNCRes);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCCCDIS);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCNCDIS);
hMuonCandidateThetaAfterPCStacked->Add(hMuonCandidateThetaAfterPCMCCCCohEn);

hMuonCandidateThetaAfterPCData->Draw("E1");
hMuonCandidateThetaAfterPCStacked->Draw("HISTsame");
hMuonCandidateThetaAfterPCData->GetXaxis()->SetTitle("#theta_{#mu} [Degrees]");
hMuonCandidateThetaAfterPCData->GetXaxis()->CenterTitle();
hMuonCandidateThetaAfterPCData->GetXaxis()->SetRangeUser(0, 90);
hMuonCandidateThetaAfterPCData->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateThetaAfterPCData->GetYaxis()->CenterTitle();
hMuonCandidateThetaAfterPCData->GetYaxis()->SetRangeUser(0, 20);

hMuonCandidateThetaAfterPCData->Draw("E1same");
c27->Modified();

// ### Defining the legend for the plot ###
TLegend *leg27 = new TLegend();
leg27 = new TLegend(0.58,0.65,1.00,1.00);
leg27->SetTextSize(0.04);
leg27->SetTextAlign(12);
leg27->SetFillColor(kWhite);
leg27->SetLineColor(kWhite);
leg27->SetShadowColor(kWhite);
leg27->SetHeader("Channel");
leg27->AddEntry(hMuonCandidateThetaAfterPCData,"Data");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCCCCoh,"Reco CC-Coh");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCCCQE,"Reco CC-QE");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCCCRes,"Reco CC-Res");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCNCRes,"Reco NC-Res");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCCCDIS,"Reco CC-DIS");
leg27->AddEntry(hMuonCandidateThetaAfterPCMCNCDIS,"Reco NC-DIS");
leg27->AddEntry(hMuonCandidateThetaAfterPCMC,"Reco Other");
leg27->AddEntry(hMuonCandidateThetaAfterPCEXT,"EXT");
leg27->AddEntry(hMuonCandidateThetaAfterPCDirt,"Dirt");
leg27->Draw();





TCanvas *c28 = new TCanvas("c28", "Stacked Reco Pion Candidate Theta After Pion Candidacy");
c28->SetTicks();
c28->SetFillColor(kWhite);

hPionCandidateThetaAfterPCData->SetLineColor(kBlack);
hPionCandidateThetaAfterPCData->SetLineWidth(2);
hPionCandidateThetaAfterPCData->Rebin(RebinTheta);
hPionCandidateThetaAfterPCData->SetMarkerStyle(20);
hPionCandidateThetaAfterPCMCCCCoh->SetFillColor(kBlue);
hPionCandidateThetaAfterPCMCCCCoh->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCCCCoh->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCCCQE->SetFillColor(kViolet);
hPionCandidateThetaAfterPCMCCCQE->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCCCQE->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCCCRes->SetFillColor(kRed);
hPionCandidateThetaAfterPCMCCCRes->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCCCRes->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCNCRes->SetFillColor(kGreen);
hPionCandidateThetaAfterPCMCNCRes->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCNCRes->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCCCDIS->SetFillColor(kCyan-8);
hPionCandidateThetaAfterPCMCCCDIS->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCCCDIS->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCNCDIS->SetFillColor(kGray);
hPionCandidateThetaAfterPCMCNCDIS->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCNCDIS->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMCCCCohEn->SetFillColor(kBlue);
hPionCandidateThetaAfterPCMCCCCohEn->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMCCCCohEn->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMC->SetFillColor(kOrange);
hPionCandidateThetaAfterPCMC->SetLineColor(kBlack);
hPionCandidateThetaAfterPCMC->Scale(Run1ScaleFactorMC);
hPionCandidateThetaAfterPCMC->Rebin(RebinTheta);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCCCCoh, -1);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCCCQE, -1);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCCCRes, -1);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCNCRes, -1);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCCCDIS, -1);
hPionCandidateThetaAfterPCMC->Add(hPionCandidateThetaAfterPCMCNCDIS, -1);
hPionCandidateThetaAfterPCEXT->SetFillColor(kGray+4);
hPionCandidateThetaAfterPCEXT->SetLineColor(kBlack);
hPionCandidateThetaAfterPCEXT->Scale(Run1ScaleFactorEXT);
hPionCandidateThetaAfterPCEXT->Rebin(RebinTheta);
hPionCandidateThetaAfterPCDirt->SetFillColor(kOrange+5);
hPionCandidateThetaAfterPCDirt->SetLineColor(kBlack);
hPionCandidateThetaAfterPCDirt->Scale(Run1ScaleFactorDirt);
hPionCandidateThetaAfterPCDirt->Rebin(RebinTheta);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMC);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCEXT);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCDirt);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCCCQE);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCCCRes);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCNCRes);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCCCDIS);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCNCDIS);
hPionCandidateThetaAfterPCStacked->Add(hPionCandidateThetaAfterPCMCCCCohEn);

hPionCandidateThetaAfterPCData->Draw("E1");
hPionCandidateThetaAfterPCStacked->Draw("HISTsame");
hPionCandidateThetaAfterPCData->GetXaxis()->SetTitle("#theta_{#pi} [Degrees]");
hPionCandidateThetaAfterPCData->GetXaxis()->CenterTitle();
hPionCandidateThetaAfterPCData->GetXaxis()->SetRangeUser(0, 90);
hPionCandidateThetaAfterPCData->GetYaxis()->SetTitle("Number of Events");
hPionCandidateThetaAfterPCData->GetYaxis()->CenterTitle();
hPionCandidateThetaAfterPCData->GetYaxis()->SetRangeUser(0, 20);

hPionCandidateThetaAfterPCData->Draw("E1same");
c28->Modified();

// ### Defining the legend for the plot ###
TLegend *leg28 = new TLegend();
leg28 = new TLegend(0.58,0.65,1.00,1.00);
leg28->SetTextSize(0.04);
leg28->SetTextAlign(12);
leg28->SetFillColor(kWhite);
leg28->SetLineColor(kWhite);
leg28->SetShadowColor(kWhite);
leg28->SetHeader("Channel");
leg28->AddEntry(hPionCandidateThetaAfterPCData,"Data");
leg28->AddEntry(hPionCandidateThetaAfterPCMCCCCoh,"Reco CC-Coh");
leg28->AddEntry(hPionCandidateThetaAfterPCMCCCQE,"Reco CC-QE");
leg28->AddEntry(hPionCandidateThetaAfterPCMCCCRes,"Reco CC-Res");
leg28->AddEntry(hPionCandidateThetaAfterPCMCNCRes,"Reco NC-Res");
leg28->AddEntry(hPionCandidateThetaAfterPCMCCCDIS,"Reco CC-DIS");
leg28->AddEntry(hPionCandidateThetaAfterPCMCNCDIS,"Reco NC-DIS");
leg28->AddEntry(hPionCandidateThetaAfterPCMC,"Reco Other");
leg28->AddEntry(hPionCandidateThetaAfterPCEXT,"EXT");
leg28->AddEntry(hPionCandidateThetaAfterPCDirt,"Dirt");
leg28->Draw();





TCanvas *c29 = new TCanvas("c29", "Stacked Reco Muon Candidate Phi After Pion Candidacy");
c29->SetTicks();
c29->SetFillColor(kWhite);

hMuonCandidatePhiAfterPCData->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCData->SetLineWidth(2);
hMuonCandidatePhiAfterPCData->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCData->SetMarkerStyle(20);
hMuonCandidatePhiAfterPCMCCCCoh->SetFillColor(kBlue);
hMuonCandidatePhiAfterPCMCCCCoh->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCCCCoh->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCCCQE->SetFillColor(kViolet);
hMuonCandidatePhiAfterPCMCCCQE->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCCCQE->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCCCRes->SetFillColor(kRed);
hMuonCandidatePhiAfterPCMCCCRes->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCCCRes->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCNCRes->SetFillColor(kGreen);
hMuonCandidatePhiAfterPCMCNCRes->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCNCRes->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCCCDIS->SetFillColor(kCyan-8);
hMuonCandidatePhiAfterPCMCCCDIS->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCCCDIS->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCNCDIS->SetFillColor(kGray);
hMuonCandidatePhiAfterPCMCNCDIS->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCNCDIS->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMCCCCohEn->SetFillColor(kBlue);
hMuonCandidatePhiAfterPCMCCCCohEn->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMCCCCohEn->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMC->SetFillColor(kOrange);
hMuonCandidatePhiAfterPCMC->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCMC->Scale(Run1ScaleFactorMC);
hMuonCandidatePhiAfterPCMC->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCCCCoh, -1);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCCCQE, -1);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCCCRes, -1);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCNCRes, -1);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCCCDIS, -1);
hMuonCandidatePhiAfterPCMC->Add(hMuonCandidatePhiAfterPCMCNCDIS, -1);
hMuonCandidatePhiAfterPCEXT->SetFillColor(kGray+4);
hMuonCandidatePhiAfterPCEXT->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCEXT->Scale(Run1ScaleFactorEXT);
hMuonCandidatePhiAfterPCEXT->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCDirt->SetFillColor(kOrange+5);
hMuonCandidatePhiAfterPCDirt->SetLineColor(kBlack);
hMuonCandidatePhiAfterPCDirt->Scale(Run1ScaleFactorDirt);
hMuonCandidatePhiAfterPCDirt->Rebin(RebinPhi);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMC);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCEXT);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCDirt);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCCCQE);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCCCRes);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCNCRes);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCCCDIS);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCNCDIS);
hMuonCandidatePhiAfterPCStacked->Add(hMuonCandidatePhiAfterPCMCCCCohEn);

hMuonCandidatePhiAfterPCData->Draw("E1");
hMuonCandidatePhiAfterPCStacked->Draw("HISTsame");
hMuonCandidatePhiAfterPCData->GetXaxis()->SetTitle("#phi_{#mu} [Degrees]");
hMuonCandidatePhiAfterPCData->GetXaxis()->CenterTitle();
hMuonCandidatePhiAfterPCData->GetXaxis()->SetRangeUser(0, 180);
hMuonCandidatePhiAfterPCData->GetYaxis()->SetTitle("Number of Events");
hMuonCandidatePhiAfterPCData->GetYaxis()->CenterTitle();
hMuonCandidatePhiAfterPCData->GetYaxis()->SetRangeUser(0, 10);

hMuonCandidatePhiAfterPCData->Draw("E1same");
c29->Modified();

// ### Defining the legend for the plot ###
TLegend *leg29 = new TLegend();
leg29 = new TLegend(0.58,0.65,1.00,1.00);
leg29->SetTextSize(0.04);
leg29->SetTextAlign(12);
leg29->SetFillColor(kWhite);
leg29->SetLineColor(kWhite);
leg29->SetShadowColor(kWhite);
leg29->SetHeader("Channel");
leg29->AddEntry(hMuonCandidatePhiAfterPCData,"Data");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCCCCoh,"Reco CC-Coh");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCCCQE,"Reco CC-QE");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCCCRes,"Reco CC-Res");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCNCRes,"Reco NC-Res");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCCCDIS,"Reco CC-DIS");
leg29->AddEntry(hMuonCandidatePhiAfterPCMCNCDIS,"Reco NC-DIS");
leg29->AddEntry(hMuonCandidatePhiAfterPCMC,"Reco Other");
leg29->AddEntry(hMuonCandidatePhiAfterPCEXT,"EXT");
leg29->AddEntry(hMuonCandidatePhiAfterPCDirt,"Dirt");
leg29->Draw();





TCanvas *c30 = new TCanvas("c30", "Stacked Reco Pion Candidate Phi After Pion Candidacy");
c30->SetTicks();
c30->SetFillColor(kWhite);

hPionCandidatePhiAfterPCData->SetLineColor(kBlack);
hPionCandidatePhiAfterPCData->SetLineWidth(2);
hPionCandidatePhiAfterPCData->Rebin(RebinPhi);
hPionCandidatePhiAfterPCData->SetMarkerStyle(20);
hPionCandidatePhiAfterPCMCCCCoh->SetFillColor(kBlue);
hPionCandidatePhiAfterPCMCCCCoh->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCCCCoh->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCCCCoh->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCCCQE->SetFillColor(kViolet);
hPionCandidatePhiAfterPCMCCCQE->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCCCQE->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCCCQE->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCCCRes->SetFillColor(kRed);
hPionCandidatePhiAfterPCMCCCRes->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCCCRes->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCCCRes->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCNCRes->SetFillColor(kGreen);
hPionCandidatePhiAfterPCMCNCRes->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCNCRes->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCNCRes->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCCCDIS->SetFillColor(kCyan-8);
hPionCandidatePhiAfterPCMCCCDIS->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCCCDIS->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCCCDIS->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCNCDIS->SetFillColor(kGray);
hPionCandidatePhiAfterPCMCNCDIS->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCNCDIS->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCNCDIS->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMCCCCohEn->SetFillColor(kBlue);
hPionCandidatePhiAfterPCMCCCCohEn->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMCCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMCCCCohEn->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMC->SetFillColor(kOrange);
hPionCandidatePhiAfterPCMC->SetLineColor(kBlack);
hPionCandidatePhiAfterPCMC->Scale(Run1ScaleFactorMC);
hPionCandidatePhiAfterPCMC->Rebin(RebinPhi);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCCCCoh, -1);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCCCQE, -1);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCCCRes, -1);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCNCRes, -1);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCCCDIS, -1);
hPionCandidatePhiAfterPCMC->Add(hPionCandidatePhiAfterPCMCNCDIS, -1);
hPionCandidatePhiAfterPCEXT->SetFillColor(kGray+4);
hPionCandidatePhiAfterPCEXT->SetLineColor(kBlack);
hPionCandidatePhiAfterPCEXT->Scale(Run1ScaleFactorEXT);
hPionCandidatePhiAfterPCEXT->Rebin(RebinPhi);
hPionCandidatePhiAfterPCDirt->SetFillColor(kOrange+5);
hPionCandidatePhiAfterPCDirt->SetLineColor(kBlack);
hPionCandidatePhiAfterPCDirt->Scale(Run1ScaleFactorDirt);
hPionCandidatePhiAfterPCDirt->Rebin(RebinPhi);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMC);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCEXT);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCDirt);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCCCQE);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCCCRes);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCNCRes);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCCCDIS);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCNCDIS);
hPionCandidatePhiAfterPCStacked->Add(hPionCandidatePhiAfterPCMCCCCohEn);

hPionCandidatePhiAfterPCData->Draw("E1");
hPionCandidatePhiAfterPCStacked->Draw("HISTsame");
hPionCandidatePhiAfterPCData->GetXaxis()->SetTitle("#phi_{#pi} [Degrees]");
hPionCandidatePhiAfterPCData->GetXaxis()->CenterTitle();
hPionCandidatePhiAfterPCData->GetXaxis()->SetRangeUser(0, 180);
hPionCandidatePhiAfterPCData->GetYaxis()->SetTitle("Number of Events");
hPionCandidatePhiAfterPCData->GetYaxis()->CenterTitle();
hPionCandidatePhiAfterPCData->GetYaxis()->SetRangeUser(0, 10);

hPionCandidatePhiAfterPCData->Draw("E1same");
c30->Modified();

// ### Defining the legend for the plot ###
TLegend *leg30 = new TLegend();
leg30 = new TLegend(0.58,0.65,1.00,1.00);
leg30->SetTextSize(0.04);
leg30->SetTextAlign(12);
leg30->SetFillColor(kWhite);
leg30->SetLineColor(kWhite);
leg30->SetShadowColor(kWhite);
leg30->SetHeader("Channel");
leg30->AddEntry(hPionCandidatePhiAfterPCData,"Data");
leg30->AddEntry(hPionCandidatePhiAfterPCMCCCCoh,"Reco CC-Coh");
leg30->AddEntry(hPionCandidatePhiAfterPCMCCCQE,"Reco CC-QE");
leg30->AddEntry(hPionCandidatePhiAfterPCMCCCRes,"Reco CC-Res");
leg30->AddEntry(hPionCandidatePhiAfterPCMCNCRes,"Reco NC-Res");
leg30->AddEntry(hPionCandidatePhiAfterPCMCCCDIS,"Reco CC-DIS");
leg30->AddEntry(hPionCandidatePhiAfterPCMCNCDIS,"Reco NC-DIS");
leg30->AddEntry(hPionCandidatePhiAfterPCMC,"Reco Other");
leg30->AddEntry(hPionCandidatePhiAfterPCEXT,"EXT");
leg30->AddEntry(hPionCandidatePhiAfterPCDirt,"Dirt");
leg30->Draw();





TCanvas *c31 = new TCanvas("c31", "Stacked New Vertex Activity");
c31->SetTicks();
c31->SetFillColor(kWhite);

hNVertexActivityData->SetLineColor(kBlack);
hNVertexActivityData->SetLineWidth(2);
hNVertexActivityData->Rebin(VARebin);
hNVertexActivityData->SetMarkerStyle(20);
hNVertexActivityCCCoh->SetFillColor(kBlue);
hNVertexActivityCCCoh->SetLineColor(kBlack);
hNVertexActivityCCCoh->Scale(Run1ScaleFactorMC);
hNVertexActivityCCCoh->Rebin(VARebin);
hNVertexActivityCCQE->SetFillColor(kViolet);
hNVertexActivityCCQE->SetLineColor(kBlack);
hNVertexActivityCCQE->Scale(Run1ScaleFactorMC);
hNVertexActivityCCQE->Rebin(VARebin);
hNVertexActivityCCRes->SetFillColor(kRed);
hNVertexActivityCCRes->SetLineColor(kBlack);
hNVertexActivityCCRes->Scale(Run1ScaleFactorMC);
hNVertexActivityCCRes->Rebin(VARebin);
hNVertexActivityNCRes->SetFillColor(kGreen);
hNVertexActivityNCRes->SetLineColor(kBlack);
hNVertexActivityNCRes->Scale(Run1ScaleFactorMC);
hNVertexActivityNCRes->Rebin(VARebin);
hNVertexActivityCCDIS->SetFillColor(kCyan-8);
hNVertexActivityCCDIS->SetLineColor(kBlack);
hNVertexActivityCCDIS->Scale(Run1ScaleFactorMC);
hNVertexActivityCCDIS->Rebin(VARebin);
hNVertexActivityNCDIS->SetFillColor(kGray);
hNVertexActivityNCDIS->SetLineColor(kBlack);
hNVertexActivityNCDIS->Scale(Run1ScaleFactorMC);
hNVertexActivityNCDIS->Rebin(VARebin);
hNVertexActivityCCCohEn->SetFillColor(kBlue);
hNVertexActivityCCCohEn->SetLineColor(kBlack);
hNVertexActivityCCCohEn->Scale(EnhancedCCCohScaleFactor*Run1ScaleFactorMC);
hNVertexActivityCCCohEn->Rebin(VARebin);
hNVertexActivityMC->SetFillColor(kOrange);
hNVertexActivityMC->SetLineColor(kBlack);
hNVertexActivityMC->Scale(Run1ScaleFactorMC);
hNVertexActivityMC->Rebin(VARebin);
hNVertexActivityMC->Add(hNVertexActivityCCCoh, -1);
hNVertexActivityMC->Add(hNVertexActivityCCQE, -1);
hNVertexActivityMC->Add(hNVertexActivityCCRes, -1);
hNVertexActivityMC->Add(hNVertexActivityNCRes, -1);
hNVertexActivityMC->Add(hNVertexActivityCCDIS, -1);
hNVertexActivityMC->Add(hNVertexActivityNCDIS, -1);
hNVertexActivityEXT->SetFillColor(kGray+4);
hNVertexActivityEXT->SetLineColor(kBlack);
hNVertexActivityEXT->Scale(Run1ScaleFactorEXT);
hNVertexActivityEXT->Rebin(VARebin);
hNVertexActivityDirt->SetFillColor(kOrange+5);
hNVertexActivityDirt->SetLineColor(kBlack);
hNVertexActivityDirt->Scale(Run1ScaleFactorDirt);
hNVertexActivityDirt->Rebin(VARebin);
hNVertexActivityStacked->Add(hNVertexActivityMC);
hNVertexActivityStacked->Add(hNVertexActivityEXT);
hNVertexActivityStacked->Add(hNVertexActivityDirt);
hNVertexActivityStacked->Add(hNVertexActivityCCQE);
hNVertexActivityStacked->Add(hNVertexActivityCCRes);
hNVertexActivityStacked->Add(hNVertexActivityNCRes);
hNVertexActivityStacked->Add(hNVertexActivityCCDIS);
hNVertexActivityStacked->Add(hNVertexActivityNCDIS);
hNVertexActivityStacked->Add(hNVertexActivityCCCohEn);

hNVertexActivityData->Draw("E1");
hNVertexActivityStacked->Draw("HISTsame");
hNVertexActivityData->GetXaxis()->SetTitle("Vertex Activity [ADC]");
hNVertexActivityData->GetXaxis()->CenterTitle();
//hNVertexActivityData->GetXaxis()->SetRangeUser(0, 500);
hNVertexActivityData->GetYaxis()->SetTitle("Number of Events");
hNVertexActivityData->GetYaxis()->CenterTitle();

hNVertexActivityData->Draw("E1same");
c31->Modified();

// ### Defining the legend for the plot ###
TLegend *leg31 = new TLegend();
leg31 = new TLegend(0.58,0.65,1.00,1.00);
leg31->SetTextSize(0.04);
leg31->SetTextAlign(12);
leg31->SetFillColor(kWhite);
leg31->SetLineColor(kWhite);
leg31->SetShadowColor(kWhite);
leg31->SetHeader("Channel");
leg31->AddEntry(hNVertexActivityData,"Data");
leg31->AddEntry(hNVertexActivityCCCoh,"Reco CC-Coh");
leg31->AddEntry(hNVertexActivityCCQE,"Reco CC-QE");
leg31->AddEntry(hNVertexActivityCCRes,"Reco CC-Res");
leg31->AddEntry(hNVertexActivityNCRes,"Reco NC-Res");
leg31->AddEntry(hNVertexActivityCCDIS,"Reco CC-DIS");
leg31->AddEntry(hNVertexActivityNCDIS,"Reco NC-DIS");
leg31->AddEntry(hNVertexActivityMC,"Reco Other");
leg31->AddEntry(hNVertexActivityEXT,"EXT");
leg31->AddEntry(hNVertexActivityDirt,"Dirt");
leg31->Draw();
}
