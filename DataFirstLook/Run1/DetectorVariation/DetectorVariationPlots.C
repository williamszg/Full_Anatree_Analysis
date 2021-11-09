#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{/*
TFile *f1 = new TFile("CV2/MC_Histograms_Run1_DV_CV2.root"); // <-- File for Run1 Regular MC Sample
TFile *f2 = new TFile("CV2/POT_Counting/CV2_POT.root"); // <-- File for POT of Run1 Regular MC Sample
TFile *f3 = new TFile("WireModX/MC_Histograms_Run1_DV_WireModX.root"); // <-- File for Run1 Detector Variation WireModX Sample
TFile *f4 = new TFile("WireModX/POT_Counting/WireModX_POT.root"); // <-- File for POT of Run1 Detector Variation WireModX Sample
TFile *f5 = new TFile("WireModYZ/MC_Histograms_Run1_DV_WireModYZ.root"); // <-- File for Run1 Detector Variation WireModYZ Sample
TFile *f6 = new TFile("WireModYZ/POT_Counting/WireModYZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModYZ Sample
TFile *f7 = new TFile("WireModThetaXZ/MC_Histograms_Run1_DV_WireModThetaXZ.root"); // <-- File for Run1 Detector Variation WireModThetaXZ Sample
TFile *f8 = new TFile("WireModThetaXZ/POT_Counting/WireModThetaXZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModThetaXZ Sample
TFile *f9 = new TFile("WireModThetaYZ/MC_Histograms_Run1_DV_WireModThetaYZ.root"); // <-- File for Run1 Detector Variation WireModThetaYZ Sample
TFile *f10 = new TFile("WireModThetaYZ/POT_Counting/WireModThetaYZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModThetaYZ Sample
TFile *f11 = new TFile("LYDown/MC_Histograms_Run1_DV_LYDown.root"); // <-- File for Run1 Detector Variation LYDown Sample
TFile *f12 = new TFile("LYDown/POT_Counting/LYDown_POT.root"); // <-- File for POT of Run1 Detector Variation LYDown Sample
TFile *f13 = new TFile("LYAtten/MC_Histograms_Run1_DV_LYAtten.root"); // <-- File for Run1 Detector Variation LYAtten Sample
TFile *f14 = new TFile("LYAtten/POT_Counting/LYAtten_POT.root"); // <-- File for POT of Run1 Detector Variation LYAtten Sample
TFile *f15 = new TFile("LYRayleigh/MC_Histograms_Run1_DV_LYRayleigh.root"); // <-- File for Run1 Detector Variation LYRayleigh Sample
TFile *f16 = new TFile("LYRayleigh/POT_Counting/LYRayleigh_POT.root"); // <-- File for POT of Run1 Detector Variation LYRayleigh Sample
TFile *f17 = new TFile("SCE/MC_Histograms_Run1_DV_SCE.root"); // <-- File for Run1 Detector Variation SCE Sample
TFile *f18 = new TFile("SCE/POT_Counting/SCE_POT.root"); // <-- File for POT of Run1 Detector Variation SCE Sample
TFile *f19 = new TFile("Recomb2/MC_Histograms_Run1_DV_Recomb2.root"); // <-- File for Run1 Detector Variation Recomb2 Sample
TFile *f20 = new TFile("Recomb2/POT_Counting/Recomb2_POT.root"); // <-- File for POT of Run1 Detector Variation Recomb2 Sample
TFile *f21 = new TFile("CV1/MC_Histograms_Run1_DV_CV1.root"); // <-- File for Run1 Regular MC Sample
TFile *f22 = new TFile("CV1/POT_Counting/CV1_POT.root"); // <-- File for POT of Run1 Regular MC Sample
*/

// =====================================
// === BACKGROUND ONLY SAMPLES BELOW ===
// =====================================
TFile *f1 = new TFile("BKGDonly/MC_Histograms_Run1_DV_CV2.root"); // <-- File for Run1 Regular MC Sample
TFile *f2 = new TFile("CV2/POT_Counting/CV2_POT.root"); // <-- File for POT of Run1 Regular MC Sample
TFile *f3 = new TFile("BKGDonly/MC_Histograms_Run1_DV_WireModX.root"); // <-- File for Run1 Detector Variation WireModX Sample
TFile *f4 = new TFile("WireModX/POT_Counting/WireModX_POT.root"); // <-- File for POT of Run1 Detector Variation WireModX Sample
TFile *f5 = new TFile("BKGDonly/MC_Histograms_Run1_DV_WireModYZ.root"); // <-- File for Run1 Detector Variation WireModYZ Sample
TFile *f6 = new TFile("WireModYZ/POT_Counting/WireModYZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModYZ Sample
TFile *f7 = new TFile("BKGDonly/MC_Histograms_Run1_DV_WireModThetaXZ.root"); // <-- File for Run1 Detector Variation WireModThetaXZ Sample
TFile *f8 = new TFile("WireModThetaXZ/POT_Counting/WireModThetaXZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModThetaXZ Sample
TFile *f9 = new TFile("BKGDonly/MC_Histograms_Run1_DV_WireModThetaYZ.root"); // <-- File for Run1 Detector Variation WireModThetaYZ Sample
TFile *f10 = new TFile("WireModThetaYZ/POT_Counting/WireModThetaYZ_POT.root"); // <-- File for POT of Run1 Detector Variation WireModThetaYZ Sample
TFile *f11 = new TFile("BKGDonly/MC_Histograms_Run1_DV_LYDown.root"); // <-- File for Run1 Detector Variation LYDown Sample
TFile *f12 = new TFile("LYDown/POT_Counting/LYDown_POT.root"); // <-- File for POT of Run1 Detector Variation LYDown Sample
TFile *f13 = new TFile("BKGDonly/MC_Histograms_Run1_DV_LYAtten.root"); // <-- File for Run1 Detector Variation LYAtten Sample
TFile *f14 = new TFile("LYAtten/POT_Counting/LYAtten_POT.root"); // <-- File for POT of Run1 Detector Variation LYAtten Sample
TFile *f15 = new TFile("BKGDonly/MC_Histograms_Run1_DV_LYRayleigh.root"); // <-- File for Run1 Detector Variation LYRayleigh Sample
TFile *f16 = new TFile("LYRayleigh/POT_Counting/LYRayleigh_POT.root"); // <-- File for POT of Run1 Detector Variation LYRayleigh Sample
TFile *f17 = new TFile("BKGDonly/MC_Histograms_Run1_DV_SCE.root"); // <-- File for Run1 Detector Variation SCE Sample
TFile *f18 = new TFile("SCE/POT_Counting/SCE_POT.root"); // <-- File for POT of Run1 Detector Variation SCE Sample
TFile *f19 = new TFile("BKGDonly/MC_Histograms_Run1_DV_Recomb2.root"); // <-- File for Run1 Detector Variation Recomb2 Sample
TFile *f20 = new TFile("Recomb2/POT_Counting/Recomb2_POT.root"); // <-- File for POT of Run1 Detector Variation Recomb2 Sample
TFile *f21 = new TFile("BKGDonly/MC_Histograms_Run1_DV_CV1.root"); // <-- File for Run1 Regular MC Sample
TFile *f22 = new TFile("CV1/POT_Counting/CV1_POT.root"); // <-- File for POT of Run1 Regular MC Sample
// =====================================





TH1D *hT = (TH1D*)f1->Get("hT");
TH1D *hTWireModX = (TH1D*)f3->Get("hT");
TH1D *hTWireModYZ = (TH1D*)f5->Get("hT");
TH1D *hTWireModThetaXZ = (TH1D*)f7->Get("hT");
TH1D *hTWireModThetaYZ = (TH1D*)f9->Get("hT");
TH1D *hTLYDown = (TH1D*)f11->Get("hT");
TH1D *hTLYAtten = (TH1D*)f13->Get("hT");
TH1D *hTLYRayleigh = (TH1D*)f15->Get("hT");
TH1D *hTSCE = (TH1D*)f17->Get("hT");
TH1D *hTRecomb2 = (TH1D*)f19->Get("hT");
TH1D *hT1 = (TH1D*)f21->Get("hT");

hT->Sumw2();
hTWireModX->Sumw2();
hTWireModYZ->Sumw2();
hTWireModThetaXZ->Sumw2();
hTWireModThetaYZ->Sumw2();
hTLYDown->Sumw2();
hTLYAtten->Sumw2();
hTLYRayleigh->Sumw2();
hTSCE->Sumw2();
hTRecomb2->Sumw2();
hT1->Sumw2();


TH1D* hTC = (TH1D*)hT->Clone();
TH1D* hTWireModXC = (TH1D*)hTWireModX->Clone();
TH1D* hTWireModYZC = (TH1D*)hTWireModYZ->Clone();
TH1D* hTWireModThetaXZC = (TH1D*)hTWireModThetaXZ->Clone();
TH1D* hTWireModThetaYZC = (TH1D*)hTWireModThetaYZ->Clone();
TH1D* hTLYDownC = (TH1D*)hTLYDown->Clone();
TH1D* hTLYAttenC = (TH1D*)hTLYAtten->Clone();
TH1D* hTLYRayleighC = (TH1D*)hTLYRayleigh->Clone();
TH1D* hTSCEC = (TH1D*)hTSCE->Clone();
TH1D* hTRecomb2C = (TH1D*)hTRecomb2->Clone();
TH1D* hT1C = (TH1D*)hT1->Clone();


TH1D *hTOA = (TH1D*)f1->Get("hTOA");
TH1D *hTOAWireModX = (TH1D*)f3->Get("hTOA");
TH1D *hTOAWireModYZ = (TH1D*)f5->Get("hTOA");
TH1D *hTOAWireModThetaXZ = (TH1D*)f7->Get("hTOA");
TH1D *hTOAWireModThetaYZ = (TH1D*)f9->Get("hTOA");
TH1D *hTOALYDown = (TH1D*)f11->Get("hTOA");
TH1D *hTOALYAtten = (TH1D*)f13->Get("hTOA");
TH1D *hTOALYRayleigh = (TH1D*)f15->Get("hTOA");
TH1D *hTOASCE = (TH1D*)f17->Get("hTOA");
TH1D *hTOARecomb2 = (TH1D*)f19->Get("hTOA");
TH1D *hTOA1 = (TH1D*)f21->Get("hTOA");

hTOA->Sumw2();
hTOAWireModX->Sumw2();
hTOAWireModYZ->Sumw2();
hTOAWireModThetaXZ->Sumw2();
hTOAWireModThetaYZ->Sumw2();
hTOALYDown->Sumw2();
hTOALYAtten->Sumw2();
hTOALYRayleigh->Sumw2();
hTOASCE->Sumw2();
hTOARecomb2->Sumw2();
hTOA1->Sumw2();


TH1D* hTOAC = (TH1D*)hTOA->Clone();
TH1D* hTOAWireModXC = (TH1D*)hTOAWireModX->Clone();
TH1D* hTOAWireModYZC = (TH1D*)hTOAWireModYZ->Clone();
TH1D* hTOAWireModThetaXZC = (TH1D*)hTOAWireModThetaXZ->Clone();
TH1D* hTOAWireModThetaYZC = (TH1D*)hTOAWireModThetaYZ->Clone();
TH1D* hTOALYDownC = (TH1D*)hTOALYDown->Clone();
TH1D* hTOALYAttenC = (TH1D*)hTOALYAtten->Clone();
TH1D* hTOALYRayleighC = (TH1D*)hTOALYRayleigh->Clone();
TH1D* hTOASCEC = (TH1D*)hTOASCE->Clone();
TH1D* hTOARecomb2C = (TH1D*)hTOARecomb2->Clone();
TH1D* hTOA1C = (TH1D*)hTOA1->Clone();


TH1D *hRecoMuonCandidateMomentum = (TH1D*)f1->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModX = (TH1D*)f3->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModYZ = (TH1D*)f5->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModThetaXZ = (TH1D*)f7->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModThetaYZ = (TH1D*)f9->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumLYDown = (TH1D*)f11->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumLYAtten = (TH1D*)f13->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumLYRayleigh = (TH1D*)f15->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumSCE = (TH1D*)f17->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumRecomb2 = (TH1D*)f19->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentum1 = (TH1D*)f21->Get("hRecoMuonCandidateMomentum");

hRecoMuonCandidateMomentum->Sumw2();
hRecoMuonCandidateMomentumWireModX->Sumw2();
hRecoMuonCandidateMomentumWireModYZ->Sumw2();
hRecoMuonCandidateMomentumWireModThetaXZ->Sumw2();
hRecoMuonCandidateMomentumWireModThetaYZ->Sumw2();
hRecoMuonCandidateMomentumLYDown->Sumw2();
hRecoMuonCandidateMomentumLYAtten->Sumw2();
hRecoMuonCandidateMomentumLYRayleigh->Sumw2();
hRecoMuonCandidateMomentumSCE->Sumw2();
hRecoMuonCandidateMomentumRecomb2->Sumw2();
hRecoMuonCandidateMomentum1->Sumw2();


TH1D* hRecoMuonCandidateMomentumC = (TH1D*)hRecoMuonCandidateMomentum->Clone();
TH1D* hRecoMuonCandidateMomentumWireModXC = (TH1D*)hRecoMuonCandidateMomentumWireModX->Clone();
TH1D* hRecoMuonCandidateMomentumWireModYZC = (TH1D*)hRecoMuonCandidateMomentumWireModYZ->Clone();
TH1D* hRecoMuonCandidateMomentumWireModThetaXZC = (TH1D*)hRecoMuonCandidateMomentumWireModThetaXZ->Clone();
TH1D* hRecoMuonCandidateMomentumWireModThetaYZC = (TH1D*)hRecoMuonCandidateMomentumWireModThetaYZ->Clone();
TH1D* hRecoMuonCandidateMomentumLYDownC = (TH1D*)hRecoMuonCandidateMomentumLYDown->Clone();
TH1D* hRecoMuonCandidateMomentumLYAttenC = (TH1D*)hRecoMuonCandidateMomentumLYAtten->Clone();
TH1D* hRecoMuonCandidateMomentumLYRayleighC = (TH1D*)hRecoMuonCandidateMomentumLYRayleigh->Clone();
TH1D* hRecoMuonCandidateMomentumSCEC = (TH1D*)hRecoMuonCandidateMomentumSCE->Clone();
TH1D* hRecoMuonCandidateMomentumRecomb2C = (TH1D*)hRecoMuonCandidateMomentumRecomb2->Clone();
TH1D* hRecoMuonCandidateMomentum1C = (TH1D*)hRecoMuonCandidateMomentum1->Clone();


TH1D *hRecoMuonCandidateMomentumOA = (TH1D*)f1->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModX = (TH1D*)f3->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModYZ = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModThetaXZ = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModThetaYZ = (TH1D*)f9->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOALYDown = (TH1D*)f11->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOALYAtten = (TH1D*)f13->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOALYRayleigh = (TH1D*)f15->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOASCE = (TH1D*)f17->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOARecomb2 = (TH1D*)f19->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOA1 = (TH1D*)f21->Get("hRecoMuonCandidateMomentumAfterOA");

hRecoMuonCandidateMomentumOA->Sumw2();
hRecoMuonCandidateMomentumOAWireModX->Sumw2();
hRecoMuonCandidateMomentumOAWireModYZ->Sumw2();
hRecoMuonCandidateMomentumOAWireModThetaXZ->Sumw2();
hRecoMuonCandidateMomentumOAWireModThetaYZ->Sumw2();
hRecoMuonCandidateMomentumOALYDown->Sumw2();
hRecoMuonCandidateMomentumOALYAtten->Sumw2();
hRecoMuonCandidateMomentumOALYRayleigh->Sumw2();
hRecoMuonCandidateMomentumOASCE->Sumw2();
hRecoMuonCandidateMomentumOARecomb2->Sumw2();
hRecoMuonCandidateMomentumOA1->Sumw2();


TH1D* hRecoMuonCandidateMomentumOAC = (TH1D*)hRecoMuonCandidateMomentumOA->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModXC = (TH1D*)hRecoMuonCandidateMomentumOAWireModX->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModYZC = (TH1D*)hRecoMuonCandidateMomentumOAWireModYZ->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModThetaXZC = (TH1D*)hRecoMuonCandidateMomentumOAWireModThetaXZ->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModThetaYZC = (TH1D*)hRecoMuonCandidateMomentumOAWireModThetaYZ->Clone();
TH1D* hRecoMuonCandidateMomentumOALYDownC = (TH1D*)hRecoMuonCandidateMomentumOALYDown->Clone();
TH1D* hRecoMuonCandidateMomentumOALYAttenC = (TH1D*)hRecoMuonCandidateMomentumOALYAtten->Clone();
TH1D* hRecoMuonCandidateMomentumOALYRayleighC = (TH1D*)hRecoMuonCandidateMomentumOALYRayleigh->Clone();
TH1D* hRecoMuonCandidateMomentumOASCEC = (TH1D*)hRecoMuonCandidateMomentumOASCE->Clone();
TH1D* hRecoMuonCandidateMomentumOARecomb2C = (TH1D*)hRecoMuonCandidateMomentumOARecomb2->Clone();
TH1D* hRecoMuonCandidateMomentumOA1C = (TH1D*)hRecoMuonCandidateMomentumOA1->Clone();


TH1D *hRecoPionCandidateMomentum = (TH1D*)f1->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModX = (TH1D*)f3->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModYZ = (TH1D*)f5->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModThetaXZ = (TH1D*)f7->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModThetaYZ = (TH1D*)f9->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumLYDown = (TH1D*)f11->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumLYAtten = (TH1D*)f13->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumLYRayleigh = (TH1D*)f15->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumSCE = (TH1D*)f17->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumRecomb2 = (TH1D*)f19->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentum1 = (TH1D*)f21->Get("hRecoPionCandidateMomentum");

hRecoPionCandidateMomentum->Sumw2();
hRecoPionCandidateMomentumWireModX->Sumw2();
hRecoPionCandidateMomentumWireModYZ->Sumw2();
hRecoPionCandidateMomentumWireModThetaXZ->Sumw2();
hRecoPionCandidateMomentumWireModThetaYZ->Sumw2();
hRecoPionCandidateMomentumLYDown->Sumw2();
hRecoPionCandidateMomentumLYAtten->Sumw2();
hRecoPionCandidateMomentumLYRayleigh->Sumw2();
hRecoPionCandidateMomentumSCE->Sumw2();
hRecoPionCandidateMomentumRecomb2->Sumw2();
hRecoPionCandidateMomentum1->Sumw2();


TH1D* hRecoPionCandidateMomentumC = (TH1D*)hRecoPionCandidateMomentum->Clone();
TH1D* hRecoPionCandidateMomentumWireModXC = (TH1D*)hRecoPionCandidateMomentumWireModX->Clone();
TH1D* hRecoPionCandidateMomentumWireModYZC = (TH1D*)hRecoPionCandidateMomentumWireModYZ->Clone();
TH1D* hRecoPionCandidateMomentumWireModThetaXZC = (TH1D*)hRecoPionCandidateMomentumWireModThetaXZ->Clone();
TH1D* hRecoPionCandidateMomentumWireModThetaYZC = (TH1D*)hRecoPionCandidateMomentumWireModThetaYZ->Clone();
TH1D* hRecoPionCandidateMomentumLYDownC = (TH1D*)hRecoPionCandidateMomentumLYDown->Clone();
TH1D* hRecoPionCandidateMomentumLYAttenC = (TH1D*)hRecoPionCandidateMomentumLYAtten->Clone();
TH1D* hRecoPionCandidateMomentumLYRayleighC = (TH1D*)hRecoPionCandidateMomentumLYRayleigh->Clone();
TH1D* hRecoPionCandidateMomentumSCEC = (TH1D*)hRecoPionCandidateMomentumSCE->Clone();
TH1D* hRecoPionCandidateMomentumRecomb2C = (TH1D*)hRecoPionCandidateMomentumRecomb2->Clone();
TH1D* hRecoPionCandidateMomentum1C = (TH1D*)hRecoPionCandidateMomentum1->Clone();


TH1D *hRecoPionCandidateMomentumOA = (TH1D*)f1->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModX = (TH1D*)f3->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModYZ = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModThetaXZ = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModThetaYZ = (TH1D*)f9->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOALYDown = (TH1D*)f11->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOALYAtten = (TH1D*)f13->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOALYRayleigh = (TH1D*)f15->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOASCE = (TH1D*)f17->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOARecomb2 = (TH1D*)f19->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOA1 = (TH1D*)f21->Get("hRecoPionCandidateMomentumAfterOA");

hRecoPionCandidateMomentumOA->Sumw2();
hRecoPionCandidateMomentumOAWireModX->Sumw2();
hRecoPionCandidateMomentumOAWireModYZ->Sumw2();
hRecoPionCandidateMomentumOAWireModThetaXZ->Sumw2();
hRecoPionCandidateMomentumOAWireModThetaYZ->Sumw2();
hRecoPionCandidateMomentumOALYDown->Sumw2();
hRecoPionCandidateMomentumOALYAtten->Sumw2();
hRecoPionCandidateMomentumOALYRayleigh->Sumw2();
hRecoPionCandidateMomentumOASCE->Sumw2();
hRecoPionCandidateMomentumOARecomb2->Sumw2();
hRecoPionCandidateMomentumOA1->Sumw2();


TH1D* hRecoPionCandidateMomentumOAC = (TH1D*)hRecoPionCandidateMomentumOA->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModXC = (TH1D*)hRecoPionCandidateMomentumOAWireModX->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModYZC = (TH1D*)hRecoPionCandidateMomentumOAWireModYZ->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModThetaXZC = (TH1D*)hRecoPionCandidateMomentumOAWireModThetaXZ->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModThetaYZC = (TH1D*)hRecoPionCandidateMomentumOAWireModThetaYZ->Clone();
TH1D* hRecoPionCandidateMomentumOALYDownC = (TH1D*)hRecoPionCandidateMomentumOALYDown->Clone();
TH1D* hRecoPionCandidateMomentumOALYAttenC = (TH1D*)hRecoPionCandidateMomentumOALYAtten->Clone();
TH1D* hRecoPionCandidateMomentumOALYRayleighC = (TH1D*)hRecoPionCandidateMomentumOALYRayleigh->Clone();
TH1D* hRecoPionCandidateMomentumOASCEC = (TH1D*)hRecoPionCandidateMomentumOASCE->Clone();
TH1D* hRecoPionCandidateMomentumOARecomb2C = (TH1D*)hRecoPionCandidateMomentumOARecomb2->Clone();
TH1D* hRecoPionCandidateMomentumOA1C = (TH1D*)hRecoPionCandidateMomentumOA1->Clone();





TH1D *hPOTCountingBKGD = (TH1D*)f2->Get("hPOTCounting");
TH1D *hPOTCountingWireModX = (TH1D*)f4->Get("hPOTCounting");
TH1D *hPOTCountingWireModYZ = (TH1D*)f6->Get("hPOTCounting");
TH1D *hPOTCountingWireModThetaXZ = (TH1D*)f8->Get("hPOTCounting");
TH1D *hPOTCountingWireModThetaYZ = (TH1D*)f10->Get("hPOTCounting");
TH1D *hPOTCountingLYDown = (TH1D*)f12->Get("hPOTCounting");
TH1D *hPOTCountingLYAtten = (TH1D*)f14->Get("hPOTCounting");
TH1D *hPOTCountingLYRayleigh = (TH1D*)f16->Get("hPOTCounting");
TH1D *hPOTCountingSCE = (TH1D*)f18->Get("hPOTCounting");
TH1D *hPOTCountingRecomb2 = (TH1D*)f20->Get("hPOTCounting");
TH1D *hPOTCounting1 = (TH1D*)f22->Get("hPOTCounting");

hPOTCountingBKGD->Sumw2();
hPOTCountingWireModX->Sumw2();
hPOTCountingWireModYZ->Sumw2();
hPOTCountingWireModThetaXZ->Sumw2();
hPOTCountingWireModThetaYZ->Sumw2();
hPOTCountingLYDown->Sumw2();
hPOTCountingLYAtten->Sumw2();
hPOTCountingLYRayleigh->Sumw2();
hPOTCountingSCE->Sumw2();
hPOTCountingRecomb2->Sumw2();
hPOTCounting1->Sumw2();





// |-------------------------------------------|
// |--- Setting The Scale Factors Using POT ---|
// |-------------------------------------------|
double DataPOT = 5.21E19; // Run 1+2+3 POT is 6.79E20
double Run1ScaleFactorMC = (DataPOT)/((hPOTCountingBKGD->Integral())*(hPOTCountingBKGD->GetMean()));
std::cout<<"Run1ScaleFactorMC = "<<Run1ScaleFactorMC<<std::endl;
double Run1ScaleFactorWireModX = (DataPOT)/((hPOTCountingWireModX->Integral())*(hPOTCountingWireModX->GetMean()));
std::cout<<"Run1ScaleFactorWireModX = "<<Run1ScaleFactorWireModX<<std::endl;
double Run1ScaleFactorWireModYZ = (DataPOT)/((hPOTCountingWireModYZ->Integral())*(hPOTCountingWireModYZ->GetMean()));
std::cout<<"Run1ScaleFactorWireModYZ = "<<Run1ScaleFactorWireModYZ<<std::endl;
double Run1ScaleFactorWireModThetaXZ = (DataPOT)/((hPOTCountingWireModThetaXZ->Integral())*(hPOTCountingWireModThetaXZ->GetMean()));
std::cout<<"Run1ScaleFactorWireModThetaXZ = "<<Run1ScaleFactorWireModThetaXZ<<std::endl;
double Run1ScaleFactorWireModThetaYZ = (DataPOT)/((hPOTCountingWireModThetaYZ->Integral())*(hPOTCountingWireModThetaYZ->GetMean()));
std::cout<<"Run1ScaleFactorWireModThetaYZ = "<<Run1ScaleFactorWireModThetaYZ<<std::endl;
double Run1ScaleFactorLYDown = (DataPOT)/((hPOTCountingLYDown->Integral())*(hPOTCountingLYDown->GetMean()));
std::cout<<"Run1ScaleFactorLYDown = "<<Run1ScaleFactorLYDown<<std::endl;
double Run1ScaleFactorLYAtten = (DataPOT)/((hPOTCountingLYAtten->Integral())*(hPOTCountingLYAtten->GetMean()));
std::cout<<"Run1ScaleFactorLYAtten = "<<Run1ScaleFactorLYAtten<<std::endl;
double Run1ScaleFactorLYRayleigh = (DataPOT)/((hPOTCountingLYRayleigh->Integral())*(hPOTCountingLYRayleigh->GetMean()));
std::cout<<"Run1ScaleFactorLYRayleigh = "<<Run1ScaleFactorLYRayleigh<<std::endl;
double Run1ScaleFactorSCE = (DataPOT)/((hPOTCountingSCE->Integral())*(hPOTCountingSCE->GetMean()));
std::cout<<"Run1ScaleFactorSCE = "<<Run1ScaleFactorSCE<<std::endl;
double Run1ScaleFactorRecomb2 = (DataPOT)/((hPOTCountingRecomb2->Integral())*(hPOTCountingRecomb2->GetMean()));
std::cout<<"Run1ScaleFactorRecomb2 = "<<Run1ScaleFactorRecomb2<<std::endl;
double Run1ScaleFactor1 = (DataPOT)/((hPOTCounting1->Integral())*(hPOTCounting1->GetMean()));
std::cout<<"Run1ScaleFactor1 = "<<Run1ScaleFactor1<<std::endl;
// |-------------------------------------------|


// |====================================|
// |=== Rebinning Variables Are Here ===|
// |====================================|
int RebinT = 100; // Variable used to rebin the |t| Plots
int RebinP = 20; // Variable used to rebin the Momentum Plots

//Double_t edges[5] = {0.0, 0.1, 0.2, 0.4, 1.0}; // This is to make plots pretty!
Double_t edges[2] = {0.0, 1.0}; // This is to make the single bin!


/*hT->Rebin(RebinT);
hTWireModX->Rebin(RebinT);
hTWireModYZ->Rebin(RebinT);
hTWireModThetaXZ->Rebin(RebinT);
hTWireModThetaYZ->Rebin(RebinT);
hTLYDown->Rebin(RebinT);
hTLYAtten->Rebin(RebinT);
hTLYRayleigh->Rebin(RebinT);
hTSCE->Rebin(RebinT);
hTRecomb2->Rebin(RebinT);
hT1->Rebin(RebinT);

hTC->Rebin(RebinT);
hTWireModXC->Rebin(RebinT);
hTWireModYZC->Rebin(RebinT);
hTWireModThetaXZC->Rebin(RebinT);
hTWireModThetaYZC->Rebin(RebinT);
hTLYDownC->Rebin(RebinT);
hTLYAttenC->Rebin(RebinT);
hTLYRayleighC->Rebin(RebinT);
hTSCEC->Rebin(RebinT);
hTRecomb2C->Rebin(RebinT);
hT1C->Rebin(RebinT);

hTOA->Rebin(RebinT);
hTOAWireModX->Rebin(RebinT);
hTOAWireModYZ->Rebin(RebinT);
hTOAWireModThetaXZ->Rebin(RebinT);
hTOAWireModThetaYZ->Rebin(RebinT);
hTOALYDown->Rebin(RebinT);
hTOALYAtten->Rebin(RebinT);
hTOALYRayleigh->Rebin(RebinT);
hTOASCE->Rebin(RebinT);
hTOARecomb2->Rebin(RebinT);
hTOA1->Rebin(RebinT);

hTOAC->Rebin(RebinT);
hTOAWireModXC->Rebin(RebinT);
hTOAWireModYZC->Rebin(RebinT);
hTOAWireModThetaXZC->Rebin(RebinT);
hTOAWireModThetaYZC->Rebin(RebinT);
hTOALYDownC->Rebin(RebinT);
hTOALYAttenC->Rebin(RebinT);
hTOALYRayleighC->Rebin(RebinT);
hTOASCEC->Rebin(RebinT);
hTOARecomb2C->Rebin(RebinT);
hTOA1C->Rebin(RebinT);*/

//RebinT = 4; // This is to make plots pretty!
RebinT = 1; // This is to make the single bin!
// |====================================|





TCanvas *c1 = new TCanvas("c1", "Reco |t| After 2 Tracks");
c1->SetTicks();
c1->SetFillColor(kWhite);

hT->SetLineColor(kBlack);
hT->SetLineWidth(3);
hT->Scale(Run1ScaleFactorMC);
hTNew = hT->Rebin(RebinT, "hTNew", edges);
hTWireModX->SetLineColor(kRed);
hTWireModX->SetLineStyle(9);
hTWireModX->SetLineWidth(3);
hTWireModX->Scale(Run1ScaleFactorWireModX);
hTWireModXNew = hTWireModX->Rebin(RebinT, "hTWireModXNew", edges);
hTWireModYZ->SetLineColor(kRed-3);
hTWireModYZ->SetLineStyle(9);
hTWireModYZ->SetLineWidth(3);
hTWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hTWireModYZNew = hTWireModYZ->Rebin(RebinT, "hTWireModYZNew", edges);
hTWireModThetaXZ->SetLineColor(kRed-6);
hTWireModThetaXZ->SetLineStyle(9);
hTWireModThetaXZ->SetLineWidth(3);
hTWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hTWireModThetaXZNew = hTWireModThetaXZ->Rebin(RebinT, "hTWireModThetaXZNew", edges);
hTWireModThetaYZ->SetLineColor(kRed-8);
hTWireModThetaYZ->SetLineStyle(9);
hTWireModThetaYZ->SetLineWidth(3);
hTWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hTWireModThetaYZNew = hTWireModThetaYZ->Rebin(RebinT, "hTWireModThetaYZNew", edges);
hTLYDown->SetLineColor(kGreen);
hTLYDown->SetLineStyle(9);
hTLYDown->SetLineWidth(3);
hTLYDown->Scale(Run1ScaleFactorLYDown);
hTLYDownNew = hTLYDown->Rebin(RebinT, "hTLYDownNew", edges);
hTLYAtten->SetLineColor(kGreen+1);
hTLYAtten->SetLineStyle(9);
hTLYAtten->SetLineWidth(3);
hTLYAtten->Scale(Run1ScaleFactorLYAtten);
hTLYAttenNew = hTLYAtten->Rebin(RebinT, "hTLYAttenNew", edges);
hTLYRayleigh->SetLineColor(kGreen+2);
hTLYRayleigh->SetLineStyle(9);
hTLYRayleigh->SetLineWidth(3);
hTLYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hTLYRayleighNew = hTLYRayleigh->Rebin(RebinT, "hTLYRayleighNew", edges);
hTSCE->SetLineColor(kBlue);
hTSCE->SetLineStyle(9);
hTSCE->SetLineWidth(3);
hTSCE->Scale(Run1ScaleFactorSCE);
hTSCENew = hTSCE->Rebin(RebinT, "hTSCENew", edges);
hTRecomb2->SetLineColor(kMagenta);
hTRecomb2->SetLineStyle(9);
hTRecomb2->SetLineWidth(3);
hTRecomb2->Scale(Run1ScaleFactorRecomb2);
hTRecomb2New = hTRecomb2->Rebin(RebinT, "hTRecomb2New", edges);


hTNew->Draw("HIST");
hTWireModXNew->Draw("HISTsame");
hTWireModYZNew->Draw("HISTsame");
hTWireModThetaXZNew->Draw("HISTsame");
hTWireModThetaYZNew->Draw("HISTsame");
hTLYDownNew->Draw("HISTsame");
hTLYAttenNew->Draw("HISTsame");
hTLYRayleighNew->Draw("HISTsame");
hTSCENew->Draw("HISTsame");
hTRecomb2New->Draw("HISTsame");
hTNew->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTNew->GetXaxis()->CenterTitle();
hTNew->GetYaxis()->SetTitle("Number of Events");
hTNew->GetYaxis()->CenterTitle();

hTNew->Draw("HISTsame");
c1->Modified();

// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Detector Variation");
leg1->AddEntry(hTNew,"CV");
leg1->AddEntry(hTWireModXNew,"WireModX");
leg1->AddEntry(hTWireModYZNew,"WireModYZ");
leg1->AddEntry(hTWireModThetaXZNew,"WireModThetaXZ");
leg1->AddEntry(hTWireModThetaYZNew,"WireModThetaYZ");
leg1->AddEntry(hTLYDownNew,"LYDown");
leg1->AddEntry(hTLYAttenNew,"LYAtten");
leg1->AddEntry(hTLYRayleighNew,"LYRayleigh");
leg1->AddEntry(hTSCENew,"SCE");
leg1->AddEntry(hTRecomb2New,"Recomb2");
leg1->Draw();





TCanvas *c2 = new TCanvas("c2", "|t| Fluctuation After 2 Tracks");
c2->SetTicks();
c2->SetFillColor(kWhite);

hTC->SetLineColor(kBlack);
hTC->SetLineWidth(3);
hTC->Scale(Run1ScaleFactorMC);
hTCNew = hTC->Rebin(RebinT, "hTCNew", edges);
hTWireModXC->SetLineColor(kRed);
hTWireModXC->SetLineStyle(9);
hTWireModXC->SetLineWidth(3);
hTWireModXC->Scale(Run1ScaleFactorWireModX);
hTWireModXCNew = hTWireModXC->Rebin(RebinT, "hTWireModXCNew", edges);
hTWireModYZC->SetLineColor(kRed-3);
hTWireModYZC->SetLineStyle(9);
hTWireModYZC->SetLineWidth(3);
hTWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hTWireModYZCNew = hTWireModYZC->Rebin(RebinT, "hTWireModYZCNew", edges);
hTWireModThetaXZC->SetLineColor(kRed-6);
hTWireModThetaXZC->SetLineStyle(9);
hTWireModThetaXZC->SetLineWidth(3);
hTWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hTWireModThetaXZCNew = hTWireModThetaXZC->Rebin(RebinT, "hTWireModThetaXZCNew", edges);
hTWireModThetaYZC->SetLineColor(kRed-8);
hTWireModThetaYZC->SetLineStyle(9);
hTWireModThetaYZC->SetLineWidth(3);
hTWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hTWireModThetaYZCNew = hTWireModThetaYZC->Rebin(RebinT, "hTWireModThetaYZCNew", edges);
hTLYDownC->SetLineColor(kGreen);
hTLYDownC->SetLineStyle(9);
hTLYDownC->SetLineWidth(3);
hTLYDownC->Scale(Run1ScaleFactorLYDown);
hTLYDownCNew = hTLYDownC->Rebin(RebinT, "hTLYDownCNew", edges);
hTLYAttenC->SetLineColor(kGreen+1);
hTLYAttenC->SetLineStyle(9);
hTLYAttenC->SetLineWidth(3);
hTLYAttenC->Scale(Run1ScaleFactorLYAtten);
hTLYAttenCNew = hTLYAttenC->Rebin(RebinT, "hTLYAttenCNew", edges);
hTLYRayleighC->SetLineColor(kGreen+2);
hTLYRayleighC->SetLineStyle(9);
hTLYRayleighC->SetLineWidth(3);
hTLYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hTLYRayleighCNew = hTLYRayleighC->Rebin(RebinT, "hTLYRayleighCNew", edges);
hTSCEC->SetLineColor(kBlue);
hTSCEC->SetLineStyle(9);
hTSCEC->SetLineWidth(3);
hTSCEC->Scale(Run1ScaleFactorSCE);
hTSCECNew = hTSCEC->Rebin(RebinT, "hTSCECNew", edges);
hTRecomb2C->SetLineColor(kMagenta);
hTRecomb2C->SetLineStyle(9);
hTRecomb2C->SetLineWidth(3);
hTRecomb2C->Scale(Run1ScaleFactorRecomb2);
hTRecomb2CNew = hTRecomb2C->Rebin(RebinT, "hTRecomb2CNew", edges);
hT1C->SetLineColor(kBlack);
hT1C->SetLineWidth(3);
hT1C->Scale(Run1ScaleFactor1);
hT1CNew = hT1C->Rebin(RebinT,"hT1CNew", edges);


// Making the Fluctuations
hTWireModXCNew->Add(hTCNew, -1);
hTWireModXCNew->Divide(hTCNew);
hTWireModYZCNew->Add(hTCNew, -1);
hTWireModYZCNew->Divide(hTCNew);
hTWireModThetaXZCNew->Add(hTCNew, -1);
hTWireModThetaXZCNew->Divide(hTCNew);
hTWireModThetaYZCNew->Add(hTCNew, -1);
hTWireModThetaYZCNew->Divide(hTCNew);
hTLYDownCNew->Add(hT1CNew, -1);
hTLYDownCNew->Divide(hT1CNew);
hTLYAttenCNew->Add(hT1CNew, -1);
hTLYAttenCNew->Divide(hT1CNew);
hTLYRayleighCNew->Add(hT1CNew, -1);
hTLYRayleighCNew->Divide(hT1CNew);
hTSCECNew->Add(hTCNew, -1);
hTSCECNew->Divide(hTCNew);
hTRecomb2CNew->Add(hTCNew, -1);
hTRecomb2CNew->Divide(hTCNew);


hTWireModXCNew->Draw("HIST");
hTWireModYZCNew->Draw("HISTsame");
hTWireModThetaXZCNew->Draw("HISTsame");
hTWireModThetaYZCNew->Draw("HISTsame");
hTLYDownCNew->Draw("HISTsame");
hTLYAttenCNew->Draw("HISTsame");
hTLYRayleighCNew->Draw("HISTsame");
hTSCECNew->Draw("HISTsame");
hTRecomb2CNew->Draw("HISTsame");
hTWireModXCNew->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTWireModXCNew->GetXaxis()->CenterTitle();
hTWireModXCNew->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hTWireModXCNew->GetYaxis()->CenterTitle();
hTWireModXCNew->GetYaxis()->SetRangeUser(-0.02, 0.035);

hTWireModXCNew->Draw("HISTsame");
c2->Modified();

// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Detector Variation");
leg2->AddEntry(hTWireModXCNew,"WireModX");
leg2->AddEntry(hTWireModYZCNew,"WireModYZ");
leg2->AddEntry(hTWireModThetaXZCNew,"WireModThetaXZ");
leg2->AddEntry(hTWireModThetaYZCNew,"WireModThetaYZ");
leg2->AddEntry(hTLYDownCNew,"LYDown");
leg2->AddEntry(hTLYAttenCNew,"LYAtten");
leg2->AddEntry(hTLYRayleighCNew,"LYRayleigh");
leg2->AddEntry(hTSCECNew,"SCE");
leg2->AddEntry(hTRecomb2CNew,"Recomb2");
leg2->Draw();





TCanvas *c3 = new TCanvas("c3", "Reco |t| After Opening Angle");
c3->SetTicks();
c3->SetFillColor(kWhite);

hTOA->SetLineColor(kBlack);
hTOA->SetLineWidth(3);
hTOA->Scale(Run1ScaleFactorMC);
hTOANew = hTOA->Rebin(RebinT, "hTOANew", edges);
hTOAWireModX->SetLineColor(kRed);
hTOAWireModX->SetLineStyle(9);
hTOAWireModX->SetLineWidth(3);
hTOAWireModX->Scale(Run1ScaleFactorWireModX);
hTOAWireModXNew = hTOAWireModX->Rebin(RebinT, "hTOAWireModXNew", edges);
hTOAWireModYZ->SetLineColor(kRed-3);
hTOAWireModYZ->SetLineStyle(9);
hTOAWireModYZ->SetLineWidth(3);
hTOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hTOAWireModYZNew = hTOAWireModYZ->Rebin(RebinT, "hTOAWireModYZNew", edges);
hTOAWireModThetaXZ->SetLineColor(kRed-6);
hTOAWireModThetaXZ->SetLineStyle(9);
hTOAWireModThetaXZ->SetLineWidth(3);
hTOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hTOAWireModThetaXZNew = hTOAWireModThetaXZ->Rebin(RebinT, "hTOAWireModThetaXZNew", edges);
hTOAWireModThetaYZ->SetLineColor(kRed-8);
hTOAWireModThetaYZ->SetLineStyle(9);
hTOAWireModThetaYZ->SetLineWidth(3);
hTOAWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hTOAWireModThetaYZNew = hTOAWireModThetaYZ->Rebin(RebinT, "hTOAWireModThetaYZNew", edges);
hTOALYDown->SetLineColor(kGreen);
hTOALYDown->SetLineStyle(9);
hTOALYDown->SetLineWidth(3);
hTOALYDown->Scale(Run1ScaleFactorLYDown);
hTOALYDownNew = hTOALYDown->Rebin(RebinT, "hTOALYDownNew", edges);
hTOALYAtten->SetLineColor(kGreen+1);
hTOALYAtten->SetLineStyle(9);
hTOALYAtten->SetLineWidth(3);
hTOALYAtten->Scale(Run1ScaleFactorLYAtten);
hTOALYAttenNew = hTOALYAtten->Rebin(RebinT, "hTOALYAttenNew", edges);
hTOALYRayleigh->SetLineColor(kGreen+2);
hTOALYRayleigh->SetLineStyle(9);
hTOALYRayleigh->SetLineWidth(3);
hTOALYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hTOALYRayleighNew = hTOALYRayleigh->Rebin(RebinT, "hTOALYRayleighNew", edges);
hTOASCE->SetLineColor(kBlue);
hTOASCE->SetLineStyle(9);
hTOASCE->SetLineWidth(3);
hTOASCE->Scale(Run1ScaleFactorSCE);
hTOASCENew = hTOASCE->Rebin(RebinT, "hTOASCENew", edges);
hTOARecomb2->SetLineColor(kMagenta);
hTOARecomb2->SetLineStyle(9);
hTOARecomb2->SetLineWidth(3);
hTOARecomb2->Scale(Run1ScaleFactorRecomb2);
hTOARecomb2New = hTOARecomb2->Rebin(RebinT, "hTOARecomb2New", edges);


hTOANew->Draw("HIST");
hTOAWireModXNew->Draw("HISTsame");
hTOAWireModYZNew->Draw("HISTsame");
hTOAWireModThetaXZNew->Draw("HISTsame");
hTOAWireModThetaYZNew->Draw("HISTsame");
hTOALYDownNew->Draw("HISTsame");
hTOALYAttenNew->Draw("HISTsame");
hTOALYRayleighNew->Draw("HISTsame");
hTOASCENew->Draw("HISTsame");
hTOARecomb2New->Draw("HISTsame");
hTOANew->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTOANew->GetXaxis()->CenterTitle();
hTOANew->GetYaxis()->SetTitle("Number of Events");
hTOANew->GetYaxis()->CenterTitle();

hTOANew->Draw("HISTsame");
c3->Modified();

// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Detector Variation");
leg3->AddEntry(hTOANew,"CV");
leg3->AddEntry(hTOAWireModXNew,"WireModX");
leg3->AddEntry(hTOAWireModYZNew,"WireModYZ");
leg3->AddEntry(hTOAWireModThetaXZNew,"WireModThetaXZ");
leg3->AddEntry(hTOAWireModThetaYZNew,"WireModThetaYZ");
leg3->AddEntry(hTOALYDownNew,"LYDown");
leg3->AddEntry(hTOALYAttenNew,"LYAtten");
leg3->AddEntry(hTOALYRayleighNew,"LYRayleigh");
leg3->AddEntry(hTOASCENew,"SCE");
leg3->AddEntry(hTOARecomb2New,"Recomb2");
leg3->Draw();





TCanvas *c4 = new TCanvas("c4", "|t| Fluctuation After Opening Angle");
c4->SetTicks();
c4->SetFillColor(kWhite);

hTOAC->SetLineColor(kBlack);
hTOAC->SetLineWidth(3);
hTOAC->Scale(Run1ScaleFactorMC);
hTOACNew = hTOAC->Rebin(RebinT, "hTOACNew", edges);
hTOAWireModXC->SetLineColor(kRed);
hTOAWireModXC->SetLineStyle(9);
hTOAWireModXC->SetLineWidth(3);
hTOAWireModXC->Scale(Run1ScaleFactorWireModX);
hTOAWireModXCNew = hTOAWireModXC->Rebin(RebinT, "hTOAWireModXCNew", edges);
hTOAWireModYZC->SetLineColor(kRed-3);
hTOAWireModYZC->SetLineStyle(9);
hTOAWireModYZC->SetLineWidth(3);
hTOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hTOAWireModYZCNew = hTOAWireModYZC->Rebin(RebinT, "hTOAWireModYZCNew", edges);
hTOAWireModThetaXZC->SetLineColor(kRed-6);
hTOAWireModThetaXZC->SetLineStyle(9);
hTOAWireModThetaXZC->SetLineWidth(3);
hTOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hTOAWireModThetaXZCNew = hTOAWireModThetaXZC->Rebin(RebinT, "hTOAWireModThetaXZCNew", edges);
hTOAWireModThetaYZC->SetLineColor(kRed-8);
hTOAWireModThetaYZC->SetLineStyle(9);
hTOAWireModThetaYZC->SetLineWidth(3);
hTOAWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hTOAWireModThetaYZCNew = hTOAWireModThetaYZC->Rebin(RebinT, "hTOAWireModThetaYZCNew", edges);
hTOALYDownC->SetLineColor(kGreen);
hTOALYDownC->SetLineStyle(9);
hTOALYDownC->SetLineWidth(3);
hTOALYDownC->Scale(Run1ScaleFactorLYDown);
hTOALYDownCNew = hTOALYDownC->Rebin(RebinT, "hTOALYDownCNew", edges);
hTOALYAttenC->SetLineColor(kGreen+1);
hTOALYAttenC->SetLineStyle(9);
hTOALYAttenC->SetLineWidth(3);
hTOALYAttenC->Scale(Run1ScaleFactorLYAtten);
hTOALYAttenCNew = hTOALYAttenC->Rebin(RebinT, "hTOALYAttenCNew", edges);
hTOALYRayleighC->SetLineColor(kGreen+2);
hTOALYRayleighC->SetLineStyle(9);
hTOALYRayleighC->SetLineWidth(3);
hTOALYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hTOALYRayleighCNew = hTOALYRayleighC->Rebin(RebinT, "hTOALYRayleighCNew", edges);
hTOASCEC->SetLineColor(kBlue);
hTOASCEC->SetLineStyle(9);
hTOASCEC->SetLineWidth(3);
hTOASCEC->Scale(Run1ScaleFactorSCE);
hTOASCECNew = hTOASCEC->Rebin(RebinT, "hTOASCECNew", edges);
hTOARecomb2C->SetLineColor(kMagenta);
hTOARecomb2C->SetLineStyle(9);
hTOARecomb2C->SetLineWidth(3);
hTOARecomb2C->Scale(Run1ScaleFactorRecomb2);
hTOARecomb2CNew = hTOARecomb2C->Rebin(RebinT, "hTOARecomb2CNew", edges);
hTOA1C->SetLineColor(kBlack);
hTOA1C->SetLineWidth(3);
hTOA1C->Scale(Run1ScaleFactor1);
hTOA1CNew = hTOA1C->Rebin(RebinT, "hTOA1CNew", edges);


// Making the Fluctuations
hTOAWireModXCNew->Add(hTOACNew, -1);
hTOAWireModXCNew->Divide(hTOACNew);
hTOAWireModYZCNew->Add(hTOACNew, -1);
hTOAWireModYZCNew->Divide(hTOACNew);
hTOAWireModThetaXZCNew->Add(hTOACNew, -1);
hTOAWireModThetaXZCNew->Divide(hTOACNew);
hTOAWireModThetaYZCNew->Add(hTOACNew, -1);
hTOAWireModThetaYZCNew->Divide(hTOACNew);
hTOALYDownCNew->Add(hTOA1CNew, -1);
hTOALYDownCNew->Divide(hTOA1CNew);
hTOALYAttenCNew->Add(hTOA1CNew, -1);
hTOALYAttenCNew->Divide(hTOA1CNew);
hTOALYRayleighCNew->Add(hTOA1CNew, -1);
hTOALYRayleighCNew->Divide(hTOA1CNew);
hTOASCECNew->Add(hTOACNew, -1);
hTOASCECNew->Divide(hTOACNew);
hTOARecomb2CNew->Add(hTOACNew, -1);
hTOARecomb2CNew->Divide(hTOACNew);


hTOAWireModXCNew->Draw("HIST");
hTOAWireModYZCNew->Draw("HISTsame");
hTOAWireModThetaXZCNew->Draw("HISTsame");
hTOAWireModThetaYZCNew->Draw("HISTsame");
hTOALYDownCNew->Draw("HISTsame");
hTOALYAttenCNew->Draw("HISTsame");
hTOALYRayleighCNew->Draw("HISTsame");
hTOASCECNew->Draw("HISTsame");
hTOARecomb2CNew->Draw("HISTsame");
hTOAWireModXCNew->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTOAWireModXCNew->GetXaxis()->CenterTitle();
hTOAWireModXCNew->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hTOAWireModXCNew->GetYaxis()->CenterTitle();
hTOAWireModXCNew->GetYaxis()->SetRangeUser(-0.2, 0.35);

hTOAWireModXCNew->Draw("HISTsame");
c4->Modified();

// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,1.00,1.00);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Detector Variation");
leg4->AddEntry(hTOAWireModXCNew,"WireModX");
leg4->AddEntry(hTOAWireModYZCNew,"WireModYZ");
leg4->AddEntry(hTOAWireModThetaXZCNew,"WireModThetaXZ");
leg4->AddEntry(hTOAWireModThetaYZCNew,"WireModThetaYZ");
leg4->AddEntry(hTOALYDownCNew,"LYDown");
leg4->AddEntry(hTOALYAttenCNew,"LYAtten");
leg4->AddEntry(hTOALYRayleighCNew,"LYRayleigh");
leg4->AddEntry(hTOASCECNew,"SCE");
leg4->AddEntry(hTOARecomb2CNew,"Recomb2");
leg4->Draw();


// |================================================|
// |--- Figuring Out Systematic Uncertainty Here ---|
// |================================================|
for (int i = 1; i < hTOACNew->GetNbinsX()+1; i++) {
   double a = hTOAWireModXCNew->GetBinContent(i);
   double b = hTOAWireModYZCNew->GetBinContent(i);
   double c = hTOAWireModThetaXZCNew->GetBinContent(i);
   double d = hTOAWireModThetaYZCNew->GetBinContent(i);
   double e = hTOALYDownCNew->GetBinContent(i);
   double f = hTOALYAttenCNew->GetBinContent(i);
   double g = hTOALYRayleighCNew->GetBinContent(i);
   double h = hTOASCECNew->GetBinContent(i);
   double j = hTOARecomb2CNew->GetBinContent(i);
   double k = pow((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2)+pow(f,2)+pow(g,2)+pow(h,2)+pow(j,2)),0.5); // This was the original way I was doing it, I don't think it's right anymore!
   //double k = pow((1./9.)*(pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2)+pow(f,2)+pow(g,2)+pow(h,2)+pow(j,2)),0.5); // This is the new way following what Davide did!
   std::cout<<"The WireModX Error = "<<a<<std::endl;
   std::cout<<"The WireModYZ Error = "<<b<<std::endl;
   std::cout<<"The WireModThetaXZ Error = "<<c<<std::endl;
   std::cout<<"The WireModThetaYZ Error = "<<d<<std::endl;
   std::cout<<"The LYDown Error = "<<e<<std::endl;
   std::cout<<"The LYAtten Error = "<<f<<std::endl;
   std::cout<<"The LYRayleigh Error = "<<g<<std::endl;
   std::cout<<"The SCE Error = "<<h<<std::endl;
   std::cout<<"The Recomb2 Error = "<<j<<std::endl;
   std::cout<<"The quadrature adding of bin "<<i<<" is = "<<k<<std::endl;
}
// |================================================|




TCanvas *c5 = new TCanvas("c5", "Muon Candidate Momentum After 2 Tracks");
c5->SetTicks();
c5->SetFillColor(kWhite);

hRecoMuonCandidateMomentum->SetLineColor(kBlack);
hRecoMuonCandidateMomentum->SetLineWidth(3);
hRecoMuonCandidateMomentum->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentum->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModX->SetLineColor(kRed);
hRecoMuonCandidateMomentumWireModX->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModX->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModX->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumWireModX->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModYZ->SetLineColor(kRed-3);
hRecoMuonCandidateMomentumWireModYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModYZ->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumWireModYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineColor(kRed-6);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumWireModThetaXZ->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineColor(kRed-8);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumWireModThetaYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumLYDown->SetLineColor(kGreen);
hRecoMuonCandidateMomentumLYDown->SetLineStyle(9);
hRecoMuonCandidateMomentumLYDown->SetLineWidth(3);
hRecoMuonCandidateMomentumLYDown->Scale(Run1ScaleFactorLYDown);
hRecoMuonCandidateMomentumLYDown->Rebin(RebinP);
hRecoMuonCandidateMomentumLYAtten->SetLineColor(kGreen+1);
hRecoMuonCandidateMomentumLYAtten->SetLineStyle(9);
hRecoMuonCandidateMomentumLYAtten->SetLineWidth(3);
hRecoMuonCandidateMomentumLYAtten->Scale(Run1ScaleFactorLYAtten);
hRecoMuonCandidateMomentumLYAtten->Rebin(RebinP);
hRecoMuonCandidateMomentumLYRayleigh->SetLineColor(kGreen+2);
hRecoMuonCandidateMomentumLYRayleigh->SetLineStyle(9);
hRecoMuonCandidateMomentumLYRayleigh->SetLineWidth(3);
hRecoMuonCandidateMomentumLYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hRecoMuonCandidateMomentumLYRayleigh->Rebin(RebinP);
hRecoMuonCandidateMomentumSCE->SetLineColor(kBlue);
hRecoMuonCandidateMomentumSCE->SetLineStyle(9);
hRecoMuonCandidateMomentumSCE->SetLineWidth(3);
hRecoMuonCandidateMomentumSCE->Scale(Run1ScaleFactorSCE);
hRecoMuonCandidateMomentumSCE->Rebin(RebinP);
hRecoMuonCandidateMomentumRecomb2->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumRecomb2->SetLineStyle(9);
hRecoMuonCandidateMomentumRecomb2->SetLineWidth(3);
hRecoMuonCandidateMomentumRecomb2->Scale(Run1ScaleFactorRecomb2);
hRecoMuonCandidateMomentumRecomb2->Rebin(RebinP);


hRecoMuonCandidateMomentum->Draw("HIST");
hRecoMuonCandidateMomentumWireModX->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaXZ->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumLYDown->Draw("HISTsame");
hRecoMuonCandidateMomentumLYAtten->Draw("HISTsame");
hRecoMuonCandidateMomentumLYRayleigh->Draw("HISTsame");
hRecoMuonCandidateMomentumSCE->Draw("HISTsame");
hRecoMuonCandidateMomentumRecomb2->Draw("HISTsame");
hRecoMuonCandidateMomentum->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentum->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentum->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentum->GetYaxis()->SetTitle("Number of Events");
hRecoMuonCandidateMomentum->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentum->Draw("HISTsame");
c5->Modified();

// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,1.00,1.00);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Detector Variation");
leg5->AddEntry(hRecoMuonCandidateMomentum,"CV");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModX,"WireModX");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModYZ,"WireModYZ");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModThetaXZ,"WireModThetaXZ");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModThetaYZ,"WireModThetaYZ");
leg5->AddEntry(hRecoMuonCandidateMomentumLYDown,"LYDown");
leg5->AddEntry(hRecoMuonCandidateMomentumLYAtten,"LYAtten");
leg5->AddEntry(hRecoMuonCandidateMomentumLYRayleigh,"LYRayleigh");
leg5->AddEntry(hRecoMuonCandidateMomentumSCE,"SCE");
leg5->AddEntry(hRecoMuonCandidateMomentumRecomb2,"Recomb2");
leg5->Draw();





TCanvas *c6 = new TCanvas("c6", "Muon Candidate Momentum Fluctuation After 2 Tracks");
c6->SetTicks();
c6->SetFillColor(kWhite);

hRecoMuonCandidateMomentumC->SetLineColor(kBlack);
hRecoMuonCandidateMomentumC->SetLineWidth(3);
hRecoMuonCandidateMomentumC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModXC->SetLineColor(kRed);
hRecoMuonCandidateMomentumWireModXC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModXC->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumWireModXC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModYZC->SetLineColor(kRed-3);
hRecoMuonCandidateMomentumWireModYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModYZC->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumWireModYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineColor(kRed-6);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumWireModThetaXZC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineColor(kRed-8);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineWidth(3);
hRecoMuonCandidateMomentumWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumWireModThetaYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumLYDownC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumLYDownC->SetLineStyle(9);
hRecoMuonCandidateMomentumLYDownC->SetLineWidth(3);
hRecoMuonCandidateMomentumLYDownC->Scale(Run1ScaleFactorLYDown);
hRecoMuonCandidateMomentumLYDownC->Rebin(RebinP);
hRecoMuonCandidateMomentumLYAttenC->SetLineColor(kGreen+1);
hRecoMuonCandidateMomentumLYAttenC->SetLineStyle(9);
hRecoMuonCandidateMomentumLYAttenC->SetLineWidth(3);
hRecoMuonCandidateMomentumLYAttenC->Scale(Run1ScaleFactorLYAtten);
hRecoMuonCandidateMomentumLYAttenC->Rebin(RebinP);
hRecoMuonCandidateMomentumLYRayleighC->SetLineColor(kGreen+2);
hRecoMuonCandidateMomentumLYRayleighC->SetLineStyle(9);
hRecoMuonCandidateMomentumLYRayleighC->SetLineWidth(3);
hRecoMuonCandidateMomentumLYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hRecoMuonCandidateMomentumLYRayleighC->Rebin(RebinP);
hRecoMuonCandidateMomentumSCEC->SetLineColor(kBlue);
hRecoMuonCandidateMomentumSCEC->SetLineStyle(9);
hRecoMuonCandidateMomentumSCEC->SetLineWidth(3);
hRecoMuonCandidateMomentumSCEC->Scale(Run1ScaleFactorSCE);
hRecoMuonCandidateMomentumSCEC->Rebin(RebinP);
hRecoMuonCandidateMomentumRecomb2C->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumRecomb2C->SetLineStyle(9);
hRecoMuonCandidateMomentumRecomb2C->SetLineWidth(3);
hRecoMuonCandidateMomentumRecomb2C->Scale(Run1ScaleFactorRecomb2);
hRecoMuonCandidateMomentumRecomb2C->Rebin(RebinP);
hRecoMuonCandidateMomentum1C->SetLineColor(kBlack);
hRecoMuonCandidateMomentum1C->SetLineWidth(3);
hRecoMuonCandidateMomentum1C->Scale(Run1ScaleFactor1);
hRecoMuonCandidateMomentum1C->Rebin(RebinP);


// Making the Fluctuations
hRecoMuonCandidateMomentumWireModXC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModXC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModYZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModYZC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModThetaXZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModThetaXZC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModThetaYZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModThetaYZC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumLYDownC->Add(hRecoMuonCandidateMomentum1C, -1);
hRecoMuonCandidateMomentumLYDownC->Divide(hRecoMuonCandidateMomentum1C);
hRecoMuonCandidateMomentumLYAttenC->Add(hRecoMuonCandidateMomentum1C, -1);
hRecoMuonCandidateMomentumLYAttenC->Divide(hRecoMuonCandidateMomentum1C);
hRecoMuonCandidateMomentumLYRayleighC->Add(hRecoMuonCandidateMomentum1C, -1);
hRecoMuonCandidateMomentumLYRayleighC->Divide(hRecoMuonCandidateMomentum1C);
hRecoMuonCandidateMomentumSCEC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumSCEC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumRecomb2C->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumRecomb2C->Divide(hRecoMuonCandidateMomentumC);


hRecoMuonCandidateMomentumWireModXC->Draw("HIST");
hRecoMuonCandidateMomentumWireModYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaXZC->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumLYDownC->Draw("HISTsame");
hRecoMuonCandidateMomentumLYAttenC->Draw("HISTsame");
hRecoMuonCandidateMomentumLYRayleighC->Draw("HISTsame");
hRecoMuonCandidateMomentumSCEC->Draw("HISTsame");
hRecoMuonCandidateMomentumRecomb2C->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModXC->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentumWireModXC->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentumWireModXC->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentumWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hRecoMuonCandidateMomentumWireModXC->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentumWireModXC->Draw("HISTsame");
c6->Modified();

// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,1.00,1.00);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("Detector Variation");
leg6->AddEntry(hRecoMuonCandidateMomentumWireModXC,"WireModX");
leg6->AddEntry(hRecoMuonCandidateMomentumWireModYZC,"WireModYZ");
leg6->AddEntry(hRecoMuonCandidateMomentumWireModThetaXZC,"WireModThetaXZ");
leg6->AddEntry(hRecoMuonCandidateMomentumWireModThetaYZC,"WireModThetaYZ");
leg6->AddEntry(hRecoMuonCandidateMomentumLYDownC,"LYDown");
leg6->AddEntry(hRecoMuonCandidateMomentumLYAttenC,"LYAtten");
leg6->AddEntry(hRecoMuonCandidateMomentumLYRayleighC,"LYRayleigh");
leg6->AddEntry(hRecoMuonCandidateMomentumSCEC,"SCE");
leg6->AddEntry(hRecoMuonCandidateMomentumRecomb2C,"Recomb2");
leg6->Draw();





TCanvas *c7 = new TCanvas("c7", "Muon Candidate Momentum After Opening Angle");
c7->SetTicks();
c7->SetFillColor(kWhite);

hRecoMuonCandidateMomentumOA->SetLineColor(kBlack);
hRecoMuonCandidateMomentumOA->SetLineWidth(3);
hRecoMuonCandidateMomentumOA->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumOA->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModX->SetLineColor(kRed);
hRecoMuonCandidateMomentumOAWireModX->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModX->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModX->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumOAWireModX->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineColor(kRed-3);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumOAWireModYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineColor(kRed-6);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumOAWireModThetaXZ->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineColor(kRed-8);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumOAWireModThetaYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYDown->SetLineColor(kGreen);
hRecoMuonCandidateMomentumOALYDown->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYDown->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYDown->Scale(Run1ScaleFactorLYDown);
hRecoMuonCandidateMomentumOALYDown->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYAtten->SetLineColor(kGreen+1);
hRecoMuonCandidateMomentumOALYAtten->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYAtten->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYAtten->Scale(Run1ScaleFactorLYAtten);
hRecoMuonCandidateMomentumOALYAtten->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYRayleigh->SetLineColor(kGreen+2);
hRecoMuonCandidateMomentumOALYRayleigh->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYRayleigh->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hRecoMuonCandidateMomentumOALYRayleigh->Rebin(RebinP);
hRecoMuonCandidateMomentumOASCE->SetLineColor(kBlue);
hRecoMuonCandidateMomentumOASCE->SetLineStyle(9);
hRecoMuonCandidateMomentumOASCE->SetLineWidth(3);
hRecoMuonCandidateMomentumOASCE->Scale(Run1ScaleFactorSCE);
hRecoMuonCandidateMomentumOASCE->Rebin(RebinP);
hRecoMuonCandidateMomentumOARecomb2->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumOARecomb2->SetLineStyle(9);
hRecoMuonCandidateMomentumOARecomb2->SetLineWidth(3);
hRecoMuonCandidateMomentumOARecomb2->Scale(Run1ScaleFactorRecomb2);
hRecoMuonCandidateMomentumOARecomb2->Rebin(RebinP);


hRecoMuonCandidateMomentumOA->Draw("HIST");
hRecoMuonCandidateMomentumOAWireModX->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaXZ->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYDown->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYAtten->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYRayleigh->Draw("HISTsame");
hRecoMuonCandidateMomentumOASCE->Draw("HISTsame");
hRecoMuonCandidateMomentumOARecomb2->Draw("HISTsame");
hRecoMuonCandidateMomentumOA->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentumOA->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentumOA->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentumOA->GetYaxis()->SetTitle("Number of Events");
hRecoMuonCandidateMomentumOA->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentumOA->Draw("HISTsame");
c7->Modified();

// ### Defining the legend for the plot ###
TLegend *leg7 = new TLegend();
leg7 = new TLegend(0.58,0.65,1.00,1.00);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Detector Variation");
leg7->AddEntry(hRecoMuonCandidateMomentumOA,"CV");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModX,"WireModX");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModYZ,"WireModYZ");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaXZ,"WireModThetaXZ");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaYZ,"WireModThetaYZ");
leg7->AddEntry(hRecoMuonCandidateMomentumOALYDown,"LYDown");
leg7->AddEntry(hRecoMuonCandidateMomentumOALYAtten,"LYAtten");
leg7->AddEntry(hRecoMuonCandidateMomentumOALYRayleigh,"LYRayleigh");
leg7->AddEntry(hRecoMuonCandidateMomentumOASCE,"SCE");
leg7->AddEntry(hRecoMuonCandidateMomentumOARecomb2,"Recomb2");
leg7->Draw();





TCanvas *c8 = new TCanvas("c8", "Muon Candidate Momentum Fluctuation After Opening Angle");
c8->SetTicks();
c8->SetFillColor(kWhite);

hRecoMuonCandidateMomentumOAC->SetLineColor(kBlack);
hRecoMuonCandidateMomentumOAC->SetLineWidth(3);
hRecoMuonCandidateMomentumOAC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumOAC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModXC->SetLineColor(kRed);
hRecoMuonCandidateMomentumOAWireModXC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModXC->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumOAWireModXC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineColor(kRed-3);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumOAWireModYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineColor(kRed-6);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineColor(kRed-8);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineWidth(3);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYDownC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumOALYDownC->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYDownC->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYDownC->Scale(Run1ScaleFactorLYDown);
hRecoMuonCandidateMomentumOALYDownC->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYAttenC->SetLineColor(kGreen+1);
hRecoMuonCandidateMomentumOALYAttenC->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYAttenC->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYAttenC->Scale(Run1ScaleFactorLYAtten);
hRecoMuonCandidateMomentumOALYAttenC->Rebin(RebinP);
hRecoMuonCandidateMomentumOALYRayleighC->SetLineColor(kGreen+2);
hRecoMuonCandidateMomentumOALYRayleighC->SetLineStyle(9);
hRecoMuonCandidateMomentumOALYRayleighC->SetLineWidth(3);
hRecoMuonCandidateMomentumOALYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hRecoMuonCandidateMomentumOALYRayleighC->Rebin(RebinP);
hRecoMuonCandidateMomentumOASCEC->SetLineColor(kBlue);
hRecoMuonCandidateMomentumOASCEC->SetLineStyle(9);
hRecoMuonCandidateMomentumOASCEC->SetLineWidth(3);
hRecoMuonCandidateMomentumOASCEC->Scale(Run1ScaleFactorSCE);
hRecoMuonCandidateMomentumOASCEC->Rebin(RebinP);
hRecoMuonCandidateMomentumOARecomb2C->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumOARecomb2C->SetLineStyle(9);
hRecoMuonCandidateMomentumOARecomb2C->SetLineWidth(3);
hRecoMuonCandidateMomentumOARecomb2C->Scale(Run1ScaleFactorRecomb2);
hRecoMuonCandidateMomentumOARecomb2C->Rebin(RebinP);
hRecoMuonCandidateMomentumOA1C->SetLineColor(kBlack);
hRecoMuonCandidateMomentumOA1C->SetLineWidth(3);
hRecoMuonCandidateMomentumOA1C->Scale(Run1ScaleFactor1);
hRecoMuonCandidateMomentumOA1C->Rebin(RebinP);


// Making the Fluctuations
hRecoMuonCandidateMomentumOAWireModXC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModXC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModYZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModYZC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOALYDownC->Add(hRecoMuonCandidateMomentumOA1C, -1);
hRecoMuonCandidateMomentumOALYDownC->Divide(hRecoMuonCandidateMomentumOA1C);
hRecoMuonCandidateMomentumOALYAttenC->Add(hRecoMuonCandidateMomentumOA1C, -1);
hRecoMuonCandidateMomentumOALYAttenC->Divide(hRecoMuonCandidateMomentumOA1C);
hRecoMuonCandidateMomentumOALYRayleighC->Add(hRecoMuonCandidateMomentumOA1C, -1);
hRecoMuonCandidateMomentumOALYRayleighC->Divide(hRecoMuonCandidateMomentumOA1C);
hRecoMuonCandidateMomentumOASCEC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOASCEC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOARecomb2C->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOARecomb2C->Divide(hRecoMuonCandidateMomentumOAC);


hRecoMuonCandidateMomentumOAWireModXC->Draw("HIST");
hRecoMuonCandidateMomentumOAWireModYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaXZC->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYDownC->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYAttenC->Draw("HISTsame");
hRecoMuonCandidateMomentumOALYRayleighC->Draw("HISTsame");
hRecoMuonCandidateMomentumOASCEC->Draw("HISTsame");
hRecoMuonCandidateMomentumOARecomb2C->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModXC->GetXaxis()->SetTitle("p_{#mu} [GeV/c]");
hRecoMuonCandidateMomentumOAWireModXC->GetXaxis()->CenterTitle();
hRecoMuonCandidateMomentumOAWireModXC->GetXaxis()->SetRangeUser(0, 3);
hRecoMuonCandidateMomentumOAWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hRecoMuonCandidateMomentumOAWireModXC->GetYaxis()->CenterTitle();

hRecoMuonCandidateMomentumOAWireModXC->Draw("HISTsame");
c8->Modified();

// ### Defining the legend for the plot ###
TLegend *leg8 = new TLegend();
leg8 = new TLegend(0.58,0.65,1.00,1.00);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Detector Variation");
leg8->AddEntry(hRecoMuonCandidateMomentumOAWireModXC,"WireModX");
leg8->AddEntry(hRecoMuonCandidateMomentumOAWireModYZC,"WireModYZ");
leg8->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaXZC,"WireModThetaXZ");
leg8->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaYZC,"WireModThetaYZ");
leg8->AddEntry(hRecoMuonCandidateMomentumOALYDownC,"LYDown");
leg8->AddEntry(hRecoMuonCandidateMomentumOALYAttenC,"LYAtten");
leg8->AddEntry(hRecoMuonCandidateMomentumOALYRayleighC,"LYRayleigh");
leg8->AddEntry(hRecoMuonCandidateMomentumOASCEC,"SCE");
leg8->AddEntry(hRecoMuonCandidateMomentumOARecomb2C,"Recomb2");
leg8->Draw();





TCanvas *c9 = new TCanvas("c9", "Pion Candidate Momentum After 2 Tracks");
c9->SetTicks();
c9->SetFillColor(kWhite);

hRecoPionCandidateMomentum->SetLineColor(kBlack);
hRecoPionCandidateMomentum->SetLineWidth(3);
hRecoPionCandidateMomentum->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentum->Rebin(RebinP);
hRecoPionCandidateMomentumWireModX->SetLineColor(kRed);
hRecoPionCandidateMomentumWireModX->SetLineStyle(9);
hRecoPionCandidateMomentumWireModX->SetLineWidth(3);
hRecoPionCandidateMomentumWireModX->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumWireModX->Rebin(RebinP);
hRecoPionCandidateMomentumWireModYZ->SetLineColor(kRed-3);
hRecoPionCandidateMomentumWireModYZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModYZ->SetLineWidth(3);
hRecoPionCandidateMomentumWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumWireModYZ->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineColor(kRed-6);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineWidth(3);
hRecoPionCandidateMomentumWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumWireModThetaXZ->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineColor(kRed-8);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineWidth(3);
hRecoPionCandidateMomentumWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumWireModThetaYZ->Rebin(RebinP);
hRecoPionCandidateMomentumLYDown->SetLineColor(kGreen);
hRecoPionCandidateMomentumLYDown->SetLineStyle(9);
hRecoPionCandidateMomentumLYDown->SetLineWidth(3);
hRecoPionCandidateMomentumLYDown->Scale(Run1ScaleFactorLYDown);
hRecoPionCandidateMomentumLYDown->Rebin(RebinP);
hRecoPionCandidateMomentumLYAtten->SetLineColor(kGreen+1);
hRecoPionCandidateMomentumLYAtten->SetLineStyle(9);
hRecoPionCandidateMomentumLYAtten->SetLineWidth(3);
hRecoPionCandidateMomentumLYAtten->Scale(Run1ScaleFactorLYAtten);
hRecoPionCandidateMomentumLYAtten->Rebin(RebinP);
hRecoPionCandidateMomentumLYRayleigh->SetLineColor(kGreen+2);
hRecoPionCandidateMomentumLYRayleigh->SetLineStyle(9);
hRecoPionCandidateMomentumLYRayleigh->SetLineWidth(3);
hRecoPionCandidateMomentumLYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hRecoPionCandidateMomentumLYRayleigh->Rebin(RebinP);
hRecoPionCandidateMomentumSCE->SetLineColor(kBlue);
hRecoPionCandidateMomentumSCE->SetLineStyle(9);
hRecoPionCandidateMomentumSCE->SetLineWidth(3);
hRecoPionCandidateMomentumSCE->Scale(Run1ScaleFactorSCE);
hRecoPionCandidateMomentumSCE->Rebin(RebinP);
hRecoPionCandidateMomentumRecomb2->SetLineColor(kMagenta);
hRecoPionCandidateMomentumRecomb2->SetLineStyle(9);
hRecoPionCandidateMomentumRecomb2->SetLineWidth(3);
hRecoPionCandidateMomentumRecomb2->Scale(Run1ScaleFactorRecomb2);
hRecoPionCandidateMomentumRecomb2->Rebin(RebinP);


hRecoPionCandidateMomentum->Draw("HIST");
hRecoPionCandidateMomentumWireModX->Draw("HISTsame");
hRecoPionCandidateMomentumWireModYZ->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaXZ->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaYZ->Draw("HISTsame");
hRecoPionCandidateMomentumLYDown->Draw("HISTsame");
hRecoPionCandidateMomentumLYAtten->Draw("HISTsame");
hRecoPionCandidateMomentumLYRayleigh->Draw("HISTsame");
hRecoPionCandidateMomentumSCE->Draw("HISTsame");
hRecoPionCandidateMomentumRecomb2->Draw("HISTsame");
hRecoPionCandidateMomentum->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentum->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentum->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentum->GetYaxis()->SetTitle("Number of Events");
hRecoPionCandidateMomentum->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentum->Draw("HISTsame");
c9->Modified();

// ### Defining the legend for the plot ###
TLegend *leg9 = new TLegend();
leg9 = new TLegend(0.58,0.65,1.00,1.00);
leg9->SetTextSize(0.04);
leg9->SetTextAlign(12);
leg9->SetFillColor(kWhite);
leg9->SetLineColor(kWhite);
leg9->SetShadowColor(kWhite);
leg9->SetHeader("Detector Variation");
leg9->AddEntry(hRecoPionCandidateMomentum,"CV");
leg9->AddEntry(hRecoPionCandidateMomentumWireModX,"WireModX");
leg9->AddEntry(hRecoPionCandidateMomentumWireModYZ,"WireModYZ");
leg9->AddEntry(hRecoPionCandidateMomentumWireModThetaXZ,"WireModThetaXZ");
leg9->AddEntry(hRecoPionCandidateMomentumWireModThetaYZ,"WireModThetaYZ");
leg9->AddEntry(hRecoPionCandidateMomentumLYDown,"LYDown");
leg9->AddEntry(hRecoPionCandidateMomentumLYAtten,"LYAtten");
leg9->AddEntry(hRecoPionCandidateMomentumLYRayleigh,"LYRayleigh");
leg9->AddEntry(hRecoPionCandidateMomentumSCE,"SCE");
leg9->AddEntry(hRecoPionCandidateMomentumRecomb2,"Recomb2");
leg9->Draw();





TCanvas *c10 = new TCanvas("c10", "Pion Candidate Momentum Fluctuation After 2 Tracks");
c10->SetTicks();
c10->SetFillColor(kWhite);

hRecoPionCandidateMomentumC->SetLineColor(kBlack);
hRecoPionCandidateMomentumC->SetLineWidth(3);
hRecoPionCandidateMomentumC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModXC->SetLineColor(kRed);
hRecoPionCandidateMomentumWireModXC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModXC->SetLineWidth(3);
hRecoPionCandidateMomentumWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumWireModXC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModYZC->SetLineColor(kRed-3);
hRecoPionCandidateMomentumWireModYZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModYZC->SetLineWidth(3);
hRecoPionCandidateMomentumWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumWireModYZC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineColor(kRed-6);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineWidth(3);
hRecoPionCandidateMomentumWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumWireModThetaXZC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineColor(kRed-8);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineWidth(3);
hRecoPionCandidateMomentumWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumWireModThetaYZC->Rebin(RebinP);
hRecoPionCandidateMomentumLYDownC->SetLineColor(kGreen);
hRecoPionCandidateMomentumLYDownC->SetLineStyle(9);
hRecoPionCandidateMomentumLYDownC->SetLineWidth(3);
hRecoPionCandidateMomentumLYDownC->Scale(Run1ScaleFactorLYDown);
hRecoPionCandidateMomentumLYDownC->Rebin(RebinP);
hRecoPionCandidateMomentumLYAttenC->SetLineColor(kGreen+1);
hRecoPionCandidateMomentumLYAttenC->SetLineStyle(9);
hRecoPionCandidateMomentumLYAttenC->SetLineWidth(3);
hRecoPionCandidateMomentumLYAttenC->Scale(Run1ScaleFactorLYAtten);
hRecoPionCandidateMomentumLYAttenC->Rebin(RebinP);
hRecoPionCandidateMomentumLYRayleighC->SetLineColor(kGreen+2);
hRecoPionCandidateMomentumLYRayleighC->SetLineStyle(9);
hRecoPionCandidateMomentumLYRayleighC->SetLineWidth(3);
hRecoPionCandidateMomentumLYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hRecoPionCandidateMomentumLYRayleighC->Rebin(RebinP);
hRecoPionCandidateMomentumSCEC->SetLineColor(kBlue);
hRecoPionCandidateMomentumSCEC->SetLineStyle(9);
hRecoPionCandidateMomentumSCEC->SetLineWidth(3);
hRecoPionCandidateMomentumSCEC->Scale(Run1ScaleFactorSCE);
hRecoPionCandidateMomentumSCEC->Rebin(RebinP);
hRecoPionCandidateMomentumRecomb2C->SetLineColor(kMagenta);
hRecoPionCandidateMomentumRecomb2C->SetLineStyle(9);
hRecoPionCandidateMomentumRecomb2C->SetLineWidth(3);
hRecoPionCandidateMomentumRecomb2C->Scale(Run1ScaleFactorRecomb2);
hRecoPionCandidateMomentumRecomb2C->Rebin(RebinP);
hRecoPionCandidateMomentum1C->SetLineColor(kBlack);
hRecoPionCandidateMomentum1C->SetLineWidth(3);
hRecoPionCandidateMomentum1C->Scale(Run1ScaleFactor1);
hRecoPionCandidateMomentum1C->Rebin(RebinP);


// Making the Fluctuations
hRecoPionCandidateMomentumWireModXC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModXC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModYZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModYZC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModThetaXZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModThetaXZC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModThetaYZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModThetaYZC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumLYDownC->Add(hRecoPionCandidateMomentum1C, -1);
hRecoPionCandidateMomentumLYDownC->Divide(hRecoPionCandidateMomentum1C);
hRecoPionCandidateMomentumLYAttenC->Add(hRecoPionCandidateMomentum1C, -1);
hRecoPionCandidateMomentumLYAttenC->Divide(hRecoPionCandidateMomentum1C);
hRecoPionCandidateMomentumLYRayleighC->Add(hRecoPionCandidateMomentum1C, -1);
hRecoPionCandidateMomentumLYRayleighC->Divide(hRecoPionCandidateMomentum1C);
hRecoPionCandidateMomentumSCEC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumSCEC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumRecomb2C->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumRecomb2C->Divide(hRecoPionCandidateMomentumC);


hRecoPionCandidateMomentumWireModXC->Draw("HIST");
hRecoPionCandidateMomentumWireModYZC->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaXZC->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaYZC->Draw("HISTsame");
hRecoPionCandidateMomentumLYDownC->Draw("HISTsame");
hRecoPionCandidateMomentumLYAttenC->Draw("HISTsame");
hRecoPionCandidateMomentumLYRayleighC->Draw("HISTsame");
hRecoPionCandidateMomentumSCEC->Draw("HISTsame");
hRecoPionCandidateMomentumRecomb2C->Draw("HISTsame");
hRecoPionCandidateMomentumWireModXC->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentumWireModXC->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumWireModXC->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentumWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hRecoPionCandidateMomentumWireModXC->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumWireModXC->Draw("HISTsame");
c10->Modified();

// ### Defining the legend for the plot ###
TLegend *leg10 = new TLegend();
leg10 = new TLegend(0.58,0.65,1.00,1.00);
leg10->SetTextSize(0.04);
leg10->SetTextAlign(12);
leg10->SetFillColor(kWhite);
leg10->SetLineColor(kWhite);
leg10->SetShadowColor(kWhite);
leg10->SetHeader("Detector Variation");
leg10->AddEntry(hRecoPionCandidateMomentumWireModXC,"WireModX");
leg10->AddEntry(hRecoPionCandidateMomentumWireModYZC,"WireModYZ");
leg10->AddEntry(hRecoPionCandidateMomentumWireModThetaXZC,"WireModThetaXZ");
leg10->AddEntry(hRecoPionCandidateMomentumWireModThetaYZC,"WireModThetaYZ");
leg10->AddEntry(hRecoPionCandidateMomentumLYDownC,"LYDown");
leg10->AddEntry(hRecoPionCandidateMomentumLYAttenC,"LYAtten");
leg10->AddEntry(hRecoPionCandidateMomentumLYRayleighC,"LYRayleigh");
leg10->AddEntry(hRecoPionCandidateMomentumSCEC,"SCE");
leg10->AddEntry(hRecoPionCandidateMomentumRecomb2C,"Recomb2");
leg10->Draw();





TCanvas *c11 = new TCanvas("c11", "Pion Candidate Momentum After Opening Angle");
c11->SetTicks();
c11->SetFillColor(kWhite);

hRecoPionCandidateMomentumOA->SetLineColor(kBlack);
hRecoPionCandidateMomentumOA->SetLineWidth(3);
hRecoPionCandidateMomentumOA->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumOA->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModX->SetLineColor(kRed);
hRecoPionCandidateMomentumOAWireModX->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModX->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModX->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumOAWireModX->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModYZ->SetLineColor(kRed-3);
hRecoPionCandidateMomentumOAWireModYZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModYZ->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumOAWireModYZ->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineColor(kRed-6);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumOAWireModThetaXZ->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineColor(kRed-8);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumOAWireModThetaYZ->Rebin(RebinP);
hRecoPionCandidateMomentumOALYDown->SetLineColor(kGreen);
hRecoPionCandidateMomentumOALYDown->SetLineStyle(9);
hRecoPionCandidateMomentumOALYDown->SetLineWidth(3);
hRecoPionCandidateMomentumOALYDown->Scale(Run1ScaleFactorLYDown);
hRecoPionCandidateMomentumOALYDown->Rebin(RebinP);
hRecoPionCandidateMomentumOALYAtten->SetLineColor(kGreen+1);
hRecoPionCandidateMomentumOALYAtten->SetLineStyle(9);
hRecoPionCandidateMomentumOALYAtten->SetLineWidth(3);
hRecoPionCandidateMomentumOALYAtten->Scale(Run1ScaleFactorLYAtten);
hRecoPionCandidateMomentumOALYAtten->Rebin(RebinP);
hRecoPionCandidateMomentumOALYRayleigh->SetLineColor(kGreen+2);
hRecoPionCandidateMomentumOALYRayleigh->SetLineStyle(9);
hRecoPionCandidateMomentumOALYRayleigh->SetLineWidth(3);
hRecoPionCandidateMomentumOALYRayleigh->Scale(Run1ScaleFactorLYRayleigh);
hRecoPionCandidateMomentumOALYRayleigh->Rebin(RebinP);
hRecoPionCandidateMomentumOASCE->SetLineColor(kBlue);
hRecoPionCandidateMomentumOASCE->SetLineStyle(9);
hRecoPionCandidateMomentumOASCE->SetLineWidth(3);
hRecoPionCandidateMomentumOASCE->Scale(Run1ScaleFactorSCE);
hRecoPionCandidateMomentumOASCE->Rebin(RebinP);
hRecoPionCandidateMomentumOARecomb2->SetLineColor(kMagenta);
hRecoPionCandidateMomentumOARecomb2->SetLineStyle(9);
hRecoPionCandidateMomentumOARecomb2->SetLineWidth(3);
hRecoPionCandidateMomentumOARecomb2->Scale(Run1ScaleFactorRecomb2);
hRecoPionCandidateMomentumOARecomb2->Rebin(RebinP);


hRecoPionCandidateMomentumOA->Draw("HIST");
hRecoPionCandidateMomentumOAWireModX->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModYZ->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaXZ->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaYZ->Draw("HISTsame");
hRecoPionCandidateMomentumOALYDown->Draw("HISTsame");
hRecoPionCandidateMomentumOALYAtten->Draw("HISTsame");
hRecoPionCandidateMomentumOALYRayleigh->Draw("HISTsame");
hRecoPionCandidateMomentumOASCE->Draw("HISTsame");
hRecoPionCandidateMomentumOARecomb2->Draw("HISTsame");
hRecoPionCandidateMomentumOA->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentumOA->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumOA->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentumOA->GetYaxis()->SetTitle("Number of Events");
hRecoPionCandidateMomentumOA->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumOA->Draw("HISTsame");
c11->Modified();

// ### Defining the legend for the plot ###
TLegend *leg11 = new TLegend();
leg11 = new TLegend(0.58,0.65,1.00,1.00);
leg11->SetTextSize(0.04);
leg11->SetTextAlign(12);
leg11->SetFillColor(kWhite);
leg11->SetLineColor(kWhite);
leg11->SetShadowColor(kWhite);
leg11->SetHeader("Detector Variation");
leg11->AddEntry(hRecoPionCandidateMomentumOA,"CV");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModX,"WireModX");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModYZ,"WireModYZ");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModThetaXZ,"WireModThetaXZ");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModThetaYZ,"WireModThetaYZ");
leg11->AddEntry(hRecoPionCandidateMomentumOALYDown,"LYDown");
leg11->AddEntry(hRecoPionCandidateMomentumOALYAtten,"LYAtten");
leg11->AddEntry(hRecoPionCandidateMomentumOALYRayleigh,"LYRayleigh");
leg11->AddEntry(hRecoPionCandidateMomentumOASCE,"SCE");
leg11->AddEntry(hRecoPionCandidateMomentumOARecomb2,"Recomb2");
leg11->Draw();





TCanvas *c12 = new TCanvas("c12", "Pion Candidate Momentum Fluctuation After Opening Angle");
c12->SetTicks();
c12->SetFillColor(kWhite);

hRecoPionCandidateMomentumOAC->SetLineColor(kBlack);
hRecoPionCandidateMomentumOAC->SetLineWidth(3);
hRecoPionCandidateMomentumOAC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumOAC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModXC->SetLineColor(kRed);
hRecoPionCandidateMomentumOAWireModXC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModXC->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumOAWireModXC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModYZC->SetLineColor(kRed-3);
hRecoPionCandidateMomentumOAWireModYZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModYZC->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumOAWireModYZC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineColor(kRed-6);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumOAWireModThetaXZC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineColor(kRed-8);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineWidth(3);
hRecoPionCandidateMomentumOAWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumOAWireModThetaYZC->Rebin(RebinP);
hRecoPionCandidateMomentumOALYDownC->SetLineColor(kGreen);
hRecoPionCandidateMomentumOALYDownC->SetLineStyle(9);
hRecoPionCandidateMomentumOALYDownC->SetLineWidth(3);
hRecoPionCandidateMomentumOALYDownC->Scale(Run1ScaleFactorLYDown);
hRecoPionCandidateMomentumOALYDownC->Rebin(RebinP);
hRecoPionCandidateMomentumOALYAttenC->SetLineColor(kGreen+1);
hRecoPionCandidateMomentumOALYAttenC->SetLineStyle(9);
hRecoPionCandidateMomentumOALYAttenC->SetLineWidth(3);
hRecoPionCandidateMomentumOALYAttenC->Scale(Run1ScaleFactorLYAtten);
hRecoPionCandidateMomentumOALYAttenC->Rebin(RebinP);
hRecoPionCandidateMomentumOALYRayleighC->SetLineColor(kGreen+2);
hRecoPionCandidateMomentumOALYRayleighC->SetLineStyle(9);
hRecoPionCandidateMomentumOALYRayleighC->SetLineWidth(3);
hRecoPionCandidateMomentumOALYRayleighC->Scale(Run1ScaleFactorLYRayleigh);
hRecoPionCandidateMomentumOALYRayleighC->Rebin(RebinP);
hRecoPionCandidateMomentumOASCEC->SetLineColor(kBlue);
hRecoPionCandidateMomentumOASCEC->SetLineStyle(9);
hRecoPionCandidateMomentumOASCEC->SetLineWidth(3);
hRecoPionCandidateMomentumOASCEC->Scale(Run1ScaleFactorSCE);
hRecoPionCandidateMomentumOASCEC->Rebin(RebinP);
hRecoPionCandidateMomentumOARecomb2C->SetLineColor(kMagenta);
hRecoPionCandidateMomentumOARecomb2C->SetLineStyle(9);
hRecoPionCandidateMomentumOARecomb2C->SetLineWidth(3);
hRecoPionCandidateMomentumOARecomb2C->Scale(Run1ScaleFactorRecomb2);
hRecoPionCandidateMomentumOARecomb2C->Rebin(RebinP);
hRecoPionCandidateMomentumOA1C->SetLineColor(kBlack);
hRecoPionCandidateMomentumOA1C->SetLineWidth(3);
hRecoPionCandidateMomentumOA1C->Scale(Run1ScaleFactor1);
hRecoPionCandidateMomentumOA1C->Rebin(RebinP);


// Making the Fluctuations
hRecoPionCandidateMomentumOAWireModXC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModXC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModYZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModYZC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModThetaXZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModThetaXZC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModThetaYZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModThetaYZC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOALYDownC->Add(hRecoPionCandidateMomentumOA1C, -1);
hRecoPionCandidateMomentumOALYDownC->Divide(hRecoPionCandidateMomentumOA1C);
hRecoPionCandidateMomentumOALYAttenC->Add(hRecoPionCandidateMomentumOA1C, -1);
hRecoPionCandidateMomentumOALYAttenC->Divide(hRecoPionCandidateMomentumOA1C);
hRecoPionCandidateMomentumOALYRayleighC->Add(hRecoPionCandidateMomentumOA1C, -1);
hRecoPionCandidateMomentumOALYRayleighC->Divide(hRecoPionCandidateMomentumOA1C);
hRecoPionCandidateMomentumOASCEC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOASCEC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOARecomb2C->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOARecomb2C->Divide(hRecoPionCandidateMomentumOAC);


hRecoPionCandidateMomentumOAWireModXC->Draw("HIST");
hRecoPionCandidateMomentumOAWireModYZC->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaXZC->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaYZC->Draw("HISTsame");
hRecoPionCandidateMomentumOALYDownC->Draw("HISTsame");
hRecoPionCandidateMomentumOALYAttenC->Draw("HISTsame");
hRecoPionCandidateMomentumOALYRayleighC->Draw("HISTsame");
hRecoPionCandidateMomentumOASCEC->Draw("HISTsame");
hRecoPionCandidateMomentumOARecomb2C->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModXC->GetXaxis()->SetTitle("p_{#pi} [GeV/c]");
hRecoPionCandidateMomentumOAWireModXC->GetXaxis()->CenterTitle();
hRecoPionCandidateMomentumOAWireModXC->GetXaxis()->SetRangeUser(0, 3);
hRecoPionCandidateMomentumOAWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hRecoPionCandidateMomentumOAWireModXC->GetYaxis()->CenterTitle();

hRecoPionCandidateMomentumOAWireModXC->Draw("HISTsame");
c12->Modified();

// ### Defining the legend for the plot ###
TLegend *leg12 = new TLegend();
leg12 = new TLegend(0.58,0.65,1.00,1.00);
leg12->SetTextSize(0.04);
leg12->SetTextAlign(12);
leg12->SetFillColor(kWhite);
leg12->SetLineColor(kWhite);
leg12->SetShadowColor(kWhite);
leg12->SetHeader("Detector Variation");
leg12->AddEntry(hRecoPionCandidateMomentumOAWireModXC,"WireModX");
leg12->AddEntry(hRecoPionCandidateMomentumOAWireModYZC,"WireModYZ");
leg12->AddEntry(hRecoPionCandidateMomentumOAWireModThetaXZC,"WireModThetaXZ");
leg12->AddEntry(hRecoPionCandidateMomentumOAWireModThetaYZC,"WireModThetaYZ");
leg12->AddEntry(hRecoPionCandidateMomentumOALYDownC,"LYDown");
leg12->AddEntry(hRecoPionCandidateMomentumOALYAttenC,"LYAtten");
leg12->AddEntry(hRecoPionCandidateMomentumOALYRayleighC,"LYRayleigh");
leg12->AddEntry(hRecoPionCandidateMomentumOASCEC,"SCE");
leg12->AddEntry(hRecoPionCandidateMomentumOARecomb2C,"Recomb2");
leg12->Draw();
}
