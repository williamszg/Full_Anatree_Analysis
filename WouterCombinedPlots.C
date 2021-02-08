#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f = new TFile("Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("EventNtuple.root"); // <-- File for Event Tree
TFile *f3 = new TFile("CCRES_Daughter_Information.root"); // <-- File for CCRes Daughters Tree
TFile *f4 = new TFile("Other_Daughter_Information.root"); // <-- File for Other (aka NOT CCCoh) Daughters Tree
TFile *f5 = new TFile("CCQE_Daughter_Information.root"); // <-- File for CCQE Daughters Tree
TFile *f6 = new TFile("NC_Daughter_Information.root"); // <-- File for NC Daughters Tree
TFile *f7 = new TFile("CCDIS_Daughter_Information.root"); // <-- File for CCDIS Daughters Tree
TFile *f8 = new TFile("CCCoh_Daughter_Information.root"); // <-- File for CCCoh Daughters Tree for Purity Plot!
TFile *f9 = new TFile("CCInc_Daughter_Information.root"); // <-- File for CCInclusive Daughters Tree


TH1D *hMuonMuonChi2 = (TH1D*)f->Get("hMuonMuonChi2");
TH1D *hPionMuonChi2 = (TH1D*)f->Get("hPionMuonChi2");
TH1D *hProtonMuonChi2 = (TH1D*)f->Get("hProtonMuonChi2");

hMuonMuonChi2->Sumw2();
hPionMuonChi2->Sumw2();
hProtonMuonChi2->Sumw2();

TH1D *hMuonProtonChi2 = (TH1D*)f->Get("hMuonProtonChi2");
TH1D *hPionProtonChi2 = (TH1D*)f->Get("hPionProtonChi2");
TH1D *hProtonProtonChi2 = (TH1D*)f->Get("hProtonProtonChi2");

hMuonProtonChi2->Sumw2();
hPionProtonChi2->Sumw2();
hProtonProtonChi2->Sumw2();

TH1D *hMuonPandoraTrackLength = (TH1D*)f->Get("hMuonPandoraTrackLength");
TH1D *hPionPandoraTrackLength = (TH1D*)f->Get("hPionPandoraTrackLength");
TH1D *hProtonPandoraTrackLength = (TH1D*)f->Get("hProtonPandoraTrackLength");

hMuonPandoraTrackLength->Sumw2();
hPionPandoraTrackLength->Sumw2();
hProtonPandoraTrackLength->Sumw2();

TH2D *hMuonTracksMuonChi2VsProtonChi2 = (TH2D*)f9->Get("hMuonTracksMuonChi2VsProtonChi2");
TH2D *hPionTracksMuonChi2VsProtonChi2 = (TH2D*)f9->Get("hPionTracksMuonChi2VsProtonChi2");
TH2D *hProtonTracksMuonChi2VsProtonChi2 = (TH2D*)f9->Get("hProtonTracksMuonChi2VsProtonChi2");

TH1D *hMuonRatioChi2 = (TH1D*)f->Get("hMuonRatioChi2");
TH1D *hPionRatioChi2 = (TH1D*)f->Get("hPionRatioChi2");
TH1D *hProtonRatioChi2 = (TH1D*)f->Get("hProtonRatioChi2");

hMuonRatioChi2->Sumw2();
hPionRatioChi2->Sumw2();
hProtonRatioChi2->Sumw2();

TH1D *hMuonTrueTrackLength = (TH1D*)f9->Get("hMuonTrueTrackLength");
TH1D *hPionTrueTrackLength = (TH1D*)f9->Get("hPionTrueTrackLength");
TH1D *hProtonTrueTrackLength = (TH1D*)f9->Get("hProtonTrueTrackLength");

hMuonTrueTrackLength->Sumw2();
hPionTrueTrackLength->Sumw2();
hProtonTrueTrackLength->Sumw2();

TH2D *hMuonPandoraVsTrueTrackLength = (TH2D*)f9->Get("hMuonPandoraVsTrueTrackLength");
TH2D *hPionPandoraVsTrueTrackLength = (TH2D*)f9->Get("hPionPandoraVsTrueTrackLength");
TH2D *hProtonPandoraVsTrueTrackLength = (TH2D*)f9->Get("hProtonPandoraVsTrueTrackLength");

TH1D *hMuonTrackScore = (TH1D*)f->Get("hMuonTrackScore");
TH1D *hPionTrackScore = (TH1D*)f->Get("hPionTrackScore");
TH1D *hProtonTrackScore = (TH1D*)f->Get("hProtonTrackScore");

hMuonTrackScore->Sumw2();
hPionTrackScore->Sumw2();
hProtonTrackScore->Sumw2();

TH1D *hMuonVtxDistance = (TH1D*)f->Get("hMuonVtxDistance");
TH1D *hPionVtxDistance = (TH1D*)f->Get("hPionVtxDistance");
TH1D *hProtonVtxDistance = (TH1D*)f->Get("hProtonVtxDistance");

hMuonVtxDistance->Sumw2();
hPionVtxDistance->Sumw2();
hProtonVtxDistance->Sumw2();

TH1D *hMatchedNuEnergy = (TH1D*)f->Get("hMatchedNuEnergy");
TH1D *hPassedNuEnergy = (TH1D*)f->Get("hPassedNuEnergy");
TH1D *hAfterNuEnergy = (TH1D*)f->Get("hAfterNuEnergy");
TH1D *hAfterNuEnergy2 = (TH1D*)f->Get("hAfterNuEnergy2");

hMatchedNuEnergy->Sumw2();
hPassedNuEnergy->Sumw2();
hAfterNuEnergy->Sumw2();
hAfterNuEnergy2->Sumw2();

TH1D *hNuVtxDiffX = (TH1D*)f2->Get("hNuVtxDiffX");
TH1D *hNuVtxDiffY = (TH1D*)f2->Get("hNuVtxDiffY");
TH1D *hNuVtxDiffZ = (TH1D*)f2->Get("hNuVtxDiffZ");

hNuVtxDiffX->Sumw2();
hNuVtxDiffY->Sumw2();
hNuVtxDiffZ->Sumw2();

TH1D *hNuVtxDiffSCEX = (TH1D*)f2->Get("hNuVtxDiffSCEX");
TH1D *hNuVtxDiffSCEY = (TH1D*)f2->Get("hNuVtxDiffSCEY");
TH1D *hNuVtxDiffSCEZ = (TH1D*)f2->Get("hNuVtxDiffSCEZ");

hNuVtxDiffSCEX->Sumw2();
hNuVtxDiffSCEY->Sumw2();
hNuVtxDiffSCEZ->Sumw2();

TH1D *hCutByCutMuonCandidate = (TH1D*)f->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivide = (TH1D*)f->Get("hCutByCutMuonCandidateDivide");

hCutByCutMuonCandidate->Sumw2();
hCutByCutMuonCandidateDivide->Sumw2();

TH1D *hFurtherEventSelection = (TH1D*)f->Get("hFurtherEventSelection");
TH1D *hFurtherEventSelectionDivide = (TH1D*)f->Get("hFurtherEventSelectionDivide");

hFurtherEventSelection->Sumw2();
hFurtherEventSelectionDivide->Sumw2();

TH1D *hTrueConeAngle = (TH1D*)f->Get("hTrueConeAngle");
TH1D *hRecoConeAngle = (TH1D*)f->Get("hRecoConeAngle");

hTrueConeAngle->Sumw2();
hRecoConeAngle->Sumw2();

TH1D *hTrueDoCA = (TH1D*)f->Get("hTrueDoCA");
TH1D *hRecoDoCA = (TH1D*)f->Get("hRecoDoCA");

hTrueDoCA->Sumw2();
hRecoDoCA->Sumw2();

TH1D *hRecoVA0 = (TH1D*)f->Get("hRecoVA0");
TH1D *hRecoVA1 = (TH1D*)f->Get("hRecoVA1");
TH1D *hRecoVA2 = (TH1D*)f->Get("hRecoVA2");
TH1D *hRecoVAAll = (TH1D*)f->Get("hRecoVAAll");

hRecoVA0->Sumw2();
hRecoVA1->Sumw2();
hRecoVA2->Sumw2();
hRecoVAAll->Sumw2();

TH1D *hTrueConeAngleCCRes = (TH1D*)f3->Get("hTrueConeAngle");
TH1D *hRecoConeAngleCCRes = (TH1D*)f3->Get("hRecoConeAngle");
TH1D *hTrueConeAngleCCDIS = (TH1D*)f7->Get("hTrueConeAngle");
TH1D *hRecoConeAngleCCDIS = (TH1D*)f7->Get("hRecoConeAngle");
TH1D *hTrueConeAngleOther = (TH1D*)f4->Get("hTrueConeAngle");
TH1D *hRecoConeAngleOther = (TH1D*)f4->Get("hRecoConeAngle");
TH1D *hTrueConeAngleCCQE = (TH1D*)f5->Get("hTrueConeAngle");
TH1D *hRecoConeAngleCCQE = (TH1D*)f5->Get("hRecoConeAngle");
TH1D *hTrueConeAngleNC = (TH1D*)f6->Get("hTrueConeAngle");
TH1D *hRecoConeAngleNC = (TH1D*)f6->Get("hRecoConeAngle");
TH1D *hTrueConeAngleCCCoh = (TH1D*)f8->Get("hTrueConeAngle");
TH1D *hRecoConeAngleCCCoh = (TH1D*)f8->Get("hRecoConeAngle");

hTrueConeAngleCCRes->Sumw2();
hRecoConeAngleCCRes->Sumw2();
hTrueConeAngleCCDIS->Sumw2();
hRecoConeAngleCCDIS->Sumw2();
hTrueConeAngleOther->Sumw2();
hRecoConeAngleOther->Sumw2();
hTrueConeAngleCCQE->Sumw2();
hRecoConeAngleCCQE->Sumw2();
hTrueConeAngleNC->Sumw2();
hRecoConeAngleNC->Sumw2();
hTrueConeAngleCCCoh->Sumw2();
hRecoConeAngleCCCoh->Sumw2();

TH1D *hTrueDoCACCRes = (TH1D*)f3->Get("hTrueDoCA");
TH1D *hRecoDoCACCRes = (TH1D*)f3->Get("hRecoDoCA");
TH1D *hTrueDoCACCDIS = (TH1D*)f7->Get("hTrueDoCA");
TH1D *hRecoDoCACCDIS = (TH1D*)f7->Get("hRecoDoCA");
TH1D *hTrueDoCAOther = (TH1D*)f4->Get("hTrueDoCA");
TH1D *hRecoDoCAOther = (TH1D*)f4->Get("hRecoDoCA");
TH1D *hTrueDoCACCQE = (TH1D*)f5->Get("hTrueDoCA");
TH1D *hRecoDoCACCQE = (TH1D*)f5->Get("hRecoDoCA");
TH1D *hTrueDoCANC = (TH1D*)f6->Get("hTrueDoCA");
TH1D *hRecoDoCANC = (TH1D*)f6->Get("hRecoDoCA");
TH1D *hTrueDoCACCCoh = (TH1D*)f8->Get("hTrueDoCA");
TH1D *hRecoDoCACCCoh = (TH1D*)f8->Get("hRecoDoCA");
TH1D *hRecoDoCACosmic = (TH1D*)f->Get("hRecoDoCACosmic");

hTrueDoCACCRes->Sumw2();
hRecoDoCACCRes->Sumw2();
hTrueDoCACCDIS->Sumw2();
hRecoDoCACCDIS->Sumw2();
hTrueDoCAOther->Sumw2();
hRecoDoCAOther->Sumw2();
hTrueDoCACCQE->Sumw2();
hRecoDoCACCQE->Sumw2();
hTrueDoCANC->Sumw2();
hRecoDoCANC->Sumw2();
hTrueDoCACCCoh->Sumw2();
hRecoDoCACCCoh->Sumw2();
hRecoDoCACosmic->Sumw2();

TH1D *hRecoVA2CCRes = (TH1D*)f3->Get("hRecoVA2");
TH1D *hRecoVA2CCDIS = (TH1D*)f7->Get("hRecoVA2");
TH1D *hRecoVA2Other = (TH1D*)f4->Get("hRecoVA2");
TH1D *hRecoVA2CCQE = (TH1D*)f5->Get("hRecoVA2");
TH1D *hRecoVA2NC = (TH1D*)f6->Get("hRecoVA2");
TH1D *hRecoVA2CCCoh = (TH1D*)f8->Get("hRecoVA2");

hRecoVA2CCRes->Sumw2();
hRecoVA2CCDIS->Sumw2();
hRecoVA2Other->Sumw2();
hRecoVA2CCQE->Sumw2();
hRecoVA2NC->Sumw2();
hRecoVA2CCCoh->Sumw2();

TH1D *hCutByCutMuonCandidateCCQE = (TH1D*)f5->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideCCQE = (TH1D*)f5->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateCCRes = (TH1D*)f3->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideCCRes = (TH1D*)f3->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateCCDIS = (TH1D*)f7->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideCCDIS = (TH1D*)f7->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateOther = (TH1D*)f4->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideOther = (TH1D*)f4->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateNC = (TH1D*)f6->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideNC = (TH1D*)f6->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateCCCoh = (TH1D*)f8->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideCCCoh = (TH1D*)f8->Get("hCutByCutMuonCandidateDivide");
TH1D *hCutByCutMuonCandidateCCInc = (TH1D*)f9->Get("hCutByCutMuonCandidate");
TH1D *hCutByCutMuonCandidateDivideCCInc = (TH1D*)f9->Get("hCutByCutMuonCandidateDivide");

hCutByCutMuonCandidateCCQE->Sumw2();
hCutByCutMuonCandidateDivideCCQE->Sumw2();
hCutByCutMuonCandidateCCRes->Sumw2();
hCutByCutMuonCandidateDivideCCRes->Sumw2();
hCutByCutMuonCandidateCCDIS->Sumw2();
hCutByCutMuonCandidateDivideCCDIS->Sumw2();
hCutByCutMuonCandidateOther->Sumw2();
hCutByCutMuonCandidateDivideOther->Sumw2();
hCutByCutMuonCandidateNC->Sumw2();
hCutByCutMuonCandidateDivideNC->Sumw2();
hCutByCutMuonCandidateCCCoh->Sumw2();
hCutByCutMuonCandidateDivideCCCoh->Sumw2();
hCutByCutMuonCandidateCCInc->Sumw2();
hCutByCutMuonCandidateDivideCCInc->Sumw2();

TH1D *hTrueOpeningAngleCCRes = (TH1D*)f3->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleCCRes = (TH1D*)f3->Get("hRecoOpeningAngle");
TH1D *hTrueOpeningAngleCCDIS = (TH1D*)f7->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleCCDIS = (TH1D*)f7->Get("hRecoOpeningAngle");
TH1D *hTrueOpeningAngleCCInc = (TH1D*)f9->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleCCInc = (TH1D*)f9->Get("hRecoOpeningAngle");
TH1D *hTrueOpeningAngleCCQE = (TH1D*)f5->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleCCQE = (TH1D*)f5->Get("hRecoOpeningAngle");
TH1D *hTrueOpeningAngleCCCoh = (TH1D*)f->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleCCCoh = (TH1D*)f->Get("hRecoOpeningAngle");
TH1D *hTrueOpeningAngleOther = (TH1D*)f4->Get("hTrueOpeningAngle");
TH1D *hRecoOpeningAngleOther = (TH1D*)f4->Get("hRecoOpeningAngle");

hTrueOpeningAngleCCRes->Sumw2();
hRecoOpeningAngleCCRes->Sumw2();
hTrueOpeningAngleCCDIS->Sumw2();
hRecoOpeningAngleCCDIS->Sumw2();
hTrueOpeningAngleCCInc->Sumw2();
hRecoOpeningAngleCCInc->Sumw2();
hTrueOpeningAngleCCQE->Sumw2();
hRecoOpeningAngleCCQE->Sumw2();
hTrueOpeningAngleCCCoh->Sumw2();
hRecoOpeningAngleCCCoh->Sumw2();
hTrueOpeningAngleOther->Sumw2();
hRecoOpeningAngleOther->Sumw2();

TH1D *hCutByCutMuonCandidate2 = (TH1D*)f->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2 = (TH1D*)f->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2CCQE = (TH1D*)f5->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2CCQE = (TH1D*)f5->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2Other = (TH1D*)f4->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2Other = (TH1D*)f4->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2CCCoh = (TH1D*)f8->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidate2CCRes = (TH1D*)f3->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2CCRes = (TH1D*)f3->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2CCDIS = (TH1D*)f7->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2CCDIS = (TH1D*)f7->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2CCInc = (TH1D*)f9->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2CCInc = (TH1D*)f9->Get("hCutByCutMuonCandidateDivide2");
TH1D *hCutByCutMuonCandidate2NC = (TH1D*)f6->Get("hCutByCutMuonCandidate2");
TH1D *hCutByCutMuonCandidateDivide2NC = (TH1D*)f6->Get("hCutByCutMuonCandidateDivide2");

hCutByCutMuonCandidate2->Sumw2();
hCutByCutMuonCandidateDivide2->Sumw2();
hCutByCutMuonCandidate2CCQE->Sumw2();
hCutByCutMuonCandidateDivide2CCQE->Sumw2();
hCutByCutMuonCandidate2Other->Sumw2();
hCutByCutMuonCandidateDivide2Other->Sumw2();
hCutByCutMuonCandidate2CCCoh->Sumw2();
hCutByCutMuonCandidate2CCRes->Sumw2();
hCutByCutMuonCandidateDivide2CCRes->Sumw2();
hCutByCutMuonCandidate2CCDIS->Sumw2();
hCutByCutMuonCandidateDivide2CCDIS->Sumw2();
hCutByCutMuonCandidate2CCInc->Sumw2();
hCutByCutMuonCandidateDivide2CCInc->Sumw2();
hCutByCutMuonCandidate2NC->Sumw2();
hCutByCutMuonCandidateDivide2NC->Sumw2();

TH1D *hNTracksInBubble5 = (TH1D*)f->Get("hNTracksInBubble5");
TH1D *hNTracksInBubble = (TH1D*)f->Get("hNTracksInBubble");
TH1D *hNTracksInBubble15 = (TH1D*)f->Get("hNTracksInBubble15");
TH1D *hNTracksInBubbleOther5 = (TH1D*)f4->Get("hNTracksInBubble5");
TH1D *hNTracksInBubbleOther = (TH1D*)f4->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleOther15 = (TH1D*)f4->Get("hNTracksInBubble15");

hNTracksInBubble5->Sumw2();
hNTracksInBubble->Sumw2();
hNTracksInBubble15->Sumw2();
hNTracksInBubbleOther5->Sumw2();
hNTracksInBubbleOther->Sumw2();
hNTracksInBubbleOther15->Sumw2();

TH1D *hRecoVA2Tracks = (TH1D*)f->Get("hRecoVA2Tracks");
TH1D *hRecoVA2TracksOther = (TH1D*)f4->Get("hRecoVA2Tracks");

hRecoVA2Tracks->Sumw2();
hRecoVA2TracksOther->Sumw2();

TH1D *hRecoVA2Minus = (TH1D*)f->Get("hRecoVA2Minus");
TH1D *hRecoVA2MinusOther = (TH1D*)f4->Get("hRecoVA2Minus");

hRecoVA2Minus->Sumw2();
hRecoVA2MinusOther->Sumw2();

TH1D *hT = (TH1D*)f->Get("hT");
TH1D *hTCCQE = (TH1D*)f5->Get("hT");
TH1D *hTCCRes = (TH1D*)f3->Get("hT");
TH1D *hTCCDIS = (TH1D*)f7->Get("hT");
TH1D *hTCCInc = (TH1D*)f9->Get("hT");
TH1D *hTNC = (TH1D*)f6->Get("hT");
TH1D *hTCCCoh = (TH1D*)f8->Get("hT");
TH1D *hTOther = (TH1D*)f4->Get("hT");

hT->Sumw2();
hTCCQE->Sumw2();
hTCCRes->Sumw2();
hTCCDIS->Sumw2();
hTCCInc->Sumw2();
hTNC->Sumw2();
hTCCCoh->Sumw2();
hTOther->Sumw2();

TH1D *hT2_5 = (TH1D*)f->Get("hT2_5");
TH1D *hT2_5Other = (TH1D*)f4->Get("hT2_5");

hT2_5->Sumw2();
hT2_5Other->Sumw2();

TH1D *hT2 = (TH1D*)f->Get("hT2");
TH1D *hT2Other = (TH1D*)f4->Get("hT2");

hT2->Sumw2();
hT2Other->Sumw2();

TH1D *hT2_15 = (TH1D*)f->Get("hT2_15");
TH1D *hT2_15Other = (TH1D*)f4->Get("hT2_15");

hT2_15->Sumw2();
hT2_15Other->Sumw2();

TH1D *hNTracksInBubbleCCCoh = (TH1D*)f8->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleCCQE = (TH1D*)f5->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleCCRes = (TH1D*)f3->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleCCDIS = (TH1D*)f7->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleCCInc = (TH1D*)f9->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleNC = (TH1D*)f6->Get("hNTracksInBubble");

hNTracksInBubbleCCCoh->Sumw2();
hNTracksInBubbleCCQE->Sumw2();
hNTracksInBubbleCCRes->Sumw2();
hNTracksInBubbleCCDIS->Sumw2();
hNTracksInBubbleCCInc->Sumw2();
hNTracksInBubbleNC->Sumw2();

TH1D *hMuonCandidateMuonChi2After = (TH1D*)f->Get("hMuonCandidateMuonChi2After");
TH1D *hMuonCandidateMuonChi2AfterOther = (TH1D*)f4->Get("hMuonCandidateMuonChi2After");

hMuonCandidateMuonChi2After->Sumw2();
hMuonCandidateMuonChi2AfterOther->Sumw2();

TH1D *hMuonCandidateProtonChi2After = (TH1D*)f->Get("hMuonCandidateProtonChi2After");
TH1D *hMuonCandidateProtonChi2AfterOther = (TH1D*)f4->Get("hMuonCandidateProtonChi2After");

hMuonCandidateProtonChi2After->Sumw2();
hMuonCandidateProtonChi2AfterOther->Sumw2();

TH1D *hPionCandidateMuonChi2After = (TH1D*)f->Get("hPionCandidateMuonChi2After");
TH1D *hPionCandidateMuonChi2AfterOther = (TH1D*)f4->Get("hPionCandidateMuonChi2After");

hPionCandidateMuonChi2After->Sumw2();
hPionCandidateMuonChi2AfterOther->Sumw2();

TH1D *hPionCandidateProtonChi2After = (TH1D*)f->Get("hPionCandidateProtonChi2After");
TH1D *hPionCandidateProtonChi2AfterOther = (TH1D*)f4->Get("hPionCandidateProtonChi2After");

hPionCandidateProtonChi2After->Sumw2();
hPionCandidateProtonChi2AfterOther->Sumw2();

TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2After = (TH2D*)f->Get("hMuonCandidateTracksMuonChi2VsProtonChi2After");
TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther = (TH2D*)f4->Get("hMuonCandidateTracksMuonChi2VsProtonChi2After");

TH2D *hPionCandidateTracksMuonChi2VsProtonChi2After = (TH2D*)f->Get("hPionCandidateTracksMuonChi2VsProtonChi2After");
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2AfterOther = (TH2D*)f4->Get("hPionCandidateTracksMuonChi2VsProtonChi2After");

TH1D *hMuonCandidateTrueTrackLengthAfter = (TH1D*)f->Get("hMuonCandidateTrueTrackLengthAfter");
TH1D *hMuonCandidateTrueTrackLengthAfterOther = (TH1D*)f4->Get("hMuonCandidateTrueTrackLengthAfter");

hMuonCandidateTrueTrackLengthAfter->Sumw2();
hMuonCandidateTrueTrackLengthAfterOther->Sumw2();

TH1D *hMuonCandidateRecoTrackLengthAfter = (TH1D*)f->Get("hMuonCandidateRecoTrackLengthAfter");
TH1D *hMuonCandidateRecoTrackLengthAfterOther = (TH1D*)f4->Get("hMuonCandidateRecoTrackLengthAfter");

hMuonCandidateRecoTrackLengthAfter->Sumw2();
hMuonCandidateRecoTrackLengthAfterOther->Sumw2();

TH1D *hPionCandidateTrueTrackLengthAfter = (TH1D*)f->Get("hPionCandidateTrueTrackLengthAfter");
TH1D *hPionCandidateTrueTrackLengthAfterOther = (TH1D*)f4->Get("hPionCandidateTrueTrackLengthAfter");

hPionCandidateTrueTrackLengthAfter->Sumw2();
hPionCandidateTrueTrackLengthAfterOther->Sumw2();

TH1D *hPionCandidateRecoTrackLengthAfter = (TH1D*)f->Get("hPionCandidateRecoTrackLengthAfter");
TH1D *hPionCandidateRecoTrackLengthAfterOther = (TH1D*)f4->Get("hPionCandidateRecoTrackLengthAfter");

hPionCandidateRecoTrackLengthAfter->Sumw2();
hPionCandidateRecoTrackLengthAfterOther->Sumw2();

TH1D *hMuonCandidateDeltaLengthAfter = (TH1D*)f->Get("hMuonCandidateDeltaLengthAfter");
TH1D *hMuonCandidateDeltaLengthAfterOther = (TH1D*)f4->Get("hMuonCandidateDeltaLengthAfter");

hMuonCandidateDeltaLengthAfter->Sumw2();
hMuonCandidateDeltaLengthAfterOther->Sumw2();

TH1D *hPionCandidateDeltaLengthAfter = (TH1D*)f->Get("hPionCandidateDeltaLengthAfter");
TH1D *hPionCandidateDeltaLengthAfterOther = (TH1D*)f4->Get("hPionCandidateDeltaLengthAfter");

hPionCandidateDeltaLengthAfter->Sumw2();
hPionCandidateDeltaLengthAfterOther->Sumw2();

TH1D *hMuonCandidateTrueTrackLengthAfter2 = (TH1D*)f->Get("hMuonCandidateTrueTrackLengthAfter2");
TH1D *hMuonCandidateTrueTrackLengthAfter2Other = (TH1D*)f4->Get("hMuonCandidateTrueTrackLengthAfter2");

hMuonCandidateTrueTrackLengthAfter2->Sumw2();
hMuonCandidateTrueTrackLengthAfter2Other->Sumw2();

TH1D *hMuonCandidateRecoTrackLengthAfter2 = (TH1D*)f->Get("hMuonCandidateRecoTrackLengthAfter2");
TH1D *hMuonCandidateRecoTrackLengthAfter2Other = (TH1D*)f4->Get("hMuonCandidateRecoTrackLengthAfter2");

hMuonCandidateRecoTrackLengthAfter2->Sumw2();
hMuonCandidateRecoTrackLengthAfter2Other->Sumw2();

TH1D *hPionCandidateTrueTrackLengthAfter2 = (TH1D*)f->Get("hPionCandidateTrueTrackLengthAfter2");
TH1D *hPionCandidateTrueTrackLengthAfter2Other = (TH1D*)f4->Get("hPionCandidateTrueTrackLengthAfter2");

hPionCandidateTrueTrackLengthAfter2->Sumw2();
hPionCandidateTrueTrackLengthAfter2Other->Sumw2();

TH1D *hPionCandidateRecoTrackLengthAfter2 = (TH1D*)f->Get("hPionCandidateRecoTrackLengthAfter2");
TH1D *hPionCandidateRecoTrackLengthAfter2Other = (TH1D*)f4->Get("hPionCandidateRecoTrackLengthAfter2");

hPionCandidateRecoTrackLengthAfter2->Sumw2();
hPionCandidateRecoTrackLengthAfter2Other->Sumw2();

TH1D *hMuonCandidateDeltaLengthAfter2 = (TH1D*)f->Get("hMuonCandidateDeltaLengthAfter2");
TH1D *hMuonCandidateDeltaLengthAfter2Other = (TH1D*)f4->Get("hMuonCandidateDeltaLengthAfter2");

hMuonCandidateDeltaLengthAfter2->Sumw2();
hMuonCandidateDeltaLengthAfter2Other->Sumw2();

TH1D *hPionCandidateDeltaLengthAfter2 = (TH1D*)f->Get("hPionCandidateDeltaLengthAfter2");
TH1D *hPionCandidateDeltaLengthAfter2Other = (TH1D*)f4->Get("hPionCandidateDeltaLengthAfter2");

hPionCandidateDeltaLengthAfter2->Sumw2();
hPionCandidateDeltaLengthAfter2Other->Sumw2();

TH2D *hMuonCandidateRecoLengthVsMuonChi2 = (TH2D*)f->Get("hMuonCandidateRecoLengthVsMuonChi2");
TH2D *hMuonCandidateRecoLengthVsMuonChi2Other = (TH2D*)f4->Get("hMuonCandidateRecoLengthVsMuonChi2");

TH2D *hMuonCandidateRecoLengthVsProtonChi2 = (TH2D*)f->Get("hMuonCandidateRecoLengthVsProtonChi2");
TH2D *hMuonCandidateRecoLengthVsProtonChi2Other = (TH2D*)f4->Get("hMuonCandidateRecoLengthVsProtonChi2");

TH2D *hPionCandidateRecoLengthVsMuonChi2 = (TH2D*)f->Get("hPionCandidateRecoLengthVsMuonChi2");
TH2D *hPionCandidateRecoLengthVsMuonChi2Other = (TH2D*)f4->Get("hPionCandidateRecoLengthVsMuonChi2");

TH2D *hPionCandidateRecoLengthVsProtonChi2 = (TH2D*)f->Get("hPionCandidateRecoLengthVsProtonChi2");
TH2D *hPionCandidateRecoLengthVsProtonChi2Other = (TH2D*)f4->Get("hPionCandidateRecoLengthVsProtonChi2");

TH1D *hTrueConeAngleAfter = (TH1D*)f->Get("hTrueConeAngleAfter");
TH1D *hTrueConeAngleAfterCCCoh = (TH1D*)f8->Get("hTrueConeAngleAfter");
TH1D *hTrueConeAngleAfterCCQE = (TH1D*)f5->Get("hTrueConeAngleAfter");
TH1D *hTrueConeAngleAfterCCRes = (TH1D*)f3->Get("hTrueConeAngleAfter");
TH1D *hTrueConeAngleAfterOther = (TH1D*)f4->Get("hTrueConeAngleAfter");

TH1D *hRecoConeAngleAfter = (TH1D*)f->Get("hRecoConeAngleAfter");
TH1D *hRecoConeAngleAfterCCCoh = (TH1D*)f8->Get("hRecoConeAngleAfter");
TH1D *hRecoConeAngleAfterCCQE = (TH1D*)f5->Get("hRecoConeAngleAfter");
TH1D *hRecoConeAngleAfterCCRes = (TH1D*)f3->Get("hRecoConeAngleAfter");
TH1D *hRecoConeAngleAfterOther = (TH1D*)f4->Get("hRecoConeAngleAfter");

TH1D *hTrueOpeningAngleAfter = (TH1D*)f->Get("hTrueOpeningAngleAfter");
TH1D *hTrueOpeningAngleAfterCCCoh = (TH1D*)f8->Get("hTrueOpeningAngleAfter");
TH1D *hTrueOpeningAngleAfterCCQE = (TH1D*)f5->Get("hTrueOpeningAngleAfter");
TH1D *hTrueOpeningAngleAfterCCRes = (TH1D*)f3->Get("hTrueOpeningAngleAfter");
TH1D *hTrueOpeningAngleAfterOther = (TH1D*)f4->Get("hTrueOpeningAngleAfter");

TH1D *hRecoOpeningAngleAfter = (TH1D*)f->Get("hRecoOpeningAngleAfter");
TH1D *hRecoOpeningAngleAfterCCCoh = (TH1D*)f8->Get("hRecoOpeningAngleAfter");
TH1D *hRecoOpeningAngleAfterCCQE = (TH1D*)f5->Get("hRecoOpeningAngleAfter");
TH1D *hRecoOpeningAngleAfterCCRes = (TH1D*)f3->Get("hRecoOpeningAngleAfter");
TH1D *hRecoOpeningAngleAfterOther = (TH1D*)f4->Get("hRecoOpeningAngleAfter");

TH1D *hMuonCandidateAfterMomentumTrue = (TH1D*)f->Get("hMuonCandidateAfterMomentumTrue");
TH1D *hMuonCandidateAfterMomentumTrueCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterMomentumTrue");
TH1D *hMuonCandidateAfterMomentumTrueCCQE = (TH1D*)f5->Get("hMuonCandidateAfterMomentumTrue");
TH1D *hMuonCandidateAfterMomentumTrueCCRes = (TH1D*)f3->Get("hMuonCandidateAfterMomentumTrue");
TH1D *hMuonCandidateAfterMomentumTrueOther = (TH1D*)f4->Get("hMuonCandidateAfterMomentumTrue");

TH1D *hMuonCandidateAfterMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterMomentumReco");
TH1D *hMuonCandidateAfterMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterMomentumReco");
TH1D *hMuonCandidateAfterMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterMomentumReco");
TH1D *hMuonCandidateAfterMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterMomentumReco");
TH1D *hMuonCandidateAfterMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterMomentumReco");

TH1D *hPionCandidateAfterMomentumTrue = (TH1D*)f->Get("hPionCandidateAfterMomentumTrue");
TH1D *hPionCandidateAfterMomentumTrueCCCoh = (TH1D*)f8->Get("hPionCandidateAfterMomentumTrue");
TH1D *hPionCandidateAfterMomentumTrueCCQE = (TH1D*)f5->Get("hPionCandidateAfterMomentumTrue");
TH1D *hPionCandidateAfterMomentumTrueCCRes = (TH1D*)f3->Get("hPionCandidateAfterMomentumTrue");
TH1D *hPionCandidateAfterMomentumTrueOther = (TH1D*)f4->Get("hPionCandidateAfterMomentumTrue");

TH1D *hPionCandidateAfterMomentumReco = (TH1D*)f->Get("hPionCandidateAfterMomentumReco");
TH1D *hPionCandidateAfterMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterMomentumReco");
TH1D *hPionCandidateAfterMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterMomentumReco");
TH1D *hPionCandidateAfterMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterMomentumReco");
TH1D *hPionCandidateAfterMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterMomentumReco");

TH1D *hMuonCandidateAfterContainedMomentumTrue = (TH1D*)f->Get("hMuonCandidateAfterContainedMomentumTrue");
TH1D *hMuonCandidateAfterContainedMomentumTrueCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterContainedMomentumTrue");
TH1D *hMuonCandidateAfterContainedMomentumTrueCCQE = (TH1D*)f5->Get("hMuonCandidateAfterContainedMomentumTrue");
TH1D *hMuonCandidateAfterContainedMomentumTrueCCRes = (TH1D*)f3->Get("hMuonCandidateAfterContainedMomentumTrue");
TH1D *hMuonCandidateAfterContainedMomentumTrueOther = (TH1D*)f4->Get("hMuonCandidateAfterContainedMomentumTrue");

hMuonCandidateAfterContainedMomentumTrue->Sumw2();

TH1D *hMuonCandidateAfterContainedMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterContainedMomentumReco");
TH1D *hMuonCandidateAfterContainedMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterContainedMomentumReco");
TH1D *hMuonCandidateAfterContainedMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterContainedMomentumReco");
TH1D *hMuonCandidateAfterContainedMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterContainedMomentumReco");
TH1D *hMuonCandidateAfterContainedMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterContainedMomentumReco");

hMuonCandidateAfterContainedMomentumReco->Sumw2();

TH1D *hPionCandidateAfterContainedMomentumTrue = (TH1D*)f->Get("hPionCandidateAfterContainedMomentumTrue");
TH1D *hPionCandidateAfterContainedMomentumTrueCCCoh = (TH1D*)f8->Get("hPionCandidateAfterContainedMomentumTrue");
TH1D *hPionCandidateAfterContainedMomentumTrueCCQE = (TH1D*)f5->Get("hPionCandidateAfterContainedMomentumTrue");
TH1D *hPionCandidateAfterContainedMomentumTrueCCRes = (TH1D*)f3->Get("hPionCandidateAfterContainedMomentumTrue");
TH1D *hPionCandidateAfterContainedMomentumTrueOther = (TH1D*)f4->Get("hPionCandidateAfterContainedMomentumTrue");

hPionCandidateAfterContainedMomentumTrue->Sumw2();

TH1D *hPionCandidateAfterContainedMomentumReco = (TH1D*)f->Get("hPionCandidateAfterContainedMomentumReco");
TH1D *hPionCandidateAfterContainedMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterContainedMomentumReco");
TH1D *hPionCandidateAfterContainedMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterContainedMomentumReco");
TH1D *hPionCandidateAfterContainedMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterContainedMomentumReco");
TH1D *hPionCandidateAfterContainedMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterContainedMomentumReco");

hPionCandidateAfterContainedMomentumReco->Sumw2();

TH1D *hMuonCandidateAfterUnContainedMomentumTrue = (TH1D*)f->Get("hMuonCandidateAfterUnContainedMomentumTrue");
TH1D *hMuonCandidateAfterUnContainedMomentumTrueCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterUnContainedMomentumTrue");
TH1D *hMuonCandidateAfterUnContainedMomentumTrueCCQE = (TH1D*)f5->Get("hMuonCandidateAfterUnContainedMomentumTrue");
TH1D *hMuonCandidateAfterUnContainedMomentumTrueCCRes = (TH1D*)f3->Get("hMuonCandidateAfterUnContainedMomentumTrue");
TH1D *hMuonCandidateAfterUnContainedMomentumTrueOther = (TH1D*)f4->Get("hMuonCandidateAfterUnContainedMomentumTrue");

hMuonCandidateAfterUnContainedMomentumTrue->Sumw2();

TH1D *hMuonCandidateAfterUnContainedMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterUnContainedMomentumReco");
TH1D *hMuonCandidateAfterUnContainedMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterUnContainedMomentumReco");
TH1D *hMuonCandidateAfterUnContainedMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterUnContainedMomentumReco");
TH1D *hMuonCandidateAfterUnContainedMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterUnContainedMomentumReco");
TH1D *hMuonCandidateAfterUnContainedMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterUnContainedMomentumReco");

hMuonCandidateAfterUnContainedMomentumReco->Sumw2();

TH1D *hPionCandidateAfterUnContainedMomentumTrue = (TH1D*)f->Get("hPionCandidateAfterUnContainedMomentumTrue");
TH1D *hPionCandidateAfterUnContainedMomentumTrueCCCoh = (TH1D*)f8->Get("hPionCandidateAfterUnContainedMomentumTrue");
TH1D *hPionCandidateAfterUnContainedMomentumTrueCCQE = (TH1D*)f5->Get("hPionCandidateAfterUnContainedMomentumTrue");
TH1D *hPionCandidateAfterUnContainedMomentumTrueCCRes = (TH1D*)f3->Get("hPionCandidateAfterUnContainedMomentumTrue");
TH1D *hPionCandidateAfterUnContainedMomentumTrueOther = (TH1D*)f4->Get("hPionCandidateAfterUnContainedMomentumTrue");

hPionCandidateAfterUnContainedMomentumTrue->Sumw2();

TH1D *hPionCandidateAfterUnContainedMomentumReco = (TH1D*)f->Get("hPionCandidateAfterUnContainedMomentumReco");
TH1D *hPionCandidateAfterUnContainedMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterUnContainedMomentumReco");
TH1D *hPionCandidateAfterUnContainedMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterUnContainedMomentumReco");
TH1D *hPionCandidateAfterUnContainedMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterUnContainedMomentumReco");
TH1D *hPionCandidateAfterUnContainedMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterUnContainedMomentumReco");

hPionCandidateAfterUnContainedMomentumTrue->Sumw2();

TH1D *hMuonCandidateAfterContainedLMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterContainedLMomentumReco");
TH1D *hMuonCandidateAfterContainedLMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterContainedLMomentumReco");
TH1D *hMuonCandidateAfterContainedLMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterContainedLMomentumReco");
TH1D *hMuonCandidateAfterContainedLMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterContainedLMomentumReco");
TH1D *hMuonCandidateAfterContainedLMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterContainedLMomentumReco");

hMuonCandidateAfterContainedLMomentumReco->Sumw2();

TH1D *hPionCandidateAfterContainedLMomentumReco = (TH1D*)f->Get("hPionCandidateAfterContainedLMomentumReco");
TH1D *hPionCandidateAfterContainedLMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterContainedLMomentumReco");
TH1D *hPionCandidateAfterContainedLMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterContainedLMomentumReco");
TH1D *hPionCandidateAfterContainedLMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterContainedLMomentumReco");
TH1D *hPionCandidateAfterContainedLMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterContainedLMomentumReco");

hPionCandidateAfterContainedLMomentumReco->Sumw2();

TH1D *hMuonCandidateAfterUnContainedLMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterUnContainedLMomentumReco");
TH1D *hMuonCandidateAfterUnContainedLMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterUnContainedLMomentumReco");
TH1D *hMuonCandidateAfterUnContainedLMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterUnContainedLMomentumReco");
TH1D *hMuonCandidateAfterUnContainedLMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterUnContainedLMomentumReco");
TH1D *hMuonCandidateAfterUnContainedLMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterUnContainedLMomentumReco");

hMuonCandidateAfterUnContainedLMomentumReco->Sumw2();

TH1D *hPionCandidateAfterUnContainedLMomentumReco = (TH1D*)f->Get("hPionCandidateAfterUnContainedLMomentumReco");
TH1D *hPionCandidateAfterUnContainedLMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterUnContainedLMomentumReco");
TH1D *hPionCandidateAfterUnContainedLMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterUnContainedLMomentumReco");
TH1D *hPionCandidateAfterUnContainedLMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterUnContainedLMomentumReco");
TH1D *hPionCandidateAfterUnContainedLMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterUnContainedLMomentumReco");

hPionCandidateAfterUnContainedLMomentumReco->Sumw2();

TH1D *hTAfterTrue = (TH1D*)f->Get("hTAfterTrue");
TH1D *hTAfterTrueCCCoh = (TH1D*)f8->Get("hTAfterTrue");
TH1D *hTAfterTrueCCQE = (TH1D*)f5->Get("hTAfterTrue");
TH1D *hTAfterTrueCCRes = (TH1D*)f3->Get("hTAfterTrue");
TH1D *hTAfterTrueOther = (TH1D*)f4->Get("hTAfterTrue");

TH1D *hTAfterReco = (TH1D*)f->Get("hTAfterReco");
TH1D *hTAfterRecoCCCoh = (TH1D*)f8->Get("hTAfterReco");
TH1D *hTAfterRecoCCQE = (TH1D*)f5->Get("hTAfterReco");
TH1D *hTAfterRecoCCRes = (TH1D*)f3->Get("hTAfterReco");
TH1D *hTAfterRecoOther = (TH1D*)f4->Get("hTAfterReco");

TH1D *hTAfterDelta = (TH1D*)f->Get("hTAfterDelta");
TH1D *hTAfterDeltaCCCoh = (TH1D*)f8->Get("hTAfterDelta");
TH1D *hTAfterDeltaCCQE = (TH1D*)f5->Get("hTAfterDelta");
TH1D *hTAfterDeltaCCRes = (TH1D*)f3->Get("hTAfterDelta");
TH1D *hTAfterDeltaOther = (TH1D*)f4->Get("hTAfterDelta");

TH1D *hTAfter2True = (TH1D*)f->Get("hTAfter2True");
TH1D *hTAfter2TrueCCCoh = (TH1D*)f8->Get("hTAfter2True");
TH1D *hTAfter2TrueCCQE = (TH1D*)f5->Get("hTAfter2True");
TH1D *hTAfter2TrueCCRes = (TH1D*)f3->Get("hTAfter2True");
TH1D *hTAfter2TrueOther = (TH1D*)f4->Get("hTAfter2True");

TH1D *hTAfter2Reco = (TH1D*)f->Get("hTAfter2Reco");
TH1D *hTAfter2RecoCCCoh = (TH1D*)f8->Get("hTAfter2Reco");
TH1D *hTAfter2RecoCCQE = (TH1D*)f5->Get("hTAfter2Reco");
TH1D *hTAfter2RecoCCRes = (TH1D*)f3->Get("hTAfter2Reco");
TH1D *hTAfter2RecoOther = (TH1D*)f4->Get("hTAfter2Reco");

TH1D *hTAfter2Delta = (TH1D*)f->Get("hTAfter2Delta");
TH1D *hTAfter2DeltaCCCoh = (TH1D*)f8->Get("hTAfter2Delta");
TH1D *hTAfter2DeltaCCQE = (TH1D*)f5->Get("hTAfter2Delta");
TH1D *hTAfter2DeltaCCRes = (TH1D*)f3->Get("hTAfter2Delta");
TH1D *hTAfter2DeltaOther = (TH1D*)f4->Get("hTAfter2Delta");

TH1D *hTrueConeAngleAfter2 = (TH1D*)f->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleAfter2CCCoh = (TH1D*)f8->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleAfter2CCQE = (TH1D*)f5->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleAfter2CCRes = (TH1D*)f3->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleAfter2Other = (TH1D*)f4->Get("hTrueConeAngleAfter2");

TH1D *hRecoConeAngleAfter2 = (TH1D*)f->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleAfter2CCCoh = (TH1D*)f8->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleAfter2CCQE = (TH1D*)f5->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleAfter2CCRes = (TH1D*)f3->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleAfter2Other = (TH1D*)f4->Get("hRecoConeAngleAfter2");

TH1D *hTrueOpeningAngleAfter2 = (TH1D*)f->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleAfter2CCCoh = (TH1D*)f8->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleAfter2CCQE = (TH1D*)f5->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleAfter2CCRes = (TH1D*)f3->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleAfter2Other = (TH1D*)f4->Get("hTrueOpeningAngleAfter2");

TH1D *hRecoOpeningAngleAfter2 = (TH1D*)f->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleAfter2CCCoh = (TH1D*)f8->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleAfter2CCQE = (TH1D*)f5->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleAfter2CCRes = (TH1D*)f3->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleAfter2Other = (TH1D*)f4->Get("hRecoOpeningAngleAfter2");

TH1D *hMuonCandidateAfter2MomentumTrue = (TH1D*)f->Get("hMuonCandidateAfter2MomentumTrue");
TH1D *hMuonCandidateAfter2MomentumTrueCCCoh = (TH1D*)f8->Get("hMuonCandidateAfter2MomentumTrue");
TH1D *hMuonCandidateAfter2MomentumTrueCCQE = (TH1D*)f5->Get("hMuonCandidateAfter2MomentumTrue");
TH1D *hMuonCandidateAfter2MomentumTrueCCRes = (TH1D*)f3->Get("hMuonCandidateAfter2MomentumTrue");
TH1D *hMuonCandidateAfter2MomentumTrueOther = (TH1D*)f4->Get("hMuonCandidateAfter2MomentumTrue");

TH1D *hMuonCandidateAfter2MomentumReco = (TH1D*)f->Get("hMuonCandidateAfter2MomentumReco");
TH1D *hMuonCandidateAfter2MomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfter2MomentumReco");
TH1D *hMuonCandidateAfter2MomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfter2MomentumReco");
TH1D *hMuonCandidateAfter2MomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfter2MomentumReco");
TH1D *hMuonCandidateAfter2MomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfter2MomentumReco");

TH1D *hPionCandidateAfter2MomentumTrue = (TH1D*)f->Get("hPionCandidateAfter2MomentumTrue");
TH1D *hPionCandidateAfter2MomentumTrueCCCoh = (TH1D*)f8->Get("hPionCandidateAfter2MomentumTrue");
TH1D *hPionCandidateAfter2MomentumTrueCCQE = (TH1D*)f5->Get("hPionCandidateAfter2MomentumTrue");
TH1D *hPionCandidateAfter2MomentumTrueCCRes = (TH1D*)f3->Get("hPionCandidateAfter2MomentumTrue");
TH1D *hPionCandidateAfter2MomentumTrueOther = (TH1D*)f4->Get("hPionCandidateAfter2MomentumTrue");

TH1D *hPionCandidateAfter2MomentumReco = (TH1D*)f->Get("hPionCandidateAfter2MomentumReco");
TH1D *hPionCandidateAfter2MomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfter2MomentumReco");
TH1D *hPionCandidateAfter2MomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfter2MomentumReco");
TH1D *hPionCandidateAfter2MomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfter2MomentumReco");
TH1D *hPionCandidateAfter2MomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfter2MomentumReco");

TH1D *hMuonCandidateAfterComboMomentumReco = (TH1D*)f->Get("hMuonCandidateAfterComboMomentumReco");
TH1D *hMuonCandidateAfterComboMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterComboMomentumReco");
TH1D *hMuonCandidateAfterComboMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfterComboMomentumReco");
TH1D *hMuonCandidateAfterComboMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfterComboMomentumReco");
TH1D *hMuonCandidateAfterComboMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfterComboMomentumReco");

TH1D *hPionCandidateAfterComboMomentumReco = (TH1D*)f->Get("hPionCandidateAfterComboMomentumReco");
TH1D *hPionCandidateAfterComboMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfterComboMomentumReco");
TH1D *hPionCandidateAfterComboMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfterComboMomentumReco");
TH1D *hPionCandidateAfterComboMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfterComboMomentumReco");
TH1D *hPionCandidateAfterComboMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfterComboMomentumReco");

TH1D *hMuonCandidateAfter2ComboMomentumReco = (TH1D*)f->Get("hMuonCandidateAfter2ComboMomentumReco");
TH1D *hMuonCandidateAfter2ComboMomentumRecoCCCoh = (TH1D*)f8->Get("hMuonCandidateAfter2ComboMomentumReco");
TH1D *hMuonCandidateAfter2ComboMomentumRecoCCQE = (TH1D*)f5->Get("hMuonCandidateAfter2ComboMomentumReco");
TH1D *hMuonCandidateAfter2ComboMomentumRecoCCRes = (TH1D*)f3->Get("hMuonCandidateAfter2ComboMomentumReco");
TH1D *hMuonCandidateAfter2ComboMomentumRecoOther = (TH1D*)f4->Get("hMuonCandidateAfter2ComboMomentumReco");

TH1D *hPionCandidateAfter2ComboMomentumReco = (TH1D*)f->Get("hPionCandidateAfter2ComboMomentumReco");
TH1D *hPionCandidateAfter2ComboMomentumRecoCCCoh = (TH1D*)f8->Get("hPionCandidateAfter2ComboMomentumReco");
TH1D *hPionCandidateAfter2ComboMomentumRecoCCQE = (TH1D*)f5->Get("hPionCandidateAfter2ComboMomentumReco");
TH1D *hPionCandidateAfter2ComboMomentumRecoCCRes = (TH1D*)f3->Get("hPionCandidateAfter2ComboMomentumReco");
TH1D *hPionCandidateAfter2ComboMomentumRecoOther = (TH1D*)f4->Get("hPionCandidateAfter2ComboMomentumReco");

TH1D *hMuonCandidateAfterComboMomentumDelta = (TH1D*)f->Get("hMuonCandidateAfterComboMomentumDelta");
TH1D *hMuonCandidateAfterComboMomentumDeltaCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterComboMomentumDelta");
TH1D *hMuonCandidateAfterComboMomentumDeltaCCQE = (TH1D*)f5->Get("hMuonCandidateAfterComboMomentumDelta");
TH1D *hMuonCandidateAfterComboMomentumDeltaCCRes = (TH1D*)f3->Get("hMuonCandidateAfterComboMomentumDelta");
TH1D *hMuonCandidateAfterComboMomentumDeltaOther = (TH1D*)f4->Get("hMuonCandidateAfterComboMomentumDelta");

TH1D *hPionCandidateAfterComboMomentumDelta = (TH1D*)f->Get("hPionCandidateAfterComboMomentumDelta");
TH1D *hPionCandidateAfterComboMomentumDeltaCCCoh = (TH1D*)f8->Get("hPionCandidateAfterComboMomentumDelta");
TH1D *hPionCandidateAfterComboMomentumDeltaCCQE = (TH1D*)f5->Get("hPionCandidateAfterComboMomentumDelta");
TH1D *hPionCandidateAfterComboMomentumDeltaCCRes = (TH1D*)f3->Get("hPionCandidateAfterComboMomentumDelta");
TH1D *hPionCandidateAfterComboMomentumDeltaOther = (TH1D*)f4->Get("hPionCandidateAfterComboMomentumDelta");

TH1D *hMuonCandidateAfter2ComboMomentumDelta = (TH1D*)f->Get("hMuonCandidateAfter2ComboMomentumDelta");
TH1D *hMuonCandidateAfter2ComboMomentumDeltaCCCoh = (TH1D*)f8->Get("hMuonCandidateAfter2ComboMomentumDelta");
TH1D *hMuonCandidateAfter2ComboMomentumDeltaCCQE = (TH1D*)f5->Get("hMuonCandidateAfter2ComboMomentumDelta");
TH1D *hMuonCandidateAfter2ComboMomentumDeltaCCRes = (TH1D*)f3->Get("hMuonCandidateAfter2ComboMomentumDelta");
TH1D *hMuonCandidateAfter2ComboMomentumDeltaOther = (TH1D*)f4->Get("hMuonCandidateAfter2ComboMomentumDelta");

TH1D *hPionCandidateAfter2ComboMomentumDelta = (TH1D*)f->Get("hPionCandidateAfter2ComboMomentumDelta");
TH1D *hPionCandidateAfter2ComboMomentumDeltaCCCoh = (TH1D*)f8->Get("hPionCandidateAfter2ComboMomentumDelta");
TH1D *hPionCandidateAfter2ComboMomentumDeltaCCQE = (TH1D*)f5->Get("hPionCandidateAfter2ComboMomentumDelta");
TH1D *hPionCandidateAfter2ComboMomentumDeltaCCRes = (TH1D*)f3->Get("hPionCandidateAfter2ComboMomentumDelta");
TH1D *hPionCandidateAfter2ComboMomentumDeltaOther = (TH1D*)f4->Get("hPionCandidateAfter2ComboMomentumDelta");

TH1D *hMuonCandidateAfterMomentumDelta = (TH1D*)f->Get("hMuonCandidateAfterMomentumDelta");
TH1D *hMuonCandidateAfterMomentumDeltaCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterMomentumDelta");
TH1D *hMuonCandidateAfterMomentumDeltaCCQE = (TH1D*)f5->Get("hMuonCandidateAfterMomentumDelta");
TH1D *hMuonCandidateAfterMomentumDeltaCCRes = (TH1D*)f3->Get("hMuonCandidateAfterMomentumDelta");
TH1D *hMuonCandidateAfterMomentumDeltaOther = (TH1D*)f4->Get("hMuonCandidateAfterMomentumDelta");

TH1D *hPionCandidateAfterMomentumDelta = (TH1D*)f->Get("hPionCandidateAfterMomentumDelta");
TH1D *hPionCandidateAfterMomentumDeltaCCCoh = (TH1D*)f8->Get("hPionCandidateAfterMomentumDelta");
TH1D *hPionCandidateAfterMomentumDeltaCCQE = (TH1D*)f5->Get("hPionCandidateAfterMomentumDelta");
TH1D *hPionCandidateAfterMomentumDeltaCCRes = (TH1D*)f3->Get("hPionCandidateAfterMomentumDelta");
TH1D *hPionCandidateAfterMomentumDeltaOther = (TH1D*)f4->Get("hPionCandidateAfterMomentumDelta");

TH1D *hMuonCandidateAfterLMomentumDelta = (TH1D*)f->Get("hMuonCandidateAfterLMomentumDelta");
TH1D *hMuonCandidateAfterLMomentumDeltaCCCoh = (TH1D*)f8->Get("hMuonCandidateAfterLMomentumDelta");
TH1D *hMuonCandidateAfterLMomentumDeltaCCQE = (TH1D*)f5->Get("hMuonCandidateAfterLMomentumDelta");
TH1D *hMuonCandidateAfterLMomentumDeltaCCRes = (TH1D*)f3->Get("hMuonCandidateAfterLMomentumDelta");
TH1D *hMuonCandidateAfterLMomentumDeltaOther = (TH1D*)f4->Get("hMuonCandidateAfterLMomentumDelta");

TH1D *hPionCandidateAfterLMomentumDelta = (TH1D*)f->Get("hPionCandidateAfterLMomentumDelta");
TH1D *hPionCandidateAfterLMomentumDeltaCCCoh = (TH1D*)f8->Get("hPionCandidateAfterLMomentumDelta");
TH1D *hPionCandidateAfterLMomentumDeltaCCQE = (TH1D*)f5->Get("hPionCandidateAfterLMomentumDelta");
TH1D *hPionCandidateAfterLMomentumDeltaCCRes = (TH1D*)f3->Get("hPionCandidateAfterLMomentumDelta");
TH1D *hPionCandidateAfterLMomentumDeltaOther = (TH1D*)f4->Get("hPionCandidateAfterLMomentumDelta");

// Creating the Stacked Histogram
THStack *hRecoVAStacked = new THStack("hRecoVAStacked", "Hit Charges from All Planes Stacked for CC-Coh Events");
THStack *hTrueConeAngleAfterStacked = new THStack("hTrueConeAngleAfterStacked", "");
THStack *hRecoConeAngleAfterStacked = new THStack("hRecoConeAngleAfterStacked", "");
THStack *hTrueOpeningAngleAfterStacked = new THStack("hTrueOpeningAngleAfterStacked", "");
THStack *hRecoOpeningAngleAfterStacked = new THStack("hRecoOpeningAngleAfterStacked", "");
THStack *hMuonCandidateAfterMomentumTrueStacked = new THStack("hMuonCandidateAfterMomentumTrueStacked", "");
THStack *hMuonCandidateAfterMomentumRecoStacked = new THStack("hMuonCandidateAfterMomentumRecoStacked", "");
THStack *hPionCandidateAfterMomentumTrueStacked = new THStack("hPionCandidateAfterMomentumTrueStacked", "");
THStack *hPionCandidateAfterMomentumRecoStacked = new THStack("hPionCandidateAfterMomentumRecoStacked", "");
THStack *hMuonCandidateAfterComboMomentumTrueStacked = new THStack("hMuonCandidateAfterComboMomentumTrueStacked", "");
THStack *hMuonCandidateAfterComboMomentumRecoStacked = new THStack("hMuonCandidateAfterComboMomentumRecoStacked", "");
THStack *hPionCandidateAfterComboMomentumTrueStacked = new THStack("hPionCandidateAfterComboMomentumTrueStacked", "");
THStack *hPionCandidateAfterComboMomentumRecoStacked = new THStack("hPionCandidateAfterComboMomentumRecoStacked", "");
THStack *hTrueConeAngleAfter2Stacked = new THStack("hTrueConeAngleAfter2Stacked", "");
THStack *hRecoConeAngleAfter2Stacked = new THStack("hRecoConeAngleAfter2Stacked", "");
THStack *hTrueOpeningAngleAfter2Stacked = new THStack("hTrueOpeningAngleAfter2Stacked", "");
THStack *hRecoOpeningAngleAfter2Stacked = new THStack("hRecoOpeningAngleAfter2Stacked", "");
THStack *hMuonCandidateAfter2MomentumTrueStacked = new THStack("hMuonCandidateAfter2MomentumTrueStacked", "");
THStack *hMuonCandidateAfter2MomentumRecoStacked = new THStack("hMuonCandidateAfter2MomentumRecoStacked", "");
THStack *hPionCandidateAfter2MomentumTrueStacked = new THStack("hPionCandidateAfter2MomentumTrueStacked", "");
THStack *hPionCandidateAfter2MomentumRecoStacked = new THStack("hPionCandidateAfter2MomentumRecoStacked", "");
THStack *hMuonCandidateAfter2ComboMomentumTrueStacked = new THStack("hMuonCandidateAfter2ComboMomentumTrueStacked", "");
THStack *hMuonCandidateAfter2ComboMomentumRecoStacked = new THStack("hMuonCandidateAfter2ComboMomentumRecoStacked", "");
THStack *hPionCandidateAfter2ComboMomentumTrueStacked = new THStack("hPionCandidateAfter2ComboMomentumTrueStacked", "");
THStack *hPionCandidateAfter2ComboMomentumRecoStacked = new THStack("hPionCandidateAfter2ComboMomentumRecoStacked", "");
THStack *hTAfterTrueStacked = new THStack("hTAfterTrueStacked", "");
THStack *hTAfter2TrueStacked = new THStack("hTAfter2TrueStacked", "");
THStack *hTAfterRecoStacked = new THStack("hTAfterRecoStacked", "");
THStack *hTAfter2RecoStacked = new THStack("hTAfter2RecoStacked", "");



// --------------------------------------------------
// --- Signal to Background Ratios for Selections ---
// --------------------------------------------------
/*TH1D *hConeAngleSignalBackground = new TH1D("hConeAngleSignalBackground", "#frac{s}{#sqrt{s+b}} vs. Cone Angle", 180, 0, 180.0);
TH1D *hConeAngleSignalBackgroundCCCoh = new TH1D("hConeAngleSignalBackgroundCCCoh", "", 180, 0, 180.0);
TH1D *hConeAngleSignalBackgroundOther = new TH1D("hConeAngleSignalBackgroundOther", "", 180, 0, 180.0);

for (int i = 0; i < 180; i++) {
   for (int j = i+1; j > 0; j--) {
      hConeAngleSignalBackgroundCCCoh->Fill(i+0.5, hRecoConeAngleCCCoh->GetBinContent(j));
      hConeAngleSignalBackgroundOther->Fill(i+0.5, hRecoConeAngleCCCoh->GetBinContent(j));
   }
}

for (int i = 0; i < 180; i++) {
   hConeAngleSignalBackground->Fill((i*(180-0)/180)+(((180-0)/180)/2.0), (hConeAngleSignalBackgroundCCCoh->GetBinContent(i+1))/pow((hConeAngleSignalBackgroundCCCoh->GetBinContent(i+1)) + (hConeAngleSignalBackgroundOther->GetBinContent(i+1)), 0.5));
}*/
// --------------------------------------------------



// ----------------------------------
// --- Making Cross Section Plots ---
// ----------------------------------
TH1D *hOpeningAngleCrossSection = new TH1D("hOpeningAngleCrossSection", "The Differential Cross Section as a Function of Opening Angle", 180, 0, 180.0);
TH1D *hMuonMomentumCrossSection = new TH1D("hMuonMomentumCrossSection", "The Differential Cross Section as a Function of Muon Momentum", 1000, 0, 5.0);
TH1D *hPionMomentumCrossSection = new TH1D("hPionMomentumCrossSection", "The Differential Cross Section as a Function of Pion Momentum", 1000, 0, 5.0);
TH1D *hTCrossSection = new TH1D("hTCrossSection", "The Differential Cross Section as a Function of |t|", 1000, 0, 1.0);

TH1D *hOpeningAngleCrossSectionTrue = new TH1D("hOpeningAngleCrossSectionTrue", "The Differential Cross Section as a Function of Opening Angle from Truth", 180, 0, 180.0);
TH1D *hMuonMomentumCrossSectionTrue = new TH1D("hMuonMomentumCrossSectionTrue", "The Differential Cross Section as a Function of Muon Momentum from Truth", 1000, 0, 5.0);
TH1D *hPionMomentumCrossSectionTrue = new TH1D("hPionMomentumCrossSectionTrue", "The Differential Cross Section as a Function of Pion Momentum from Truth", 1000, 0, 5.0);
TH1D *hTCrossSectionTrue = new TH1D("hTCrossSectionTrue", "The Differential Cross Section as a Function of |t| from Truth", 1000, 0, 1.0);

TH1D *hOpeningAngleCrossSectionEfficiency = new TH1D("hOpeningAngleCrossSectionEfficiency", "The Differential Cross Section as a Function of Opening Angle Efficiency", 180, 0, 180.0);
TH1D *hOpeningAngleCrossSectionTrueEfficiency = new TH1D("hOpeningAngleCrossSectionTrueEfficiency", "The Differential Cross Section as a Function of Opening Angle from Truth Efficiency", 180, 0, 180.0);

double Flux = (13.2/1.6)*(1.16*pow(10,11));
double NTargets = 9.380433269*pow(10,29);
double ScaleHistograms = 94.60121044;
double DeltaAngle = 1.0;
double DeltaMomentum = 5.0/1000.0;
double DeltaT = 1.0/1000.0;
double DummyEfficiency = 0.26;
double DummyScale = 49.0/11571.0;
double TrueCrossSection = (hMuonCandidateAfterMomentumTrue->Integral())*ScaleHistograms*DummyScale/(Flux*DummyEfficiency*NTargets);
double RecoCrossSection = (hMuonCandidateAfterComboMomentumReco->Integral())*ScaleHistograms*DummyScale/(Flux*DummyEfficiency*NTargets);

for (int i = 0; i < 181; i++) {
   double OATheta = i + 0.5;   
   if (hRecoOpeningAngleAfter2->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionEfficiency->Fill(OATheta, DummyEfficiency); }
   else if (hRecoOpeningAngleAfter->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionEfficiency->Fill(OATheta, DummyEfficiency); }
   else { hOpeningAngleCrossSectionEfficiency->Fill(OATheta, (hRecoOpeningAngleAfter->GetBinContent(i+1))/((1/0.48)*(hRecoOpeningAngleAfter2->GetBinContent(i+1)))); }
   if (hTrueOpeningAngleAfter2->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionTrueEfficiency->Fill(OATheta, DummyEfficiency); }
   else if (hTrueOpeningAngleAfter->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionTrueEfficiency->Fill(OATheta, DummyEfficiency); }
   else { hOpeningAngleCrossSectionTrueEfficiency->Fill(OATheta, (hTrueOpeningAngleAfter->GetBinContent(i+1))/((1/0.48)*(hTrueOpeningAngleAfter2->GetBinContent(i+1)))); }

   if (hOpeningAngleCrossSectionEfficiency->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionEfficiency->Fill(OATheta, DummyEfficiency); }
   if (hOpeningAngleCrossSectionTrueEfficiency->GetBinContent(i+1) == 0) { hOpeningAngleCrossSectionTrueEfficiency->Fill(OATheta, DummyEfficiency); }

   //std::cout<<"Reco OA Efficiency = "<<hOpeningAngleCrossSectionEfficiency->GetBinContent(i+1)<<", i = "<<i<<std::endl;
}

for (int i = 0; i < 180; i++) {
   //hOpeningAngleCrossSection->Fill((i*DeltaAngle)+(DeltaAngle/2.0), ((hRecoOpeningAngleAfter->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaAngle*Flux*DummyEfficiency*NTargets));
   //hOpeningAngleCrossSectionTrue->Fill((i*DeltaAngle)+(DeltaAngle/2.0), ((hTrueOpeningAngleAfter->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaAngle*Flux*DummyEfficiency*NTargets));
   hOpeningAngleCrossSection->Fill((i*DeltaAngle)+(DeltaAngle/2.0), ((hRecoOpeningAngleAfter->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaAngle*Flux*hOpeningAngleCrossSectionEfficiency->GetBinContent(i+1)*NTargets));
   hOpeningAngleCrossSectionTrue->Fill((i*DeltaAngle)+(DeltaAngle/2.0), ((hTrueOpeningAngleAfter->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaAngle*Flux*hOpeningAngleCrossSectionTrueEfficiency->GetBinContent(i+1)*NTargets));
}
for (int i = 0; i < 1000; i++) {
   hMuonMomentumCrossSection->Fill((i*DeltaMomentum)+(DeltaMomentum/2.0), ((hMuonCandidateAfterComboMomentumReco->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaMomentum*Flux*DummyEfficiency*NTargets));
   hPionMomentumCrossSection->Fill((i*DeltaMomentum)+(DeltaMomentum/2.0), ((hPionCandidateAfterComboMomentumReco->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaMomentum*Flux*DummyEfficiency*NTargets));
   hTCrossSection->Fill((i*DeltaT)+(DeltaT/2.0), ((hTAfterReco->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaT*Flux*DummyEfficiency*NTargets));
   hMuonMomentumCrossSectionTrue->Fill((i*DeltaMomentum)+(DeltaMomentum/2.0), ((hMuonCandidateAfterMomentumTrue->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaMomentum*Flux*DummyEfficiency*NTargets));
   hPionMomentumCrossSectionTrue->Fill((i*DeltaMomentum)+(DeltaMomentum/2.0), ((hPionCandidateAfterMomentumTrue->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaMomentum*Flux*DummyEfficiency*NTargets));
   hTCrossSectionTrue->Fill((i*DeltaT)+(DeltaT/2.0), ((hTAfterTrue->GetBinContent(i+1))*ScaleHistograms*DummyScale)/(DeltaT*Flux*DummyEfficiency*NTargets));
}
// ----------------------------------



TH1D *hCondensedSelectionCCCoh = new TH1D("hCondensedSelectionCCCoh", "The Cut By Cut Selection", 7, -0.5, 6.5);
TH1D *hCondensedSelectionCCCohDivide = new TH1D("hCondensedSelectionCCCohDivide", "The Cut By Cut Selection", 7, -0.5, 6.5);

TH1D *hCondensedSelectionOther = new TH1D("hCondensedSelectionOther", "The Cut By Cut Selection", 7, -0.5, 6.5);
TH1D *hCondensedSelectionOtherDivide = new TH1D("hCondensedSelectionOtherDivide", "The Cut By Cut Selection", 7, -0.5, 6.5);

hCondensedSelectionCCCoh->Fill(0., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCoh->Fill(1., hCutByCutMuonCandidate2->GetBinContent(14));
hCondensedSelectionCCCoh->Fill(2., hCutByCutMuonCandidate2->GetBinContent(16));
hCondensedSelectionCCCoh->Fill(3., hCutByCutMuonCandidate2->GetBinContent(17));
hCondensedSelectionCCCoh->Fill(4., hCutByCutMuonCandidate2->GetBinContent(18));
hCondensedSelectionCCCoh->Fill(5., hCutByCutMuonCandidate2->GetBinContent(19));
hCondensedSelectionCCCoh->Fill(6., hCutByCutMuonCandidate2->GetBinContent(20));

hCondensedSelectionCCCohDivide->Fill(0., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(1., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(2., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(3., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(4., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(5., hCutByCutMuonCandidate2->GetBinContent(1));
hCondensedSelectionCCCohDivide->Fill(6., hCutByCutMuonCandidate2->GetBinContent(1));

hCondensedSelectionOther->Fill(0., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOther->Fill(1., hCutByCutMuonCandidate2Other->GetBinContent(14));
hCondensedSelectionOther->Fill(2., hCutByCutMuonCandidate2Other->GetBinContent(16));
hCondensedSelectionOther->Fill(3., hCutByCutMuonCandidate2Other->GetBinContent(17));
hCondensedSelectionOther->Fill(4., hCutByCutMuonCandidate2Other->GetBinContent(18));
hCondensedSelectionOther->Fill(5., hCutByCutMuonCandidate2Other->GetBinContent(19));
hCondensedSelectionOther->Fill(6., hCutByCutMuonCandidate2Other->GetBinContent(20));

hCondensedSelectionOtherDivide->Fill(0., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(1., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(2., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(3., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(4., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(5., hCutByCutMuonCandidate2Other->GetBinContent(1));
hCondensedSelectionOtherDivide->Fill(6., hCutByCutMuonCandidate2Other->GetBinContent(1));

hCondensedSelectionCCCoh->Sumw2();
hCondensedSelectionCCCohDivide->Sumw2();

hCondensedSelectionOther->Sumw2();
hCondensedSelectionOtherDivide->Sumw2();




// ===================================================
// --- Print Outs for Purity and Efficiency Tables ---
// ===================================================
std::cout<<"This is for the Modified Table!!!"<<std::endl;
for (int i = 1; i < 21; i++) {
   std::cout<<
	   hCutByCutMuonCandidate->GetBinContent(i)<<
	   //hCutByCutMuonCandidateCCQE->GetBinContent(i)<<
	   //hCutByCutMuonCandidateCCRes->GetBinContent(i)<<
	   //hCutByCutMuonCandidateCCDIS->GetBinContent(i)<<
	   //hCutByCutMuonCandidateCCInc->GetBinContent(i)<<	   
	   //hCutByCutMuonCandidateNC->GetBinContent(i)<<
	   //hCutByCutMuonCandidateOther->GetBinContent(i)<<
	   //hCutByCutMuonCandidateCCCoh->GetBinContent(i)<<
	   std::endl;
}
std::cout<<" "<<std::endl;
std::cout<<"This is for the Unmodified Table!!!"<<std::endl;
for (int i = 1; i < 21; i++) {
   std::cout<<
	   //hCutByCutMuonCandidate2->GetBinContent(i)<<
	   //hCutByCutMuonCandidate2CCQE->GetBinContent(i)<<
	   //hCutByCutMuonCandidate2CCRes->GetBinContent(i)<<
	   //hCutByCutMuonCandidate2CCDIS->GetBinContent(i)<<
	   //hCutByCutMuonCandidate2CCInc->GetBinContent(i)<<	   
	   //hCutByCutMuonCandidate2NC->GetBinContent(i)<<
	   //hCutByCutMuonCandidate2Other->GetBinContent(i)<<
	   hCutByCutMuonCandidate2CCCoh->GetBinContent(i)<<
	   std::endl;
}
// ===================================================


double CCCohScaleFactor = 0.004234724743;



TCanvas *c1 = new TCanvas("c1", "The Muon Chi2 Values for Different Particle Species", 2);
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonMuonChi2->Scale(1/hMuonMuonChi2->Integral());
hPionMuonChi2->Scale(1/hPionMuonChi2->Integral());
//hProtonMuonChi2->Scale(1/hProtonMuonChi2->Integral());

hMuonMuonChi2->SetFillColor(kBlue);
hMuonMuonChi2->SetFillStyle(3005);
hMuonMuonChi2->SetLineColor(kBlue);
hMuonMuonChi2->SetLineWidth(2);
hMuonMuonChi2->Rebin(5);

hPionMuonChi2->SetFillColor(kGreen);
hPionMuonChi2->SetFillStyle(3006);
hPionMuonChi2->SetLineColor(kGreen);
hPionMuonChi2->SetLineWidth(2);
hPionMuonChi2->Rebin(5);

hProtonMuonChi2->SetFillColor(kOrange);
hProtonMuonChi2->SetFillStyle(3007);
hProtonMuonChi2->SetLineColor(kOrange);
hProtonMuonChi2->SetLineWidth(2);
hProtonMuonChi2->Rebin(5);

hMuonMuonChi2->GetXaxis()->SetTitle("#mu #chi^{2}");
hMuonMuonChi2->GetXaxis()->CenterTitle();
hMuonMuonChi2->GetXaxis()->SetRangeUser(0, 100);

hMuonMuonChi2->GetYaxis()->SetTitle("Normalized Events");
hMuonMuonChi2->GetYaxis()->CenterTitle();

hMuonMuonChi2->Draw("histo");
hPionMuonChi2->Draw("histosame");
//hProtonMuonChi2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Particle");
leg1->AddEntry(hMuonMuonChi2,"#mu");
leg1->AddEntry(hPionMuonChi2,"#pi");
//leg1->AddEntry(hProtonMuonChi2,"p");
leg1->Draw();



TCanvas *c2 = new TCanvas("c2", "The Proton Chi2 Values for Different Particle Species", 2);
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonProtonChi2->Scale(1/hMuonProtonChi2->Integral());
hPionProtonChi2->Scale(1/hPionProtonChi2->Integral());
//hProtonProtonChi2->Scale(1/hProtonProtonChi2->Integral());

hMuonProtonChi2->SetFillColor(kBlue);
hMuonProtonChi2->SetFillStyle(3005);
hMuonProtonChi2->SetLineColor(kBlue);
hMuonProtonChi2->SetLineWidth(2);
hMuonProtonChi2->Rebin(5);

hPionProtonChi2->SetFillColor(kGreen);
hPionProtonChi2->SetFillStyle(3006);
hPionProtonChi2->SetLineColor(kGreen);
hPionProtonChi2->SetLineWidth(2);
hPionProtonChi2->Rebin(5);

hProtonProtonChi2->SetFillColor(kOrange);
hProtonProtonChi2->SetFillStyle(3007);
hProtonProtonChi2->SetLineColor(kOrange);
hProtonProtonChi2->SetLineWidth(2);
hProtonProtonChi2->Rebin(5);

hMuonProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hMuonProtonChi2->GetXaxis()->CenterTitle();
hMuonProtonChi2->GetXaxis()->SetRangeUser(0, 350);

hMuonProtonChi2->GetYaxis()->SetTitle("Normalized Events");
hMuonProtonChi2->GetYaxis()->CenterTitle();

hMuonProtonChi2->Draw("histo");
hPionProtonChi2->Draw("histosame");
//hProtonProtonChi2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Particle");
leg2->AddEntry(hMuonProtonChi2,"#mu");
leg2->AddEntry(hPionProtonChi2,"#pi");
//leg2->AddEntry(hProtonProtonChi2,"p");
leg2->Draw();



TCanvas *c3 = new TCanvas("c3", "The Pandora Track Lengths of Different Particle Species", 2);
c3->SetTicks();
c3->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonPandoraTrackLength->Scale(1/hMuonPandoraTrackLength->Integral());
hPionPandoraTrackLength->Scale(1/hPionPandoraTrackLength->Integral());
//hProtonPandoraTrackLength->Scale(1/hProtonPandoraTrackLength->Integral());

hMuonPandoraTrackLength->SetFillColor(kBlue);
hMuonPandoraTrackLength->SetFillStyle(3005);
hMuonPandoraTrackLength->SetLineColor(kBlue);
hMuonPandoraTrackLength->SetLineWidth(2);

hPionPandoraTrackLength->SetFillColor(kGreen);
hPionPandoraTrackLength->SetFillStyle(3006);
hPionPandoraTrackLength->SetLineColor(kGreen);
hPionPandoraTrackLength->SetLineWidth(2);

hProtonPandoraTrackLength->SetFillColor(kOrange);
hProtonPandoraTrackLength->SetFillStyle(3007);
hProtonPandoraTrackLength->SetLineColor(kOrange);
hProtonPandoraTrackLength->SetLineWidth(2);

hPionPandoraTrackLength->GetXaxis()->SetTitle("Track Length [cm]");
hPionPandoraTrackLength->GetXaxis()->CenterTitle();
hPionPandoraTrackLength->GetXaxis()->SetRangeUser(0, 350);

hPionPandoraTrackLength->GetYaxis()->SetTitle("Normalized Events");
hPionPandoraTrackLength->GetYaxis()->CenterTitle();

hPionPandoraTrackLength->Draw("histo");
//hProtonPandoraTrackLength->Draw("histosame");
hMuonPandoraTrackLength->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Particle");
leg3->AddEntry(hMuonPandoraTrackLength,"#mu");
leg3->AddEntry(hPionPandoraTrackLength,"#pi");
//leg3->AddEntry(hProtonPandoraTrackLength,"p");
leg3->Draw();



TCanvas *c4 = new TCanvas("c4", "Muon Tracks #mu #chi^{2} Vs p #chi^{2}", 2);
c4->SetTicks();
c4->SetFillColor(kWhite);

hMuonTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hMuonTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hMuonTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hMuonTracksMuonChi2VsProtonChi2->RebinX(10);
hMuonTracksMuonChi2VsProtonChi2->RebinY(5);

hMuonTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hMuonTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonTracksMuonChi2VsProtonChi2->Draw("COLZ");



TCanvas *c5 = new TCanvas("c5", "Pion Tracks #mu #chi^{2} Vs p #chi^{2}", 2);
c5->SetTicks();
c5->SetFillColor(kWhite);

hPionTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hPionTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hPionTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hPionTracksMuonChi2VsProtonChi2->RebinX(10);
hPionTracksMuonChi2VsProtonChi2->RebinY(5);

hPionTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hPionTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionTracksMuonChi2VsProtonChi2->Draw("COLZ");



TCanvas *c6 = new TCanvas("c6", "Proton Tracks #mu #chi^{2} Vs p #chi^{2}", 2);
c6->SetTicks();
c6->SetFillColor(kWhite);

hProtonTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hProtonTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hProtonTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hProtonTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hProtonTracksMuonChi2VsProtonChi2->RebinX(10);
hProtonTracksMuonChi2VsProtonChi2->RebinY(5);

hProtonTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hProtonTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hProtonTracksMuonChi2VsProtonChi2->Draw("COLZ");



TCanvas *c7 = new TCanvas("c7", "The #chi^{2} Ratios of Proton #chi^{2} / Muon #chi^{2}", 2);
c7->SetTicks();
c7->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonRatioChi2->Scale(1/hMuonRatioChi2->Integral());
hPionRatioChi2->Scale(1/hPionRatioChi2->Integral());
//hProtonRatioChi2->Scale(1/hProtonRatioChi2->Integral());

hMuonRatioChi2->SetFillColor(kBlue);
hMuonRatioChi2->SetFillStyle(3005);
hMuonRatioChi2->SetLineColor(kBlue);
hMuonRatioChi2->SetLineWidth(2);

hPionRatioChi2->SetFillColor(kGreen);
hPionRatioChi2->SetFillStyle(3006);
hPionRatioChi2->SetLineColor(kGreen);
hPionRatioChi2->SetLineWidth(2);

hProtonRatioChi2->SetFillColor(kOrange);
hProtonRatioChi2->SetFillStyle(3007);
hProtonRatioChi2->SetLineColor(kOrange);
hProtonRatioChi2->SetLineWidth(2);

hPionRatioChi2->GetXaxis()->SetTitle("Ratio (p #chi^{2} / #mu #chi^{2})");
hPionRatioChi2->GetXaxis()->CenterTitle();
hPionRatioChi2->GetXaxis()->SetRangeUser(0, 30);

hPionRatioChi2->GetYaxis()->SetTitle("Normalized Events");
hPionRatioChi2->GetYaxis()->CenterTitle();

hPionRatioChi2->Draw("histo");
//hProtonRatioChi2->Draw("histosame");
hMuonRatioChi2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg7 = new TLegend();
leg7 = new TLegend(0.58,0.65,1.00,1.00);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Particle");
leg7->AddEntry(hMuonRatioChi2,"#mu");
leg7->AddEntry(hPionRatioChi2,"#pi");
//leg7->AddEntry(hProtonRatioChi2,"p");
leg7->Draw();



TCanvas *c8 = new TCanvas("c8", "The True Track Lengths of Different Particle Species", 2);
c8->SetTicks();
c8->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonTrueTrackLength->Scale(1/hMuonTrueTrackLength->Integral());
hPionTrueTrackLength->Scale(1/hPionTrueTrackLength->Integral());
hProtonTrueTrackLength->Scale(1/hProtonTrueTrackLength->Integral());

hMuonTrueTrackLength->SetFillColor(kBlue);
hMuonTrueTrackLength->SetFillStyle(3005);
hMuonTrueTrackLength->SetLineColor(kBlue);
hMuonTrueTrackLength->SetLineWidth(2);

hPionTrueTrackLength->SetFillColor(kGreen);
hPionTrueTrackLength->SetFillStyle(3006);
hPionTrueTrackLength->SetLineColor(kGreen);
hPionTrueTrackLength->SetLineWidth(2);

hProtonTrueTrackLength->SetFillColor(kOrange);
hProtonTrueTrackLength->SetFillStyle(3007);
hProtonTrueTrackLength->SetLineColor(kOrange);
hProtonTrueTrackLength->SetLineWidth(2);

hPionTrueTrackLength->GetXaxis()->SetTitle("Track Length [cm]");
hPionTrueTrackLength->GetXaxis()->CenterTitle();
hPionTrueTrackLength->GetXaxis()->SetRangeUser(0, 350);

hPionTrueTrackLength->GetYaxis()->SetTitle("Normalized Events");
hPionTrueTrackLength->GetYaxis()->CenterTitle();

hPionTrueTrackLength->Draw("histo");
hProtonTrueTrackLength->Draw("histosame");
hMuonTrueTrackLength->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg8 = new TLegend();
leg8 = new TLegend(0.58,0.65,1.00,1.00);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Particle");
leg8->AddEntry(hMuonTrueTrackLength,"#mu");
leg8->AddEntry(hPionTrueTrackLength,"#pi");
leg8->AddEntry(hProtonTrueTrackLength,"p");
leg8->Draw();



TCanvas *c9 = new TCanvas("c9", "Pandora Track Length Vs True Track Length for Muons", 2);
c9->SetTicks();
c9->SetFillColor(kWhite);

hMuonPandoraVsTrueTrackLength->GetXaxis()->SetTitle("True Track Length [cm]");
hMuonPandoraVsTrueTrackLength->GetXaxis()->CenterTitle();

hMuonPandoraVsTrueTrackLength->GetYaxis()->SetTitle("Pandora Track Length [cm]");
hMuonPandoraVsTrueTrackLength->GetYaxis()->CenterTitle();

//hMuonPandoraVsTrueTrackLength->RebinX(10);
//hMuonPandoraVsTrueTrackLength->RebinY(10);

gStyle->SetPalette(kRainBow);
hMuonPandoraVsTrueTrackLength->Draw("COLZ");



TCanvas *c10 = new TCanvas("c10", "Pandora Track Length Vs True Track Length for Pions", 2);
c10->SetTicks();
c10->SetFillColor(kWhite);

hPionPandoraVsTrueTrackLength->GetXaxis()->SetTitle("True Track Length [cm]");
hPionPandoraVsTrueTrackLength->GetXaxis()->CenterTitle();

hPionPandoraVsTrueTrackLength->GetYaxis()->SetTitle("Pandora Track Length [cm]");
hPionPandoraVsTrueTrackLength->GetYaxis()->CenterTitle();

//hPionPandoraVsTrueTrackLength->RebinX(10);
//hPionPandoraVsTrueTrackLength->RebinY(10);

gStyle->SetPalette(kRainBow);
hPionPandoraVsTrueTrackLength->Draw("COLZ");



TCanvas *c11 = new TCanvas("c11", "Pandora Track Length Vs True Track Length for Protons", 2);
c11->SetTicks();
c11->SetFillColor(kWhite);

hProtonPandoraVsTrueTrackLength->GetXaxis()->SetTitle("True Track Length [cm]");
hProtonPandoraVsTrueTrackLength->GetXaxis()->CenterTitle();

hProtonPandoraVsTrueTrackLength->GetYaxis()->SetTitle("Pandora Track Length [cm]");
hProtonPandoraVsTrueTrackLength->GetYaxis()->CenterTitle();

//hProtonPandoraVsTrueTrackLength->RebinX(10);
//hProtonPandoraVsTrueTrackLength->RebinY(10);

gStyle->SetPalette(kRainBow);
hProtonPandoraVsTrueTrackLength->Draw("COLZ");



TCanvas *c12 = new TCanvas("c12", "The Track Scores of Different Particle Species", 2);
c12->SetTicks();
c12->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonTrackScore->Scale(1/hMuonTrackScore->Integral());
hPionTrackScore->Scale(1/hPionTrackScore->Integral());
//hProtonTrackScore->Scale(1/hProtonTrackScore->Integral());

hMuonTrackScore->SetFillColor(kBlue);
hMuonTrackScore->SetFillStyle(3005);
hMuonTrackScore->SetLineColor(kBlue);
hMuonTrackScore->SetLineWidth(2);

hPionTrackScore->SetFillColor(kGreen);
hPionTrackScore->SetFillStyle(3006);
hPionTrackScore->SetLineColor(kGreen);
hPionTrackScore->SetLineWidth(2);

hProtonTrackScore->SetFillColor(kOrange);
hProtonTrackScore->SetFillStyle(3007);
hProtonTrackScore->SetLineColor(kOrange);
hProtonTrackScore->SetLineWidth(2);

hMuonTrackScore->GetXaxis()->SetTitle("Track Score");
hMuonTrackScore->GetXaxis()->CenterTitle();
hMuonTrackScore->GetXaxis()->SetRangeUser(0.6, 1);

hMuonTrackScore->GetYaxis()->SetTitle("Normalized Events");
hMuonTrackScore->GetYaxis()->CenterTitle();

gPad->SetLogy();
hMuonTrackScore->Draw("histo");
hPionTrackScore->Draw("histosame");
//hProtonTrackScore->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg12 = new TLegend();
leg12 = new TLegend(0.58,0.65,1.00,1.00);
leg12->SetTextSize(0.04);
leg12->SetTextAlign(12);
leg12->SetFillColor(kWhite);
leg12->SetLineColor(kWhite);
leg12->SetShadowColor(kWhite);
leg12->SetHeader("Particle");
leg12->AddEntry(hMuonTrackScore,"#mu");
leg12->AddEntry(hPionTrackScore,"#pi");
//leg12->AddEntry(hProtonTrackScore,"p");
leg12->Draw();



TCanvas *c13 = new TCanvas("c13", "The Vertex Distance of Different Particle Species", 2);
c13->SetTicks();
c13->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonVtxDistance->Scale(1/hMuonVtxDistance->Integral());
hPionVtxDistance->Scale(1/hPionVtxDistance->Integral());
//hProtonVtxDistance->Scale(1/hProtonVtxDistance->Integral());

hMuonVtxDistance->SetFillColor(kBlue);
hMuonVtxDistance->SetFillStyle(3005);
hMuonVtxDistance->SetLineColor(kBlue);
hMuonVtxDistance->SetLineWidth(2);

hPionVtxDistance->SetFillColor(kGreen);
hPionVtxDistance->SetFillStyle(3006);
hPionVtxDistance->SetLineColor(kGreen);
hPionVtxDistance->SetLineWidth(2);

hProtonVtxDistance->SetFillColor(kOrange);
hProtonVtxDistance->SetFillStyle(3007);
hProtonVtxDistance->SetLineColor(kOrange);
hProtonVtxDistance->SetLineWidth(2);

hMuonVtxDistance->GetXaxis()->SetTitle("Vertex Distance [cm]");
hMuonVtxDistance->GetXaxis()->CenterTitle();
hMuonVtxDistance->GetXaxis()->SetRangeUser(0, 6);

hMuonVtxDistance->GetYaxis()->SetTitle("Normalized Events");
hMuonVtxDistance->GetYaxis()->CenterTitle();

gPad->SetLogy();
hMuonVtxDistance->Draw("histo");
hPionVtxDistance->Draw("histosame");
//hProtonVtxDistance->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg13 = new TLegend();
leg13 = new TLegend(0.58,0.65,1.00,1.00);
leg13->SetTextSize(0.04);
leg13->SetTextAlign(12);
leg13->SetFillColor(kWhite);
leg13->SetLineColor(kWhite);
leg13->SetShadowColor(kWhite);
leg13->SetHeader("Particle");
leg13->AddEntry(hMuonVtxDistance,"#mu");
leg13->AddEntry(hPionVtxDistance,"#pi");
//leg13->AddEntry(hProtonVtxDistance,"p");
leg13->Draw();



TCanvas *c14 = new TCanvas("c14", "The Efficiency of the CC-Inclusive Selection for CC-Coh Events");
c14->SetTicks();
c14->SetFillColor(kWhite);

hPassedNuEnergy->SetLineColor(kBlue);
hPassedNuEnergy->SetLineWidth(2);
//hAfterNuEnergy->SetLineColor(kBlue);
//hAfterNuEnergy->SetLineWidth(2);
//hAfterNuEnergy2->SetLineColor(kRed);
//hAfterNuEnergy2->SetLineWidth(2);

hPassedNuEnergy->Divide(hMatchedNuEnergy);
hAfterNuEnergy->Divide(hMatchedNuEnergy);
hAfterNuEnergy2->Divide(hMatchedNuEnergy);

hPassedNuEnergy->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hPassedNuEnergy->GetXaxis()->CenterTitle();

hPassedNuEnergy->GetYaxis()->SetTitle("Passing Efficiency");
hPassedNuEnergy->GetYaxis()->CenterTitle();

hPassedNuEnergy->Draw("E1");
//hAfterNuEnergy->Draw("E1");
//hAfterNuEnergy2->Draw("E1");

/*
// ### Defining the legend for the plot ###
TLegend *leg14 = new TLegend();
leg14 = new TLegend(0.58,0.65,1.00,1.00);
leg14->SetTextSize(0.04);
leg14->SetTextAlign(12);
leg14->SetFillColor(kWhite);
leg14->SetLineColor(kWhite);
leg14->SetShadowColor(kWhite);
leg14->SetHeader("Stages");
//leg14->AddEntry(hPassedNuEnergy,"Passed CC-Inclusive Preselection");
leg14->AddEntry(hAfterNuEnergy,"Passed Entire Selection With Cuts Off");
leg14->AddEntry(hAfterNuEnergy2,"Passed Entire Selection With Cuts On");
leg14->Draw();
*/


TCanvas *c15 = new TCanvas("c15", "The Difference (Reco - Truth) Between Neutrino Vtx X Positions for Truth and Truth with SCE", 2);
c15->SetTicks();
c15->SetFillColor(kWhite);

hNuVtxDiffX->SetLineColor(kBlue);
hNuVtxDiffX->SetLineWidth(2);

hNuVtxDiffSCEX->SetLineColor(kRed);
hNuVtxDiffSCEX->SetLineWidth(2);

hNuVtxDiffSCEX->GetXaxis()->SetTitle("Difference in X Position (Reco - Truth) [cm]");
hNuVtxDiffSCEX->GetXaxis()->CenterTitle();
hNuVtxDiffSCEX->GetXaxis()->SetRangeUser(-20.5,20.5);

hNuVtxDiffSCEX->GetYaxis()->SetTitle("Number of Events");
hNuVtxDiffSCEX->GetYaxis()->CenterTitle();

hNuVtxDiffSCEX->Draw("histo");
hNuVtxDiffX->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg15 = new TLegend();
leg15 = new TLegend(0.58,0.65,1.00,1.00);
leg15->SetTextSize(0.04);
leg15->SetTextAlign(12);
leg15->SetFillColor(kWhite);
leg15->SetLineColor(kWhite);
leg15->SetShadowColor(kWhite);
leg15->SetHeader("SCE or Not");
leg15->AddEntry(hNuVtxDiffX,"None");
leg15->AddEntry(hNuVtxDiffSCEX,"With SCE");
leg15->Draw();



TCanvas *c16 = new TCanvas("c16", "The Difference (Reco - Truth) Between Neutrino Vtx Y Positions for Truth and Truth with SCE", 2);
c16->SetTicks();
c16->SetFillColor(kWhite);

hNuVtxDiffY->SetLineColor(kBlue);
hNuVtxDiffY->SetLineWidth(2);

hNuVtxDiffSCEY->SetLineColor(kRed);
hNuVtxDiffSCEY->SetLineWidth(2);

hNuVtxDiffSCEY->GetXaxis()->SetTitle("Difference in Y Position (Reco - Truth) [cm]");
hNuVtxDiffSCEY->GetXaxis()->CenterTitle();
hNuVtxDiffSCEY->GetXaxis()->SetRangeUser(-20.5,20.5);

hNuVtxDiffSCEY->GetYaxis()->SetTitle("Number of Events");
hNuVtxDiffSCEY->GetYaxis()->CenterTitle();

hNuVtxDiffSCEY->Draw("histo");
hNuVtxDiffY->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg16 = new TLegend();
leg16 = new TLegend(0.58,0.65,1.00,1.00);
leg16->SetTextSize(0.04);
leg16->SetTextAlign(12);
leg16->SetFillColor(kWhite);
leg16->SetLineColor(kWhite);
leg16->SetShadowColor(kWhite);
leg16->SetHeader("SCE or Not");
leg16->AddEntry(hNuVtxDiffY,"None");
leg16->AddEntry(hNuVtxDiffSCEY,"With SCE");
leg16->Draw();



TCanvas *c17 = new TCanvas("c17", "The Difference (Reco - Truth) Between Neutrino Vtx Z Positions for Truth and Truth with SCE", 2);
c17->SetTicks();
c17->SetFillColor(kWhite);

hNuVtxDiffZ->SetLineColor(kBlue);
hNuVtxDiffZ->SetLineWidth(2);

hNuVtxDiffSCEZ->SetLineColor(kRed);
hNuVtxDiffSCEZ->SetLineWidth(2);

hNuVtxDiffSCEZ->GetXaxis()->SetTitle("Difference in Z Position (Reco - Truth) [cm]");
hNuVtxDiffSCEZ->GetXaxis()->CenterTitle();
hNuVtxDiffSCEZ->GetXaxis()->SetRangeUser(-20.5,20.5);

hNuVtxDiffSCEZ->GetYaxis()->SetTitle("Number of Events");
hNuVtxDiffSCEZ->GetYaxis()->CenterTitle();

hNuVtxDiffSCEZ->Draw("histo");
hNuVtxDiffZ->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg17 = new TLegend();
leg17 = new TLegend(0.58,0.65,1.00,1.00);
leg17->SetTextSize(0.04);
leg17->SetTextAlign(12);
leg17->SetFillColor(kWhite);
leg17->SetLineColor(kWhite);
leg17->SetShadowColor(kWhite);
leg17->SetHeader("SCE or Not");
leg17->AddEntry(hNuVtxDiffZ,"None");
leg17->AddEntry(hNuVtxDiffSCEZ,"With SCE");
leg17->Draw();



// ----------------------------------------------
// --- Making Histogram for Cut By Cut Purity ---
// ----------------------------------------------
TH1D *hCutByCutMuonCandidatePurityDivide = new TH1D("hCutByCutMuonCandidatePurityDivide", "The Cut by Cut Efficiency Division Histogram of the CC-Inclusive Muon Candidate Selection for CC-Coh Purity", 19, -0.5, 18.5);
TH1D *hCutByCutMuonCandidatePurityDivide2 = new TH1D("hCutByCutMuonCandidatePurityDivide2", "The Cut by Cut Efficiency Division Histogram of the CC-Inclusive Muon Candidate Selection for CC-Coh Purity All Cuts ON", 20, -0.5, 19.5);

int nbins = 20;
for (int i = 1; i < nbins+1; i++) {
   hCutByCutMuonCandidatePurityDivide->Fill((i-1), hCutByCutMuonCandidateOther->GetBinContent(i));
   hCutByCutMuonCandidatePurityDivide->Fill((i-1), hCutByCutMuonCandidateCCCoh->GetBinContent(i));
   hCutByCutMuonCandidatePurityDivide2->Fill((i-1), hCutByCutMuonCandidate2Other->GetBinContent(i));
   hCutByCutMuonCandidatePurityDivide2->Fill((i-1), hCutByCutMuonCandidate2CCCoh->GetBinContent(i));
} // <-- End of i For Loop for Purity Divide Histogram

//hCutByCutMuonCandidatePurityDivide->Sumw2();
// ----------------------------------------------



TCanvas *c18 = new TCanvas("c18", "The Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events");
c18->SetTicks();
c18->SetFillColor(kWhite);

hCutByCutMuonCandidate->SetLineColor(kBlue);
hCutByCutMuonCandidate->SetLineWidth(2);
hCutByCutMuonCandidateCCQE->SetLineColor(kViolet);
hCutByCutMuonCandidateCCQE->SetLineWidth(2);
hCutByCutMuonCandidateCCRes->SetLineColor(kRed);
hCutByCutMuonCandidateCCRes->SetLineWidth(2);
hCutByCutMuonCandidateCCDIS->SetLineColor(kOrange);
hCutByCutMuonCandidateCCDIS->SetLineWidth(2);
hCutByCutMuonCandidateOther->SetLineColor(kBlack);
hCutByCutMuonCandidateOther->SetLineWidth(2);
hCutByCutMuonCandidateNC->SetLineColor(kGreen);
hCutByCutMuonCandidateNC->SetLineWidth(2);
hCutByCutMuonCandidateCCCoh->SetLineColor(kCyan);
hCutByCutMuonCandidateCCCoh->SetLineWidth(2);
hCutByCutMuonCandidateCCInc->SetLineColor(kGray);
hCutByCutMuonCandidateCCInc->SetLineWidth(2);

hCutByCutMuonCandidate->Divide(hCutByCutMuonCandidateDivide);
hCutByCutMuonCandidateCCQE->Divide(hCutByCutMuonCandidateDivideCCQE);
hCutByCutMuonCandidateCCRes->Divide(hCutByCutMuonCandidateDivideCCRes);
hCutByCutMuonCandidateCCDIS->Divide(hCutByCutMuonCandidateDivideCCDIS);
hCutByCutMuonCandidateOther->Divide(hCutByCutMuonCandidateDivideOther);
hCutByCutMuonCandidateNC->Divide(hCutByCutMuonCandidateDivideNC);
hCutByCutMuonCandidateCCCoh->Divide(hCutByCutMuonCandidatePurityDivide);
hCutByCutMuonCandidateCCInc->Divide(hCutByCutMuonCandidateDivideCCInc);

hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(1, "Num. Matched Events");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(2, "Track Score > 0.85");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(3, "Vertex Distance < 4cm");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(4, "Generation == 2");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(5, "Track Length > 20cm");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(6, "p #chi^{2} > 60");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(7, "#mu #chi^{2} < 30");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(8, "p #chi^{2} / #mu #chi^{2} > 7");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(9, "Pandora PDG == 14");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(10, "Start vertex of all daughters are at least 10cm from borders");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(11, "Neutrino vertex is in the fiducial volume");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(12, "Flash #chi^{2} < 10 OR topological score > 0.25");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(13, "Topological score > 0.06");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(14, "#nu Flash #chi^{2}/Obvious Cosmic Flash #chi^{2} < 5");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(15, "Num Tracks in Bubble >= 2");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(16, "Num Tracks in Bubble == 2");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(17, "Cone Angle < 20^{o}");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(18, "DoCA Cut < 7cm");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(19, "VA Cut < 7500ADC");

hCutByCutMuonCandidate->GetYaxis()->SetRangeUser(0,1.05);

hCutByCutMuonCandidate->Draw("E1");
hCutByCutMuonCandidateCCQE->Draw("E1same");
hCutByCutMuonCandidateCCRes->Draw("E1same");
hCutByCutMuonCandidateCCDIS->Draw("E1same");
hCutByCutMuonCandidateOther->Draw("E1same");
hCutByCutMuonCandidateNC->Draw("E1same");
hCutByCutMuonCandidateCCCoh->Draw("E1same");
hCutByCutMuonCandidateCCInc->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg18 = new TLegend();
leg18 = new TLegend(0.58,0.65,1.00,1.00);
leg18->SetTextSize(0.04);
leg18->SetTextAlign(12);
leg18->SetFillColor(kWhite);
leg18->SetLineColor(kWhite);
leg18->SetShadowColor(kWhite);
leg18->SetHeader("Interaction Type");
leg18->AddEntry(hCutByCutMuonCandidate,"CCCoh");
leg18->AddEntry(hCutByCutMuonCandidateCCCoh,"CCCoh Purity");
leg18->AddEntry(hCutByCutMuonCandidateCCInc,"CCInc");
leg18->AddEntry(hCutByCutMuonCandidateCCQE,"CCQE");
leg18->AddEntry(hCutByCutMuonCandidateCCRes,"CCRes");
leg18->AddEntry(hCutByCutMuonCandidateCCDIS,"CCDIS");
leg18->AddEntry(hCutByCutMuonCandidateOther,"Other");
leg18->AddEntry(hCutByCutMuonCandidateNC,"NC");
leg18->Draw();



TCanvas *c19 = new TCanvas("c19", "The Efficiency of the CC-Inclusive Further Event Selection for CC-Coh Events");
c19->SetTicks();
c19->SetFillColor(kWhite);

hFurtherEventSelection->SetLineColor(kBlue);
hFurtherEventSelection->SetLineWidth(2);

hFurtherEventSelection->GetXaxis()->SetBinLabel(1, "Pandora PDG == 14");
hFurtherEventSelection->GetXaxis()->SetBinLabel(2, "Start vertex of all daughters are at least 10cm from borders");
hFurtherEventSelection->GetXaxis()->SetBinLabel(3, "Neutrino vertex is in the fiducial volume");
hFurtherEventSelection->GetXaxis()->SetBinLabel(4, "Flash #chi^{2} < 10 OR topological score > 0.25");
hFurtherEventSelection->GetXaxis()->SetBinLabel(5, "Topological score > 0.06");

hFurtherEventSelection->Divide(hFurtherEventSelectionDivide);

hFurtherEventSelection->Draw("E1");



// -----------------------------
// --- TGraph for Cone Angle ---
// -----------------------------
int n = 181;
double x[181] = {0};
double ConeAngleEff[181] = {0};
double ConeAngleEffR[181] = {0};
double ConeAnglePurity[181] = {0};
double ConeAnglePurityR[181] = {0};
double CCCohConeAngle[181] = {0};
double CCCohConeAngleR[181] = {0};
double CCCohConeAngle2[181] = {0};
double CCCohConeAngleR2[181] = {0};
double CCResConeAngle[181] = {0};
double CCResConeAngleR[181] = {0};
double CCDISConeAngle[181] = {0};
double CCDISConeAngleR[181] = {0};
double OtherConeAngle[181] = {0};
double OtherConeAngleR[181] = {0};
double CCQEConeAngle[181] = {0};
double CCQEConeAngleR[181] = {0};
double NCConeAngle[181] = {0};
double NCConeAngleR[181] = {0};
double MaximizeCA[181] = {0};
double MaximizeCAR[181] = {0};

for (int i = 0; i < n; i++)
   {
   x[i] = i*180/n;
   for (int g = 1; g < i+1; g++)
      {
      CCCohConeAngle[i] += hTrueConeAngle->GetBinContent(g);
      CCCohConeAngleR[i] += hRecoConeAngle->GetBinContent(g);
      CCCohConeAngle2[i] += hTrueConeAngleCCCoh->GetBinContent(g);
      CCCohConeAngleR2[i] += hRecoConeAngleCCCoh->GetBinContent(g);
      CCResConeAngle[i] += hTrueConeAngleCCRes->GetBinContent(g);
      CCResConeAngleR[i] += hRecoConeAngleCCRes->GetBinContent(g);
      CCDISConeAngle[i] += hTrueConeAngleCCDIS->GetBinContent(g);
      CCDISConeAngleR[i] += hRecoConeAngleCCDIS->GetBinContent(g);
      OtherConeAngle[i] += hTrueConeAngleOther->GetBinContent(g);
      OtherConeAngleR[i] += hRecoConeAngleOther->GetBinContent(g);
      CCQEConeAngle[i] += hTrueConeAngleCCQE->GetBinContent(g);
      CCQEConeAngleR[i] += hRecoConeAngleCCQE->GetBinContent(g);
      NCConeAngle[i] += hTrueConeAngleNC->GetBinContent(g);
      NCConeAngleR[i] += hRecoConeAngleNC->GetBinContent(g);
      } // End g-Loop

   MaximizeCA[i] = CCCohConeAngle2[i]/pow(CCCohConeAngle2[i] + OtherConeAngle[i], 0.5);
   MaximizeCAR[i] = CCCohConeAngleR2[i]/pow(CCCohConeAngleR2[i] + OtherConeAngleR[i], 0.5);
   ConeAnglePurity[i] = 100*(CCCohConeAngle2[i])/(CCCohConeAngle2[i] + OtherConeAngle[i]);
   ConeAnglePurityR[i] = 100*(CCCohConeAngleR2[i])/(CCCohConeAngleR2[i] + OtherConeAngleR[i]);
   if (i == 0) MaximizeCA[i] = 0;
   if (i == 0) MaximizeCAR[i] = 0;
   if (i == 0) ConeAnglePurity[i] = 0;
   if (i == 0) ConeAnglePurityR[i] = 0;
   ConeAngleEff[i] = 100*(CCCohConeAngle2[i])/(hTrueConeAngleCCCoh->GetEntries());
   ConeAngleEffR[i] = 100*(CCCohConeAngleR2[i])/(hRecoConeAngleCCCoh->GetEntries());
   CCCohConeAngle[i] = CCCohConeAngle[i]*100/hTrueConeAngle->GetEntries();
   CCCohConeAngleR[i] = CCCohConeAngleR[i]*100/hRecoConeAngle->GetEntries();
   CCResConeAngle[i] = 100-(CCResConeAngle[i]*100/hTrueConeAngleCCRes->GetEntries());
   CCResConeAngleR[i] = 100-(CCResConeAngleR[i]*100/hRecoConeAngleCCRes->GetEntries());
   CCDISConeAngle[i] = 100-(CCDISConeAngle[i]*100/hTrueConeAngleCCDIS->GetEntries());
   CCDISConeAngleR[i] = 100-(CCDISConeAngleR[i]*100/hRecoConeAngleCCDIS->GetEntries());
   OtherConeAngle[i] = 100-(OtherConeAngle[i]*100/hTrueConeAngleOther->GetEntries());
   OtherConeAngleR[i] = 100-(OtherConeAngleR[i]*100/hRecoConeAngleOther->GetEntries());
   CCQEConeAngle[i] = 100-(CCQEConeAngle[i]*100/hTrueConeAngleCCQE->GetEntries());
   CCQEConeAngleR[i] = 100-(CCQEConeAngleR[i]*100/hRecoConeAngleCCQE->GetEntries());
   NCConeAngle[i] = 100-(NCConeAngle[i]*100/hTrueConeAngleNC->GetEntries());
   NCConeAngleR[i] = 100-(NCConeAngleR[i]*100/hRecoConeAngleNC->GetEntries());
   } // End i-Loop

TGraph* gMaximizeConeAngle = new TGraph(n, x, MaximizeCA);
gMaximizeConeAngle->SetTitle("MaximizeConeAngle");
gMaximizeConeAngle->SetName("MaximizeConeAngle");
gMaximizeConeAngle->SetFillColor(kWhite);
gMaximizeConeAngle->SetLineColor(kBlue);
gMaximizeConeAngle->SetLineWidth(2);
TGraph* gMaximizeConeAngleR = new TGraph(n, x, MaximizeCAR);
gMaximizeConeAngleR->SetTitle("MaximizeConeAngleR");
gMaximizeConeAngleR->SetName("MaximizeConeAngleR");
gMaximizeConeAngleR->SetFillColor(kWhite);
gMaximizeConeAngleR->SetLineColor(kRed);
gMaximizeConeAngleR->SetLineWidth(2);
TGraph* gConeAngleEff = new TGraph(n, x, ConeAngleEff);
gConeAngleEff->SetTitle("ConeAngleEff");
gConeAngleEff->SetName("ConeAngleEff");
gConeAngleEff->SetFillColor(kWhite);
gConeAngleEff->SetLineColor(kBlue);
gConeAngleEff->SetLineWidth(2);
TGraph* gConeAngleEffR = new TGraph(n, x, ConeAngleEffR);
gConeAngleEffR->SetTitle("ConeAngleEffR");
gConeAngleEffR->SetName("ConeAngleEffR");
gConeAngleEffR->SetFillColor(kWhite);
gConeAngleEffR->SetLineColor(kRed);
gConeAngleEffR->SetLineWidth(2);
TGraph* gConeAnglePurity = new TGraph(n, x, ConeAnglePurity);
gConeAnglePurity->SetTitle("ConeAnglePurity");
gConeAnglePurity->SetName("ConeAnglePurity");
gConeAnglePurity->SetFillColor(kWhite);
gConeAnglePurity->SetLineColor(kCyan);
gConeAnglePurity->SetLineStyle(kDashed);
gConeAnglePurity->SetLineWidth(2);
TGraph* gConeAnglePurityR = new TGraph(n, x, ConeAnglePurityR);
gConeAnglePurityR->SetTitle("ConeAnglePurityR");
gConeAnglePurityR->SetName("ConeAnglePurityR");
gConeAnglePurityR->SetFillColor(kWhite);
gConeAnglePurityR->SetLineColor(kCyan);
gConeAnglePurityR->SetLineWidth(2);
TGraph* gCCCohConeAngle = new TGraph(n, x, CCCohConeAngle);
gCCCohConeAngle->SetTitle("gCCCohConeAngle");
gCCCohConeAngle->SetName("gCCCohConeAngle");
gCCCohConeAngle->SetFillColor(kWhite);
gCCCohConeAngle->SetLineColor(kBlue);
gCCCohConeAngle->SetLineStyle(kDashed);
gCCCohConeAngle->SetLineWidth(2);
TGraph* gCCCohConeAngleR = new TGraph(n, x, CCCohConeAngleR);
gCCCohConeAngleR->SetTitle("gCCCohConeAngleR");
gCCCohConeAngleR->SetName("gCCCohConeAngleR");
gCCCohConeAngleR->SetFillColor(kWhite);
gCCCohConeAngleR->SetLineColor(kBlue);
gCCCohConeAngleR->SetLineWidth(2);
TGraph* gCCResConeAngle = new TGraph(n, x, CCResConeAngle);
gCCResConeAngle->SetTitle("gCCResConeAngle");
gCCResConeAngle->SetName("gCCResConeAngle");
gCCResConeAngle->SetFillColor(kWhite);
gCCResConeAngle->SetLineColor(kRed);
gCCResConeAngle->SetLineStyle(kDashed);
gCCResConeAngle->SetLineWidth(2);
TGraph* gCCResConeAngleR = new TGraph(n, x, CCResConeAngleR);
gCCResConeAngleR->SetTitle("gCCResConeAngleR");
gCCResConeAngleR->SetName("gCCResConeAngleR");
gCCResConeAngleR->SetFillColor(kWhite);
gCCResConeAngleR->SetLineColor(kRed);
gCCResConeAngleR->SetLineWidth(2);
TGraph* gCCDISConeAngle = new TGraph(n, x, CCDISConeAngle);
gCCDISConeAngle->SetTitle("gCCDISConeAngle");
gCCDISConeAngle->SetName("gCCDISConeAngle");
gCCDISConeAngle->SetFillColor(kWhite);
gCCDISConeAngle->SetLineColor(kOrange);
gCCDISConeAngle->SetLineStyle(kDashed);
gCCDISConeAngle->SetLineWidth(2);
TGraph* gCCDISConeAngleR = new TGraph(n, x, CCDISConeAngleR);
gCCDISConeAngleR->SetTitle("gCCDISConeAngleR");
gCCDISConeAngleR->SetName("gCCDISConeAngleR");
gCCDISConeAngleR->SetFillColor(kWhite);
gCCDISConeAngleR->SetLineColor(kOrange);
gCCDISConeAngleR->SetLineWidth(2);
TGraph* gOtherConeAngle = new TGraph(n, x, OtherConeAngle);
gOtherConeAngle->SetTitle("gOtherConeAngle");
gOtherConeAngle->SetName("gOtherConeAngle");
gOtherConeAngle->SetFillColor(kWhite);
gOtherConeAngle->SetLineColor(kBlack);
gOtherConeAngle->SetLineStyle(kDashed);
gOtherConeAngle->SetLineWidth(2);
TGraph* gOtherConeAngleR = new TGraph(n, x, OtherConeAngleR);
gOtherConeAngleR->SetTitle("gOtherConeAngleR");
gOtherConeAngleR->SetName("gOtherConeAngleR");
gOtherConeAngleR->SetFillColor(kWhite);
gOtherConeAngleR->SetLineColor(kBlack);
gOtherConeAngleR->SetLineWidth(2);
TGraph* gCCQEConeAngle = new TGraph(n, x, CCQEConeAngle);
gCCQEConeAngle->SetTitle("gCCQEConeAngle");
gCCQEConeAngle->SetName("gCCQEConeAngle");
gCCQEConeAngle->SetFillColor(kWhite);
gCCQEConeAngle->SetLineColor(kViolet);
gCCQEConeAngle->SetLineStyle(kDashed);
gCCQEConeAngle->SetLineWidth(2);
TGraph* gCCQEConeAngleR = new TGraph(n, x, CCQEConeAngleR);
gCCQEConeAngleR->SetTitle("gCCQEConeAngleR");
gCCQEConeAngleR->SetName("gCCQEConeAngleR");
gCCQEConeAngleR->SetFillColor(kWhite);
gCCQEConeAngleR->SetLineColor(kViolet);
gCCQEConeAngleR->SetLineWidth(2);
TGraph* gNCConeAngle = new TGraph(n, x, NCConeAngle);
gNCConeAngle->SetTitle("gNCConeAngle");
gNCConeAngle->SetName("gNCConeAngle");
gNCConeAngle->SetFillColor(kWhite);
gNCConeAngle->SetLineColor(kGreen);
gNCConeAngle->SetLineStyle(kDashed);
gNCConeAngle->SetLineWidth(2);
TGraph* gNCConeAngleR = new TGraph(n, x, NCConeAngleR);
gNCConeAngleR->SetTitle("gNCConeAngleR");
gNCConeAngleR->SetName("gNCConeAngleR");
gNCConeAngleR->SetFillColor(kWhite);
gNCConeAngleR->SetLineColor(kGreen);
gNCConeAngleR->SetLineWidth(2);

TCanvas *c24 = new TCanvas("c24", "Cone Angle TGraphs");
c24->SetTicks();
c24->SetFillColor(kWhite);

gCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gCCCohConeAngle->GetXaxis()->CenterTitle();
gCCCohConeAngle->GetXaxis()->SetRangeUser(0,180);

gCCCohConeAngle->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohConeAngle->GetYaxis()->CenterTitle();

gCCCohConeAngle->Draw();
gCCCohConeAngleR->Draw("same");
//gCCResConeAngle->Draw("same");
//gCCResConeAngleR->Draw("same");
//gCCDISConeAngle->Draw("same");
//gCCDISConeAngleR->Draw("same");
gOtherConeAngle->Draw("same");
gOtherConeAngleR->Draw("same");
//gCCQEConeAngle->Draw("same");
//gCCQEConeAngleR->Draw("same");
//gNCConeAngle->Draw("same");
//gNCConeAngleR->Draw("same");
//gConeAnglePurity->Draw("same");
//gConeAnglePurityR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg24 = new TLegend();
leg24 = new TLegend(0.58,0.65,1.00,1.00);
leg24->SetTextSize(0.04);
leg24->SetTextAlign(12);
leg24->SetFillColor(kWhite);
leg24->SetLineColor(kWhite);
leg24->SetShadowColor(kWhite);
leg24->SetHeader("Channel");
leg24->AddEntry(gCCCohConeAngle,"CCCoh True");
leg24->AddEntry(gCCCohConeAngleR,"CCCoh Reco");
//leg24->AddEntry(gConeAnglePurity,"CCCoh Purity True");
//leg24->AddEntry(gConeAnglePurityR,"CCCoh Purity Reco");
//leg24->AddEntry(gCCQEConeAngle,"CCQE True");
//leg24->AddEntry(gCCQEConeAngleR,"CCQE Reco");
//leg24->AddEntry(gCCResConeAngle,"CCRes True");
//leg24->AddEntry(gCCResConeAngleR,"CCRes Reco");
//leg24->AddEntry(gCCDISConeAngle,"CCDIS True");
//leg24->AddEntry(gCCDISConeAngleR,"CCDIS Reco");
leg24->AddEntry(gOtherConeAngle,"Other True");
leg24->AddEntry(gOtherConeAngleR,"Other Reco");
//leg24->AddEntry(gNCConeAngle,"NC True");
//leg24->AddEntry(gNCConeAngleR,"NC Reco");
leg24->Draw();
// -----------------------------



TCanvas *c20 = new TCanvas("c20", "The True and Reconstructed Cone Angles for CC-Coh Events", 2);
c20->SetTicks();
c20->SetFillColor(kWhite);

// Area normalzing the plot 
hTrueConeAngle->Scale(1/hTrueConeAngle->Integral());
hRecoConeAngle->Scale(1/hRecoConeAngle->Integral());
hTrueConeAngleCCRes->Scale(1/hTrueConeAngleCCRes->Integral());
hRecoConeAngleCCRes->Scale(1/hRecoConeAngleCCRes->Integral());
hTrueConeAngleCCDIS->Scale(1/hTrueConeAngleCCDIS->Integral());
hRecoConeAngleCCDIS->Scale(1/hRecoConeAngleCCDIS->Integral());
hTrueConeAngleOther->Scale(1/hTrueConeAngleOther->Integral());
hRecoConeAngleOther->Scale(1/hRecoConeAngleOther->Integral());
hTrueConeAngleCCQE->Scale(1/hTrueConeAngleCCQE->Integral());
hRecoConeAngleCCQE->Scale(1/hRecoConeAngleCCQE->Integral());
hTrueConeAngleNC->Scale(1/hTrueConeAngleNC->Integral());
hRecoConeAngleNC->Scale(1/hRecoConeAngleNC->Integral());


hTrueConeAngle->SetLineColor(kBlue);
hTrueConeAngle->SetLineStyle(kDashed);
hTrueConeAngle->SetLineWidth(3);
hTrueConeAngle->SetFillColor(kBlue);
hTrueConeAngle->SetFillStyle(3005);

hRecoConeAngle->SetLineColor(kBlue);
hRecoConeAngle->SetLineWidth(3);
hRecoConeAngle->SetFillColor(kBlue);
hRecoConeAngle->SetFillStyle(3003);


hTrueConeAngleCCQE->SetLineColor(kViolet);
hTrueConeAngleCCQE->SetLineStyle(kDashed);
hTrueConeAngleCCQE->SetLineWidth(3);
hTrueConeAngleCCQE->SetFillColor(kViolet);
hTrueConeAngleCCQE->SetFillStyle(3005);

hRecoConeAngleCCQE->SetLineColor(kViolet);
hRecoConeAngleCCQE->SetLineWidth(3);
hRecoConeAngleCCQE->SetFillColor(kViolet);
hRecoConeAngleCCQE->SetFillStyle(3003);


hTrueConeAngleCCRes->SetLineColor(kRed);
hTrueConeAngleCCRes->SetLineStyle(kDashed);
hTrueConeAngleCCRes->SetLineWidth(3);
hTrueConeAngleCCRes->SetFillColor(kRed);
hTrueConeAngleCCRes->SetFillStyle(3005);

hRecoConeAngleCCRes->SetLineColor(kRed);
hRecoConeAngleCCRes->SetLineWidth(3);
hRecoConeAngleCCRes->SetFillColor(kRed);
hRecoConeAngleCCRes->SetFillStyle(3003);


hTrueConeAngleCCDIS->SetLineColor(kOrange);
hTrueConeAngleCCDIS->SetLineStyle(kDashed);
hTrueConeAngleCCDIS->SetLineWidth(3);
hTrueConeAngleCCDIS->SetFillColor(kOrange);
hTrueConeAngleCCDIS->SetFillStyle(3005);

hRecoConeAngleCCDIS->SetLineColor(kOrange);
hRecoConeAngleCCDIS->SetLineWidth(3);
hRecoConeAngleCCDIS->SetFillColor(kOrange);
hRecoConeAngleCCDIS->SetFillStyle(3003);


hTrueConeAngleOther->SetLineColor(kBlack);
hTrueConeAngleOther->SetLineStyle(kDashed);
hTrueConeAngleOther->SetLineWidth(3);
hTrueConeAngleOther->SetFillColor(kBlack);
hTrueConeAngleOther->SetFillStyle(3005);

hRecoConeAngleOther->SetLineColor(kBlack);
hRecoConeAngleOther->SetLineWidth(3);
hRecoConeAngleOther->SetFillColor(kBlack);
hRecoConeAngleOther->SetFillStyle(3003);


hTrueConeAngleNC->SetLineColor(kGreen);
hTrueConeAngleNC->SetLineStyle(kDashed);
hTrueConeAngleNC->SetLineWidth(3);
hTrueConeAngleNC->SetFillColor(kGreen);
hTrueConeAngleNC->SetFillStyle(3005);

hRecoConeAngleNC->SetLineColor(kGreen);
hRecoConeAngleNC->SetLineWidth(3);
hRecoConeAngleNC->SetFillColor(kGreen);
hRecoConeAngleNC->SetFillStyle(3003);


hTrueConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hTrueConeAngle->GetXaxis()->CenterTitle();
//hTrueConeAngle->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueConeAngle->GetYaxis()->SetTitle("Number of Events");
hTrueConeAngle->GetYaxis()->CenterTitle();

hTrueConeAngle->Draw("histo");
hRecoConeAngle->Draw("histosame");
//hTrueConeAngleCCQE->Draw("histosame");
//hRecoConeAngleCCQE->Draw("histosame");
//hTrueConeAngleCCRes->Draw("histosame");
//hRecoConeAngleCCRes->Draw("histosame");
//hTrueConeAngleCCDIS->Draw("histosame");
//hRecoConeAngleCCDIS->Draw("histosame");
hTrueConeAngleOther->Draw("histosame");
hRecoConeAngleOther->Draw("histosame");
//hTrueConeAngleNC->Draw("histosame");
//hRecoConeAngleNC->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg20 = new TLegend();
leg20 = new TLegend(0.58,0.65,1.00,1.00);
leg20->SetTextSize(0.04);
leg20->SetTextAlign(12);
leg20->SetFillColor(kWhite);
leg20->SetLineColor(kWhite);
leg20->SetShadowColor(kWhite);
leg20->SetHeader("Cone Angles");
leg20->AddEntry(hTrueConeAngle,"CCCoh True");
leg20->AddEntry(hRecoConeAngle,"CCCoh Reco");
//leg20->AddEntry(hTrueConeAngleCCQE,"CCQE True");
//leg20->AddEntry(hRecoConeAngleCCQE,"CCQE Reco");
//leg20->AddEntry(hTrueConeAngleCCRes,"CCRes True");
//leg20->AddEntry(hRecoConeAngleCCRes,"CCRes Reco");
//leg20->AddEntry(hTrueConeAngleCCDIS,"CCDIS True");
//leg20->AddEntry(hRecoConeAngleCCDIS,"CCDIS Reco");
leg20->AddEntry(hTrueConeAngleOther,"Other True");
leg20->AddEntry(hRecoConeAngleOther,"Other Reco");
//leg20->AddEntry(hTrueConeAngleNC,"NC True");
//leg20->AddEntry(hRecoConeAngleNC,"NC Reco");
leg20->Draw();



// -----------------------
// --- TGraph for DoCA ---
// -----------------------
int m = 101;
double y[101] = {0};
double DoCAEff[101] = {0};
double DoCAPurity[101] = {0};
double DoCAPurityR[101] = {0};
double CCCohDoCA[101] = {0};
double CCCohDoCAR[101] = {0};
double CCCohDoCA2[101] = {0};
double CCCohDoCAR2[101] = {0};
double CCCohDoCARejection[101] = {0};
double CCResDoCA[101] = {0};
double CCResDoCAR[101] = {0};
double CCDISDoCA[101] = {0};
double CCDISDoCAR[101] = {0};
double OtherDoCA[101] = {0};
double OtherDoCAR[101] = {0};
double CCQEDoCA[101] = {0};
double CCQEDoCAR[101] = {0};
double NCDoCA[101] = {0};
double NCDoCAR[101] = {0};
double CosmicDoCAR[101] = {0};
double MaximizeDoCA[101] = {0};
double MaximizeDoCAR[101] = {0};

for (int i = 0; i < m; i++) {
   y[i] = i*100/m;
   for (int g = 1; g < i+1; g++)
      {
      CCCohDoCA[i] += hTrueDoCA->GetBinContent(g);
      CCCohDoCAR[i] += hRecoDoCA->GetBinContent(g);
      CCCohDoCA2[i] += hTrueDoCACCCoh->GetBinContent(g);
      CCCohDoCAR2[i] += hRecoDoCACCCoh->GetBinContent(g);
      CCResDoCA[i] += hTrueDoCACCRes->GetBinContent(g);
      CCResDoCAR[i] += hRecoDoCACCRes->GetBinContent(g);
      CCDISDoCA[i] += hTrueDoCACCDIS->GetBinContent(g);
      CCDISDoCAR[i] += hRecoDoCACCDIS->GetBinContent(g);
      OtherDoCA[i] += hTrueDoCAOther->GetBinContent(g);
      OtherDoCAR[i] += hRecoDoCAOther->GetBinContent(g);
      CCQEDoCA[i] += hTrueDoCACCQE->GetBinContent(g);
      CCQEDoCAR[i] += hRecoDoCACCQE->GetBinContent(g);
      NCDoCA[i] += hTrueDoCANC->GetBinContent(g);
      NCDoCAR[i] += hRecoDoCANC->GetBinContent(g);
      CosmicDoCAR[i] += hRecoDoCACosmic->GetBinContent(g);
      } // End g-Loop


   CCCohDoCARejection[i] = hRecoDoCA->GetEntries() - CCCohDoCA[i];

   MaximizeDoCA[i] = CCCohDoCA2[i]/pow(CCCohDoCA2[i] + OtherDoCA[i], 0.5);
   MaximizeDoCAR[i] = CCCohDoCAR2[i]/pow(CCCohDoCAR2[i] + OtherDoCAR[i], 0.5);
   DoCAEff[i] = 100*(CCCohDoCA[i])/(hTrueDoCA->GetEntries());
   DoCAPurity[i] = 100*(CCCohDoCA2[i])/(CCCohDoCA2[i] + OtherDoCA[i]);
   DoCAPurityR[i] = 100*(CCCohDoCAR2[i])/(CCCohDoCAR2[i] + OtherDoCAR[i]);
   if (i == 0) MaximizeDoCA[i] = 0;
   if (i == 0) MaximizeDoCAR[i] = 0;
   if (i == 0) DoCAPurity[i] = 0;
   if (i == 0) DoCAPurityR[i] = 0;
   CCCohDoCA[i] = CCCohDoCA[i]*100/(hTrueDoCA->GetEntries() - hTrueDoCA->GetBinContent(102));
   CCCohDoCAR[i] = CCCohDoCAR[i]*100/hRecoDoCA->GetEntries();
   CCCohDoCARejection[i] = CCCohDoCARejection[i]*100/hRecoDoCA->GetEntries();
   CCResDoCA[i] = 100-(CCResDoCA[i]*100/(hTrueDoCACCRes->GetEntries() - hTrueDoCACCRes->GetBinContent(102)));
   CCResDoCAR[i] = 100-(CCResDoCAR[i]*100/hRecoDoCACCRes->GetEntries());
   CCDISDoCA[i] = 100-(CCDISDoCA[i]*100/(hTrueDoCACCDIS->GetEntries() - hTrueDoCACCDIS->GetBinContent(102)));
   CCDISDoCAR[i] = 100-(CCDISDoCAR[i]*100/hRecoDoCACCDIS->GetEntries());
   OtherDoCA[i] = 100-(OtherDoCA[i]*100/(hTrueDoCAOther->GetEntries() - hTrueDoCAOther->GetBinContent(102)));
   OtherDoCAR[i] = 100-(OtherDoCAR[i]*100/hRecoDoCAOther->GetEntries());
   CCQEDoCA[i] = 100-(CCQEDoCA[i]*100/(hTrueDoCACCQE->GetEntries() - hTrueDoCACCQE->GetBinContent(102)));
   CCQEDoCAR[i] = 100-(CCQEDoCAR[i]*100/hRecoDoCACCQE->GetEntries());
   NCDoCA[i] = 100-(NCDoCA[i]*100/(hTrueDoCANC->GetEntries() - hTrueDoCANC->GetBinContent(102)));
   NCDoCAR[i] = 100-(NCDoCAR[i]*100/hRecoDoCANC->GetEntries());
   CosmicDoCAR[i] = 100-(CosmicDoCAR[i]*100/hRecoDoCACosmic->GetEntries());
} // End i-Loop

TGraph* gMaximizeDoCA = new TGraph(m, y, MaximizeDoCA);
gMaximizeDoCA->SetTitle("MaximizeDoCA");
gMaximizeDoCA->SetName("MaximizeDoCA");
gMaximizeDoCA->SetFillColor(kWhite);
gMaximizeDoCA->SetLineColor(kBlue);
gMaximizeDoCA->SetLineWidth(2);
TGraph* gMaximizeDoCAR = new TGraph(m, y, MaximizeDoCAR);
gMaximizeDoCAR->SetTitle("MaximizeDoCAR");
gMaximizeDoCAR->SetName("MaximizeDoCAR");
gMaximizeDoCAR->SetFillColor(kWhite);
gMaximizeDoCAR->SetLineColor(kRed);
gMaximizeDoCAR->SetLineWidth(2);
TGraph* gDoCAEff = new TGraph(m, y, DoCAEff);
gDoCAEff->SetTitle("gDoCAEff");
gDoCAEff->SetName("gDoCAEff");
gDoCAEff->SetFillColor(kWhite);
gDoCAEff->SetLineColor(kBlue);
gDoCAEff->SetLineWidth(2);
TGraph* gDoCAPurity = new TGraph(m, y, DoCAPurity);
gDoCAPurity->SetTitle("gDoCAPurity");
gDoCAPurity->SetName("gDoCAPurity");
gDoCAPurity->SetFillColor(kWhite);
gDoCAPurity->SetLineColor(kCyan);
gDoCAPurity->SetLineStyle(kDashed);
gDoCAPurity->SetLineWidth(2);
TGraph* gDoCAPurityR = new TGraph(m, y, DoCAPurityR);
gDoCAPurityR->SetTitle("gDoCAPurityR");
gDoCAPurityR->SetName("gDoCAPurityR");
gDoCAPurityR->SetFillColor(kWhite);
gDoCAPurityR->SetLineColor(kCyan);
gDoCAPurityR->SetLineWidth(2);
TGraph* gCCCohDoCA = new TGraph(m, y, CCCohDoCA);
gCCCohDoCA->SetTitle("gCCCohDoCA");
gCCCohDoCA->SetName("gCCCohDoCA");
gCCCohDoCA->SetFillColor(kWhite);
gCCCohDoCA->SetLineColor(kBlue);
gCCCohDoCA->SetLineStyle(kDashed);
gCCCohDoCA->SetLineWidth(2);
TGraph* gCCCohDoCAR = new TGraph(m, y, CCCohDoCAR);
gCCCohDoCAR->SetTitle("gCCCohDoCAR");
gCCCohDoCAR->SetName("gCCCohDoCAR");
gCCCohDoCAR->SetFillColor(kWhite);
gCCCohDoCAR->SetLineColor(kBlue);
gCCCohDoCAR->SetLineWidth(2);
TGraph* gCCResDoCA = new TGraph(m, y, CCResDoCA);
gCCResDoCA->SetTitle("gCCResDoCA");
gCCResDoCA->SetName("gCCResDoCA");
gCCResDoCA->SetFillColor(kWhite);
gCCResDoCA->SetLineColor(kRed);
gCCResDoCA->SetLineStyle(kDashed);
gCCResDoCA->SetLineWidth(2);
TGraph* gCCResDoCAR = new TGraph(m, y, CCResDoCAR);
gCCResDoCAR->SetTitle("gCCResDoCAR");
gCCResDoCAR->SetName("gCCResDoCAR");
gCCResDoCAR->SetFillColor(kWhite);
gCCResDoCAR->SetLineColor(kRed);
gCCResDoCAR->SetLineWidth(2);
TGraph* gCCDISDoCA = new TGraph(m, y, CCDISDoCA);
gCCDISDoCA->SetTitle("gCCDISDoCA");
gCCDISDoCA->SetName("gCCDISDoCA");
gCCDISDoCA->SetFillColor(kWhite);
gCCDISDoCA->SetLineColor(kOrange);
gCCDISDoCA->SetLineStyle(kDashed);
gCCDISDoCA->SetLineWidth(2);
TGraph* gCCDISDoCAR = new TGraph(m, y, CCDISDoCAR);
gCCDISDoCAR->SetTitle("gCCDISDoCAR");
gCCDISDoCAR->SetName("gCCDISDoCAR");
gCCDISDoCAR->SetFillColor(kWhite);
gCCDISDoCAR->SetLineColor(kOrange);
gCCDISDoCAR->SetLineWidth(2);
TGraph* gOtherDoCA = new TGraph(m, y, OtherDoCA);
gOtherDoCA->SetTitle("gOtherDoCA");
gOtherDoCA->SetName("gOtherDoCA");
gOtherDoCA->SetFillColor(kWhite);
gOtherDoCA->SetLineColor(kBlack);
gOtherDoCA->SetLineStyle(kDashed);
gOtherDoCA->SetLineWidth(2);
TGraph* gOtherDoCAR = new TGraph(m, y, OtherDoCAR);
gOtherDoCAR->SetTitle("gOtherDoCAR");
gOtherDoCAR->SetName("gOtherDoCAR");
gOtherDoCAR->SetFillColor(kWhite);
gOtherDoCAR->SetLineColor(kBlack);
gOtherDoCAR->SetLineWidth(2);
TGraph* gCCQEDoCA = new TGraph(m, y, CCQEDoCA);
gCCQEDoCA->SetTitle("gCCQEDoCA");
gCCQEDoCA->SetName("gCCQEDoCA");
gCCQEDoCA->SetFillColor(kWhite);
gCCQEDoCA->SetLineColor(kViolet);
gCCQEDoCA->SetLineStyle(kDashed);
gCCQEDoCA->SetLineWidth(2);
TGraph* gCCQEDoCAR = new TGraph(m, y, CCQEDoCAR);
gCCQEDoCAR->SetTitle("gCCQEDoCAR");
gCCQEDoCAR->SetName("gCCQEDoCAR");
gCCQEDoCAR->SetFillColor(kWhite);
gCCQEDoCAR->SetLineColor(kViolet);
gCCQEDoCAR->SetLineWidth(2);
TGraph* gNCDoCA = new TGraph(m, y, NCDoCA);
gNCDoCA->SetTitle("gNCDoCA");
gNCDoCA->SetName("gNCDoCA");
gNCDoCA->SetFillColor(kWhite);
gNCDoCA->SetLineColor(kGreen);
gNCDoCA->SetLineStyle(kDashed);
gNCDoCA->SetLineWidth(2);
TGraph* gNCDoCAR = new TGraph(m, y, NCDoCAR);
gNCDoCAR->SetTitle("gNCDoCAR");
gNCDoCAR->SetName("gNCDoCAR");
gNCDoCAR->SetFillColor(kWhite);
gNCDoCAR->SetLineColor(kGreen);
gNCDoCAR->SetLineWidth(2);
TGraph* gCosmicDoCAR = new TGraph(m, y, CosmicDoCAR);
gCosmicDoCAR->SetTitle("gCosmicDoCAR");
gCosmicDoCAR->SetName("gCosmicDoCAR");
gCosmicDoCAR->SetFillColor(kWhite);
gCosmicDoCAR->SetLineColor(kMagenta);
gCosmicDoCAR->SetLineWidth(2);

TCanvas *c25 = new TCanvas("c25", "DoCA TGraphs");
c25->SetTicks();
c25->SetFillColor(kWhite);

gCCCohDoCAR->GetXaxis()->SetTitle("DoCA [cm]");
gCCCohDoCAR->GetXaxis()->CenterTitle();
gCCCohDoCAR->GetXaxis()->SetRangeUser(0,100);

gCCCohDoCAR->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohDoCAR->GetYaxis()->CenterTitle();

gCCCohDoCAR->Draw();
gCCCohDoCA->Draw("same");
//gCCResDoCA->Draw("same");
//gCCResDoCAR->Draw("same");
//gCCDISDoCA->Draw("same");
//gCCDISDoCAR->Draw("same");
gOtherDoCA->Draw("same");
gOtherDoCAR->Draw("same");
//gCCQEDoCA->Draw("same");
//gCCQEDoCAR->Draw("same");
//gNCDoCA->Draw("same");
//gNCDoCAR->Draw("same");
//gDoCAPurity->Draw("same");
//gDoCAPurityR->Draw("same");
gCosmicDoCAR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg25 = new TLegend();
leg25 = new TLegend(0.58,0.65,1.00,1.00);
leg25->SetTextSize(0.04);
leg25->SetTextAlign(12);
leg25->SetFillColor(kWhite);
leg25->SetLineColor(kWhite);
leg25->SetShadowColor(kWhite);
leg25->SetHeader("Channel");
leg25->AddEntry(gCCCohDoCA,"CCCoh True");
leg25->AddEntry(gCCCohDoCAR,"CCCoh Reco");
//leg25->AddEntry(gDoCAPurity,"CCCoh Purity True");
//leg25->AddEntry(gDoCAPurityR,"CCCoh Purity Reco");
//leg25->AddEntry(gCCQEDoCA,"CCQE True");
//leg25->AddEntry(gCCQEDoCAR,"CCQE Reco");
//leg25->AddEntry(gCCResDoCA,"CCRes True");
//leg25->AddEntry(gCCResDoCAR,"CCRes Reco");
//leg25->AddEntry(gCCDISDoCA,"CCDIS True");
//leg25->AddEntry(gCCDISDoCAR,"CCDIS Reco");
leg25->AddEntry(gOtherDoCA,"Other True");
leg25->AddEntry(gOtherDoCAR,"Other Reco");
//leg25->AddEntry(gNCDoCA,"NC True");
//leg25->AddEntry(gNCDoCAR,"NC Reco");
leg25->AddEntry(gCosmicDoCAR,"Cosmics");
leg25->Draw();
// -----------------------



TCanvas *c21 = new TCanvas("c21", "The True and Reconstructed Distance of Closest Approach for CC-Coh Events", 2);
c21->SetTicks();
c21->SetFillColor(kWhite);

// Area normalzing the plot 
hTrueDoCA->Scale(1/hTrueDoCA->Integral());
hRecoDoCA->Scale(1/hRecoDoCA->Integral());
hTrueDoCACCRes->Scale(1/hTrueDoCACCRes->Integral());
hRecoDoCACCRes->Scale(1/hRecoDoCACCRes->Integral());
hTrueDoCACCDIS->Scale(1/hTrueDoCACCDIS->Integral());
hRecoDoCACCDIS->Scale(1/hRecoDoCACCDIS->Integral());
hTrueDoCAOther->Scale(1/hTrueDoCAOther->Integral());
hRecoDoCAOther->Scale(1/hRecoDoCAOther->Integral());
hTrueDoCACCQE->Scale(1/hTrueDoCACCQE->Integral());
hRecoDoCACCQE->Scale(1/hRecoDoCACCQE->Integral());
hTrueDoCANC->Scale(1/hTrueDoCANC->Integral());
hRecoDoCANC->Scale(1/hRecoDoCANC->Integral());
hRecoDoCACosmic->Scale(1/hRecoDoCACosmic->Integral());


hTrueDoCA->SetLineColor(kBlue);
hTrueDoCA->SetLineStyle(kDashed);
hTrueDoCA->SetLineWidth(2);
hTrueDoCA->SetFillColor(kBlue);
hTrueDoCA->SetFillStyle(3005);

hRecoDoCA->SetLineColor(kBlue);
hRecoDoCA->SetLineWidth(2);
hRecoDoCA->SetFillColor(kBlue);
hRecoDoCA->SetFillStyle(3006);


hTrueDoCACCQE->SetLineColor(kViolet);
hTrueDoCACCQE->SetLineStyle(kDashed);
hTrueDoCACCQE->SetLineWidth(2);
hTrueDoCACCQE->SetFillColor(kViolet);
hTrueDoCACCQE->SetFillStyle(3005);

hRecoDoCACCQE->SetLineColor(kViolet);
hRecoDoCACCQE->SetLineWidth(2);
hRecoDoCACCQE->SetFillColor(kViolet);
hRecoDoCACCQE->SetFillStyle(3006);


hTrueDoCACCRes->SetLineColor(kRed);
hTrueDoCACCRes->SetLineStyle(kDashed);
hTrueDoCACCRes->SetLineWidth(2);
hTrueDoCACCRes->SetFillColor(kRed);
hTrueDoCACCRes->SetFillStyle(3005);

hRecoDoCACCRes->SetLineColor(kRed);
hRecoDoCACCRes->SetLineWidth(2);
hRecoDoCACCRes->SetFillColor(kRed);
hRecoDoCACCRes->SetFillStyle(3006);


hTrueDoCACCDIS->SetLineColor(kOrange);
hTrueDoCACCDIS->SetLineStyle(kDashed);
hTrueDoCACCDIS->SetLineWidth(2);
hTrueDoCACCDIS->SetFillColor(kOrange);
hTrueDoCACCDIS->SetFillStyle(3005);

hRecoDoCACCDIS->SetLineColor(kOrange);
hRecoDoCACCDIS->SetLineWidth(2);
hRecoDoCACCDIS->SetFillColor(kOrange);
hRecoDoCACCDIS->SetFillStyle(3006);


hTrueDoCAOther->SetLineColor(kBlack);
hTrueDoCAOther->SetLineStyle(kDashed);
hTrueDoCAOther->SetLineWidth(2);
hTrueDoCAOther->SetFillColor(kBlack);
hTrueDoCAOther->SetFillStyle(3005);

hRecoDoCAOther->SetLineColor(kBlack);
hRecoDoCAOther->SetLineWidth(2);
hRecoDoCAOther->SetFillColor(kBlack);
hRecoDoCAOther->SetFillStyle(3006);


hTrueDoCANC->SetLineColor(kGreen);
hTrueDoCANC->SetLineStyle(kDashed);
hTrueDoCANC->SetLineWidth(2);
hTrueDoCANC->SetFillColor(kGreen);
hTrueDoCANC->SetFillStyle(3005);

hRecoDoCANC->SetLineColor(kGreen);
hRecoDoCANC->SetLineWidth(2);
hRecoDoCANC->SetFillColor(kGreen);
hRecoDoCANC->SetFillStyle(3006);


hRecoDoCACosmic->SetLineColor(kMagenta);
hRecoDoCACosmic->SetLineWidth(2);
hRecoDoCACosmic->SetFillColor(kMagenta);
hRecoDoCACosmic->SetFillStyle(3006);


hTrueDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hTrueDoCA->GetXaxis()->CenterTitle();
//hTrueDoCA->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueDoCA->GetYaxis()->SetTitle("Number of Events");
hTrueDoCA->GetYaxis()->CenterTitle();

hTrueDoCA->Draw("histo");
hRecoDoCA->Draw("histosame");
//hTrueDoCACCQE->Draw("histosame");
//hRecoDoCACCQE->Draw("histosame");
//hTrueDoCACCRes->Draw("histosame");
//hRecoDoCACCRes->Draw("histosame");
//hTrueDoCACCDIS->Draw("histosame");
//hRecoDoCACCDIS->Draw("histosame");
hTrueDoCAOther->Draw("histosame");
hRecoDoCAOther->Draw("histosame");
//hTrueDoCANC->Draw("histosame");
//hRecoDoCANC->Draw("histosame");
hRecoDoCACosmic->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg21 = new TLegend();
leg21 = new TLegend(0.58,0.65,1.00,1.00);
leg21->SetTextSize(0.04);
leg21->SetTextAlign(12);
leg21->SetFillColor(kWhite);
leg21->SetLineColor(kWhite);
leg21->SetShadowColor(kWhite);
leg21->SetHeader("Distance of Closest Approach");
leg21->AddEntry(hTrueDoCA,"CCCoh True");
leg21->AddEntry(hRecoDoCA,"CCCoh Reco");
//leg21->AddEntry(hTrueDoCACCQE,"CCQE True");
//leg21->AddEntry(hRecoDoCACCQE,"CCQE Reco");
//leg21->AddEntry(hTrueDoCACCRes,"CCRes True");
//leg21->AddEntry(hRecoDoCACCRes,"CCRes Reco");
//leg21->AddEntry(hTrueDoCACCDIS,"CCDIS True");
//leg21->AddEntry(hRecoDoCACCDIS,"CCDIS Reco");
leg21->AddEntry(hTrueDoCAOther,"Other True");
leg21->AddEntry(hRecoDoCAOther,"Other Reco");
//leg21->AddEntry(hTrueDoCANC,"NC True");
//leg21->AddEntry(hRecoDoCANC,"NC Reco");
leg21->AddEntry(hRecoDoCACosmic,"Cosmics");
leg21->Draw();


/*
TCanvas *c22 = new TCanvas("c22", "The Stacked Hit Charge for CC-Coh Events within Vertex Activity Distance", 10, 10, 700, 700);
c22->SetTicks();
c22->SetFillColor(kWhite);

// Setting the Fill Colors
hRecoVA0->SetLineColor(kBlue);
hRecoVA0->SetLineWidth(2);
hRecoVA0->SetFillColor(kBlue);
hRecoVA0->SetFillStyle(3005);

hRecoVA1->SetLineColor(kRed);
hRecoVA1->SetLineWidth(2);
hRecoVA1->SetFillColor(kRed);
hRecoVA1->SetFillStyle(3006);

hRecoVA2->SetLineColor(kGreen);
hRecoVA2->SetLineWidth(2);
hRecoVA2->SetFillColor(kGreen);
hRecoVA2->SetFillStyle(3007);

// Filling the Stacked Histogram
hRecoVAStacked->Add(hRecoVA0);
hRecoVAStacked->Add(hRecoVA1);
hRecoVAStacked->Add(hRecoVA2);

// Setting the Axis Labels
hRecoVAStacked->GetXaxis()->SetTitle("Summed Hit Charge within VA Bubble [ADC]");
hRecoVAStacked->GetXaxis()->CenterTitle();

hRecoVAStacked->GetYaxis()->SetTitle("Number of Events");
hRecoVAStacked->GetYaxis()->CenterTitle();

// Drawing the Stacked and Non-Stacked Histograms
hRecoVAStacked->Draw();


// ### Defining the legend for the plot ###
TLegend *leg22 = new TLegend();
leg22 = new TLegend(0.58,0.65,1.00,1.00);
leg22->SetTextSize(0.04);
leg22->SetTextAlign(12);
leg22->SetFillColor(kWhite);
leg22->SetLineColor(kWhite);
leg22->SetShadowColor(kWhite);
leg22->SetHeader("Vertex Activity");
leg22->AddEntry(hRecoVA0,"Plane 0");
leg22->AddEntry(hRecoVA1,"Plane 1");
leg22->AddEntry(hRecoVA2,"Plane 2");
leg22->Draw();
*/


// ----------------------------------
// --- TGraph for Vertex Activity ---
// ----------------------------------
int p = 1000;
double r[1000] = {0};
double VAEffR[1000] = {0};
double VAPurityR[1000] = {0};
double CCCohVAR[1000] = {0};
double CCCohVAR2[1000] = {0};
double CCResVAR[1000] = {0};
double CCDISVAR[1000] = {0};
double OtherVAR[1000] = {0};
double CCQEVAR[1000] = {0};
double NCVAR[1000] = {0};
double MaximizeVAR[1000] = {0};

for (int i = 0; i < p; i++)
   {
   r[i] = i*50000/p;
   for (int g = 1; g < i+1; g++)
      {
      CCCohVAR[i] += hRecoVA2->GetBinContent(g);
      CCCohVAR2[i] += hRecoVA2CCCoh->GetBinContent(g);
      CCResVAR[i] += hRecoVA2CCRes->GetBinContent(g);
      CCDISVAR[i] += hRecoVA2CCDIS->GetBinContent(g);
      OtherVAR[i] += hRecoVA2Other->GetBinContent(g);
      CCQEVAR[i] += hRecoVA2CCQE->GetBinContent(g);
      NCVAR[i] += hRecoVA2NC->GetBinContent(g);
      } // End g-Loop

   MaximizeVAR[i] = CCCohVAR2[i]/pow(CCCohVAR2[i] + OtherVAR[i], 0.5);
   VAPurityR[i] = 100*CCCohVAR2[i]/(CCCohVAR2[i] + OtherVAR[i]);
   if (i == 0) MaximizeVAR[i] = 0;
   if (i == 0) VAPurityR[i] = 0;
   VAEffR[i] = 100*(CCCohVAR[i])/(hRecoVA2->GetEntries());
   CCCohVAR[i] = CCCohVAR[i]*100/hRecoVA2->GetEntries();
   CCResVAR[i] = 100-(CCResVAR[i]*100/hRecoVA2CCRes->GetEntries());
   CCDISVAR[i] = 100-(CCDISVAR[i]*100/hRecoVA2CCDIS->GetEntries());
   OtherVAR[i] = 100-(OtherVAR[i]*100/hRecoVA2Other->GetEntries());
   CCQEVAR[i] = 100-(CCQEVAR[i]*100/hRecoVA2CCQE->GetEntries());
   NCVAR[i] = 100-(NCVAR[i]*100/hRecoVA2NC->GetEntries());
   } // End i-Loop

TGraph* gMaximizeVAR = new TGraph(p, r, MaximizeVAR);
gMaximizeVAR->SetTitle("MaximizeVAR");
gMaximizeVAR->SetName("MaximizeVAR");
gMaximizeVAR->SetFillColor(kWhite);
gMaximizeVAR->SetLineColor(kRed);
gMaximizeVAR->SetLineWidth(2);
TGraph* gVAEffR = new TGraph(p, r, VAEffR);
gVAEffR->SetTitle("VAEffR");
gVAEffR->SetName("VAEffR");
gVAEffR->SetFillColor(kWhite);
gVAEffR->SetLineColor(kRed);
gVAEffR->SetLineWidth(2);
TGraph* gVAPurityR = new TGraph(p, r, VAPurityR);
gVAPurityR->SetTitle("VAPurityR");
gVAPurityR->SetName("VAPurityR");
gVAPurityR->SetFillColor(kWhite);
gVAPurityR->SetLineColor(kCyan);
gVAPurityR->SetLineWidth(2);
TGraph* gCCCohVAR = new TGraph(p, r, CCCohVAR);
gCCCohVAR->SetTitle("gCCCohVAR");
gCCCohVAR->SetName("gCCCohVAR");
gCCCohVAR->SetFillColor(kWhite);
gCCCohVAR->SetLineColor(kBlue);
gCCCohVAR->SetLineWidth(2);
TGraph* gCCResVAR = new TGraph(p, r, CCResVAR);
gCCResVAR->SetTitle("gCCResVAR");
gCCResVAR->SetName("gCCResVAR");
gCCResVAR->SetFillColor(kWhite);
gCCResVAR->SetLineColor(kRed);
gCCResVAR->SetLineWidth(2);
TGraph* gCCDISVAR = new TGraph(p, r, CCDISVAR);
gCCDISVAR->SetTitle("gCCDISVAR");
gCCDISVAR->SetName("gCCDISVAR");
gCCDISVAR->SetFillColor(kWhite);
gCCDISVAR->SetLineColor(kOrange);
gCCDISVAR->SetLineWidth(2);
TGraph* gOtherVAR = new TGraph(p, r, OtherVAR);
gOtherVAR->SetTitle("gOtherVAR");
gOtherVAR->SetName("gOtherVAR");
gOtherVAR->SetFillColor(kWhite);
gOtherVAR->SetLineColor(kBlack);
gOtherVAR->SetLineWidth(2);
TGraph* gCCQEVAR = new TGraph(p, r, CCQEVAR);
gCCQEVAR->SetTitle("gCCQEVAR");
gCCQEVAR->SetName("gCCQEVAR");
gCCQEVAR->SetFillColor(kWhite);
gCCQEVAR->SetLineColor(kViolet);
gCCQEVAR->SetLineWidth(2);
TGraph* gNCVAR = new TGraph(p, r, NCVAR);
gNCVAR->SetTitle("gNCVAR");
gNCVAR->SetName("gNCVAR");
gNCVAR->SetFillColor(kWhite);
gNCVAR->SetLineColor(kGreen);
gNCVAR->SetLineWidth(2);

TCanvas *c26 = new TCanvas("c26", "Vertex Activity TGraphs");
c26->SetTicks();
c26->SetFillColor(kWhite);

gCCCohVAR->GetXaxis()->SetTitle("Vertex Activity [ADC]");
gCCCohVAR->GetXaxis()->CenterTitle();
gCCCohVAR->GetXaxis()->SetRangeUser(0,50000);

gCCCohVAR->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohVAR->GetYaxis()->CenterTitle();

gCCCohVAR->Draw();
//gCCResVAR->Draw("same");
//gCCDISVAR->Draw("same");
gOtherVAR->Draw("same");
//gCCQEVAR->Draw("same");
//gNCVAR->Draw("same");
//gVAPurityR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg26 = new TLegend();
leg26 = new TLegend(0.58,0.65,1.00,1.00);
leg26->SetTextSize(0.04);
leg26->SetTextAlign(12);
leg26->SetFillColor(kWhite);
leg26->SetLineColor(kWhite);
leg26->SetShadowColor(kWhite);
leg26->SetHeader("Channel");
leg26->AddEntry(gCCCohVAR,"CCCoh Reco");
//leg26->AddEntry(gVAPurityR,"CCCoh Purity Reco");
//leg26->AddEntry(gCCQEVAR,"CCQE Reco");
//leg26->AddEntry(gCCResVAR,"CCRes Reco");
//leg26->AddEntry(gCCDISVAR,"CCDIS Reco");
leg26->AddEntry(gOtherVAR,"Other Reco");
//leg26->AddEntry(gNCVAR,"NC Reco");
leg26->Draw();
// ----------------------------------



TCanvas *c23 = new TCanvas("c23", "The Reconstructed Hit Charge for CC-Coh Events within Vertex Activity Distance", 2);
c23->SetTicks();
c23->SetFillColor(kWhite);

int rebinnum = 10;

// Area normalzing the plot 
hRecoVA2CCQE->Scale(1/hRecoVA2CCQE->Integral());
hRecoVA2CCRes->Scale(1/hRecoVA2CCRes->Integral());
hRecoVA2CCDIS->Scale(1/hRecoVA2CCDIS->Integral());
hRecoVA2Other->Scale(1/hRecoVA2Other->Integral());
hRecoVA2->Scale(1/hRecoVA2->Integral());
hRecoVA2NC->Scale(1/hRecoVA2NC->Integral());

hRecoVA2CCQE->SetLineColor(kViolet);
hRecoVA2CCQE->SetLineWidth(2);
hRecoVA2CCQE->SetFillColor(kViolet);
hRecoVA2CCQE->SetFillStyle(3005);
hRecoVA2CCQE->Rebin(rebinnum);

hRecoVA2CCRes->SetLineColor(kRed);
hRecoVA2CCRes->SetLineWidth(2);
hRecoVA2CCRes->SetFillColor(kRed);
hRecoVA2CCRes->SetFillStyle(3006);
hRecoVA2CCRes->Rebin(rebinnum);

hRecoVA2CCDIS->SetLineColor(kOrange);
hRecoVA2CCDIS->SetLineWidth(2);
hRecoVA2CCDIS->SetFillColor(kOrange);
hRecoVA2CCDIS->SetFillStyle(3006);
hRecoVA2CCDIS->Rebin(rebinnum);

hRecoVA2Other->SetLineColor(kBlack);
hRecoVA2Other->SetLineWidth(2);
hRecoVA2Other->SetFillColor(kBlack);
hRecoVA2Other->SetFillStyle(3007);
hRecoVA2Other->Rebin(rebinnum);

hRecoVA2->SetLineColor(kBlue);
hRecoVA2->SetLineWidth(2);
hRecoVA2->SetFillColor(kBlue);
hRecoVA2->SetFillStyle(3008);
hRecoVA2->Rebin(rebinnum);

hRecoVA2NC->SetLineColor(kGreen);
hRecoVA2NC->SetLineWidth(2);
hRecoVA2NC->SetFillColor(kGreen);
hRecoVA2NC->SetFillStyle(3009);
hRecoVA2NC->Rebin(rebinnum);

hRecoVA2->GetXaxis()->SetTitle("Summed Hit Charge within VA Bubble [ADC]");
hRecoVA2->GetXaxis()->CenterTitle();

hRecoVA2->GetYaxis()->SetTitle("Number of Events");
hRecoVA2->GetYaxis()->CenterTitle();

hRecoVA2->Draw("histo");
//hRecoVA2NC->Draw("histosame");
//hRecoVA2CCRes->Draw("histosame");
//hRecoVA2CCDIS->Draw("histosame");
//hRecoVA2CCQE->Draw("histosame");
hRecoVA2Other->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg23 = new TLegend();
leg23 = new TLegend(0.58,0.65,1.00,1.00);
leg23->SetTextSize(0.04);
leg23->SetTextAlign(12);
leg23->SetFillColor(kWhite);
leg23->SetLineColor(kWhite);
leg23->SetShadowColor(kWhite);
leg23->SetHeader("Vertex Activity");
leg23->AddEntry(hRecoVA2,"CCCoh Reco");
//leg23->AddEntry(hRecoVA2CCQE,"CCQE Reco");
//leg23->AddEntry(hRecoVA2CCRes,"CCRes Reco");
//leg23->AddEntry(hRecoVA2CCDIS,"CCDIS Reco");
leg23->AddEntry(hRecoVA2Other,"Other Reco");
//leg23->AddEntry(hRecoVA2NC,"NC Reco");
leg23->Draw();



TCanvas *c27 = new TCanvas("c27", "The True and Reconstructed Opening Angles", 2);
c27->SetTicks();
c27->SetFillColor(kWhite);

// Area normalzing the plot 
hTrueOpeningAngleCCCoh->Scale(1/hTrueOpeningAngleCCCoh->Integral());
hRecoOpeningAngleCCCoh->Scale(1/hRecoOpeningAngleCCCoh->Integral());
hTrueOpeningAngleCCInc->Scale(1/hTrueOpeningAngleCCInc->Integral());
hRecoOpeningAngleCCInc->Scale(1/hRecoOpeningAngleCCInc->Integral());
hTrueOpeningAngleCCQE->Scale(1/hTrueOpeningAngleCCQE->Integral());
hRecoOpeningAngleCCQE->Scale(1/hRecoOpeningAngleCCQE->Integral());
hTrueOpeningAngleCCRes->Scale(1/hTrueOpeningAngleCCRes->Integral());
hRecoOpeningAngleCCRes->Scale(1/hRecoOpeningAngleCCRes->Integral());
hTrueOpeningAngleCCDIS->Scale(1/hTrueOpeningAngleCCDIS->Integral());
hRecoOpeningAngleCCDIS->Scale(1/hRecoOpeningAngleCCDIS->Integral());
hTrueOpeningAngleOther->Scale(1/hTrueOpeningAngleOther->Integral());
hRecoOpeningAngleOther->Scale(1/hRecoOpeningAngleOther->Integral());


hTrueOpeningAngleCCCoh->SetLineColor(kBlue);
hTrueOpeningAngleCCCoh->SetLineStyle(kDashed);
hTrueOpeningAngleCCCoh->SetLineWidth(3);
hTrueOpeningAngleCCCoh->SetFillColor(kBlue);
hTrueOpeningAngleCCCoh->SetFillStyle(3005);

hRecoOpeningAngleCCCoh->SetLineColor(kBlue);
hRecoOpeningAngleCCCoh->SetLineWidth(3);
hRecoOpeningAngleCCCoh->SetFillColor(kBlue);
hRecoOpeningAngleCCCoh->SetFillStyle(3003);


hTrueOpeningAngleCCQE->SetLineColor(kViolet);
hTrueOpeningAngleCCQE->SetLineStyle(kDashed);
hTrueOpeningAngleCCQE->SetLineWidth(3);
hTrueOpeningAngleCCQE->SetFillColor(kViolet);
hTrueOpeningAngleCCQE->SetFillStyle(3005);

hRecoOpeningAngleCCQE->SetLineColor(kViolet);
hRecoOpeningAngleCCQE->SetLineWidth(3);
hRecoOpeningAngleCCQE->SetFillColor(kViolet);
hRecoOpeningAngleCCQE->SetFillStyle(3003);


hTrueOpeningAngleCCRes->SetLineColor(kRed);
hTrueOpeningAngleCCRes->SetLineStyle(kDashed);
hTrueOpeningAngleCCRes->SetLineWidth(3);
hTrueOpeningAngleCCRes->SetFillColor(kRed);
hTrueOpeningAngleCCRes->SetFillStyle(3005);

hRecoOpeningAngleCCRes->SetLineColor(kRed);
hRecoOpeningAngleCCRes->SetLineWidth(3);
hRecoOpeningAngleCCRes->SetFillColor(kRed);
hRecoOpeningAngleCCRes->SetFillStyle(3003);


hTrueOpeningAngleCCDIS->SetLineColor(kOrange);
hTrueOpeningAngleCCDIS->SetLineStyle(kDashed);
hTrueOpeningAngleCCDIS->SetLineWidth(3);
hTrueOpeningAngleCCDIS->SetFillColor(kOrange);
hTrueOpeningAngleCCDIS->SetFillStyle(3005);

hRecoOpeningAngleCCDIS->SetLineColor(kOrange);
hRecoOpeningAngleCCDIS->SetLineWidth(3);
hRecoOpeningAngleCCDIS->SetFillColor(kOrange);
hRecoOpeningAngleCCDIS->SetFillStyle(3003);


hTrueOpeningAngleCCInc->SetLineColor(kGray);
hTrueOpeningAngleCCInc->SetLineStyle(kDashed);
hTrueOpeningAngleCCInc->SetLineWidth(3);
hTrueOpeningAngleCCInc->SetFillColor(kGray);
hTrueOpeningAngleCCInc->SetFillStyle(3005);

hRecoOpeningAngleCCInc->SetLineColor(kGray);
hRecoOpeningAngleCCInc->SetLineWidth(3);
hRecoOpeningAngleCCInc->SetFillColor(kGray);
hRecoOpeningAngleCCInc->SetFillStyle(3003);


hTrueOpeningAngleOther->SetLineColor(kBlack);
hTrueOpeningAngleOther->SetLineStyle(kDashed);
hTrueOpeningAngleOther->SetLineWidth(3);
hTrueOpeningAngleOther->SetFillColor(kBlack);
hTrueOpeningAngleOther->SetFillStyle(3005);

hRecoOpeningAngleOther->SetLineColor(kBlack);
hRecoOpeningAngleOther->SetLineWidth(3);
hRecoOpeningAngleOther->SetFillColor(kBlack);
hRecoOpeningAngleOther->SetFillStyle(3003);


hTrueOpeningAngleCCCoh->GetXaxis()->SetTitle("Opening Angle [Degrees]");
hTrueOpeningAngleCCCoh->GetXaxis()->CenterTitle();
//hTrueOpeningAngleCCCoh->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueOpeningAngleCCCoh->GetYaxis()->SetTitle("Number of Events");
hTrueOpeningAngleCCCoh->GetYaxis()->CenterTitle();

hTrueOpeningAngleCCCoh->Draw("histo");
hRecoOpeningAngleCCCoh->Draw("histosame");
hTrueOpeningAngleCCQE->Draw("histosame");
hRecoOpeningAngleCCQE->Draw("histosame");
hTrueOpeningAngleCCRes->Draw("histosame");
hRecoOpeningAngleCCRes->Draw("histosame");
hTrueOpeningAngleCCDIS->Draw("histosame");
hRecoOpeningAngleCCDIS->Draw("histosame");
hTrueOpeningAngleOther->Draw("histosame");
hRecoOpeningAngleOther->Draw("histosame");
hTrueOpeningAngleCCInc->Draw("histosame");
hRecoOpeningAngleCCInc->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg27 = new TLegend();
leg27 = new TLegend(0.58,0.65,1.00,1.00);
leg27->SetTextSize(0.04);
leg27->SetTextAlign(12);
leg27->SetFillColor(kWhite);
leg27->SetLineColor(kWhite);
leg27->SetShadowColor(kWhite);
leg27->SetHeader("Cone Angles");
leg27->AddEntry(hTrueOpeningAngleCCCoh,"CCCoh True");
leg27->AddEntry(hRecoOpeningAngleCCCoh,"CCCoh Reco");
leg27->AddEntry(hTrueOpeningAngleCCQE,"CCQE True");
leg27->AddEntry(hRecoOpeningAngleCCQE,"CCQE Reco");
leg27->AddEntry(hTrueOpeningAngleCCRes,"CCRes True");
leg27->AddEntry(hRecoOpeningAngleCCRes,"CCRes Reco");
leg27->AddEntry(hTrueOpeningAngleCCDIS,"CCDIS True");
leg27->AddEntry(hRecoOpeningAngleCCDIS,"CCDIS Reco");
leg27->AddEntry(hTrueOpeningAngleCCInc,"CCInc True");
leg27->AddEntry(hRecoOpeningAngleCCInc,"CCInc Reco");
leg27->AddEntry(hTrueOpeningAngleOther,"Other True");
leg27->AddEntry(hRecoOpeningAngleOther,"Other Reco");
leg27->Draw();





TCanvas *c28 = new TCanvas("c28", "The Efficiency of the Sample Selection of this Analysis");
c28->SetTicks();
c28->SetFillColor(kWhite);

hCutByCutMuonCandidate2->SetLineColor(kBlue);
hCutByCutMuonCandidate2->SetLineWidth(2);
hCutByCutMuonCandidate2CCQE->SetLineColor(kViolet);
hCutByCutMuonCandidate2CCQE->SetLineWidth(2);
hCutByCutMuonCandidate2Other->SetLineColor(kBlack);
hCutByCutMuonCandidate2Other->SetLineWidth(2);
hCutByCutMuonCandidate2CCCoh->SetLineColor(kCyan);
hCutByCutMuonCandidate2CCCoh->SetLineWidth(2);
hCutByCutMuonCandidate2CCRes->SetLineColor(kRed);
hCutByCutMuonCandidate2CCRes->SetLineWidth(2);
hCutByCutMuonCandidate2CCDIS->SetLineColor(kOrange);
hCutByCutMuonCandidate2CCDIS->SetLineWidth(2);
hCutByCutMuonCandidate2CCInc->SetLineColor(kGray);
hCutByCutMuonCandidate2CCInc->SetLineWidth(2);
hCutByCutMuonCandidate2NC->SetLineColor(kGreen);
hCutByCutMuonCandidate2NC->SetLineWidth(2);

hCutByCutMuonCandidate2->Divide(hCutByCutMuonCandidateDivide2);
hCutByCutMuonCandidate2CCQE->Divide(hCutByCutMuonCandidateDivide2CCQE);
hCutByCutMuonCandidate2Other->Divide(hCutByCutMuonCandidateDivide2Other);
hCutByCutMuonCandidate2CCCoh->Divide(hCutByCutMuonCandidatePurityDivide2);
hCutByCutMuonCandidate2CCRes->Divide(hCutByCutMuonCandidateDivide2CCRes);
hCutByCutMuonCandidate2CCDIS->Divide(hCutByCutMuonCandidateDivide2CCDIS);
hCutByCutMuonCandidate2CCInc->Divide(hCutByCutMuonCandidateDivide2CCInc);
hCutByCutMuonCandidate2NC->Divide(hCutByCutMuonCandidateDivide2NC);

hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(1, "Num. Matched Events");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(2, "Track Score > 0.85");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(3, "Vertex Distance < 4cm");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(4, "Generation == 2");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(5, "Track Length > 20cm");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(6, "p #chi^{2} > 60");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(7, "#mu #chi^{2} < 30");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(8, "p #chi^{2} / #mu #chi^{2} > 7");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(9, "Pandora PDG == 14");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(10, "Start vertex of all daughters are at least 10cm from borders");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(11, "Neutrino vertex is in the fiducial volume");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(12, "Flash #chi^{2} < 10 OR topological score > 0.25");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(13, "Topological score > 0.06");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(14, "#nu Flash #chi^{2}/Obvious Cosmic Flash #chi^{2} < 5");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(15, "Num Tracks in Bubble >= 2");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(16, "Num Tracks in Bubble == 2");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(17, "Cone Angle < 20^{o}");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(18, "DoCA Cut < 7cm");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(19, "VA Cut < 7500ADC");
hCutByCutMuonCandidate2->GetXaxis()->SetBinLabel(20, "Pion Candidate's #chi_{#mu}^{2} < 20 && #chi_{p}^{2} > 50");

hCutByCutMuonCandidate2->GetYaxis()->SetRangeUser(0,1.05);

hCutByCutMuonCandidate2->Draw("E1");
hCutByCutMuonCandidate2CCQE->Draw("E1same");
hCutByCutMuonCandidate2Other->Draw("E1same");
hCutByCutMuonCandidate2CCRes->Draw("E1same");
hCutByCutMuonCandidate2CCDIS->Draw("E1same");
hCutByCutMuonCandidate2CCInc->Draw("E1same");
hCutByCutMuonCandidate2NC->Draw("E1same");
hCutByCutMuonCandidate2CCCoh->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg28 = new TLegend();
leg28 = new TLegend(0.58,0.65,1.00,1.00);
leg28->SetTextSize(0.04);
leg28->SetTextAlign(12);
leg28->SetFillColor(kWhite);
leg28->SetLineColor(kWhite);
leg28->SetShadowColor(kWhite);
leg28->SetHeader("Interaction Type");
leg28->AddEntry(hCutByCutMuonCandidate2,"CCCoh");
leg28->AddEntry(hCutByCutMuonCandidate2CCCoh,"CCCoh Purity");
leg28->AddEntry(hCutByCutMuonCandidate2CCQE,"CCQE");
leg28->AddEntry(hCutByCutMuonCandidate2CCRes,"CCRes");
leg28->AddEntry(hCutByCutMuonCandidate2CCDIS,"CCDIS");
leg28->AddEntry(hCutByCutMuonCandidate2CCInc,"CCInc");
leg28->AddEntry(hCutByCutMuonCandidate2NC,"NC");
leg28->AddEntry(hCutByCutMuonCandidate2Other,"Other");
leg28->Draw();





TCanvas *c29 = new TCanvas("c29", "The Number of Tracks within a Bubble of 10cm from Reco Vertex");
c29->SetTicks();
c29->SetFillColor(kWhite);

// Area normalzing the plot 
hNTracksInBubble5->Scale(1/hNTracksInBubble5->Integral());
hNTracksInBubble->Scale(1/hNTracksInBubble->Integral());
hNTracksInBubble15->Scale(1/hNTracksInBubble15->Integral());
hNTracksInBubbleOther5->Scale(1/hNTracksInBubbleOther5->Integral());
hNTracksInBubbleOther->Scale(1/hNTracksInBubbleOther->Integral());
hNTracksInBubbleOther15->Scale(1/hNTracksInBubbleOther15->Integral());

hNTracksInBubble->SetLineColor(kBlue);
hNTracksInBubble->SetLineWidth(2);
//hNTracksInBubble->SetLineStyle(6);
hNTracksInBubbleOther->SetLineColor(kBlack);
hNTracksInBubbleOther->SetLineWidth(2);
//hNTracksInBubbleOther->SetLineStyle(6);

hNTracksInBubble5->SetLineColor(kBlue);
hNTracksInBubble5->SetLineWidth(2);
hNTracksInBubble5->SetLineStyle(2);
hNTracksInBubbleOther5->SetLineColor(kBlack);
hNTracksInBubbleOther5->SetLineWidth(2);
hNTracksInBubbleOther5->SetLineStyle(2);

hNTracksInBubble15->SetLineColor(kBlue);
hNTracksInBubble15->SetLineWidth(2);
hNTracksInBubble15->SetLineStyle(9);
hNTracksInBubbleOther15->SetLineColor(kBlack);
hNTracksInBubbleOther15->SetLineWidth(2);
hNTracksInBubbleOther15->SetLineStyle(9);


hNTracksInBubble->GetXaxis()->SetTitle("Number of Tracks with Start within 10cm of Reco Vertex");
hNTracksInBubble->GetXaxis()->CenterTitle();

hNTracksInBubble->GetYaxis()->SetTitle("Number of Events");
hNTracksInBubble->GetYaxis()->CenterTitle();


hNTracksInBubble->Draw("histo");
hNTracksInBubble5->Draw("histosame");
hNTracksInBubble15->Draw("histosame");
hNTracksInBubbleOther5->Draw("histosame");
hNTracksInBubbleOther->Draw("histosame");
hNTracksInBubbleOther15->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg29 = new TLegend();
leg29 = new TLegend(0.58,0.65,1.00,1.00);
leg29->SetTextSize(0.04);
leg29->SetTextAlign(12);
leg29->SetFillColor(kWhite);
leg29->SetLineColor(kWhite);
leg29->SetShadowColor(kWhite);
leg29->SetHeader("Interaction Type");
leg29->AddEntry(hNTracksInBubble5,"CCCoh 5cm");
leg29->AddEntry(hNTracksInBubble,"CCCoh 10cm");
leg29->AddEntry(hNTracksInBubble15,"CCCoh 15cm");
leg29->AddEntry(hNTracksInBubbleOther5,"Other 5cm");
leg29->AddEntry(hNTracksInBubbleOther,"Other 10cm");
leg29->AddEntry(hNTracksInBubbleOther15,"Other 15cm");
leg29->Draw();





TCanvas *c35 = new TCanvas("c35", "The Number of Tracks within a Bubble of 10cm from Reco Vertex");
c35->SetTicks();
c35->SetFillColor(kWhite);

// Area normalzing the plot 
hNTracksInBubbleCCQE->Scale(1/hNTracksInBubbleCCQE->Integral());
hNTracksInBubbleCCRes->Scale(1/hNTracksInBubbleCCRes->Integral());
hNTracksInBubbleCCDIS->Scale(1/hNTracksInBubbleCCDIS->Integral());
hNTracksInBubbleCCInc->Scale(1/hNTracksInBubbleCCInc->Integral());
hNTracksInBubbleNC->Scale(1/hNTracksInBubbleNC->Integral());

hNTracksInBubble->SetLineColor(kBlue);
hNTracksInBubble->SetLineWidth(2);
hNTracksInBubbleCCQE->SetLineColor(kViolet);
hNTracksInBubbleCCQE->SetLineWidth(2);
hNTracksInBubbleCCRes->SetLineColor(kRed);
hNTracksInBubbleCCRes->SetLineWidth(2);
hNTracksInBubbleCCDIS->SetLineColor(kOrange);
hNTracksInBubbleCCDIS->SetLineWidth(2);
hNTracksInBubbleCCInc->SetLineColor(kGray);
hNTracksInBubbleCCInc->SetLineWidth(2);
hNTracksInBubbleOther->SetLineColor(kBlack);
hNTracksInBubbleOther->SetLineWidth(2);
hNTracksInBubbleNC->SetLineColor(kGreen);
hNTracksInBubbleNC->SetLineWidth(2);


hNTracksInBubble->Draw("histo");
//hNTracksInBubbleCCQE->Draw("histosame");
//hNTracksInBubbleCCRes->Draw("histosame");
//hNTracksInBubbleCCDIS->Draw("histosame");
//hNTracksInBubbleCCInc->Draw("histosame");
hNTracksInBubbleOther->Draw("histosame");
//hNTracksInBubbleNC->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg35 = new TLegend();
leg35 = new TLegend(0.58,0.65,1.00,1.00);
leg35->SetTextSize(0.04);
leg35->SetTextAlign(12);
leg35->SetFillColor(kWhite);
leg35->SetLineColor(kWhite);
leg35->SetShadowColor(kWhite);
leg35->SetHeader("Interaction Type");
leg35->AddEntry(hNTracksInBubble,"CCCoh");
//leg35->AddEntry(hNTracksInBubbleCCQE,"CCQE");
//leg35->AddEntry(hNTracksInBubbleCCRes,"CCRes");
//leg35->AddEntry(hNTracksInBubbleCCDIS,"CCDIS");
//leg35->AddEntry(hNTracksInBubbleCCInc,"CCInc");
leg35->AddEntry(hNTracksInBubbleOther,"Other");
//leg35->AddEntry(hNTracksInBubbleNC,"NC");
leg35->Draw();






TCanvas *c30 = new TCanvas("c30", "The Reconstructed Hit Charge for CC-Coh Events within Vertex Activity Distance for Only Tracks");
c30->SetTicks();
c30->SetFillColor(kWhite);

// Area normalzing the plot 
hRecoVA2Tracks->Scale(1/hRecoVA2Tracks->Integral());
hRecoVA2TracksOther->Scale(1/hRecoVA2TracksOther->Integral());

hRecoVA2TracksOther->SetLineColor(kBlack);
hRecoVA2TracksOther->SetLineWidth(2);
hRecoVA2TracksOther->SetFillColor(kBlack);
hRecoVA2TracksOther->SetFillStyle(3001);
hRecoVA2TracksOther->Rebin(rebinnum);

hRecoVA2Tracks->SetLineColor(kBlue);
hRecoVA2Tracks->SetLineWidth(2);
hRecoVA2Tracks->SetFillColor(kBlue);
hRecoVA2Tracks->SetFillStyle(3000);
hRecoVA2Tracks->Rebin(rebinnum);

hRecoVA2Tracks->GetXaxis()->SetTitle("Summed Hit Charge within VA Bubble [ADC]");
hRecoVA2Tracks->GetXaxis()->CenterTitle();

hRecoVA2Tracks->GetYaxis()->SetTitle("Number of Events");
hRecoVA2Tracks->GetYaxis()->CenterTitle();

hRecoVA2Tracks->Draw("histo");
hRecoVA2TracksOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg30 = new TLegend();
leg30 = new TLegend(0.58,0.65,1.00,1.00);
leg30->SetTextSize(0.04);
leg30->SetTextAlign(12);
leg30->SetFillColor(kWhite);
leg30->SetLineColor(kWhite);
leg30->SetShadowColor(kWhite);
leg30->SetHeader("Vertex Activity");
leg30->AddEntry(hRecoVA2Tracks,"CCCoh Reco");
leg30->AddEntry(hRecoVA2TracksOther,"Other Reco");
leg30->Draw();



TCanvas *c31 = new TCanvas("c31", "The Reconstructed Hit Charge for CC-Coh Events within Vertex Activity Distance for Just Nonassociated Hits");
c31->SetTicks();
c31->SetFillColor(kWhite);

// Area normalzing the plot 
hRecoVA2Minus->Scale(1/hRecoVA2Minus->Integral());
hRecoVA2MinusOther->Scale(1/hRecoVA2MinusOther->Integral());

hRecoVA2MinusOther->SetLineColor(kBlack);
hRecoVA2MinusOther->SetLineWidth(2);
hRecoVA2MinusOther->SetFillColor(kBlack);
hRecoVA2MinusOther->SetFillStyle(3001);
hRecoVA2MinusOther->Rebin(rebinnum);

hRecoVA2Minus->SetLineColor(kBlue);
hRecoVA2Minus->SetLineWidth(2);
hRecoVA2Minus->SetFillColor(kBlue);
hRecoVA2Minus->SetFillStyle(3000);
hRecoVA2Minus->Rebin(rebinnum);

hRecoVA2Minus->GetXaxis()->SetTitle("Summed Hit Charge within VA Bubble [ADC]");
hRecoVA2Minus->GetXaxis()->CenterTitle();

hRecoVA2Minus->GetYaxis()->SetTitle("Number of Events");
hRecoVA2Minus->GetYaxis()->CenterTitle();

hRecoVA2Minus->Draw("histo");
hRecoVA2MinusOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg31 = new TLegend();
leg31 = new TLegend(0.58,0.65,1.00,1.00);
leg31->SetTextSize(0.04);
leg31->SetTextAlign(12);
leg31->SetFillColor(kWhite);
leg31->SetLineColor(kWhite);
leg31->SetShadowColor(kWhite);
leg31->SetHeader("Vertex Activity");
leg31->AddEntry(hRecoVA2Minus,"CCCoh Reco");
leg31->AddEntry(hRecoVA2MinusOther,"Other Reco");
leg31->Draw();



// -----------------------------
// --- TGraph for |t| Effici ---
// -----------------------------
int s = 1000;
double e[1000] = {0};
double TEff[1000] = {0};
double TPurity[1000] = {0};
double CCCohT[1000] = {0};
double CCCohT2[1000] = {0};
double CCCohTR2[1000] = {0};
double CCResT[1000] = {0};
double CCDIST[1000] = {0};
double OtherT[1000] = {0};
double OtherT2[1000] = {0};
double OtherTR2[1000] = {0};
double CCQET[1000] = {0};
double NCT[1000] = {0};
double MaximizeT[1000] = {0};
double MaximizeTR[1000] = {0};

for (int i = 0; i < s; i++)
   {
   e[i] = i*1./s;
   for (int g = 1; g < i+1; g++)
      {
      CCCohT[i] += hT->GetBinContent(g);
      CCCohT2[i] += hTAfter2True->GetBinContent(g);
      CCCohTR2[i] += hTAfter2Reco->GetBinContent(g);
      CCResT[i] += hTCCRes->GetBinContent(g);
      CCDIST[i] += hTCCDIS->GetBinContent(g);
      OtherT[i] += hTAfterTrueOther->GetBinContent(g);
      OtherT2[i] += hTAfter2TrueOther->GetBinContent(g);
      OtherTR2[i] += hTAfter2RecoOther->GetBinContent(g);
      CCQET[i] += hTCCQE->GetBinContent(g);
      NCT[i] += hTNC->GetBinContent(g);
      } // End g-Loop

   MaximizeT[i] = CCCohT2[i]/pow(CCCohT2[i] + OtherT2[i], 0.5);
   MaximizeTR[i] = CCCohTR2[i]/pow(CCCohTR2[i] + OtherTR2[i], 0.5);
   TPurity[i] = 100*(CCCohT2[i])/(CCCohT2[i] + OtherT2[i]);
   if (i == 0) MaximizeT[i] = 0;
   if (i == 0) MaximizeTR[i] = 0;
   if (i == 0) TPurity[i] = 0;
   TEff[i] = 100*(CCCohT2[i])/(hTCCCoh->GetEntries());
   CCCohT[i] = CCCohT[i]*100/hT->GetEntries();
   CCCohT2[i] = CCCohT2[i]*100/hTAfter2True->GetEntries();
   CCCohTR2[i] = CCCohTR2[i]*100/hTAfter2Reco->GetEntries();
   CCResT[i] = 100-(CCResT[i]*100/hTCCRes->GetEntries());
   CCDIST[i] = 100-(CCDIST[i]*100/hTCCDIS->GetEntries());
   OtherT[i] = 100-(OtherT[i]*100/hTAfterTrueOther->GetEntries());
   OtherT2[i] = 100-(OtherT2[i]*100/hTAfter2TrueOther->GetEntries());
   OtherTR2[i] = 100-(OtherTR2[i]*100/hTAfter2RecoOther->GetEntries());
   CCQET[i] = 100-(CCQET[i]*100/hTCCQE->GetEntries());
   NCT[i] = 100-(NCT[i]*100/hTNC->GetEntries());
   } // End i-Loop

TGraph* gMaximizeT = new TGraph(s, e, MaximizeT);
gMaximizeT->SetTitle("MaximizeT");
gMaximizeT->SetName("MaximizeT");
gMaximizeT->SetFillColor(kWhite);
gMaximizeT->SetLineColor(kBlue);
gMaximizeT->SetLineWidth(2);
TGraph* gMaximizeTR = new TGraph(s, e, MaximizeTR);
gMaximizeTR->SetTitle("MaximizeTR");
gMaximizeTR->SetName("MaximizeTR");
gMaximizeTR->SetFillColor(kWhite);
gMaximizeTR->SetLineColor(kRed);
gMaximizeTR->SetLineWidth(2);
TGraph* gTEff = new TGraph(s, e, TEff);
gTEff->SetTitle("TEff");
gTEff->SetName("TEff");
gTEff->SetFillColor(kWhite);
gTEff->SetLineColor(kBlue);
gTEff->SetLineWidth(2);
TGraph* gTPurity = new TGraph(s, e, TPurity);
gTPurity->SetTitle("TPurity");
gTPurity->SetName("TPurity");
gTPurity->SetFillColor(kWhite);
gTPurity->SetLineColor(kCyan);
gTPurity->SetLineStyle(kDashed);
gTPurity->SetLineWidth(2);
TGraph* gCCCohT = new TGraph(s, e, CCCohT);
gCCCohT->SetTitle("gCCCohT");
gCCCohT->SetName("gCCCohT");
gCCCohT->SetFillColor(kWhite);
gCCCohT->SetLineColor(kBlue);
gCCCohT->SetLineStyle(kDashed);
gCCCohT->SetLineWidth(2);
TGraph* gCCCohT2 = new TGraph(s, e, CCCohT2);
gCCCohT2->SetTitle("gCCCohT2");
gCCCohT2->SetName("gCCCohT2");
gCCCohT2->SetFillColor(kWhite);
gCCCohT2->SetLineColor(kBlue);
gCCCohT2->SetLineStyle(kDashed);
gCCCohT2->SetLineWidth(2);
TGraph* gCCCohTR2 = new TGraph(s, e, CCCohTR2);
gCCCohTR2->SetTitle("gCCCohTR2");
gCCCohTR2->SetName("gCCCohTR2");
gCCCohTR2->SetFillColor(kWhite);
gCCCohTR2->SetLineColor(kBlue);
gCCCohTR2->SetLineWidth(2);
TGraph* gCCResT = new TGraph(s, e, CCResT);
gCCResT->SetTitle("gCCResT");
gCCResT->SetName("gCCResT");
gCCResT->SetFillColor(kWhite);
gCCResT->SetLineColor(kRed);
gCCResT->SetLineStyle(kDashed);
gCCResT->SetLineWidth(2);
TGraph* gCCDIST = new TGraph(s, e, CCDIST);
gCCDIST->SetTitle("gCCDIST");
gCCDIST->SetName("gCCDIST");
gCCDIST->SetFillColor(kWhite);
gCCDIST->SetLineColor(kOrange);
gCCDIST->SetLineStyle(kDashed);
gCCDIST->SetLineWidth(2);
TGraph* gOtherT = new TGraph(s, e, OtherT);
gOtherT->SetTitle("gOtherT");
gOtherT->SetName("gOtherT");
gOtherT->SetFillColor(kWhite);
gOtherT->SetLineColor(kBlack);
gOtherT->SetLineStyle(kDashed);
gOtherT->SetLineWidth(2);
TGraph* gOtherT2 = new TGraph(s, e, OtherT2);
gOtherT2->SetTitle("gOtherT2");
gOtherT2->SetName("gOtherT2");
gOtherT2->SetFillColor(kWhite);
gOtherT2->SetLineColor(kBlack);
gOtherT2->SetLineStyle(kDashed);
gOtherT2->SetLineWidth(2);
TGraph* gOtherTR2 = new TGraph(s, e, OtherTR2);
gOtherTR2->SetTitle("gOtherTR2");
gOtherTR2->SetName("gOtherTR2");
gOtherTR2->SetFillColor(kWhite);
gOtherTR2->SetLineColor(kBlack);
gOtherTR2->SetLineWidth(2);
TGraph* gCCQET = new TGraph(s, e, CCQET);
gCCQET->SetTitle("gCCQET");
gCCQET->SetName("gCCQET");
gCCQET->SetFillColor(kWhite);
gCCQET->SetLineColor(kViolet);
gCCQET->SetLineStyle(kDashed);
gCCQET->SetLineWidth(2);
TGraph* gNCT = new TGraph(s, e, NCT);
gNCT->SetTitle("gNCT");
gNCT->SetName("gNCT");
gNCT->SetFillColor(kWhite);
gNCT->SetLineColor(kGreen);
gNCT->SetLineStyle(kDashed);
gNCT->SetLineWidth(2);

TCanvas *c34 = new TCanvas("c34", "|t| TGraphs");
c34->SetTicks();
c34->SetFillColor(kWhite);

gCCCohT2->GetXaxis()->SetTitle("|t| [(GeV/c)^{2}]");
gCCCohT2->GetXaxis()->CenterTitle();
gCCCohT2->GetXaxis()->SetRangeUser(0,1);

gCCCohT2->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohT2->GetYaxis()->CenterTitle();

//gCCCohT->Draw();
gCCCohT2->Draw();
gCCCohTR2->Draw("same");
//gCCResT->Draw("same");
//gCCDIST->Draw("same");
//gOtherT->Draw("same");
gOtherT2->Draw("same");
gOtherTR2->Draw("same");
//gCCQET->Draw("same");
//gNCT->Draw("same");
//gTPurity->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg34 = new TLegend();
leg34 = new TLegend(0.58,0.65,1.00,1.00);
leg34->SetTextSize(0.04);
leg34->SetTextAlign(12);
leg34->SetFillColor(kWhite);
leg34->SetLineColor(kWhite);
leg34->SetShadowColor(kWhite);
leg34->SetHeader("Channel");
leg34->AddEntry(gCCCohT2,"CCCoh True");
leg34->AddEntry(gCCCohTR2,"CCCoh Reco");
//leg34->AddEntry(gTPurity,"CCCoh Purity True");
//leg34->AddEntry(gCCQET,"CCQE True");
//leg34->AddEntry(gCCResT,"CCRes True");
//leg34->AddEntry(gCCDIST,"CCDIS True");
leg34->AddEntry(gOtherT2,"Other True");
leg34->AddEntry(gOtherTR2,"Other Reco");
//leg34->AddEntry(gNCT,"NC True");
leg34->Draw();
// ----------------------------



TCanvas *c32 = new TCanvas("c32", "|t|");
c32->SetTicks();
c32->SetFillColor(kWhite);

// Area normalzing the plot 
hT->Scale(1/hT->Integral());
hTCCQE->Scale(1/hTCCQE->Integral());
hTCCRes->Scale(1/hTCCRes->Integral());
hTCCDIS->Scale(1/hTCCDIS->Integral());
hTCCInc->Scale(1/hTCCInc->Integral());
hTNC->Scale(1/hTNC->Integral());
hTOther->Scale(1/hTOther->Integral());

hTOther->SetLineColor(kBlack);
hTOther->SetLineWidth(2);
hTOther->Rebin(rebinnum);

hT->SetLineColor(kBlue);
hT->SetLineWidth(2);
hT->Rebin(rebinnum);

hTCCQE->SetLineColor(kViolet);
hTCCQE->SetLineWidth(2);
hTCCQE->Rebin(rebinnum);

hTCCRes->SetLineColor(kRed);
hTCCRes->SetLineWidth(2);
hTCCRes->Rebin(rebinnum);

hTCCDIS->SetLineColor(kOrange);
hTCCDIS->SetLineWidth(2);
hTCCDIS->Rebin(rebinnum);

hTCCInc->SetLineColor(kGray);
hTCCInc->SetLineWidth(2);
hTCCInc->Rebin(rebinnum);

hTNC->SetLineColor(kGreen);
hTNC->SetLineWidth(2);
hTNC->Rebin(rebinnum);

hT->GetXaxis()->SetTitle("|t| [(GeV/c)^{2}]");
hT->GetXaxis()->CenterTitle();

hT->GetYaxis()->SetTitle("Number of Events");
hT->GetYaxis()->CenterTitle();

hT->Draw("histo");
hTCCQE->Draw("histosame");
hTCCRes->Draw("histosame");
hTCCDIS->Draw("histosame");
hTCCInc->Draw("histosame");
hTNC->Draw("histosame");
hTOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg32 = new TLegend();
leg32 = new TLegend(0.58,0.65,1.00,1.00);
leg32->SetTextSize(0.04);
leg32->SetTextAlign(12);
leg32->SetFillColor(kWhite);
leg32->SetLineColor(kWhite);
leg32->SetShadowColor(kWhite);
leg32->SetHeader("|t|");
leg32->AddEntry(hT,"CCCoh");
leg32->AddEntry(hTCCQE,"CCQE");
leg32->AddEntry(hTCCRes,"CCRes");
leg32->AddEntry(hTCCDIS,"CCDIS");
leg32->AddEntry(hTCCInc,"CCInc");
leg32->AddEntry(hTNC,"NC");
leg32->AddEntry(hTOther,"Other");
leg32->Draw();



TCanvas *c33 = new TCanvas("c33", "|t| for EXACTLY 2 Tracks in Bubble Radius");
c33->SetTicks();
c33->SetFillColor(kWhite);

// Area normalzing the plot 
hT2_5->Scale(1/hT2_5->Integral());
hT2_5Other->Scale(1/hT2_5Other->Integral());
hT2->Scale(1/hT2->Integral());
hT2Other->Scale(1/hT2Other->Integral());
hT2_15->Scale(1/hT2_15->Integral());
hT2_15Other->Scale(1/hT2_15Other->Integral());

hT2_5Other->SetLineColor(kBlack);
hT2_5Other->SetLineWidth(2);
hT2_5Other->SetLineStyle(2);
hT2_5Other->Rebin(rebinnum);

hT2_5->SetLineColor(kBlue);
hT2_5->SetLineWidth(2);
hT2_5->SetLineStyle(2);
hT2_5->Rebin(rebinnum);

hT2Other->SetLineColor(kBlack);
hT2Other->SetLineWidth(2);
hT2Other->SetLineStyle(6);
hT2Other->Rebin(rebinnum);

hT2->SetLineColor(kBlue);
hT2->SetLineWidth(2);
hT2->SetLineStyle(6);
hT2->Rebin(rebinnum);

hT2_15Other->SetLineColor(kBlack);
hT2_15Other->SetLineWidth(2);
hT2_15Other->SetLineStyle(9);
hT2_15Other->Rebin(rebinnum);

hT2_15->SetLineColor(kBlue);
hT2_15->SetLineWidth(2);
hT2_15->SetLineStyle(9);
hT2_15->Rebin(rebinnum);

hT2->GetXaxis()->SetTitle("|t| [(GeV/c)^{2}]");
hT2->GetXaxis()->CenterTitle();

hT2->GetYaxis()->SetTitle("Number of Events");
hT2->GetYaxis()->CenterTitle();

hT2->Draw("histo");
hT2Other->Draw("histosame");
hT2_5->Draw("histosame");
hT2_5Other->Draw("histosame");
hT2_15->Draw("histosame");
hT2_15Other->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg33 = new TLegend();
leg33 = new TLegend(0.58,0.65,1.00,1.00);
leg33->SetTextSize(0.04);
leg33->SetTextAlign(12);
leg33->SetFillColor(kWhite);
leg33->SetLineColor(kWhite);
leg33->SetShadowColor(kWhite);
leg33->SetHeader("|t|");
leg33->AddEntry(hT2_5,"CCCoh 5cm");
leg33->AddEntry(hT2,"CCCoh 10cm");
leg33->AddEntry(hT2_15,"CCCoh 15cm");
leg33->AddEntry(hT2_5Other,"Other 5cm");
leg33->AddEntry(hT2Other,"Other 10cm");
leg33->AddEntry(hT2_15Other,"Other 15cm");
leg33->Draw();



TCanvas *c36 = new TCanvas("c36", "Cut By Cut Selection");
c36->SetTicks();
c36->SetFillColor(kWhite);


hCondensedSelectionCCCoh->SetLineColor(kBlue);
hCondensedSelectionCCCoh->SetLineWidth(2);
hCondensedSelectionOther->SetLineColor(kBlack);
hCondensedSelectionOther->SetLineWidth(2);

hCondensedSelectionCCCoh->Divide(hCondensedSelectionCCCohDivide);
hCondensedSelectionOther->Divide(hCondensedSelectionOtherDivide);

hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(1, "Starting Events");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(2, "CC-Inclusive Preselection");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(3, "Num. Tracks == 2");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(4, "Cone Angle < 20 Degrees");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(5, "DoCA < 7 cm");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(6, "Vertex Activity < 7500 ADC");
hCondensedSelectionCCCoh->GetXaxis()->SetBinLabel(7, "Pion Candidate's #chi_{#mu}^{2} < 20 && #chi_{p}^{2} > 50");

hCondensedSelectionCCCoh->GetYaxis()->SetRangeUser(0, 1.05);

hCondensedSelectionCCCoh->Draw("histo");
hCondensedSelectionOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg36 = new TLegend();
leg36 = new TLegend(0.58,0.65,1.00,1.00);
leg36->SetTextSize(0.04);
leg36->SetTextAlign(12);
leg36->SetFillColor(kWhite);
leg36->SetLineColor(kWhite);
leg36->SetShadowColor(kWhite);
leg36->SetHeader("Channel");
leg36->AddEntry(hCondensedSelectionCCCoh,"CCCoh");
leg36->AddEntry(hCondensedSelectionOther,"Other");
leg36->Draw();



TCanvas *c37 = new TCanvas("c37", "Candidates Muon Chi2");
c37->SetTicks();
c37->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateMuonChi2After->Scale(1/hMuonCandidateMuonChi2After->Integral());
hPionCandidateMuonChi2After->Scale(1/hPionCandidateMuonChi2After->Integral());
hMuonCandidateMuonChi2AfterOther->Scale(1/hMuonCandidateMuonChi2AfterOther->Integral());
hPionCandidateMuonChi2AfterOther->Scale(1/hPionCandidateMuonChi2AfterOther->Integral());

hMuonCandidateMuonChi2After->SetLineColor(kBlue);
hMuonCandidateMuonChi2After->SetLineWidth(2);
hMuonCandidateMuonChi2After->Rebin(5);
hPionCandidateMuonChi2After->SetLineColor(kCyan);
hPionCandidateMuonChi2After->SetLineWidth(2);
hPionCandidateMuonChi2After->Rebin(5);
hMuonCandidateMuonChi2AfterOther->SetLineColor(kBlack);
hMuonCandidateMuonChi2AfterOther->SetLineWidth(2);
hMuonCandidateMuonChi2AfterOther->Rebin(5);
hPionCandidateMuonChi2AfterOther->SetLineColor(kGray);
hPionCandidateMuonChi2AfterOther->SetLineWidth(2);
hPionCandidateMuonChi2AfterOther->Rebin(5);

hMuonCandidateMuonChi2AfterOther->GetXaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateMuonChi2AfterOther->GetXaxis()->CenterTitle();
hMuonCandidateMuonChi2AfterOther->GetXaxis()->SetRangeUser(0, 100);

hMuonCandidateMuonChi2AfterOther->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateMuonChi2AfterOther->GetYaxis()->CenterTitle();

hMuonCandidateMuonChi2AfterOther->Draw("histo");
hPionCandidateMuonChi2After->Draw("histosame");
hMuonCandidateMuonChi2After->Draw("histosame");
hPionCandidateMuonChi2AfterOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg37 = new TLegend();
leg37 = new TLegend(0.58,0.65,1.00,1.00);
leg37->SetTextSize(0.04);
leg37->SetTextAlign(12);
leg37->SetFillColor(kWhite);
leg37->SetLineColor(kWhite);
leg37->SetShadowColor(kWhite);
leg37->SetHeader("Channel and Candidate");
leg37->AddEntry(hMuonCandidateMuonChi2After,"#mu Candidate CCCoh");
leg37->AddEntry(hPionCandidateMuonChi2After,"#pi Candidate CCCoh");
leg37->AddEntry(hMuonCandidateMuonChi2AfterOther,"#mu Candidate Other");
leg37->AddEntry(hPionCandidateMuonChi2AfterOther,"#pi Candidate Other");
leg37->Draw();



TCanvas *c38 = new TCanvas("c38", "Candidates Proton Chi2");
c38->SetTicks();
c38->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateProtonChi2After->Scale(1/hMuonCandidateProtonChi2After->Integral());
hPionCandidateProtonChi2After->Scale(1/hPionCandidateProtonChi2After->Integral());
hMuonCandidateProtonChi2AfterOther->Scale(1/hMuonCandidateProtonChi2AfterOther->Integral());
hPionCandidateProtonChi2AfterOther->Scale(1/hPionCandidateProtonChi2AfterOther->Integral());

hMuonCandidateProtonChi2After->SetLineColor(kBlue);
hMuonCandidateProtonChi2After->SetLineWidth(2);
hMuonCandidateProtonChi2After->Rebin(5);
hPionCandidateProtonChi2After->SetLineColor(kCyan);
hPionCandidateProtonChi2After->SetLineWidth(2);
hPionCandidateProtonChi2After->Rebin(5);
hMuonCandidateProtonChi2AfterOther->SetLineColor(kBlack);
hMuonCandidateProtonChi2AfterOther->SetLineWidth(2);
hMuonCandidateProtonChi2AfterOther->Rebin(5);
hPionCandidateProtonChi2AfterOther->SetLineColor(kGray);
hPionCandidateProtonChi2AfterOther->SetLineWidth(2);
hPionCandidateProtonChi2AfterOther->Rebin(5);

hPionCandidateProtonChi2AfterOther->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateProtonChi2AfterOther->GetXaxis()->CenterTitle();
hPionCandidateProtonChi2AfterOther->GetXaxis()->SetRangeUser(0, 350);

hPionCandidateProtonChi2AfterOther->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateProtonChi2AfterOther->GetYaxis()->CenterTitle();

hPionCandidateProtonChi2AfterOther->Draw("histo");
hPionCandidateProtonChi2After->Draw("histosame");
hMuonCandidateProtonChi2After->Draw("histosame");
hMuonCandidateProtonChi2AfterOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg38 = new TLegend();
leg38 = new TLegend(0.58,0.65,1.00,1.00);
leg38->SetTextSize(0.04);
leg38->SetTextAlign(12);
leg38->SetFillColor(kWhite);
leg38->SetLineColor(kWhite);
leg38->SetShadowColor(kWhite);
leg38->SetHeader("Channel and Candidate");
leg38->AddEntry(hMuonCandidateProtonChi2After,"#mu Candidate CCCoh");
leg38->AddEntry(hPionCandidateProtonChi2After,"#pi Candidate CCCoh");
leg38->AddEntry(hMuonCandidateProtonChi2AfterOther,"#mu Candidate Other");
leg38->AddEntry(hPionCandidateProtonChi2AfterOther,"#pi Candidate Other");
leg38->Draw();



TCanvas *c39 = new TCanvas("c39", "#mu Candidates True and Reco Track Lengths");
c39->SetTicks();
c39->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateTrueTrackLengthAfter->Scale(1/hMuonCandidateTrueTrackLengthAfter->Integral());
hMuonCandidateRecoTrackLengthAfter->Scale(1/hMuonCandidateRecoTrackLengthAfter->Integral());
hMuonCandidateTrueTrackLengthAfterOther->Scale(1/hMuonCandidateTrueTrackLengthAfterOther->Integral());
hMuonCandidateRecoTrackLengthAfterOther->Scale(1/hMuonCandidateRecoTrackLengthAfterOther->Integral());

hMuonCandidateTrueTrackLengthAfter->SetLineColor(kBlue);
hMuonCandidateTrueTrackLengthAfter->SetLineWidth(2);
hMuonCandidateTrueTrackLengthAfter->Rebin(20);
hMuonCandidateRecoTrackLengthAfter->SetLineColor(kCyan);
hMuonCandidateRecoTrackLengthAfter->SetLineWidth(2);
hMuonCandidateRecoTrackLengthAfter->Rebin(20);
hMuonCandidateTrueTrackLengthAfterOther->SetLineColor(kBlack);
hMuonCandidateTrueTrackLengthAfterOther->SetLineWidth(2);
hMuonCandidateTrueTrackLengthAfterOther->Rebin(20);
hMuonCandidateRecoTrackLengthAfterOther->SetLineColor(kGray);
hMuonCandidateRecoTrackLengthAfterOther->SetLineWidth(2);
hMuonCandidateRecoTrackLengthAfterOther->Rebin(20);

hMuonCandidateRecoTrackLengthAfterOther->GetXaxis()->SetTitle("Track Length [cm]");
hMuonCandidateRecoTrackLengthAfterOther->GetXaxis()->CenterTitle();
//hMuonCandidateRecoTrackLengthAfterOther->GetXaxis()->SetRangeUser(0, 350);

hMuonCandidateRecoTrackLengthAfterOther->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateRecoTrackLengthAfterOther->GetYaxis()->CenterTitle();

hMuonCandidateRecoTrackLengthAfterOther->Draw("histo");
hMuonCandidateTrueTrackLengthAfterOther->Draw("histosame");
hMuonCandidateRecoTrackLengthAfter->Draw("histosame");
hMuonCandidateTrueTrackLengthAfter->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg39 = new TLegend();
leg39 = new TLegend(0.58,0.65,1.00,1.00);
leg39->SetTextSize(0.04);
leg39->SetTextAlign(12);
leg39->SetFillColor(kWhite);
leg39->SetLineColor(kWhite);
leg39->SetShadowColor(kWhite);
leg39->SetHeader("Channel");
leg39->AddEntry(hMuonCandidateTrueTrackLengthAfter,"#mu Candidate True CCCoh");
leg39->AddEntry(hMuonCandidateRecoTrackLengthAfter,"#mu Candidate Reco CCCoh");
leg39->AddEntry(hMuonCandidateTrueTrackLengthAfterOther,"#mu Candidate True Other");
leg39->AddEntry(hMuonCandidateRecoTrackLengthAfterOther,"#mu Candidate Reco Other");
leg39->Draw();



TCanvas *c40 = new TCanvas("c40", "#pi Candidates True and Reco Track Lengths");
c40->SetTicks();
c40->SetFillColor(kWhite);


// Area normalzing the plot 
hPionCandidateTrueTrackLengthAfter->Scale(1/hPionCandidateTrueTrackLengthAfter->Integral());
hPionCandidateRecoTrackLengthAfter->Scale(1/hPionCandidateRecoTrackLengthAfter->Integral());
hPionCandidateTrueTrackLengthAfterOther->Scale(1/hPionCandidateTrueTrackLengthAfterOther->Integral());
hPionCandidateRecoTrackLengthAfterOther->Scale(1/hPionCandidateRecoTrackLengthAfterOther->Integral());

hPionCandidateTrueTrackLengthAfter->SetLineColor(kBlue);
hPionCandidateTrueTrackLengthAfter->SetLineWidth(2);
hPionCandidateTrueTrackLengthAfter->Rebin(10);
hPionCandidateRecoTrackLengthAfter->SetLineColor(kCyan);
hPionCandidateRecoTrackLengthAfter->SetLineWidth(2);
hPionCandidateRecoTrackLengthAfter->Rebin(10);
hPionCandidateTrueTrackLengthAfterOther->SetLineColor(kBlack);
hPionCandidateTrueTrackLengthAfterOther->SetLineWidth(2);
hPionCandidateTrueTrackLengthAfterOther->Rebin(10);
hPionCandidateRecoTrackLengthAfterOther->SetLineColor(kGray);
hPionCandidateRecoTrackLengthAfterOther->SetLineWidth(2);
hPionCandidateRecoTrackLengthAfterOther->Rebin(10);

hPionCandidateRecoTrackLengthAfterOther->GetXaxis()->SetTitle("Track Length [cm]");
hPionCandidateRecoTrackLengthAfterOther->GetXaxis()->CenterTitle();
//hPionCandidateRecoTrackLengthAfterOther->GetXaxis()->SetRangeUser(0, 350);

hPionCandidateRecoTrackLengthAfterOther->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateRecoTrackLengthAfterOther->GetYaxis()->CenterTitle();

hPionCandidateRecoTrackLengthAfterOther->Draw("histo");
hPionCandidateTrueTrackLengthAfterOther->Draw("histosame");
hPionCandidateRecoTrackLengthAfter->Draw("histosame");
hPionCandidateTrueTrackLengthAfter->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg40 = new TLegend();
leg40 = new TLegend(0.58,0.65,1.00,1.00);
leg40->SetTextSize(0.04);
leg40->SetTextAlign(12);
leg40->SetFillColor(kWhite);
leg40->SetLineColor(kWhite);
leg40->SetShadowColor(kWhite);
leg40->SetHeader("Channel");
leg40->AddEntry(hPionCandidateTrueTrackLengthAfter,"#pi Candidate True CCCoh");
leg40->AddEntry(hPionCandidateRecoTrackLengthAfter,"#pi Candidate Reco CCCoh");
leg40->AddEntry(hPionCandidateTrueTrackLengthAfterOther,"#pi Candidate True Other");
leg40->AddEntry(hPionCandidateRecoTrackLengthAfterOther,"#pi Candidate Reco Other");
leg40->Draw();



TCanvas *c41 = new TCanvas("c41", "Delta Track Lengths");
c41->SetTicks();
c41->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateDeltaLengthAfter->Scale(1/hMuonCandidateDeltaLengthAfter->Integral());
hMuonCandidateDeltaLengthAfterOther->Scale(1/hMuonCandidateDeltaLengthAfterOther->Integral());
hPionCandidateDeltaLengthAfter->Scale(1/hPionCandidateDeltaLengthAfter->Integral());
hPionCandidateDeltaLengthAfterOther->Scale(1/hPionCandidateDeltaLengthAfterOther->Integral());

hMuonCandidateDeltaLengthAfter->SetLineColor(kBlue);
hMuonCandidateDeltaLengthAfter->SetLineWidth(2);
hMuonCandidateDeltaLengthAfter->Rebin(10);
hPionCandidateDeltaLengthAfter->SetLineColor(kCyan);
hPionCandidateDeltaLengthAfter->SetLineWidth(2);
hPionCandidateDeltaLengthAfter->Rebin(10);
hMuonCandidateDeltaLengthAfterOther->SetLineColor(kBlack);
hMuonCandidateDeltaLengthAfterOther->SetLineWidth(2);
hMuonCandidateDeltaLengthAfterOther->Rebin(10);
hPionCandidateDeltaLengthAfterOther->SetLineColor(kGray);
hPionCandidateDeltaLengthAfterOther->SetLineWidth(2);
hPionCandidateDeltaLengthAfterOther->Rebin(10);

hPionCandidateDeltaLengthAfterOther->GetXaxis()->SetTitle("#Delta Track Length (True - Reco) [cm]");
hPionCandidateDeltaLengthAfterOther->GetXaxis()->CenterTitle();
//hPionCandidateDeltaLengthAfterOther->GetXaxis()->SetRangeUser(0, 350);

hPionCandidateDeltaLengthAfterOther->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateDeltaLengthAfterOther->GetYaxis()->CenterTitle();

hPionCandidateDeltaLengthAfterOther->Draw("histo");
hMuonCandidateDeltaLengthAfterOther->Draw("histosame");
hPionCandidateDeltaLengthAfter->Draw("histosame");
hMuonCandidateDeltaLengthAfter->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg41 = new TLegend();
leg41 = new TLegend(0.58,0.65,1.00,1.00);
leg41->SetTextSize(0.04);
leg41->SetTextAlign(12);
leg41->SetFillColor(kWhite);
leg41->SetLineColor(kWhite);
leg41->SetShadowColor(kWhite);
leg41->SetHeader("Channel and Candidate");
leg41->AddEntry(hMuonCandidateDeltaLengthAfter,"#mu Candidate CCCoh");
leg41->AddEntry(hPionCandidateDeltaLengthAfter,"#pi Candidate CCCoh");
leg41->AddEntry(hMuonCandidateDeltaLengthAfterOther,"#mu Candidate Other");
leg41->AddEntry(hPionCandidateDeltaLengthAfterOther,"#pi Candidate Other");
leg41->Draw();



TCanvas *c42 = new TCanvas("c42", "#mu Candidates True and Reco Track Lengths After Proton Chi2 Selection");
c42->SetTicks();
c42->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateTrueTrackLengthAfter2->Scale(1/hMuonCandidateTrueTrackLengthAfter2->Integral());
hMuonCandidateRecoTrackLengthAfter2->Scale(1/hMuonCandidateRecoTrackLengthAfter2->Integral());
hMuonCandidateTrueTrackLengthAfter2Other->Scale(1/hMuonCandidateTrueTrackLengthAfter2Other->Integral());
hMuonCandidateRecoTrackLengthAfter2Other->Scale(1/hMuonCandidateRecoTrackLengthAfter2Other->Integral());

hMuonCandidateTrueTrackLengthAfter2->SetLineColor(kBlue);
hMuonCandidateTrueTrackLengthAfter2->SetLineWidth(2);
hMuonCandidateTrueTrackLengthAfter2->Rebin(20);
hMuonCandidateRecoTrackLengthAfter2->SetLineColor(kCyan);
hMuonCandidateRecoTrackLengthAfter2->SetLineWidth(2);
hMuonCandidateRecoTrackLengthAfter2->Rebin(20);
hMuonCandidateTrueTrackLengthAfter2Other->SetLineColor(kBlack);
hMuonCandidateTrueTrackLengthAfter2Other->SetLineWidth(2);
hMuonCandidateTrueTrackLengthAfter2Other->Rebin(20);
hMuonCandidateRecoTrackLengthAfter2Other->SetLineColor(kGray);
hMuonCandidateRecoTrackLengthAfter2Other->SetLineWidth(2);
hMuonCandidateRecoTrackLengthAfter2Other->Rebin(20);

hMuonCandidateRecoTrackLengthAfter2Other->GetXaxis()->SetTitle("Track Length [cm]");
hMuonCandidateRecoTrackLengthAfter2Other->GetXaxis()->CenterTitle();
//hMuonCandidateRecoTrackLengthAfter2Other->GetXaxis()->SetRangeUser(0, 350);

hMuonCandidateRecoTrackLengthAfter2Other->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateRecoTrackLengthAfter2Other->GetYaxis()->CenterTitle();

hMuonCandidateRecoTrackLengthAfter2Other->Draw("histo");
hMuonCandidateTrueTrackLengthAfter2Other->Draw("histosame");
hMuonCandidateRecoTrackLengthAfter2->Draw("histosame");
hMuonCandidateTrueTrackLengthAfter2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg42 = new TLegend();
leg42 = new TLegend(0.58,0.65,1.00,1.00);
leg42->SetTextSize(0.04);
leg42->SetTextAlign(12);
leg42->SetFillColor(kWhite);
leg42->SetLineColor(kWhite);
leg42->SetShadowColor(kWhite);
leg42->SetHeader("Channel");
leg42->AddEntry(hMuonCandidateTrueTrackLengthAfter2,"#mu Candidate True CCCoh");
leg42->AddEntry(hMuonCandidateRecoTrackLengthAfter2,"#mu Candidate Reco CCCoh");
leg42->AddEntry(hMuonCandidateTrueTrackLengthAfter2Other,"#mu Candidate True Other");
leg42->AddEntry(hMuonCandidateRecoTrackLengthAfter2Other,"#mu Candidate Reco Other");
leg42->Draw();



TCanvas *c43 = new TCanvas("c43", "#pi Candidates True and Reco Track Lengths After Proton Chi2 Selection");
c43->SetTicks();
c43->SetFillColor(kWhite);


// Area normalzing the plot 
hPionCandidateTrueTrackLengthAfter2->Scale(1/hPionCandidateTrueTrackLengthAfter2->Integral());
hPionCandidateRecoTrackLengthAfter2->Scale(1/hPionCandidateRecoTrackLengthAfter2->Integral());
hPionCandidateTrueTrackLengthAfter2Other->Scale(1/hPionCandidateTrueTrackLengthAfter2Other->Integral());
hPionCandidateRecoTrackLengthAfter2Other->Scale(1/hPionCandidateRecoTrackLengthAfter2Other->Integral());

hPionCandidateTrueTrackLengthAfter2->SetLineColor(kBlue);
hPionCandidateTrueTrackLengthAfter2->SetLineWidth(2);
hPionCandidateTrueTrackLengthAfter2->Rebin(10);
hPionCandidateRecoTrackLengthAfter2->SetLineColor(kCyan);
hPionCandidateRecoTrackLengthAfter2->SetLineWidth(2);
hPionCandidateRecoTrackLengthAfter2->Rebin(10);
hPionCandidateTrueTrackLengthAfter2Other->SetLineColor(kBlack);
hPionCandidateTrueTrackLengthAfter2Other->SetLineWidth(2);
hPionCandidateTrueTrackLengthAfter2Other->Rebin(10);
hPionCandidateRecoTrackLengthAfter2Other->SetLineColor(kGray);
hPionCandidateRecoTrackLengthAfter2Other->SetLineWidth(2);
hPionCandidateRecoTrackLengthAfter2Other->Rebin(10);

hPionCandidateRecoTrackLengthAfter2Other->GetXaxis()->SetTitle("Track Length [cm]");
hPionCandidateRecoTrackLengthAfter2Other->GetXaxis()->CenterTitle();
//hPionCandidateRecoTrackLengthAfter2Other->GetXaxis()->SetRangeUser(0, 350);

hPionCandidateRecoTrackLengthAfter2Other->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateRecoTrackLengthAfter2Other->GetYaxis()->CenterTitle();

hPionCandidateRecoTrackLengthAfter2Other->Draw("histo");
hPionCandidateTrueTrackLengthAfter2Other->Draw("histosame");
hPionCandidateRecoTrackLengthAfter2->Draw("histosame");
hPionCandidateTrueTrackLengthAfter2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg43 = new TLegend();
leg43 = new TLegend(0.58,0.65,1.00,1.00);
leg43->SetTextSize(0.04);
leg43->SetTextAlign(12);
leg43->SetFillColor(kWhite);
leg43->SetLineColor(kWhite);
leg43->SetShadowColor(kWhite);
leg43->SetHeader("Channel");
leg43->AddEntry(hPionCandidateTrueTrackLengthAfter2,"#pi Candidate True CCCoh");
leg43->AddEntry(hPionCandidateRecoTrackLengthAfter2,"#pi Candidate Reco CCCoh");
leg43->AddEntry(hPionCandidateTrueTrackLengthAfter2Other,"#pi Candidate True Other");
leg43->AddEntry(hPionCandidateRecoTrackLengthAfter2Other,"#pi Candidate Reco Other");
leg43->Draw();



TCanvas *c44 = new TCanvas("c44", "Delta Track Lengths After Proton Chi2 Selection");
c44->SetTicks();
c44->SetFillColor(kWhite);


// Area normalzing the plot 
hMuonCandidateDeltaLengthAfter2->Scale(1/hMuonCandidateDeltaLengthAfter2->Integral());
hMuonCandidateDeltaLengthAfter2Other->Scale(1/hMuonCandidateDeltaLengthAfter2Other->Integral());
hPionCandidateDeltaLengthAfter2->Scale(1/hPionCandidateDeltaLengthAfter2->Integral());
hPionCandidateDeltaLengthAfter2Other->Scale(1/hPionCandidateDeltaLengthAfter2Other->Integral());

hMuonCandidateDeltaLengthAfter2->SetLineColor(kBlue);
hMuonCandidateDeltaLengthAfter2->SetLineWidth(2);
hMuonCandidateDeltaLengthAfter2->Rebin(10);
hPionCandidateDeltaLengthAfter2->SetLineColor(kCyan);
hPionCandidateDeltaLengthAfter2->SetLineWidth(2);
hPionCandidateDeltaLengthAfter2->Rebin(10);
hMuonCandidateDeltaLengthAfter2Other->SetLineColor(kBlack);
hMuonCandidateDeltaLengthAfter2Other->SetLineWidth(2);
hMuonCandidateDeltaLengthAfter2Other->Rebin(10);
hPionCandidateDeltaLengthAfter2Other->SetLineColor(kGray);
hPionCandidateDeltaLengthAfter2Other->SetLineWidth(2);
hPionCandidateDeltaLengthAfter2Other->Rebin(10);

hPionCandidateDeltaLengthAfter2Other->GetXaxis()->SetTitle("#Delta Track Length (True - Reco) [cm]");
hPionCandidateDeltaLengthAfter2Other->GetXaxis()->CenterTitle();
//hPionCandidateDeltaLengthAfter2Other->GetXaxis()->SetRangeUser(0, 350);

hPionCandidateDeltaLengthAfter2Other->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateDeltaLengthAfter2Other->GetYaxis()->CenterTitle();

hPionCandidateDeltaLengthAfter2Other->Draw("histo");
hMuonCandidateDeltaLengthAfter2Other->Draw("histosame");
hPionCandidateDeltaLengthAfter2->Draw("histosame");
hMuonCandidateDeltaLengthAfter2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg44 = new TLegend();
leg44 = new TLegend(0.58,0.65,1.00,1.00);
leg44->SetTextSize(0.04);
leg44->SetTextAlign(12);
leg44->SetFillColor(kWhite);
leg44->SetLineColor(kWhite);
leg44->SetShadowColor(kWhite);
leg44->SetHeader("Channel and Candidate");
leg44->AddEntry(hMuonCandidateDeltaLengthAfter2,"#mu Candidate CCCoh");
leg44->AddEntry(hPionCandidateDeltaLengthAfter2,"#pi Candidate CCCoh");
leg44->AddEntry(hMuonCandidateDeltaLengthAfter2Other,"#mu Candidate Other");
leg44->AddEntry(hPionCandidateDeltaLengthAfter2Other,"#pi Candidate Other");
leg44->Draw();



TCanvas *c45 = new TCanvas("c45", "Muon Candidates #mu #chi^{2} Vs p #chi^{2} for CCCoh Events", 2);
c45->SetTicks();
c45->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2After->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2After->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2After->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2After->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2After->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2After->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2After->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2After->SetAxisRange(0., 60., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2After->Draw("COLZ");



TCanvas *c46 = new TCanvas("c46", "Muon Candidates #mu #chi^{2} Vs p #chi^{2} for Other Events", 2);
c46->SetTicks();
c46->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->SetAxisRange(0., 60., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2AfterOther->Draw("COLZ");



TCanvas *c47 = new TCanvas("c47", "Pion Candidates #mu #chi^{2} Vs p #chi^{2} for CCCoh Events", 2);
c47->SetTicks();
c47->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2After->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2After->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2After->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2After->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2After->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2After->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2After->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2After->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2After->Draw("COLZ");



TCanvas *c48 = new TCanvas("c48", "Pion Candidates #mu #chi^{2} Vs p #chi^{2} for Other Events", 2);
c48->SetTicks();
c48->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2AfterOther->Draw("COLZ");



TCanvas *c49 = new TCanvas("c49", "Stacked True Cone Angles After Selection");
c49->SetTicks();
c49->SetFillColor(kWhite);

hTrueConeAngleAfter->SetFillColor(kBlue);
hTrueConeAngleAfter->Scale(CCCohScaleFactor);
hTrueConeAngleAfter->Rebin(10);
//hTrueConeAngleAfterCCCoh->SetFillColor(kBlue);
//hTrueConeAngleAfterCCCoh->Rebin(10);
hTrueConeAngleAfterCCQE->SetFillColor(kViolet);
hTrueConeAngleAfterCCQE->Rebin(10);
hTrueConeAngleAfterCCRes->SetFillColor(kRed);
hTrueConeAngleAfterCCRes->Rebin(10);
hTrueConeAngleAfterOther->SetFillColor(kBlack);
hTrueConeAngleAfterOther->Rebin(10);
hTrueConeAngleAfterOther->Add(hTrueConeAngleAfterCCQE, -1);
hTrueConeAngleAfterOther->Add(hTrueConeAngleAfterCCRes, -1);
hTrueConeAngleAfterStacked->Add(hTrueConeAngleAfterOther);
hTrueConeAngleAfterStacked->Add(hTrueConeAngleAfterCCQE);
hTrueConeAngleAfterStacked->Add(hTrueConeAngleAfterCCRes);
hTrueConeAngleAfterStacked->Add(hTrueConeAngleAfter);
//hTrueConeAngleAfterStacked->Add(hTrueConeAngleAfterCCCoh);

hTrueConeAngleAfterStacked->Draw("HIST");
hTrueConeAngleAfterStacked->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hTrueConeAngleAfterStacked->GetXaxis()->CenterTitle();
hTrueConeAngleAfterStacked->GetYaxis()->SetTitle("Number of Events");
hTrueConeAngleAfterStacked->GetYaxis()->CenterTitle();
c49->Modified();

// ### Defining the legend for the plot ###
TLegend *leg49 = new TLegend();
leg49 = new TLegend(0.58,0.65,1.00,1.00);
leg49->SetTextSize(0.04);
leg49->SetTextAlign(12);
leg49->SetFillColor(kWhite);
leg49->SetLineColor(kWhite);
leg49->SetShadowColor(kWhite);
leg49->SetHeader("Channel");
leg49->AddEntry(hTrueConeAngleAfter,"True CC-Coh");
//leg49->AddEntry(hTrueConeAngleAfterCCCoh,"True CC-Coh");
leg49->AddEntry(hTrueConeAngleAfterCCQE,"True CC-QE");
leg49->AddEntry(hTrueConeAngleAfterCCRes,"True CC-Res");
leg49->AddEntry(hTrueConeAngleAfterOther,"True Other");
leg49->Draw();



TCanvas *c50 = new TCanvas("c50", "Stacked Reco Cone Angles After Selection");
c50->SetTicks();
c50->SetFillColor(kWhite);

hRecoConeAngleAfter->SetFillColor(kBlue);
hRecoConeAngleAfter->Scale(CCCohScaleFactor);
hRecoConeAngleAfter->Rebin(10);
//hRecoConeAngleAfterCCCoh->SetFillColor(kBlue);
//hRecoConeAngleAfterCCCoh->Rebin(10);
hRecoConeAngleAfterCCQE->SetFillColor(kViolet);
hRecoConeAngleAfterCCQE->Rebin(10);
hRecoConeAngleAfterCCRes->SetFillColor(kRed);
hRecoConeAngleAfterCCRes->Rebin(10);
hRecoConeAngleAfterOther->SetFillColor(kBlack);
hRecoConeAngleAfterOther->Rebin(10);
hRecoConeAngleAfterOther->Add(hRecoConeAngleAfterCCQE, -1);
hRecoConeAngleAfterOther->Add(hRecoConeAngleAfterCCRes, -1);
hRecoConeAngleAfterStacked->Add(hRecoConeAngleAfterOther);
hRecoConeAngleAfterStacked->Add(hRecoConeAngleAfterCCQE);
hRecoConeAngleAfterStacked->Add(hRecoConeAngleAfterCCRes);
hRecoConeAngleAfterStacked->Add(hRecoConeAngleAfter);
//hRecoConeAngleAfterStacked->Add(hRecoConeAngleAfterCCCoh);

hRecoConeAngleAfterStacked->Draw("HIST");
hRecoConeAngleAfterStacked->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hRecoConeAngleAfterStacked->GetXaxis()->CenterTitle();
hRecoConeAngleAfterStacked->GetYaxis()->SetTitle("Number of Events");
hRecoConeAngleAfterStacked->GetYaxis()->CenterTitle();
c50->Modified();

// ### Defining the legend for the plot ###
TLegend *leg50 = new TLegend();
leg50 = new TLegend(0.58,0.65,1.00,1.00);
leg50->SetTextSize(0.04);
leg50->SetTextAlign(12);
leg50->SetFillColor(kWhite);
leg50->SetLineColor(kWhite);
leg50->SetShadowColor(kWhite);
leg50->SetHeader("Channel");
leg50->AddEntry(hRecoConeAngleAfter,"Reco CC-Coh");
//leg50->AddEntry(hRecoConeAngleAfterCCCoh,"Reco CC-Coh");
leg50->AddEntry(hRecoConeAngleAfterCCQE,"Reco CC-QE");
leg50->AddEntry(hRecoConeAngleAfterCCRes,"Reco CC-Res");
leg50->AddEntry(hRecoConeAngleAfterOther,"Reco Other");
leg50->Draw();



TCanvas *c51 = new TCanvas("c51", "Stacked True Opening Angles After Selection");
c51->SetTicks();
c51->SetFillColor(kWhite);

hTrueOpeningAngleAfter->SetFillColor(kBlue);
hTrueOpeningAngleAfter->Scale(CCCohScaleFactor);
hTrueOpeningAngleAfter->Rebin(10);
//hTrueOpeningAngleAfterCCCoh->SetFillColor(kBlue);
//hTrueOpeningAngleAfterCCCoh->Rebin(10);
hTrueOpeningAngleAfterCCQE->SetFillColor(kViolet);
hTrueOpeningAngleAfterCCQE->Rebin(10);
hTrueOpeningAngleAfterCCRes->SetFillColor(kRed);
hTrueOpeningAngleAfterCCRes->Rebin(10);
hTrueOpeningAngleAfterOther->SetFillColor(kBlack);
hTrueOpeningAngleAfterOther->Rebin(10);
hTrueOpeningAngleAfterOther->Add(hTrueOpeningAngleAfterCCQE, -1);
hTrueOpeningAngleAfterOther->Add(hTrueOpeningAngleAfterCCRes, -1);
hTrueOpeningAngleAfterStacked->Add(hTrueOpeningAngleAfterOther);
hTrueOpeningAngleAfterStacked->Add(hTrueOpeningAngleAfterCCQE);
hTrueOpeningAngleAfterStacked->Add(hTrueOpeningAngleAfterCCRes);
hTrueOpeningAngleAfterStacked->Add(hTrueOpeningAngleAfter);
//hTrueOpeningAngleAfterStacked->Add(hTrueOpeningAngleAfterCCCoh);

hTrueOpeningAngleAfterStacked->Draw("HIST");
hTrueOpeningAngleAfterStacked->GetXaxis()->SetTitle("Opening Angle [Degrees]");
hTrueOpeningAngleAfterStacked->GetXaxis()->CenterTitle();
hTrueOpeningAngleAfterStacked->GetYaxis()->SetTitle("Number of Events");
hTrueOpeningAngleAfterStacked->GetYaxis()->CenterTitle();
c51->Modified();

// ### Defining the legend for the plot ###
TLegend *leg51 = new TLegend();
leg51 = new TLegend(0.58,0.65,1.00,1.00);
leg51->SetTextSize(0.04);
leg51->SetTextAlign(12);
leg51->SetFillColor(kWhite);
leg51->SetLineColor(kWhite);
leg51->SetShadowColor(kWhite);
leg51->SetHeader("Channel");
leg51->AddEntry(hTrueOpeningAngleAfter,"True CC-Coh");
//leg51->AddEntry(hTrueOpeningAngleAfterCCCoh,"True CC-Coh");
leg51->AddEntry(hTrueOpeningAngleAfterCCQE,"True CC-QE");
leg51->AddEntry(hTrueOpeningAngleAfterCCRes,"True CC-Res");
leg51->AddEntry(hTrueOpeningAngleAfterOther,"True Other");
leg51->Draw();



TCanvas *c52 = new TCanvas("c52", "Stacked Reco Opening Angles After Selection");
c52->SetTicks();
c52->SetFillColor(kWhite);

hRecoOpeningAngleAfter->SetFillColor(kBlue);
hRecoOpeningAngleAfter->Scale(CCCohScaleFactor);
hRecoOpeningAngleAfter->Rebin(10);
//hRecoOpeningAngleAfterCCCoh->SetFillColor(kBlue);
//hRecoOpeningAngleAfterCCCoh->Rebin(10);
hRecoOpeningAngleAfterCCQE->SetFillColor(kViolet);
hRecoOpeningAngleAfterCCQE->Rebin(10);
hRecoOpeningAngleAfterCCRes->SetFillColor(kRed);
hRecoOpeningAngleAfterCCRes->Rebin(10);
hRecoOpeningAngleAfterOther->SetFillColor(kBlack);
hRecoOpeningAngleAfterOther->Rebin(10);
hRecoOpeningAngleAfterOther->Add(hRecoOpeningAngleAfterCCQE, -1);
hRecoOpeningAngleAfterOther->Add(hRecoOpeningAngleAfterCCRes, -1);
hRecoOpeningAngleAfterStacked->Add(hRecoOpeningAngleAfterOther);
hRecoOpeningAngleAfterStacked->Add(hRecoOpeningAngleAfterCCQE);
hRecoOpeningAngleAfterStacked->Add(hRecoOpeningAngleAfterCCRes);
hRecoOpeningAngleAfterStacked->Add(hRecoOpeningAngleAfter);
//hRecoOpeningAngleAfterStacked->Add(hRecoOpeningAngleAfterCCCoh);

hRecoOpeningAngleAfterStacked->Draw("HIST");
hRecoOpeningAngleAfterStacked->GetXaxis()->SetTitle("Opening Angle [Degrees]");
hRecoOpeningAngleAfterStacked->GetXaxis()->CenterTitle();
hRecoOpeningAngleAfterStacked->GetYaxis()->SetTitle("Number of Events");
hRecoOpeningAngleAfterStacked->GetYaxis()->CenterTitle();
c52->Modified();

// ### Defining the legend for the plot ###
TLegend *leg52 = new TLegend();
leg52 = new TLegend(0.58,0.65,1.00,1.00);
leg52->SetTextSize(0.04);
leg52->SetTextAlign(12);
leg52->SetFillColor(kWhite);
leg52->SetLineColor(kWhite);
leg52->SetShadowColor(kWhite);
leg52->SetHeader("Channel");
leg52->AddEntry(hRecoOpeningAngleAfter,"Reco CC-Coh");
//leg52->AddEntry(hRecoOpeningAngleAfterCCCoh,"Reco CC-Coh");
leg52->AddEntry(hRecoOpeningAngleAfterCCQE,"Reco CC-QE");
leg52->AddEntry(hRecoOpeningAngleAfterCCRes,"Reco CC-Res");
leg52->AddEntry(hRecoOpeningAngleAfterOther,"Reco Other");
leg52->Draw();


/*
TCanvas *c53 = new TCanvas("c53", "Stacked True Muon Candidate Momentums After Selection");
c53->SetTicks();
c53->SetFillColor(kWhite);

hMuonCandidateAfterMomentumTrue->SetFillColor(kBlue);
hMuonCandidateAfterMomentumTrue->Scale(CCCohScaleFactor);
hMuonCandidateAfterMomentumTrue->Rebin(100);
//hMuonCandidateAfterMomentumTrueCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfterMomentumTrueCCCoh->Rebin(100);
hMuonCandidateAfterMomentumTrueCCQE->SetFillColor(kViolet);
hMuonCandidateAfterMomentumTrueCCQE->Rebin(100);
hMuonCandidateAfterMomentumTrueCCRes->SetFillColor(kRed);
hMuonCandidateAfterMomentumTrueCCRes->Rebin(100);
hMuonCandidateAfterMomentumTrueOther->SetFillColor(kBlack);
hMuonCandidateAfterMomentumTrueOther->Rebin(100);
hMuonCandidateAfterMomentumTrueOther->Add(hMuonCandidateAfterMomentumTrueCCQE, -1);
hMuonCandidateAfterMomentumTrueOther->Add(hMuonCandidateAfterMomentumTrueCCRes, -1);
hMuonCandidateAfterMomentumTrueStacked->Add(hMuonCandidateAfterMomentumTrueOther);
hMuonCandidateAfterMomentumTrueStacked->Add(hMuonCandidateAfterMomentumTrueCCQE);
hMuonCandidateAfterMomentumTrueStacked->Add(hMuonCandidateAfterMomentumTrueCCRes);
hMuonCandidateAfterMomentumTrueStacked->Add(hMuonCandidateAfterMomentumTrue);
//hMuonCandidateAfterMomentumTrueStacked->Add(hMuonCandidateAfterMomentumTrueCCCoh);

hMuonCandidateAfterMomentumTrueStacked->Draw("HIST");
hMuonCandidateAfterMomentumTrueStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterMomentumTrueStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfterMomentumTrueStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfterMomentumTrueStacked->GetYaxis()->CenterTitle();
c53->Modified();

// ### Defining the legend for the plot ###
TLegend *leg53 = new TLegend();
leg53 = new TLegend(0.58,0.65,1.00,1.00);
leg53->SetTextSize(0.04);
leg53->SetTextAlign(12);
leg53->SetFillColor(kWhite);
leg53->SetLineColor(kWhite);
leg53->SetShadowColor(kWhite);
leg53->SetHeader("Channel");
leg53->AddEntry(hMuonCandidateAfterMomentumTrue,"True CC-Coh");
//leg53->AddEntry(hMuonCandidateAfterMomentumTrueCCCoh,"True CC-Coh");
leg53->AddEntry(hMuonCandidateAfterMomentumTrueCCQE,"True CC-QE");
leg53->AddEntry(hMuonCandidateAfterMomentumTrueCCRes,"True CC-Res");
leg53->AddEntry(hMuonCandidateAfterMomentumTrueOther,"True Other");
leg53->Draw();



TCanvas *c54 = new TCanvas("c54", "Stacked Reco Muon Candidate Momentums After Selection");
c54->SetTicks();
c54->SetFillColor(kWhite);

hMuonCandidateAfterMomentumReco->SetFillColor(kBlue);
hMuonCandidateAfterMomentumReco->Scale(CCCohScaleFactor);
hMuonCandidateAfterMomentumReco->Rebin(100);
//hMuonCandidateAfterMomentumRecoCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfterMomentumRecoCCCoh->Rebin(100);
hMuonCandidateAfterMomentumRecoCCQE->SetFillColor(kViolet);
hMuonCandidateAfterMomentumRecoCCQE->Rebin(100);
hMuonCandidateAfterMomentumRecoCCRes->SetFillColor(kRed);
hMuonCandidateAfterMomentumRecoCCRes->Rebin(100);
hMuonCandidateAfterMomentumRecoOther->SetFillColor(kBlack);
hMuonCandidateAfterMomentumRecoOther->Rebin(100);
hMuonCandidateAfterMomentumRecoOther->Add(hMuonCandidateAfterMomentumRecoCCQE, -1);
hMuonCandidateAfterMomentumRecoOther->Add(hMuonCandidateAfterMomentumRecoCCRes, -1);
hMuonCandidateAfterMomentumRecoStacked->Add(hMuonCandidateAfterMomentumRecoOther);
hMuonCandidateAfterMomentumRecoStacked->Add(hMuonCandidateAfterMomentumRecoCCQE);
hMuonCandidateAfterMomentumRecoStacked->Add(hMuonCandidateAfterMomentumRecoCCRes);
hMuonCandidateAfterMomentumRecoStacked->Add(hMuonCandidateAfterMomentumReco);
//hMuonCandidateAfterMomentumRecoStacked->Add(hMuonCandidateAfterMomentumRecoCCCoh);

hMuonCandidateAfterMomentumRecoStacked->Draw("HIST");
hMuonCandidateAfterMomentumRecoStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterMomentumRecoStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfterMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfterMomentumRecoStacked->GetYaxis()->CenterTitle();
c54->Modified();

// ### Defining the legend for the plot ###
TLegend *leg54 = new TLegend();
leg54 = new TLegend(0.58,0.65,1.00,1.00);
leg54->SetTextSize(0.04);
leg54->SetTextAlign(12);
leg54->SetFillColor(kWhite);
leg54->SetLineColor(kWhite);
leg54->SetShadowColor(kWhite);
leg54->SetHeader("Channel");
leg54->AddEntry(hMuonCandidateAfterMomentumReco,"Reco CC-Coh");
//leg54->AddEntry(hMuonCandidateAfterMomentumRecoCCCoh,"Reco CC-Coh");
leg54->AddEntry(hMuonCandidateAfterMomentumRecoCCQE,"Reco CC-QE");
leg54->AddEntry(hMuonCandidateAfterMomentumRecoCCRes,"Reco CC-Res");
leg54->AddEntry(hMuonCandidateAfterMomentumRecoOther,"Reco Other");
leg54->Draw();
*/

/*
TCanvas *c55 = new TCanvas("c55", "Stacked True Pion Candidate Momentums After Selection");
c55->SetTicks();
c55->SetFillColor(kWhite);

hPionCandidateAfterMomentumTrue->SetFillColor(kBlue);
hPionCandidateAfterMomentumTrue->Scale(CCCohScaleFactor);
hPionCandidateAfterMomentumTrue->Rebin(100);
//hPionCandidateAfterMomentumTrueCCCoh->SetFillColor(kBlue);
//hPionCandidateAfterMomentumTrueCCCoh->Rebin(100);
hPionCandidateAfterMomentumTrueCCQE->SetFillColor(kViolet);
hPionCandidateAfterMomentumTrueCCQE->Rebin(100);
hPionCandidateAfterMomentumTrueCCRes->SetFillColor(kRed);
hPionCandidateAfterMomentumTrueCCRes->Rebin(100);
hPionCandidateAfterMomentumTrueOther->SetFillColor(kBlack);
hPionCandidateAfterMomentumTrueOther->Rebin(100);
hPionCandidateAfterMomentumTrueOther->Add(hPionCandidateAfterMomentumTrueCCQE, -1);
hPionCandidateAfterMomentumTrueOther->Add(hPionCandidateAfterMomentumTrueCCRes, -1);
hPionCandidateAfterMomentumTrueStacked->Add(hPionCandidateAfterMomentumTrueOther);
hPionCandidateAfterMomentumTrueStacked->Add(hPionCandidateAfterMomentumTrueCCQE);
hPionCandidateAfterMomentumTrueStacked->Add(hPionCandidateAfterMomentumTrueCCRes);
hPionCandidateAfterMomentumTrueStacked->Add(hPionCandidateAfterMomentumTrue);
//hPionCandidateAfterMomentumTrueStacked->Add(hPionCandidateAfterMomentumTrueCCCoh);

hPionCandidateAfterMomentumTrueStacked->Draw("HIST");
hPionCandidateAfterMomentumTrueStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterMomentumTrueStacked->GetXaxis()->CenterTitle();
hPionCandidateAfterMomentumTrueStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfterMomentumTrueStacked->GetYaxis()->CenterTitle();
c55->Modified();

// ### Defining the legend for the plot ###
TLegend *leg55 = new TLegend();
leg55 = new TLegend(0.58,0.65,1.00,1.00);
leg55->SetTextSize(0.04);
leg55->SetTextAlign(12);
leg55->SetFillColor(kWhite);
leg55->SetLineColor(kWhite);
leg55->SetShadowColor(kWhite);
leg55->SetHeader("Channel");
leg55->AddEntry(hPionCandidateAfterMomentumTrue,"True CC-Coh");
//leg55->AddEntry(hPionCandidateAfterMomentumTrueCCCoh,"True CC-Coh");
leg55->AddEntry(hPionCandidateAfterMomentumTrueCCQE,"True CC-QE");
leg55->AddEntry(hPionCandidateAfterMomentumTrueCCRes,"True CC-Res");
leg55->AddEntry(hPionCandidateAfterMomentumTrueOther,"True Other");
leg55->Draw();
*/


TCanvas *c56 = new TCanvas("c56", "Stacked Reco Pion Candidate Momentums After Selection");
c56->SetTicks();
c56->SetFillColor(kWhite);

hPionCandidateAfterMomentumReco->SetFillColor(kBlue);
hPionCandidateAfterMomentumReco->Scale(CCCohScaleFactor);
hPionCandidateAfterMomentumReco->Rebin(100);
//hPionCandidateAfterMomentumRecoCCCoh->SetFillColor(kBlue);
//hPionCandidateAfterMomentumRecoCCCoh->Rebin(100);
hPionCandidateAfterMomentumRecoCCQE->SetFillColor(kViolet);
hPionCandidateAfterMomentumRecoCCQE->Rebin(100);
hPionCandidateAfterMomentumRecoCCRes->SetFillColor(kRed);
hPionCandidateAfterMomentumRecoCCRes->Rebin(100);
hPionCandidateAfterMomentumRecoOther->SetFillColor(kBlack);
hPionCandidateAfterMomentumRecoOther->Rebin(100);
hPionCandidateAfterMomentumRecoOther->Add(hPionCandidateAfterMomentumRecoCCQE, -1);
hPionCandidateAfterMomentumRecoOther->Add(hPionCandidateAfterMomentumRecoCCRes, -1);
hPionCandidateAfterMomentumRecoStacked->Add(hPionCandidateAfterMomentumRecoOther);
hPionCandidateAfterMomentumRecoStacked->Add(hPionCandidateAfterMomentumRecoCCQE);
hPionCandidateAfterMomentumRecoStacked->Add(hPionCandidateAfterMomentumRecoCCRes);
hPionCandidateAfterMomentumRecoStacked->Add(hPionCandidateAfterMomentumReco);
//hPionCandidateAfterMomentumRecoStacked->Add(hPionCandidateAfterMomentumRecoCCCoh);

hPionCandidateAfterMomentumRecoStacked->Draw("HIST");
hPionCandidateAfterMomentumRecoStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterMomentumRecoStacked->GetXaxis()->CenterTitle();
hPionCandidateAfterMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfterMomentumRecoStacked->GetYaxis()->CenterTitle();
c56->Modified();

// ### Defining the legend for the plot ###
TLegend *leg56 = new TLegend();
leg56 = new TLegend(0.58,0.65,1.00,1.00);
leg56->SetTextSize(0.04);
leg56->SetTextAlign(12);
leg56->SetFillColor(kWhite);
leg56->SetLineColor(kWhite);
leg56->SetShadowColor(kWhite);
leg56->SetHeader("Channel");
leg56->AddEntry(hPionCandidateAfterMomentumReco,"Reco CC-Coh");
//leg56->AddEntry(hPionCandidateAfterMomentumRecoCCCoh,"Reco CC-Coh");
leg56->AddEntry(hPionCandidateAfterMomentumRecoCCQE,"Reco CC-QE");
leg56->AddEntry(hPionCandidateAfterMomentumRecoCCRes,"Reco CC-Res");
leg56->AddEntry(hPionCandidateAfterMomentumRecoOther,"Reco Other");
leg56->Draw();



TCanvas *c57 = new TCanvas("c57", "Stacked True Muon Candidate Momentums After 2 Tracks");
c57->SetTicks();
c57->SetFillColor(kWhite);

hMuonCandidateAfter2MomentumTrue->SetFillColor(kBlue);
hMuonCandidateAfter2MomentumTrue->Scale(CCCohScaleFactor);
hMuonCandidateAfter2MomentumTrue->Rebin(100);
//hMuonCandidateAfter2MomentumTrueCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfter2MomentumTrueCCCoh->Rebin(100);
hMuonCandidateAfter2MomentumTrueCCQE->SetFillColor(kViolet);
hMuonCandidateAfter2MomentumTrueCCQE->Rebin(100);
hMuonCandidateAfter2MomentumTrueCCRes->SetFillColor(kRed);
hMuonCandidateAfter2MomentumTrueCCRes->Rebin(100);
hMuonCandidateAfter2MomentumTrueOther->SetFillColor(kBlack);
hMuonCandidateAfter2MomentumTrueOther->Rebin(100);
hMuonCandidateAfter2MomentumTrueOther->Add(hMuonCandidateAfter2MomentumTrueCCQE, -1);
hMuonCandidateAfter2MomentumTrueOther->Add(hMuonCandidateAfter2MomentumTrueCCRes, -1);
hMuonCandidateAfter2MomentumTrueStacked->Add(hMuonCandidateAfter2MomentumTrueOther);
hMuonCandidateAfter2MomentumTrueStacked->Add(hMuonCandidateAfter2MomentumTrueCCQE);
hMuonCandidateAfter2MomentumTrueStacked->Add(hMuonCandidateAfter2MomentumTrueCCRes);
hMuonCandidateAfter2MomentumTrueStacked->Add(hMuonCandidateAfter2MomentumTrue);
//hMuonCandidateAfter2MomentumTrueStacked->Add(hMuonCandidateAfter2MomentumTrueCCCoh);

hMuonCandidateAfter2MomentumTrueStacked->Draw("HIST");
hMuonCandidateAfter2MomentumTrueStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfter2MomentumTrueStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfter2MomentumTrueStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfter2MomentumTrueStacked->GetYaxis()->CenterTitle();
c57->Modified();

// ### Defining the legend for the plot ###
TLegend *leg57 = new TLegend();
leg57 = new TLegend(0.58,0.65,1.00,1.00);
leg57->SetTextSize(0.04);
leg57->SetTextAlign(12);
leg57->SetFillColor(kWhite);
leg57->SetLineColor(kWhite);
leg57->SetShadowColor(kWhite);
leg57->SetHeader("Channel");
leg57->AddEntry(hMuonCandidateAfter2MomentumTrue,"True CC-Coh");
//leg57->AddEntry(hMuonCandidateAfter2MomentumTrueCCCoh,"True CC-Coh");
leg57->AddEntry(hMuonCandidateAfter2MomentumTrueCCQE,"True CC-QE");
leg57->AddEntry(hMuonCandidateAfter2MomentumTrueCCRes,"True CC-Res");
leg57->AddEntry(hMuonCandidateAfter2MomentumTrueOther,"True Other");
leg57->Draw();



TCanvas *c58 = new TCanvas("c58", "Stacked Reco Muon Candidate Momentums After 2 Tracks");
c58->SetTicks();
c58->SetFillColor(kWhite);

hMuonCandidateAfter2MomentumReco->SetFillColor(kBlue);
hMuonCandidateAfter2MomentumReco->Scale(CCCohScaleFactor);
hMuonCandidateAfter2MomentumReco->Rebin(100);
//hMuonCandidateAfter2MomentumRecoCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfter2MomentumRecoCCCoh->Rebin(100);
hMuonCandidateAfter2MomentumRecoCCQE->SetFillColor(kViolet);
hMuonCandidateAfter2MomentumRecoCCQE->Rebin(100);
hMuonCandidateAfter2MomentumRecoCCRes->SetFillColor(kRed);
hMuonCandidateAfter2MomentumRecoCCRes->Rebin(100);
hMuonCandidateAfter2MomentumRecoOther->SetFillColor(kBlack);
hMuonCandidateAfter2MomentumRecoOther->Rebin(100);
hMuonCandidateAfter2MomentumRecoOther->Add(hMuonCandidateAfter2MomentumRecoCCQE, -1);
hMuonCandidateAfter2MomentumRecoOther->Add(hMuonCandidateAfter2MomentumRecoCCRes, -1);
hMuonCandidateAfter2MomentumRecoStacked->Add(hMuonCandidateAfter2MomentumRecoOther);
hMuonCandidateAfter2MomentumRecoStacked->Add(hMuonCandidateAfter2MomentumRecoCCQE);
hMuonCandidateAfter2MomentumRecoStacked->Add(hMuonCandidateAfter2MomentumRecoCCRes);
hMuonCandidateAfter2MomentumRecoStacked->Add(hMuonCandidateAfter2MomentumReco);
//hMuonCandidateAfter2MomentumRecoStacked->Add(hMuonCandidateAfter2MomentumRecoCCCoh);

hMuonCandidateAfter2MomentumRecoStacked->Draw("HIST");
hMuonCandidateAfter2MomentumRecoStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfter2MomentumRecoStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfter2MomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfter2MomentumRecoStacked->GetYaxis()->CenterTitle();
c58->Modified();

// ### Defining the legend for the plot ###
TLegend *leg58 = new TLegend();
leg58 = new TLegend(0.58,0.65,1.00,1.00);
leg58->SetTextSize(0.04);
leg58->SetTextAlign(12);
leg58->SetFillColor(kWhite);
leg58->SetLineColor(kWhite);
leg58->SetShadowColor(kWhite);
leg58->SetHeader("Channel");
leg58->AddEntry(hMuonCandidateAfter2MomentumReco,"Reco CC-Coh");
//leg58->AddEntry(hMuonCandidateAfter2MomentumRecoCCCoh,"Reco CC-Coh");
leg58->AddEntry(hMuonCandidateAfter2MomentumRecoCCQE,"Reco CC-QE");
leg58->AddEntry(hMuonCandidateAfter2MomentumRecoCCRes,"Reco CC-Res");
leg58->AddEntry(hMuonCandidateAfter2MomentumRecoOther,"Reco Other");
leg58->Draw();



TCanvas *c59 = new TCanvas("c59", "Stacked True Pion Candidate Momentums After 2 Tracks");
c59->SetTicks();
c59->SetFillColor(kWhite);

hPionCandidateAfter2MomentumTrue->SetFillColor(kBlue);
hPionCandidateAfter2MomentumTrue->Scale(CCCohScaleFactor);
hPionCandidateAfter2MomentumTrue->Rebin(100);
//hPionCandidateAfter2MomentumTrueCCCoh->SetFillColor(kBlue);
//hPionCandidateAfter2MomentumTrueCCCoh->Rebin(100);
hPionCandidateAfter2MomentumTrueCCQE->SetFillColor(kViolet);
hPionCandidateAfter2MomentumTrueCCQE->Rebin(100);
hPionCandidateAfter2MomentumTrueCCRes->SetFillColor(kRed);
hPionCandidateAfter2MomentumTrueCCRes->Rebin(100);
hPionCandidateAfter2MomentumTrueOther->SetFillColor(kBlack);
hPionCandidateAfter2MomentumTrueOther->Rebin(100);
hPionCandidateAfter2MomentumTrueOther->Add(hPionCandidateAfter2MomentumTrueCCQE, -1);
hPionCandidateAfter2MomentumTrueOther->Add(hPionCandidateAfter2MomentumTrueCCRes, -1);
hPionCandidateAfter2MomentumTrueStacked->Add(hPionCandidateAfter2MomentumTrueOther);
hPionCandidateAfter2MomentumTrueStacked->Add(hPionCandidateAfter2MomentumTrueCCQE);
hPionCandidateAfter2MomentumTrueStacked->Add(hPionCandidateAfter2MomentumTrueCCRes);
hPionCandidateAfter2MomentumTrueStacked->Add(hPionCandidateAfter2MomentumTrue);
//hPionCandidateAfter2MomentumTrueStacked->Add(hPionCandidateAfter2MomentumTrueCCCoh);

hPionCandidateAfter2MomentumTrueStacked->Draw("HIST");
hPionCandidateAfter2MomentumTrueStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfter2MomentumTrueStacked->GetXaxis()->CenterTitle();
hPionCandidateAfter2MomentumTrueStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfter2MomentumTrueStacked->GetYaxis()->CenterTitle();
c59->Modified();

// ### Defining the legend for the plot ###
TLegend *leg59 = new TLegend();
leg59 = new TLegend(0.58,0.65,1.00,1.00);
leg59->SetTextSize(0.04);
leg59->SetTextAlign(12);
leg59->SetFillColor(kWhite);
leg59->SetLineColor(kWhite);
leg59->SetShadowColor(kWhite);
leg59->SetHeader("Channel");
leg59->AddEntry(hPionCandidateAfter2MomentumTrue,"True CC-Coh");
//leg59->AddEntry(hPionCandidateAfter2MomentumTrueCCCoh,"True CC-Coh");
leg59->AddEntry(hPionCandidateAfter2MomentumTrueCCQE,"True CC-QE");
leg59->AddEntry(hPionCandidateAfter2MomentumTrueCCRes,"True CC-Res");
leg59->AddEntry(hPionCandidateAfter2MomentumTrueOther,"True Other");
leg59->Draw();



TCanvas *c60 = new TCanvas("c60", "Stacked Reco Pion Candidate Momentums After 2 Tracks");
c60->SetTicks();
c60->SetFillColor(kWhite);

hPionCandidateAfter2MomentumReco->SetFillColor(kBlue);
hPionCandidateAfter2MomentumReco->Scale(CCCohScaleFactor);
hPionCandidateAfter2MomentumReco->Rebin(100);
//hPionCandidateAfter2MomentumRecoCCCoh->SetFillColor(kBlue);
//hPionCandidateAfter2MomentumRecoCCCoh->Rebin(100);
hPionCandidateAfter2MomentumRecoCCQE->SetFillColor(kViolet);
hPionCandidateAfter2MomentumRecoCCQE->Rebin(100);
hPionCandidateAfter2MomentumRecoCCRes->SetFillColor(kRed);
hPionCandidateAfter2MomentumRecoCCRes->Rebin(100);
hPionCandidateAfter2MomentumRecoOther->SetFillColor(kBlack);
hPionCandidateAfter2MomentumRecoOther->Rebin(100);
hPionCandidateAfter2MomentumRecoOther->Add(hPionCandidateAfter2MomentumRecoCCQE, -1);
hPionCandidateAfter2MomentumRecoOther->Add(hPionCandidateAfter2MomentumRecoCCRes, -1);
hPionCandidateAfter2MomentumRecoStacked->Add(hPionCandidateAfter2MomentumRecoOther);
hPionCandidateAfter2MomentumRecoStacked->Add(hPionCandidateAfter2MomentumRecoCCQE);
hPionCandidateAfter2MomentumRecoStacked->Add(hPionCandidateAfter2MomentumRecoCCRes);
hPionCandidateAfter2MomentumRecoStacked->Add(hPionCandidateAfter2MomentumReco);
//hPionCandidateAfter2MomentumRecoStacked->Add(hPionCandidateAfter2MomentumRecoCCCoh);

hPionCandidateAfter2MomentumRecoStacked->Draw("HIST");
hPionCandidateAfter2MomentumRecoStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfter2MomentumRecoStacked->GetXaxis()->CenterTitle();
hPionCandidateAfter2MomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfter2MomentumRecoStacked->GetYaxis()->CenterTitle();
c60->Modified();

// ### Defining the legend for the plot ###
TLegend *leg60 = new TLegend();
leg60 = new TLegend(0.58,0.65,1.00,1.00);
leg60->SetTextSize(0.04);
leg60->SetTextAlign(12);
leg60->SetFillColor(kWhite);
leg60->SetLineColor(kWhite);
leg60->SetShadowColor(kWhite);
leg60->SetHeader("Channel");
leg60->AddEntry(hPionCandidateAfter2MomentumReco,"Reco CC-Coh");
//leg60->AddEntry(hPionCandidateAfter2MomentumRecoCCCoh,"Reco CC-Coh");
leg60->AddEntry(hPionCandidateAfter2MomentumRecoCCQE,"Reco CC-QE");
leg60->AddEntry(hPionCandidateAfter2MomentumRecoCCRes,"Reco CC-Res");
leg60->AddEntry(hPionCandidateAfter2MomentumRecoOther,"Reco Other");
leg60->Draw();


/*
TCanvas *c61 = new TCanvas("c61", "Stacked Reco Muon Candidate Combo Momentums After Selection");
c61->SetTicks();
c61->SetFillColor(kWhite);

hMuonCandidateAfterComboMomentumReco->SetFillColor(kBlue);
hMuonCandidateAfterComboMomentumReco->Scale(CCCohScaleFactor);
hMuonCandidateAfterComboMomentumReco->Rebin(100);
//hMuonCandidateAfterComboMomentumRecoCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfterComboMomentumRecoCCCoh->Rebin(100);
hMuonCandidateAfterComboMomentumRecoCCQE->SetFillColor(kViolet);
hMuonCandidateAfterComboMomentumRecoCCQE->Rebin(100);
hMuonCandidateAfterComboMomentumRecoCCRes->SetFillColor(kRed);
hMuonCandidateAfterComboMomentumRecoCCRes->Rebin(100);
hMuonCandidateAfterComboMomentumRecoOther->SetFillColor(kBlack);
hMuonCandidateAfterComboMomentumRecoOther->Rebin(100);
hMuonCandidateAfterComboMomentumRecoOther->Add(hMuonCandidateAfterComboMomentumRecoCCQE, -1);
hMuonCandidateAfterComboMomentumRecoOther->Add(hMuonCandidateAfterComboMomentumRecoCCRes, -1);
hMuonCandidateAfterComboMomentumRecoStacked->Add(hMuonCandidateAfterComboMomentumRecoOther);
hMuonCandidateAfterComboMomentumRecoStacked->Add(hMuonCandidateAfterComboMomentumRecoCCQE);
hMuonCandidateAfterComboMomentumRecoStacked->Add(hMuonCandidateAfterComboMomentumRecoCCRes);
hMuonCandidateAfterComboMomentumRecoStacked->Add(hMuonCandidateAfterComboMomentumReco);
//hMuonCandidateAfterComboMomentumRecoStacked->Add(hMuonCandidateAfterComboMomentumRecoCCCoh);

hMuonCandidateAfterComboMomentumRecoStacked->Draw("HIST");
hMuonCandidateAfterComboMomentumRecoStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterComboMomentumRecoStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfterComboMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfterComboMomentumRecoStacked->GetYaxis()->CenterTitle();
c61->Modified();

// ### Defining the legend for the plot ###
TLegend *leg61 = new TLegend();
leg61 = new TLegend(0.58,0.65,1.00,1.00);
leg61->SetTextSize(0.04);
leg61->SetTextAlign(12);
leg61->SetFillColor(kWhite);
leg61->SetLineColor(kWhite);
leg61->SetShadowColor(kWhite);
leg61->SetHeader("Channel");
leg61->AddEntry(hMuonCandidateAfterComboMomentumReco,"Reco CC-Coh");
//leg61->AddEntry(hMuonCandidateAfterComboMomentumRecoCCCoh,"Reco CC-Coh");
leg61->AddEntry(hMuonCandidateAfterComboMomentumRecoCCQE,"Reco CC-QE");
leg61->AddEntry(hMuonCandidateAfterComboMomentumRecoCCRes,"Reco CC-Res");
leg61->AddEntry(hMuonCandidateAfterComboMomentumRecoOther,"Reco Other");
leg61->Draw();



TCanvas *c62 = new TCanvas("c62", "Stacked Reco Pion Candidate Combo Momentums After Selection");
c62->SetTicks();
c62->SetFillColor(kWhite);

hPionCandidateAfterComboMomentumReco->SetFillColor(kBlue);
hPionCandidateAfterComboMomentumReco->Scale(CCCohScaleFactor);
hPionCandidateAfterComboMomentumReco->Rebin(100);
//hPionCandidateAfterComboMomentumRecoCCCoh->SetFillColor(kBlue);
//hPionCandidateAfterComboMomentumRecoCCCoh->Rebin(100);
hPionCandidateAfterComboMomentumRecoCCQE->SetFillColor(kViolet);
hPionCandidateAfterComboMomentumRecoCCQE->Rebin(100);
hPionCandidateAfterComboMomentumRecoCCRes->SetFillColor(kRed);
hPionCandidateAfterComboMomentumRecoCCRes->Rebin(100);
hPionCandidateAfterComboMomentumRecoOther->SetFillColor(kBlack);
hPionCandidateAfterComboMomentumRecoOther->Rebin(100);
hPionCandidateAfterComboMomentumRecoOther->Add(hPionCandidateAfterComboMomentumRecoCCQE, -1);
hPionCandidateAfterComboMomentumRecoOther->Add(hPionCandidateAfterComboMomentumRecoCCRes, -1);
hPionCandidateAfterComboMomentumRecoStacked->Add(hPionCandidateAfterComboMomentumRecoOther);
hPionCandidateAfterComboMomentumRecoStacked->Add(hPionCandidateAfterComboMomentumRecoCCQE);
hPionCandidateAfterComboMomentumRecoStacked->Add(hPionCandidateAfterComboMomentumRecoCCRes);
hPionCandidateAfterComboMomentumRecoStacked->Add(hPionCandidateAfterComboMomentumReco);
//hPionCandidateAfterComboMomentumRecoStacked->Add(hPionCandidateAfterComboMomentumRecoCCCoh);

hPionCandidateAfterComboMomentumRecoStacked->Draw("HIST");
hPionCandidateAfterComboMomentumRecoStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterComboMomentumRecoStacked->GetXaxis()->CenterTitle();
hPionCandidateAfterComboMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfterComboMomentumRecoStacked->GetYaxis()->CenterTitle();
c62->Modified();

// ### Defining the legend for the plot ###
TLegend *leg62 = new TLegend();
leg62 = new TLegend(0.58,0.65,1.00,1.00);
leg62->SetTextSize(0.04);
leg62->SetTextAlign(12);
leg62->SetFillColor(kWhite);
leg62->SetLineColor(kWhite);
leg62->SetShadowColor(kWhite);
leg62->SetHeader("Channel");
leg62->AddEntry(hPionCandidateAfterComboMomentumReco,"Reco CC-Coh");
//leg62->AddEntry(hPionCandidateAfterComboMomentumRecoCCCoh,"Reco CC-Coh");
leg62->AddEntry(hPionCandidateAfterComboMomentumRecoCCQE,"Reco CC-QE");
leg62->AddEntry(hPionCandidateAfterComboMomentumRecoCCRes,"Reco CC-Res");
leg62->AddEntry(hPionCandidateAfterComboMomentumRecoOther,"Reco Other");
leg62->Draw();



TCanvas *c63 = new TCanvas("c63", "Stacked Reco Muon Candidate Combo Momentums After 2 Tracks");
c63->SetTicks();
c63->SetFillColor(kWhite);

hMuonCandidateAfter2ComboMomentumReco->SetFillColor(kBlue);
hMuonCandidateAfter2ComboMomentumReco->Scale(CCCohScaleFactor);
hMuonCandidateAfter2ComboMomentumReco->Rebin(100);
//hMuonCandidateAfter2ComboMomentumRecoCCCoh->SetFillColor(kBlue);
//hMuonCandidateAfter2ComboMomentumRecoCCCoh->Rebin(100);
hMuonCandidateAfter2ComboMomentumRecoCCQE->SetFillColor(kViolet);
hMuonCandidateAfter2ComboMomentumRecoCCQE->Rebin(100);
hMuonCandidateAfter2ComboMomentumRecoCCRes->SetFillColor(kRed);
hMuonCandidateAfter2ComboMomentumRecoCCRes->Rebin(100);
hMuonCandidateAfter2ComboMomentumRecoOther->SetFillColor(kBlack);
hMuonCandidateAfter2ComboMomentumRecoOther->Rebin(100);
hMuonCandidateAfter2ComboMomentumRecoOther->Add(hMuonCandidateAfter2ComboMomentumRecoCCQE, -1);
hMuonCandidateAfter2ComboMomentumRecoOther->Add(hMuonCandidateAfter2ComboMomentumRecoCCRes, -1);
hMuonCandidateAfter2ComboMomentumRecoStacked->Add(hMuonCandidateAfter2ComboMomentumRecoOther);
hMuonCandidateAfter2ComboMomentumRecoStacked->Add(hMuonCandidateAfter2ComboMomentumRecoCCQE);
hMuonCandidateAfter2ComboMomentumRecoStacked->Add(hMuonCandidateAfter2ComboMomentumRecoCCRes);
hMuonCandidateAfter2ComboMomentumRecoStacked->Add(hMuonCandidateAfter2ComboMomentumReco);
//hMuonCandidateAfter2ComboMomentumRecoStacked->Add(hMuonCandidateAfter2ComboMomentumRecoCCCoh);

hMuonCandidateAfter2ComboMomentumRecoStacked->Draw("HIST");
hMuonCandidateAfter2ComboMomentumRecoStacked->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfter2ComboMomentumRecoStacked->GetXaxis()->CenterTitle();
hMuonCandidateAfter2ComboMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hMuonCandidateAfter2ComboMomentumRecoStacked->GetYaxis()->CenterTitle();
c63->Modified();

// ### Defining the legend for the plot ###
TLegend *leg63 = new TLegend();
leg63 = new TLegend(0.58,0.65,1.00,1.00);
leg63->SetTextSize(0.04);
leg63->SetTextAlign(12);
leg63->SetFillColor(kWhite);
leg63->SetLineColor(kWhite);
leg63->SetShadowColor(kWhite);
leg63->SetHeader("Channel");
leg63->AddEntry(hMuonCandidateAfter2ComboMomentumReco,"Reco CC-Coh");
//leg63->AddEntry(hMuonCandidateAfter2ComboMomentumRecoCCCoh,"Reco CC-Coh");
leg63->AddEntry(hMuonCandidateAfter2ComboMomentumRecoCCQE,"Reco CC-QE");
leg63->AddEntry(hMuonCandidateAfter2ComboMomentumRecoCCRes,"Reco CC-Res");
leg63->AddEntry(hMuonCandidateAfter2ComboMomentumRecoOther,"Reco Other");
leg63->Draw();



TCanvas *c64 = new TCanvas("c64", "Stacked Reco Pion Candidate Combo Momentums After 2 Tracks");
c64->SetTicks();
c64->SetFillColor(kWhite);

hPionCandidateAfter2ComboMomentumReco->SetFillColor(kBlue);
hPionCandidateAfter2ComboMomentumReco->Scale(CCCohScaleFactor);
hPionCandidateAfter2ComboMomentumReco->Rebin(100);
//hPionCandidateAfter2ComboMomentumRecoCCCoh->SetFillColor(kBlue);
//hPionCandidateAfter2ComboMomentumRecoCCCoh->Rebin(100);
hPionCandidateAfter2ComboMomentumRecoCCQE->SetFillColor(kViolet);
hPionCandidateAfter2ComboMomentumRecoCCQE->Rebin(100);
hPionCandidateAfter2ComboMomentumRecoCCRes->SetFillColor(kRed);
hPionCandidateAfter2ComboMomentumRecoCCRes->Rebin(100);
hPionCandidateAfter2ComboMomentumRecoOther->SetFillColor(kBlack);
hPionCandidateAfter2ComboMomentumRecoOther->Rebin(100);
hPionCandidateAfter2ComboMomentumRecoOther->Add(hPionCandidateAfter2ComboMomentumRecoCCQE, -1);
hPionCandidateAfter2ComboMomentumRecoOther->Add(hPionCandidateAfter2ComboMomentumRecoCCRes, -1);
hPionCandidateAfter2ComboMomentumRecoStacked->Add(hPionCandidateAfter2ComboMomentumRecoOther);
hPionCandidateAfter2ComboMomentumRecoStacked->Add(hPionCandidateAfter2ComboMomentumRecoCCQE);
hPionCandidateAfter2ComboMomentumRecoStacked->Add(hPionCandidateAfter2ComboMomentumRecoCCRes);
hPionCandidateAfter2ComboMomentumRecoStacked->Add(hPionCandidateAfter2ComboMomentumReco);
//hPionCandidateAfter2ComboMomentumRecoStacked->Add(hPionCandidateAfter2ComboMomentumRecoCCCoh);

hPionCandidateAfter2ComboMomentumRecoStacked->Draw("HIST");
hPionCandidateAfter2ComboMomentumRecoStacked->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfter2ComboMomentumRecoStacked->GetXaxis()->CenterTitle();
hPionCandidateAfter2ComboMomentumRecoStacked->GetYaxis()->SetTitle("Number of Events");
hPionCandidateAfter2ComboMomentumRecoStacked->GetYaxis()->CenterTitle();
c64->Modified();

// ### Defining the legend for the plot ###
TLegend *leg64 = new TLegend();
leg64 = new TLegend(0.58,0.65,1.00,1.00);
leg64->SetTextSize(0.04);
leg64->SetTextAlign(12);
leg64->SetFillColor(kWhite);
leg64->SetLineColor(kWhite);
leg64->SetShadowColor(kWhite);
leg64->SetHeader("Channel");
leg64->AddEntry(hPionCandidateAfter2ComboMomentumReco,"Reco CC-Coh");
//leg64->AddEntry(hPionCandidateAfter2ComboMomentumRecoCCCoh,"Reco CC-Coh");
leg64->AddEntry(hPionCandidateAfter2ComboMomentumRecoCCQE,"Reco CC-QE");
leg64->AddEntry(hPionCandidateAfter2ComboMomentumRecoCCRes,"Reco CC-Res");
leg64->AddEntry(hPionCandidateAfter2ComboMomentumRecoOther,"Reco Other");
leg64->Draw();
*/


TCanvas *c65 = new TCanvas("c65", "Stacked True |t| After Selection");
c65->SetTicks();
c65->SetFillColor(kWhite);

hTAfterTrue->SetFillColor(kBlue);
hTAfterTrue->Scale(CCCohScaleFactor);
hTAfterTrue->Rebin(50);
//hTAfterTrueCCCoh->SetFillColor(kBlue);
//hTAfterTrueCCCoh->Rebin(50);
hTAfterTrueCCQE->SetFillColor(kViolet);
hTAfterTrueCCQE->Rebin(50);
hTAfterTrueCCRes->SetFillColor(kRed);
hTAfterTrueCCRes->Rebin(50);
hTAfterTrueOther->SetFillColor(kBlack);
hTAfterTrueOther->Rebin(50);
hTAfterTrueOther->Add(hTAfterTrueCCQE, -1);
hTAfterTrueOther->Add(hTAfterTrueCCRes, -1);
hTAfterTrueStacked->Add(hTAfterTrueOther);
hTAfterTrueStacked->Add(hTAfterTrueCCQE);
hTAfterTrueStacked->Add(hTAfterTrueCCRes);
hTAfterTrueStacked->Add(hTAfterTrue);
//hTAfterTrueStacked->Add(hTAfterTrueCCCoh);

hTAfterTrueStacked->Draw("HIST");
hTAfterTrueStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfterTrueStacked->GetXaxis()->CenterTitle();
hTAfterTrueStacked->GetYaxis()->SetTitle("Number of Events");
hTAfterTrueStacked->GetYaxis()->CenterTitle();
c65->Modified();

// ### Defining the legend for the plot ###
TLegend *leg65 = new TLegend();
leg65 = new TLegend(0.58,0.65,1.00,1.00);
leg65->SetTextSize(0.04);
leg65->SetTextAlign(12);
leg65->SetFillColor(kWhite);
leg65->SetLineColor(kWhite);
leg65->SetShadowColor(kWhite);
leg65->SetHeader("Channel");
leg65->AddEntry(hTAfterTrue,"True CC-Coh");
//leg65->AddEntry(hTAfterTrueCCCoh,"True CC-Coh");
leg65->AddEntry(hTAfterTrueCCQE,"True CC-QE");
leg65->AddEntry(hTAfterTrueCCRes,"True CC-Res");
leg65->AddEntry(hTAfterTrueOther,"True Other");
leg65->Draw();



TCanvas *c66 = new TCanvas("c66", "Stacked Reco |t| After Selection");
c66->SetTicks();
c66->SetFillColor(kWhite);

hTAfterReco->SetFillColor(kBlue);
hTAfterReco->Scale(CCCohScaleFactor);
hTAfterReco->Rebin(50);
//hTAfterRecoCCCoh->SetFillColor(kBlue);
//hTAfterRecoCCCoh->Rebin(50);
hTAfterRecoCCQE->SetFillColor(kViolet);
hTAfterRecoCCQE->Rebin(50);
hTAfterRecoCCRes->SetFillColor(kRed);
hTAfterRecoCCRes->Rebin(50);
hTAfterRecoOther->SetFillColor(kBlack);
hTAfterRecoOther->Rebin(50);
hTAfterRecoOther->Add(hTAfterRecoCCQE, -1);
hTAfterRecoOther->Add(hTAfterRecoCCRes, -1);
hTAfterRecoStacked->Add(hTAfterRecoOther);
hTAfterRecoStacked->Add(hTAfterRecoCCQE);
hTAfterRecoStacked->Add(hTAfterRecoCCRes);
hTAfterRecoStacked->Add(hTAfterReco);
//hTAfterRecoStacked->Add(hTAfterRecoCCCoh);

hTAfterRecoStacked->Draw("HIST");
hTAfterRecoStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfterRecoStacked->GetXaxis()->CenterTitle();
hTAfterRecoStacked->GetYaxis()->SetTitle("Number of Events");
hTAfterRecoStacked->GetYaxis()->CenterTitle();
c66->Modified();

// ### Defining the legend for the plot ###
TLegend *leg66 = new TLegend();
leg66 = new TLegend(0.58,0.65,1.00,1.00);
leg66->SetTextSize(0.04);
leg66->SetTextAlign(12);
leg66->SetFillColor(kWhite);
leg66->SetLineColor(kWhite);
leg66->SetShadowColor(kWhite);
leg66->SetHeader("Channel");
leg66->AddEntry(hTAfterReco,"Reco CC-Coh");
//leg66->AddEntry(hTAfterRecoCCCoh,"Reco CC-Coh");
leg66->AddEntry(hTAfterRecoCCQE,"Reco CC-QE");
leg66->AddEntry(hTAfterRecoCCRes,"Reco CC-Res");
leg66->AddEntry(hTAfterRecoOther,"Reco Other");
leg66->Draw();



TCanvas *c67 = new TCanvas("c67", "The MCS and Range Based Momentum for UnContained Muon Candidates");
c67->SetTicks();
c67->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonCandidateAfterUnContainedMomentumTrue->Scale(1/hMuonCandidateAfterUnContainedMomentumTrue->Integral());
hMuonCandidateAfterUnContainedMomentumReco->Scale(1/hMuonCandidateAfterUnContainedMomentumReco->Integral());
hMuonCandidateAfterUnContainedLMomentumReco->Scale(1/hMuonCandidateAfterUnContainedLMomentumReco->Integral());

hMuonCandidateAfterUnContainedMomentumTrue->SetLineColor(kBlue);
hMuonCandidateAfterUnContainedMomentumTrue->SetLineWidth(2);
hMuonCandidateAfterUnContainedMomentumTrue->Rebin(10);

hMuonCandidateAfterUnContainedMomentumReco->SetLineColor(kRed);
hMuonCandidateAfterUnContainedMomentumReco->SetLineWidth(2);
hMuonCandidateAfterUnContainedMomentumReco->Rebin(10);

hMuonCandidateAfterUnContainedLMomentumReco->SetLineColor(kGreen);
hMuonCandidateAfterUnContainedLMomentumReco->SetLineWidth(2);
hMuonCandidateAfterUnContainedLMomentumReco->Rebin(10);

hMuonCandidateAfterUnContainedLMomentumReco->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterUnContainedLMomentumReco->GetXaxis()->CenterTitle();

hMuonCandidateAfterUnContainedLMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateAfterUnContainedLMomentumReco->GetYaxis()->CenterTitle();

hMuonCandidateAfterUnContainedLMomentumReco->Draw("histo");
hMuonCandidateAfterUnContainedMomentumReco->Draw("histosame");
hMuonCandidateAfterUnContainedMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg67 = new TLegend();
leg67 = new TLegend(0.58,0.65,1.00,1.00);
leg67->SetTextSize(0.04);
leg67->SetTextAlign(12);
leg67->SetFillColor(kWhite);
leg67->SetLineColor(kWhite);
leg67->SetShadowColor(kWhite);
leg67->SetHeader("Channel");
leg67->AddEntry(hMuonCandidateAfterUnContainedMomentumTrue,"True CC-Coh");
leg67->AddEntry(hMuonCandidateAfterUnContainedMomentumReco,"Reco CC-Coh MCS");
leg67->AddEntry(hMuonCandidateAfterUnContainedLMomentumReco,"Reco CC-Coh Range");
leg67->Draw();



TCanvas *c68 = new TCanvas("c68", "The MCS and Range Based Momentum for UnContained Pion Candidates");
c68->SetTicks();
c68->SetFillColor(kWhite);

// Area normalzing the plot 
hPionCandidateAfterUnContainedMomentumTrue->Scale(1/hPionCandidateAfterUnContainedMomentumTrue->Integral());
hPionCandidateAfterUnContainedMomentumReco->Scale(1/hPionCandidateAfterUnContainedMomentumReco->Integral());
hPionCandidateAfterUnContainedLMomentumReco->Scale(1/hPionCandidateAfterUnContainedLMomentumReco->Integral());

hPionCandidateAfterUnContainedMomentumTrue->SetLineColor(kBlue);
hPionCandidateAfterUnContainedMomentumTrue->SetLineWidth(2);
hPionCandidateAfterUnContainedMomentumTrue->Rebin(10);

hPionCandidateAfterUnContainedMomentumReco->SetLineColor(kRed);
hPionCandidateAfterUnContainedMomentumReco->SetLineWidth(2);
hPionCandidateAfterUnContainedMomentumReco->Rebin(10);

hPionCandidateAfterUnContainedLMomentumReco->SetLineColor(kGreen);
hPionCandidateAfterUnContainedLMomentumReco->SetLineWidth(2);
hPionCandidateAfterUnContainedLMomentumReco->Rebin(10);

hPionCandidateAfterUnContainedLMomentumReco->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterUnContainedLMomentumReco->GetXaxis()->CenterTitle();

hPionCandidateAfterUnContainedLMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateAfterUnContainedLMomentumReco->GetYaxis()->CenterTitle();

hPionCandidateAfterUnContainedLMomentumReco->Draw("histo");
hPionCandidateAfterUnContainedMomentumReco->Draw("histosame");
hPionCandidateAfterUnContainedMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg68 = new TLegend();
leg68 = new TLegend(0.58,0.65,1.00,1.00);
leg68->SetTextSize(0.04);
leg68->SetTextAlign(12);
leg68->SetFillColor(kWhite);
leg68->SetLineColor(kWhite);
leg68->SetShadowColor(kWhite);
leg68->SetHeader("Channel");
leg68->AddEntry(hPionCandidateAfterUnContainedMomentumTrue,"True CC-Coh");
leg68->AddEntry(hPionCandidateAfterUnContainedMomentumReco,"Reco CC-Coh MCS");
leg68->AddEntry(hPionCandidateAfterUnContainedLMomentumReco,"Reco CC-Coh Range");
leg68->Draw();



TCanvas *c69 = new TCanvas("c69", "Stacked True |t| After 2 Tracks");
c69->SetTicks();
c69->SetFillColor(kWhite);

hTAfter2True->SetFillColor(kBlue);
hTAfter2True->Scale(CCCohScaleFactor);
hTAfter2True->Rebin(50);
//hTAfter2TrueCCCoh->SetFillColor(kBlue);
//hTAfter2TrueCCCoh->Rebin(50);
hTAfter2TrueCCQE->SetFillColor(kViolet);
hTAfter2TrueCCQE->Rebin(50);
hTAfter2TrueCCRes->SetFillColor(kRed);
hTAfter2TrueCCRes->Rebin(50);
hTAfter2TrueOther->SetFillColor(kBlack);
hTAfter2TrueOther->Rebin(50);
hTAfter2TrueOther->Add(hTAfter2TrueCCQE, -1);
hTAfter2TrueOther->Add(hTAfter2TrueCCRes, -1);
hTAfter2TrueStacked->Add(hTAfter2TrueOther);
hTAfter2TrueStacked->Add(hTAfter2TrueCCQE);
hTAfter2TrueStacked->Add(hTAfter2TrueCCRes);
hTAfter2TrueStacked->Add(hTAfter2True);
//hTAfter2TrueStacked->Add(hTAfter2TrueCCCoh);

hTAfter2TrueStacked->Draw("HIST");
hTAfter2TrueStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfter2TrueStacked->GetXaxis()->CenterTitle();
hTAfter2TrueStacked->GetYaxis()->SetTitle("Number of Events");
hTAfter2TrueStacked->GetYaxis()->CenterTitle();
c69->Modified();

// ### Defining the legend for the plot ###
TLegend *leg69 = new TLegend();
leg69 = new TLegend(0.58,0.65,1.00,1.00);
leg69->SetTextSize(0.04);
leg69->SetTextAlign(12);
leg69->SetFillColor(kWhite);
leg69->SetLineColor(kWhite);
leg69->SetShadowColor(kWhite);
leg69->SetHeader("Channel");
leg69->AddEntry(hTAfter2True,"True CC-Coh");
//leg69->AddEntry(hTAfter2TrueCCCoh,"True CC-Coh");
leg69->AddEntry(hTAfter2TrueCCQE,"True CC-QE");
leg69->AddEntry(hTAfter2TrueCCRes,"True CC-Res");
leg69->AddEntry(hTAfter2TrueOther,"True Other");
leg69->Draw();



TCanvas *c70 = new TCanvas("c70", "Stacked Reco |t| After 2 Tracks");
c70->SetTicks();
c70->SetFillColor(kWhite);

hTAfter2Reco->SetFillColor(kBlue);
hTAfter2Reco->Scale(CCCohScaleFactor);
hTAfter2Reco->Rebin(50);
//hTAfter2RecoCCCoh->SetFillColor(kBlue);
//hTAfter2RecoCCCoh->Rebin(50);
hTAfter2RecoCCQE->SetFillColor(kViolet);
hTAfter2RecoCCQE->Rebin(50);
hTAfter2RecoCCRes->SetFillColor(kRed);
hTAfter2RecoCCRes->Rebin(50);
hTAfter2RecoOther->SetFillColor(kBlack);
hTAfter2RecoOther->Rebin(50);
hTAfter2RecoOther->Add(hTAfter2RecoCCQE, -1);
hTAfter2RecoOther->Add(hTAfter2RecoCCRes, -1);
hTAfter2RecoStacked->Add(hTAfter2RecoOther);
hTAfter2RecoStacked->Add(hTAfter2RecoCCQE);
hTAfter2RecoStacked->Add(hTAfter2RecoCCRes);
hTAfter2RecoStacked->Add(hTAfter2Reco);
//hTAfter2RecoStacked->Add(hTAfter2RecoCCCoh);

hTAfter2RecoStacked->Draw("HIST");
hTAfter2RecoStacked->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfter2RecoStacked->GetXaxis()->CenterTitle();
hTAfter2RecoStacked->GetYaxis()->SetTitle("Number of Events");
hTAfter2RecoStacked->GetYaxis()->CenterTitle();
c70->Modified();

// ### Defining the legend for the plot ###
TLegend *leg70 = new TLegend();
leg70 = new TLegend(0.58,0.65,1.00,1.00);
leg70->SetTextSize(0.04);
leg70->SetTextAlign(12);
leg70->SetFillColor(kWhite);
leg70->SetLineColor(kWhite);
leg70->SetShadowColor(kWhite);
leg70->SetHeader("Channel");
leg70->AddEntry(hTAfter2Reco,"Reco CC-Coh");
//leg70->AddEntry(hTAfter2RecoCCCoh,"Reco CC-Coh");
leg70->AddEntry(hTAfter2RecoCCQE,"Reco CC-QE");
leg70->AddEntry(hTAfter2RecoCCRes,"Reco CC-Res");
leg70->AddEntry(hTAfter2RecoOther,"Reco Other");
leg70->Draw();



TCanvas *c71 = new TCanvas("c71", "The MCS and Range Based Momentum for Contained Muon Candidates");
c71->SetTicks();
c71->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonCandidateAfterContainedMomentumTrue->Scale(1/hMuonCandidateAfterContainedMomentumTrue->Integral());
hMuonCandidateAfterContainedMomentumReco->Scale(1/hMuonCandidateAfterContainedMomentumReco->Integral());
hMuonCandidateAfterContainedLMomentumReco->Scale(1/hMuonCandidateAfterContainedLMomentumReco->Integral());

hMuonCandidateAfterContainedMomentumTrue->SetLineColor(kBlue);
hMuonCandidateAfterContainedMomentumTrue->SetLineWidth(2);
hMuonCandidateAfterContainedMomentumTrue->Rebin(10);

hMuonCandidateAfterContainedMomentumReco->SetLineColor(kRed);
hMuonCandidateAfterContainedMomentumReco->SetLineWidth(2);
hMuonCandidateAfterContainedMomentumReco->Rebin(10);

hMuonCandidateAfterContainedLMomentumReco->SetLineColor(kGreen);
hMuonCandidateAfterContainedLMomentumReco->SetLineWidth(2);
hMuonCandidateAfterContainedLMomentumReco->Rebin(10);

hMuonCandidateAfterContainedLMomentumReco->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterContainedLMomentumReco->GetXaxis()->CenterTitle();

hMuonCandidateAfterContainedLMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateAfterContainedLMomentumReco->GetYaxis()->CenterTitle();

hMuonCandidateAfterContainedLMomentumReco->Draw("histo");
hMuonCandidateAfterContainedMomentumReco->Draw("histosame");
hMuonCandidateAfterContainedMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg71 = new TLegend();
leg71 = new TLegend(0.58,0.65,1.00,1.00);
leg71->SetTextSize(0.04);
leg71->SetTextAlign(12);
leg71->SetFillColor(kWhite);
leg71->SetLineColor(kWhite);
leg71->SetShadowColor(kWhite);
leg71->SetHeader("Channel");
leg71->AddEntry(hMuonCandidateAfterContainedMomentumTrue,"True CC-Coh");
leg71->AddEntry(hMuonCandidateAfterContainedMomentumReco,"Reco CC-Coh MCS");
leg71->AddEntry(hMuonCandidateAfterContainedLMomentumReco,"Reco CC-Coh Range");
leg71->Draw();



TCanvas *c72 = new TCanvas("c72", "The MCS and Range Based Momentum for Contained Pion Candidates");
c72->SetTicks();
c72->SetFillColor(kWhite);

// Area normalzing the plot 
hPionCandidateAfterContainedMomentumTrue->Scale(1/hPionCandidateAfterContainedMomentumTrue->Integral());
hPionCandidateAfterContainedMomentumReco->Scale(1/hPionCandidateAfterContainedMomentumReco->Integral());
hPionCandidateAfterContainedLMomentumReco->Scale(1/hPionCandidateAfterContainedLMomentumReco->Integral());

hPionCandidateAfterContainedMomentumTrue->SetLineColor(kBlue);
hPionCandidateAfterContainedMomentumTrue->SetLineWidth(2);
hPionCandidateAfterContainedMomentumTrue->Rebin(10);

hPionCandidateAfterContainedMomentumReco->SetLineColor(kRed);
hPionCandidateAfterContainedMomentumReco->SetLineWidth(2);
hPionCandidateAfterContainedMomentumReco->Rebin(10);

hPionCandidateAfterContainedLMomentumReco->SetLineColor(kGreen);
hPionCandidateAfterContainedLMomentumReco->SetLineWidth(2);
hPionCandidateAfterContainedLMomentumReco->Rebin(10);

hPionCandidateAfterContainedLMomentumReco->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterContainedLMomentumReco->GetXaxis()->CenterTitle();

hPionCandidateAfterContainedLMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateAfterContainedLMomentumReco->GetYaxis()->CenterTitle();

hPionCandidateAfterContainedLMomentumReco->Draw("histo");
hPionCandidateAfterContainedMomentumReco->Draw("histosame");
hPionCandidateAfterContainedMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg72 = new TLegend();
leg72 = new TLegend(0.58,0.65,1.00,1.00);
leg72->SetTextSize(0.04);
leg72->SetTextAlign(12);
leg72->SetFillColor(kWhite);
leg72->SetLineColor(kWhite);
leg72->SetShadowColor(kWhite);
leg72->SetHeader("Channel");
leg72->AddEntry(hPionCandidateAfterContainedMomentumTrue,"True CC-Coh");
leg72->AddEntry(hPionCandidateAfterContainedMomentumReco,"Reco CC-Coh MCS");
leg72->AddEntry(hPionCandidateAfterContainedLMomentumReco,"Reco CC-Coh Range");
leg72->Draw();



TCanvas *c73 = new TCanvas("c73", "The Combo MCS and Range Based Momentum for Muon Candidates");
c73->SetTicks();
c73->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonCandidateAfterMomentumTrue->Scale(1/hMuonCandidateAfterMomentumTrue->Integral());
hMuonCandidateAfterComboMomentumReco->Scale(1/hMuonCandidateAfterComboMomentumReco->Integral());

hMuonCandidateAfterMomentumTrue->SetLineColor(kBlue);
hMuonCandidateAfterMomentumTrue->SetLineWidth(2);
hMuonCandidateAfterMomentumTrue->Rebin(10);

hMuonCandidateAfterComboMomentumReco->SetLineColor(kRed);
hMuonCandidateAfterComboMomentumReco->SetLineWidth(2);
hMuonCandidateAfterComboMomentumReco->Rebin(10);

hMuonCandidateAfterComboMomentumReco->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterComboMomentumReco->GetXaxis()->CenterTitle();

hMuonCandidateAfterComboMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateAfterComboMomentumReco->GetYaxis()->CenterTitle();

hMuonCandidateAfterComboMomentumReco->Draw("histo");
hMuonCandidateAfterMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg73 = new TLegend();
leg73 = new TLegend(0.58,0.65,1.00,1.00);
leg73->SetTextSize(0.04);
leg73->SetTextAlign(12);
leg73->SetFillColor(kWhite);
leg73->SetLineColor(kWhite);
leg73->SetShadowColor(kWhite);
leg73->SetHeader("Channel");
leg73->AddEntry(hMuonCandidateAfterMomentumTrue,"True CC-Coh");
leg73->AddEntry(hMuonCandidateAfterComboMomentumReco,"Reco CC-Coh");
leg73->Draw();



TCanvas *c74 = new TCanvas("c74", "The Combo MCS and Range Based Momentum for Pion Candidates");
c74->SetTicks();
c74->SetFillColor(kWhite);

// Area normalzing the plot 
hPionCandidateAfterMomentumTrue->Scale(1/hPionCandidateAfterMomentumTrue->Integral());
hPionCandidateAfterComboMomentumReco->Scale(1/hPionCandidateAfterComboMomentumReco->Integral());

hPionCandidateAfterMomentumTrue->SetLineColor(kBlue);
hPionCandidateAfterMomentumTrue->SetLineWidth(2);
hPionCandidateAfterMomentumTrue->Rebin(10);

hPionCandidateAfterComboMomentumReco->SetLineColor(kRed);
hPionCandidateAfterComboMomentumReco->SetLineWidth(2);
hPionCandidateAfterComboMomentumReco->Rebin(10);

hPionCandidateAfterComboMomentumReco->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterComboMomentumReco->GetXaxis()->CenterTitle();

hPionCandidateAfterComboMomentumReco->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateAfterComboMomentumReco->GetYaxis()->CenterTitle();

hPionCandidateAfterComboMomentumReco->Draw("histo");
hPionCandidateAfterMomentumTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg74 = new TLegend();
leg74 = new TLegend(0.58,0.65,1.00,1.00);
leg74->SetTextSize(0.04);
leg74->SetTextAlign(12);
leg74->SetFillColor(kWhite);
leg74->SetLineColor(kWhite);
leg74->SetShadowColor(kWhite);
leg74->SetHeader("Channel");
leg74->AddEntry(hPionCandidateAfterMomentumTrue,"True CC-Coh");
leg74->AddEntry(hPionCandidateAfterComboMomentumReco,"Reco CC-Coh");
leg74->Draw();


/*
TCanvas *c75 = new TCanvas("c75", "The Reconstructed and True |t| After Pion Selection");
c75->SetTicks();
c75->SetFillColor(kWhite);

// Area normalzing the plot 
hTAfterTrue->Scale(1/hTAfterTrue->Integral());
hTAfterReco->Scale(1/hTAfterReco->Integral());
hTAfterTrueOther->Scale(1/hTAfterTrueOther->Integral());
hTAfterRecoOther->Scale(1/hTAfterRecoOther->Integral());

hTAfterTrue->SetLineColor(kBlue);
hTAfterTrue->SetLineWidth(2);
hTAfterTrue->Rebin(50);

hTAfterReco->SetLineColor(kCyan);
hTAfterReco->SetLineWidth(2);
hTAfterReco->Rebin(50);

hTAfterTrueOther->SetLineColor(kBlack);
hTAfterTrueOther->SetLineWidth(2);

hTAfterRecoOther->SetLineColor(kGray);
hTAfterRecoOther->SetLineWidth(2);

hTAfterReco->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfterReco->GetXaxis()->CenterTitle();

hTAfterReco->GetYaxis()->SetTitle("Normalized Events");
hTAfterReco->GetYaxis()->CenterTitle();

hTAfterReco->Draw("histo");
hTAfterTrue->Draw("histosame");
hTAfterTrueOther->Draw("histosame");
hTAfterRecoOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg75 = new TLegend();
leg75 = new TLegend(0.58,0.65,1.00,1.00);
leg75->SetTextSize(0.04);
leg75->SetTextAlign(12);
leg75->SetFillColor(kWhite);
leg75->SetLineColor(kWhite);
leg75->SetShadowColor(kWhite);
leg75->SetHeader("Channel");
leg75->AddEntry(hTAfterTrue,"True CC-Coh");
leg75->AddEntry(hTAfterReco,"Reco CC-Coh");
leg75->AddEntry(hTAfterTrueOther,"True Other");
leg75->AddEntry(hTAfterRecoOther,"Reco Other");
leg75->Draw();



TCanvas *c76 = new TCanvas("c76", "The Reconstructed and True |t| After 2 Tracks");
c76->SetTicks();
c76->SetFillColor(kWhite);

// Area normalzing the plot 
hTAfter2True->Scale(1/hTAfter2True->Integral());
hTAfter2Reco->Scale(1/hTAfter2Reco->Integral());
hTAfter2TrueOther->Scale(1/hTAfter2TrueOther->Integral());
hTAfter2RecoOther->Scale(1/hTAfter2RecoOther->Integral());

hTAfter2True->SetLineColor(kBlue);
hTAfter2True->SetLineWidth(2);
hTAfter2True->Rebin(50);

hTAfter2Reco->SetLineColor(kCyan);
hTAfter2Reco->SetLineWidth(2);
hTAfter2Reco->Rebin(50);

hTAfter2TrueOther->SetLineColor(kBlack);
hTAfter2TrueOther->SetLineWidth(2);

hTAfter2RecoOther->SetLineColor(kGray);
hTAfter2RecoOther->SetLineWidth(2);

hTAfter2Reco->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTAfter2Reco->GetXaxis()->CenterTitle();

hTAfter2Reco->GetYaxis()->SetTitle("Normalized Events");
hTAfter2Reco->GetYaxis()->CenterTitle();

hTAfter2Reco->Draw("histo");
hTAfter2True->Draw("histosame");
hTAfter2TrueOther->Draw("histosame");
hTAfter2RecoOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg76 = new TLegend();
leg76 = new TLegend(0.58,0.65,1.00,1.00);
leg76->SetTextSize(0.04);
leg76->SetTextAlign(12);
leg76->SetFillColor(kWhite);
leg76->SetLineColor(kWhite);
leg76->SetShadowColor(kWhite);
leg76->SetHeader("Channel");
leg76->AddEntry(hTAfter2True,"True CC-Coh");
leg76->AddEntry(hTAfter2Reco,"Reco CC-Coh");
leg76->AddEntry(hTAfter2TrueOther,"True Other");
leg76->AddEntry(hTAfter2RecoOther,"Reco Other");
leg76->Draw();*/



TCanvas *c77 = new TCanvas("c77", "The Opening Angle Differential Cross Section");
c77->SetTicks();
c77->SetFillColor(kWhite);

hOpeningAngleCrossSectionTrue->SetLineColor(kBlue);
hOpeningAngleCrossSectionTrue->SetLineWidth(2);
hOpeningAngleCrossSectionTrue->Rebin(10);

hOpeningAngleCrossSection->SetLineColor(kRed);
hOpeningAngleCrossSection->SetLineWidth(2);
hOpeningAngleCrossSection->Rebin(10);

hOpeningAngleCrossSection->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleCrossSection->GetXaxis()->CenterTitle();

hOpeningAngleCrossSection->GetYaxis()->SetTitle("#frac{d#sigma_{i}}{d#theta_{#mu#pi}_{i}}");
hOpeningAngleCrossSection->GetYaxis()->CenterTitle();

hOpeningAngleCrossSection->Draw("histo");
hOpeningAngleCrossSectionTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg77 = new TLegend();
leg77 = new TLegend(0.58,0.65,1.00,1.00);
leg77->SetTextSize(0.04);
leg77->SetTextAlign(12);
leg77->SetFillColor(kWhite);
leg77->SetLineColor(kWhite);
leg77->SetShadowColor(kWhite);
leg77->SetHeader("Channel");
leg77->AddEntry(hOpeningAngleCrossSectionTrue,"True");
leg77->AddEntry(hOpeningAngleCrossSection,"Reco");
leg77->Draw();



TCanvas *c78 = new TCanvas("c78", "The Muon Momentum Differential Cross Section");
c78->SetTicks();
c78->SetFillColor(kWhite);

hMuonMomentumCrossSectionTrue->SetLineColor(kBlue);
hMuonMomentumCrossSectionTrue->SetLineWidth(2);
hMuonMomentumCrossSectionTrue->Rebin(50);

hMuonMomentumCrossSection->SetLineColor(kRed);
hMuonMomentumCrossSection->SetLineWidth(2);
hMuonMomentumCrossSection->Rebin(50);

hMuonMomentumCrossSection->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonMomentumCrossSection->GetXaxis()->CenterTitle();

hMuonMomentumCrossSection->GetYaxis()->SetTitle("#frac{d#sigma_{i}}{dp_{#mu}_{i}}");
hMuonMomentumCrossSection->GetYaxis()->CenterTitle();

hMuonMomentumCrossSection->Draw("histo");
hMuonMomentumCrossSectionTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg78 = new TLegend();
leg78 = new TLegend(0.58,0.65,1.00,1.00);
leg78->SetTextSize(0.04);
leg78->SetTextAlign(12);
leg78->SetFillColor(kWhite);
leg78->SetLineColor(kWhite);
leg78->SetShadowColor(kWhite);
leg78->SetHeader("Channel");
leg78->AddEntry(hMuonMomentumCrossSectionTrue,"True");
leg78->AddEntry(hMuonMomentumCrossSection,"Reco");
leg78->Draw();



TCanvas *c79 = new TCanvas("c79", "The Pion Momentum Differential Cross Section");
c79->SetTicks();
c79->SetFillColor(kWhite);

hPionMomentumCrossSectionTrue->SetLineColor(kBlue);
hPionMomentumCrossSectionTrue->SetLineWidth(2);
hPionMomentumCrossSectionTrue->Rebin(50);

hPionMomentumCrossSection->SetLineColor(kRed);
hPionMomentumCrossSection->SetLineWidth(2);
hPionMomentumCrossSection->Rebin(50);

hPionMomentumCrossSection->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionMomentumCrossSection->GetXaxis()->CenterTitle();

hPionMomentumCrossSection->GetYaxis()->SetTitle("#frac{d#sigma_{i}}{dp_{#pi}_{i}}");
hPionMomentumCrossSection->GetYaxis()->CenterTitle();

hPionMomentumCrossSection->Draw("histo");
hPionMomentumCrossSectionTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg79 = new TLegend();
leg79 = new TLegend(0.58,0.65,1.00,1.00);
leg79->SetTextSize(0.04);
leg79->SetTextAlign(12);
leg79->SetFillColor(kWhite);
leg79->SetLineColor(kWhite);
leg79->SetShadowColor(kWhite);
leg79->SetHeader("Channel");
leg79->AddEntry(hPionMomentumCrossSectionTrue,"True");
leg79->AddEntry(hPionMomentumCrossSection,"Reco");
leg79->Draw();



TCanvas *c80 = new TCanvas("c80", "The |t| Differential Cross Section");
c80->SetTicks();
c80->SetFillColor(kWhite);

hTCrossSectionTrue->SetLineColor(kBlue);
hTCrossSectionTrue->SetLineWidth(2);
hTCrossSectionTrue->Rebin(50);

hTCrossSection->SetLineColor(kRed);
hTCrossSection->SetLineWidth(2);
hTCrossSection->Rebin(50);

hTCrossSection->GetXaxis()->SetTitle("|t| [GeV^{2}]");
hTCrossSection->GetXaxis()->CenterTitle();

hTCrossSection->GetYaxis()->SetTitle("#frac{d#sigma_{i}}{d|t|_{i}}");
hTCrossSection->GetYaxis()->CenterTitle();

hTCrossSection->Draw("histo");
hTCrossSectionTrue->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg80 = new TLegend();
leg80 = new TLegend(0.58,0.65,1.00,1.00);
leg80->SetTextSize(0.04);
leg80->SetTextAlign(12);
leg80->SetFillColor(kWhite);
leg80->SetLineColor(kWhite);
leg80->SetShadowColor(kWhite);
leg80->SetHeader("Channel");
leg80->AddEntry(hTCrossSectionTrue,"True");
leg80->AddEntry(hTCrossSection,"Reco");
leg80->Draw();



TCanvas *c81 = new TCanvas("c81", "Maximize Cone Angle");
c81->SetTicks();
c81->SetFillColor(kWhite);

gMaximizeConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gMaximizeConeAngle->GetXaxis()->CenterTitle();
gMaximizeConeAngle->GetXaxis()->SetRangeUser(0,180);

gMaximizeConeAngle->GetYaxis()->SetTitle("#frac{S}{#sqrt{S + B}}");
gMaximizeConeAngle->GetYaxis()->CenterTitle();

gMaximizeConeAngle->Draw();
gMaximizeConeAngleR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg81 = new TLegend();
leg81 = new TLegend(0.58,0.65,1.00,1.00);
leg81->SetTextSize(0.04);
leg81->SetTextAlign(12);
leg81->SetFillColor(kWhite);
leg81->SetLineColor(kWhite);
leg81->SetShadowColor(kWhite);
leg81->SetHeader("Maximize");
leg81->AddEntry(gMaximizeConeAngle,"True");
leg81->AddEntry(gMaximizeConeAngleR,"Reco");
leg81->Draw();



TCanvas *c82 = new TCanvas("c82", "Maximize DoCA");
c82->SetTicks();
c82->SetFillColor(kWhite);

gMaximizeDoCA->GetXaxis()->SetTitle("DoCA [cm]");
gMaximizeDoCA->GetXaxis()->CenterTitle();
gMaximizeDoCA->GetXaxis()->SetRangeUser(0,100);

gMaximizeDoCA->GetYaxis()->SetTitle("#frac{S}{#sqrt{S + B}}");
gMaximizeDoCA->GetYaxis()->CenterTitle();

gMaximizeDoCA->Draw();
gMaximizeDoCAR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg82 = new TLegend();
leg82 = new TLegend(0.58,0.65,1.00,1.00);
leg82->SetTextSize(0.04);
leg82->SetTextAlign(12);
leg82->SetFillColor(kWhite);
leg82->SetLineColor(kWhite);
leg82->SetShadowColor(kWhite);
leg82->SetHeader("Maximize");
leg82->AddEntry(gMaximizeDoCA,"True");
leg82->AddEntry(gMaximizeDoCAR,"Reco");
leg82->Draw();



TCanvas *c83 = new TCanvas("c83", "Maximize VA");
c83->SetTicks();
c83->SetFillColor(kWhite);

gMaximizeVAR->GetXaxis()->SetTitle("Vertex Activity [ADC]");
gMaximizeVAR->GetXaxis()->CenterTitle();
//gMaximizeVAR->GetXaxis()->SetRangeUser(0,100);

gMaximizeVAR->GetYaxis()->SetTitle("#frac{S}{#sqrt{S + B}}");
gMaximizeVAR->GetYaxis()->CenterTitle();

gMaximizeVAR->Draw();

// ### Defining the legend for the plot ###
TLegend *leg83 = new TLegend();
leg83 = new TLegend(0.58,0.65,1.00,1.00);
leg83->SetTextSize(0.04);
leg83->SetTextAlign(12);
leg83->SetFillColor(kWhite);
leg83->SetLineColor(kWhite);
leg83->SetShadowColor(kWhite);
leg83->SetHeader("Maximize");
leg83->AddEntry(gMaximizeVAR,"Reco");
leg83->Draw();



TCanvas *c84 = new TCanvas("c84", "Maximize |t|");
c84->SetTicks();
c84->SetFillColor(kWhite);

gMaximizeTR->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
gMaximizeTR->GetXaxis()->CenterTitle();
gMaximizeTR->GetXaxis()->SetRangeUser(0,1);

gMaximizeTR->GetYaxis()->SetTitle("#frac{S}{#sqrt{S + B}}");
gMaximizeTR->GetYaxis()->CenterTitle();

gMaximizeTR->Draw();
gMaximizeT->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg84 = new TLegend();
leg84 = new TLegend(0.58,0.65,1.00,1.00);
leg84->SetTextSize(0.04);
leg84->SetTextAlign(12);
leg84->SetFillColor(kWhite);
leg84->SetLineColor(kWhite);
leg84->SetShadowColor(kWhite);
leg84->SetHeader("Maximize");
leg84->AddEntry(gMaximizeT,"True");
leg84->AddEntry(gMaximizeTR,"Reco");
leg84->Draw();



TCanvas *c85 = new TCanvas("c85", "The Deltas for Momentum Calculations of Muon Candidates");
c85->SetTicks();
c85->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonCandidateAfterMomentumDelta->Scale(1/hMuonCandidateAfterMomentumDelta->Integral());
hMuonCandidateAfterLMomentumDelta->Scale(1/hMuonCandidateAfterLMomentumDelta->Integral());
hMuonCandidateAfterComboMomentumDelta->Scale(1/hMuonCandidateAfterComboMomentumDelta->Integral());

hMuonCandidateAfterMomentumDelta->SetLineColor(kBlue);
hMuonCandidateAfterMomentumDelta->SetLineWidth(2);
hMuonCandidateAfterMomentumDelta->Rebin(10);

hMuonCandidateAfterLMomentumDelta->SetLineColor(kGreen);
hMuonCandidateAfterLMomentumDelta->SetLineWidth(2);
hMuonCandidateAfterLMomentumDelta->Rebin(10);

hMuonCandidateAfterComboMomentumDelta->SetLineColor(kRed);
hMuonCandidateAfterComboMomentumDelta->SetLineWidth(2);
hMuonCandidateAfterComboMomentumDelta->Rebin(10);

hMuonCandidateAfterLMomentumDelta->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterLMomentumDelta->GetXaxis()->CenterTitle();

hMuonCandidateAfterLMomentumDelta->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateAfterLMomentumDelta->GetYaxis()->CenterTitle();

hMuonCandidateAfterLMomentumDelta->Draw("histo");
hMuonCandidateAfterMomentumDelta->Draw("histosame");
hMuonCandidateAfterComboMomentumDelta->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg85 = new TLegend();
leg85 = new TLegend(0.58,0.65,1.00,1.00);
leg85->SetTextSize(0.04);
leg85->SetTextAlign(12);
leg85->SetFillColor(kWhite);
leg85->SetLineColor(kWhite);
leg85->SetShadowColor(kWhite);
leg85->SetHeader("Reco Momentas");
leg85->AddEntry(hMuonCandidateAfterMomentumDelta,"True - MCS Reco");
leg85->AddEntry(hMuonCandidateAfterLMomentumDelta,"True - Range Reco");
leg85->AddEntry(hMuonCandidateAfterComboMomentumDelta,"True - Combo Reco");
leg85->Draw();



TCanvas *c86 = new TCanvas("c86", "The Deltas for Momentum Calculations of Pion Candidates");
c86->SetTicks();
c86->SetFillColor(kWhite);

// Area normalzing the plot 
hPionCandidateAfterMomentumDelta->Scale(1/hPionCandidateAfterMomentumDelta->Integral());
hPionCandidateAfterLMomentumDelta->Scale(1/hPionCandidateAfterLMomentumDelta->Integral());
hPionCandidateAfterComboMomentumDelta->Scale(1/hPionCandidateAfterComboMomentumDelta->Integral());

hPionCandidateAfterMomentumDelta->SetLineColor(kBlue);
hPionCandidateAfterMomentumDelta->SetLineWidth(2);
hPionCandidateAfterMomentumDelta->Rebin(10);

hPionCandidateAfterLMomentumDelta->SetLineColor(kGreen);
hPionCandidateAfterLMomentumDelta->SetLineWidth(2);
hPionCandidateAfterLMomentumDelta->Rebin(10);

hPionCandidateAfterComboMomentumDelta->SetLineColor(kRed);
hPionCandidateAfterComboMomentumDelta->SetLineWidth(2);
hPionCandidateAfterComboMomentumDelta->Rebin(10);

hPionCandidateAfterMomentumDelta->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hPionCandidateAfterMomentumDelta->GetXaxis()->CenterTitle();

hPionCandidateAfterMomentumDelta->GetYaxis()->SetTitle("Normalized Events");
hPionCandidateAfterMomentumDelta->GetYaxis()->CenterTitle();

hPionCandidateAfterMomentumDelta->Draw("histo");
hPionCandidateAfterComboMomentumDelta->Draw("histosame");
hPionCandidateAfterLMomentumDelta->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg86 = new TLegend();
leg86 = new TLegend(0.58,0.65,1.00,1.00);
leg86->SetTextSize(0.04);
leg86->SetTextAlign(12);
leg86->SetFillColor(kWhite);
leg86->SetLineColor(kWhite);
leg86->SetShadowColor(kWhite);
leg86->SetHeader("Reco Momentas");
leg86->AddEntry(hPionCandidateAfterMomentumDelta,"True - MCS Reco");
leg86->AddEntry(hPionCandidateAfterLMomentumDelta,"True - Range Reco");
leg86->AddEntry(hPionCandidateAfterComboMomentumDelta,"True - Combo Reco");
leg86->Draw();



// ----------------------------------------------------
// --- Printing Out The True and Reco Cross Section ---
// ----------------------------------------------------
std::cout<<"The True Cross Section = "<<TrueCrossSection<<std::endl;
std::cout<<"The Reco Cross Section = "<<RecoCrossSection<<std::endl;
// ----------------------------------------------------




// --------------------------------------
// --- Saving the Plots to PNG Images ---
// --------------------------------------
/*
TImage *img1 = TImage::Create();
img1->FromPad(c1);
img1->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/MuonChi2.png");

TImage *img2 = TImage::Create();
img2->FromPad(c2);
img2->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/ProtonChi2.png");

TImage *img3 = TImage::Create();
img3->FromPad(c3);
img3->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/PandoraTrackLength.png");

TImage *img4 = TImage::Create();
img4->FromPad(c4);
img4->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/MuonChi2VsProtonChi2_Muons.png");

TImage *img5 = TImage::Create();
img5->FromPad(c5);
img5->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/MuonChi2VsProtonChi2_Pions.png");

TImage *img6 = TImage::Create();
img6->FromPad(c6);
img6->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/MuonChi2VsProtonChi2_Protons.png");

TImage *img7 = TImage::Create();
img7->FromPad(c7);
img7->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/Chi2Ratios.png");

TImage *img8 = TImage::Create();
img8->FromPad(c8);
img8->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/TrueTrackLength.png");

TImage *img9 = TImage::Create();
img9->FromPad(c9);
img9->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/PandoraVsTrueTrackLengthMuons.png");

TImage *img10 = TImage::Create();
img10->FromPad(c10);
img10->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/PandoraVsTrueTrackLengthPions.png");

TImage *img11 = TImage::Create();
img11->FromPad(c11);
img11->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/PandoraVsTrueTrackLengthProtons.png");

TImage *img12 = TImage::Create();
img12->FromPad(c12);
img12->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/TrackScores.png");

TImage *img13 = TImage::Create();
img13->FromPad(c13);
img13->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/VertexDistance.png");

TImage *img14 = TImage::Create();
img14->FromPad(c14);
img14->WriteImage("/home/zwilliams/Desktop/ReconstructionTechNoteImages/CCInclusiveEffCCCohNuEnergy.png");



TCanvas *c67 = new TCanvas("c67", "The Combo MCS and Range Based Momentum for Muon Candidates");
c67->SetTicks();
c67->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonCandidateAfterMomentumTrue->Scale(1/hMuonCandidateAfterMomentumTrue->Integral());
hMuonCandidateAfterComboMomentumReco->Scale(1/hMuonCandidateAfterComboMomentumReco->Integral());
hMuonCandidateAfterTrueOther->Scale(1/hMuonCandidateAfterMomentumTrueOther->Integral());
hMuonCandidateAfterComboMomentumRecoOther->Scale(1/hMuonCandidateAfterComboMomentumRecoOther->Integral());

hMuonCandidateAfterMomentumTrue->SetLineColor(kBlue);
hMuonCandidateAfterMomentumTrue->SetLineWidth(2);
hMuonCandidateAfterMomentumTrue->Rebin(10);

hMuonCandidateAfterComboMomentumReco->SetLineColor(kCyan);
hMuonCandidateAfterComboMomentumReco->SetLineWidth(2);
hMuonCandidateAfterComboMomentumReco->Rebin(10);

hMuonCandidateAfterMomentumTrueOther->SetLineColor(kBlack);
hMuonCandidateAfterMomentumTrueOther->SetLineWidth(2);
hMuonCandidateAfterMomentumTrueOther->Rebin(10);

hMuonCandidateAfterComboMomentumRecoOther->SetLineColor(kGray);
hMuonCandidateAfterComboMomentumRecoOther->SetLineWidth(2);
hMuonCandidateAfterComboMomentumRecoOther->Rebin(10);

hMuonCandidateAfterMomentumTrue->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hMuonCandidateAfterMomentumTrue->GetXaxis()->CenterTitle();

hMuonCandidateAfterMomentumTrue->GetYaxis()->SetTitle("Normalized Events");
hMuonCandidateAfterMomentumTrue->GetYaxis()->CenterTitle();

hMuonCandidateAfterMomentumTrue->Draw("histo");
hMuonCandidateAfterComboMomentumReco->Draw("histosame");
hMuonCandidateAfterMomentumTrueOther->Draw("histosame");
hMuonCandidateAfterComboMomentumRecoOther->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg67 = new TLegend();
leg67 = new TLegend(0.58,0.65,1.00,1.00);
leg67->SetTextSize(0.04);
leg67->SetTextAlign(12);
leg67->SetFillColor(kWhite);
leg67->SetLineColor(kWhite);
leg67->SetShadowColor(kWhite);
leg67->SetHeader("Channel");
leg67->AddEntry(hMuonCandidateAfterMomentumTrue,"True CC-Coh");
leg67->AddEntry(hMuonCandidateAfterComboMomentumReco,"Reco CC-Coh");
leg67->AddEntry(hMuonCandidateAfterMomentumTrueOther,"True Other");
leg67->AddEntry(hMuonCandidateAfterComboMomentumRecoOther,"Reco Other");
leg67->Draw();
*/
// --------------------------------------
}
