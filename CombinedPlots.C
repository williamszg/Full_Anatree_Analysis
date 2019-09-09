{
TFile *f = new TFile("./Histograms_NewAnalysis_BKGD.root"); //<--File for Backgrounds
TFile *f2 = new TFile("./Histograms_NewAnalysis_CCCoh.root"); //<--File for CCCoh
TFile *f3 = new TFile("./Histograms_NewAnalysis_BKGD.root"); //<--File for Cosmics
TFile *f4 = new TFile("./Histograms_NewAnalysis_CCCoh_Bestest.root"); //<--File for VA CCCoh


TFile *b1 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_5_0_cm.root");
TFile *cc1 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_5_0_cm.root");

TFile *b2 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_7_5_cm.root");
TFile *cc2 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_7_5_cm.root");

TFile *b3 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_10_0_cm.root");
TFile *cc3 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_10_0_cm.root");

TFile *b4 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_12_5_cm.root");
TFile *cc4 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_12_5_cm.root");

TFile *b5 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_15_0_cm.root");
TFile *cc5 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_15_0_cm.root");

TFile *b6 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_17_5_cm.root");
TFile *cc6 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_17_5_cm.root");

TFile *b7 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_20_0_cm.root");
TFile *cc7 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_20_0_cm.root");

TFile *b8 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_22_5_cm.root");
TFile *cc8 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_22_5_cm.root");

TFile *b9 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_25_0_cm.root");
TFile *cc9 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_25_0_cm.root");

THStack *hSConeAngle = new THStack("hSConeAngle","Stacked Cone Angle Histograms");
THStack *hSVA = new THStack("hSVA","Stacked Vertex Activity Histograms");


TH1D *hCCCohVA1 = (TH1D*)cc1->Get("hCCCohVA");
TH1D *hCCQEVA1 = (TH1D*)b1->Get("hCCQEVA");
TH1D *hCCResVA1 = (TH1D*)b1->Get("hCCResVA");
TH1D *hCCDISVA1 = (TH1D*)b1->Get("hCCDISVA");
TH1D *hNCResVA1 = (TH1D*)b1->Get("hNCResVA");
TH1D *hNCDISVA1 = (TH1D*)b1->Get("hNCDISVA");
TH1D *hCosmicVA1 = (TH1D*)b1->Get("hCosmicVA");
TH1D *hOtherVA1 = (TH1D*)b1->Get("hOtherVA");

hCCCohVA1->Sumw2();
hCCQEVA1->Sumw2();
hCCResVA1->Sumw2();
hCCDISVA1->Sumw2();
hNCResVA1->Sumw2();
hNCDISVA1->Sumw2();
hCosmicVA1->Sumw2();
hOtherVA1->Sumw2();


TH1D *hCCCohVA2 = (TH1D*)cc2->Get("hCCCohVA");
TH1D *hCCQEVA2 = (TH1D*)b2->Get("hCCQEVA");
TH1D *hCCResVA2 = (TH1D*)b2->Get("hCCResVA");
TH1D *hCCDISVA2 = (TH1D*)b2->Get("hCCDISVA");
TH1D *hNCResVA2 = (TH1D*)b2->Get("hNCResVA");
TH1D *hNCDISVA2 = (TH1D*)b2->Get("hNCDISVA");
TH1D *hCosmicVA2 = (TH1D*)b2->Get("hCosmicVA");
TH1D *hOtherVA2 = (TH1D*)b2->Get("hOtherVA");

hCCCohVA2->Sumw2();
hCCQEVA2->Sumw2();
hCCResVA2->Sumw2();
hCCDISVA2->Sumw2();
hNCResVA2->Sumw2();
hNCDISVA2->Sumw2();
hCosmicVA2->Sumw2();
hOtherVA2->Sumw2();


TH1D *hCCCohVA3 = (TH1D*)cc3->Get("hCCCohVA");
TH1D *hCCQEVA3 = (TH1D*)b3->Get("hCCQEVA");
TH1D *hCCResVA3 = (TH1D*)b3->Get("hCCResVA");
TH1D *hCCDISVA3 = (TH1D*)b3->Get("hCCDISVA");
TH1D *hNCResVA3 = (TH1D*)b3->Get("hNCResVA");
TH1D *hNCDISVA3 = (TH1D*)b3->Get("hNCDISVA");
TH1D *hCosmicVA3 = (TH1D*)b3->Get("hCosmicVA");
TH1D *hOtherVA3 = (TH1D*)b3->Get("hOtherVA");

hCCCohVA3->Sumw2();
hCCQEVA3->Sumw2();
hCCResVA3->Sumw2();
hCCDISVA3->Sumw2();
hNCResVA3->Sumw2();
hNCDISVA3->Sumw2();
hCosmicVA3->Sumw2();
hOtherVA3->Sumw2();


TH1D *hCCCohVA4 = (TH1D*)cc4->Get("hCCCohVA");
TH1D *hCCQEVA4 = (TH1D*)b4->Get("hCCQEVA");
TH1D *hCCResVA4 = (TH1D*)b4->Get("hCCResVA");
TH1D *hCCDISVA4 = (TH1D*)b4->Get("hCCDISVA");
TH1D *hNCResVA4 = (TH1D*)b4->Get("hNCResVA");
TH1D *hNCDISVA4 = (TH1D*)b4->Get("hNCDISVA");
TH1D *hCosmicVA4 = (TH1D*)b4->Get("hCosmicVA");
TH1D *hOtherVA4 = (TH1D*)b4->Get("hOtherVA");

hCCCohVA4->Sumw2();
hCCQEVA4->Sumw2();
hCCResVA4->Sumw2();
hCCDISVA4->Sumw2();
hNCResVA4->Sumw2();
hNCDISVA4->Sumw2();
hCosmicVA4->Sumw2();
hOtherVA4->Sumw2();


TH1D *hCCCohVA5 = (TH1D*)cc5->Get("hCCCohVA");
TH1D *hCCQEVA5 = (TH1D*)b5->Get("hCCQEVA");
TH1D *hCCResVA5 = (TH1D*)b5->Get("hCCResVA");
TH1D *hCCDISVA5 = (TH1D*)b5->Get("hCCDISVA");
TH1D *hNCResVA5 = (TH1D*)b5->Get("hNCResVA");
TH1D *hNCDISVA5 = (TH1D*)b5->Get("hNCDISVA");
TH1D *hCosmicVA5 = (TH1D*)b5->Get("hCosmicVA");
TH1D *hOtherVA5 = (TH1D*)b5->Get("hOtherVA");

hCCCohVA5->Sumw2();
hCCQEVA5->Sumw2();
hCCResVA5->Sumw2();
hCCDISVA5->Sumw2();
hNCResVA5->Sumw2();
hNCDISVA5->Sumw2();
hCosmicVA5->Sumw2();
hOtherVA5->Sumw2();


TH1D *hCCCohVA6 = (TH1D*)cc6->Get("hCCCohVA");
TH1D *hCCQEVA6 = (TH1D*)b6->Get("hCCQEVA");
TH1D *hCCResVA6 = (TH1D*)b6->Get("hCCResVA");
TH1D *hCCDISVA6 = (TH1D*)b6->Get("hCCDISVA");
TH1D *hNCResVA6 = (TH1D*)b6->Get("hNCResVA");
TH1D *hNCDISVA6 = (TH1D*)b6->Get("hNCDISVA");
TH1D *hCosmicVA6 = (TH1D*)b6->Get("hCosmicVA");
TH1D *hOtherVA6 = (TH1D*)b6->Get("hOtherVA");

hCCCohVA6->Sumw2();
hCCQEVA6->Sumw2();
hCCResVA6->Sumw2();
hCCDISVA6->Sumw2();
hNCResVA6->Sumw2();
hNCDISVA6->Sumw2();
hCosmicVA6->Sumw2();
hOtherVA6->Sumw2();


TH1D *hCCCohVA7 = (TH1D*)cc7->Get("hCCCohVA");
TH1D *hCCQEVA7 = (TH1D*)b7->Get("hCCQEVA");
TH1D *hCCResVA7 = (TH1D*)b7->Get("hCCResVA");
TH1D *hCCDISVA7 = (TH1D*)b7->Get("hCCDISVA");
TH1D *hNCResVA7 = (TH1D*)b7->Get("hNCResVA");
TH1D *hNCDISVA7 = (TH1D*)b7->Get("hNCDISVA");
TH1D *hCosmicVA7 = (TH1D*)b7->Get("hCosmicVA");
TH1D *hOtherVA7 = (TH1D*)b7->Get("hOtherVA");

hCCCohVA7->Sumw2();
hCCQEVA7->Sumw2();
hCCResVA7->Sumw2();
hCCDISVA7->Sumw2();
hNCResVA7->Sumw2();
hNCDISVA7->Sumw2();
hCosmicVA7->Sumw2();
hOtherVA7->Sumw2();


TH1D *hCCCohVA8 = (TH1D*)cc8->Get("hCCCohVA");
TH1D *hCCQEVA8 = (TH1D*)b8->Get("hCCQEVA");
TH1D *hCCResVA8 = (TH1D*)b8->Get("hCCResVA");
TH1D *hCCDISVA8 = (TH1D*)b8->Get("hCCDISVA");
TH1D *hNCResVA8 = (TH1D*)b8->Get("hNCResVA");
TH1D *hNCDISVA8 = (TH1D*)b8->Get("hNCDISVA");
TH1D *hCosmicVA8 = (TH1D*)b8->Get("hCosmicVA");
TH1D *hOtherVA8 = (TH1D*)b8->Get("hOtherVA");

hCCCohVA8->Sumw2();
hCCQEVA8->Sumw2();
hCCResVA8->Sumw2();
hCCDISVA8->Sumw2();
hNCResVA8->Sumw2();
hNCDISVA8->Sumw2();
hCosmicVA8->Sumw2();
hOtherVA8->Sumw2();


TH1D *hCCCohVA9 = (TH1D*)cc9->Get("hCCCohVA");
TH1D *hCCQEVA9 = (TH1D*)b9->Get("hCCQEVA");
TH1D *hCCResVA9 = (TH1D*)b9->Get("hCCResVA");
TH1D *hCCDISVA9 = (TH1D*)b9->Get("hCCDISVA");
TH1D *hNCResVA9 = (TH1D*)b9->Get("hNCResVA");
TH1D *hNCDISVA9 = (TH1D*)b9->Get("hNCDISVA");
TH1D *hCosmicVA9 = (TH1D*)b9->Get("hCosmicVA");
TH1D *hOtherVA9 = (TH1D*)b9->Get("hOtherVA");

hCCCohVA9->Sumw2();
hCCQEVA9->Sumw2();
hCCResVA9->Sumw2();
hCCDISVA9->Sumw2();
hNCResVA9->Sumw2();
hNCDISVA9->Sumw2();
hCosmicVA9->Sumw2();
hOtherVA9->Sumw2();


TH1D *hCCCohVA10 = (TH1D*)f2->Get("hCCCohVA5");
TH1D *hCCCohVA11 = (TH1D*)f2->Get("hCCCohVA7_5");
TH1D *hCCCohVA12 = (TH1D*)f4->Get("hCCCohVA");
TH1D *hCCCohVA13 = (TH1D*)f2->Get("hCCCohVA12_5");
TH1D *hCCCohVA14 = (TH1D*)f2->Get("hCCCohVA15");
TH1D *hCCCohVA15 = (TH1D*)f2->Get("hCCCohVA17_5");
TH1D *hCCCohVA16 = (TH1D*)f2->Get("hCCCohVA20");
TH1D *hCCCohVA17 = (TH1D*)f2->Get("hCCCohVA22_5");
TH1D *hCCCohVA18 = (TH1D*)f2->Get("hCCCohVA25");

hCCCohVA10->Sumw2();
hCCCohVA11->Sumw2();
hCCCohVA12->Sumw2();
hCCCohVA13->Sumw2();
hCCCohVA14->Sumw2();
hCCCohVA15->Sumw2();
hCCCohVA16->Sumw2();
hCCCohVA17->Sumw2();
hCCCohVA18->Sumw2();



TH1D *hCCCohConeAngleBKGD = (TH1D*)f->Get("hCCCohConeAngle");
TH1D *hCCCohConeAngle = (TH1D*)f2->Get("hCCCohConeAngle");
TH1D *hCCQEConeAngle = (TH1D*)f->Get("hCCQEConeAngle");
TH1D *hCCResConeAngle = (TH1D*)f->Get("hCCResConeAngle");
TH1D *hCCDISConeAngle = (TH1D*)f->Get("hCCDISConeAngle");
TH1D *hNCResConeAngle = (TH1D*)f->Get("hNCResConeAngle");
TH1D *hNCDISConeAngle = (TH1D*)f->Get("hNCDISConeAngle");
TH1D *hCosmicConeAngle = (TH1D*)f->Get("hCosmicConeAngle");
TH1D *hOtherConeAngle = (TH1D*)f->Get("hOtherConeAngle");

hSConeAngle->Add(hCCCohConeAngleBKGD);
hSConeAngle->Add(hCCQEConeAngle);
hSConeAngle->Add(hCCResConeAngle);
hSConeAngle->Add(hCCDISConeAngle);
hSConeAngle->Add(hNCResConeAngle);
hSConeAngle->Add(hNCDISConeAngle);
hSConeAngle->Add(hOtherConeAngle);
//hSConeAngle->Add(hCosmicConeAngle);



// =====================================================
// === The Histograms in Here Are the N+1 Histograms ===
// =====================================================
TH1D *hCCCohConeAngle_1 = (TH1D*)f2->Get("hCCCohConeAngle1");
TH1D *hCCQEConeAngle_1 = (TH1D*)f->Get("hCCQEConeAngle1");
TH1D *hCCResConeAngle_1 = (TH1D*)f->Get("hCCResConeAngle1");
TH1D *hCCDISConeAngle_1 = (TH1D*)f->Get("hCCDISConeAngle1");
TH1D *hNCResConeAngle_1 = (TH1D*)f->Get("hNCResConeAngle1");
TH1D *hNCDISConeAngle_1 = (TH1D*)f->Get("hNCDISConeAngle1");
TH1D *hCosmicConeAngle_1 = (TH1D*)f->Get("hCosmicConeAngle1");
TH1D *hOtherConeAngle_1 = (TH1D*)f->Get("hOtherConeAngle1");

hCCCohConeAngle_1->Sumw2();
hCCQEConeAngle_1->Sumw2();
hCCResConeAngle_1->Sumw2();
hCCDISConeAngle_1->Sumw2();
hNCResConeAngle_1->Sumw2();
hNCDISConeAngle_1->Sumw2();
hCosmicConeAngle_1->Sumw2();
hOtherConeAngle_1->Sumw2();



TH1D *hCCCohConeAngle_2 = (TH1D*)f2->Get("hCCCohConeAngle2");
TH1D *hCCQEConeAngle_2 = (TH1D*)f->Get("hCCQEConeAngle2");
TH1D *hCCResConeAngle_2 = (TH1D*)f->Get("hCCResConeAngle2");
TH1D *hCCDISConeAngle_2 = (TH1D*)f->Get("hCCDISConeAngle2");
TH1D *hNCResConeAngle_2 = (TH1D*)f->Get("hNCResConeAngle2");
TH1D *hNCDISConeAngle_2 = (TH1D*)f->Get("hNCDISConeAngle2");
TH1D *hCosmicConeAngle_2 = (TH1D*)f->Get("hCosmicConeAngle2");
TH1D *hOtherConeAngle_2 = (TH1D*)f->Get("hOtherConeAngle2");

hCCCohConeAngle_2->Sumw2();
hCCQEConeAngle_2->Sumw2();
hCCResConeAngle_2->Sumw2();
hCCDISConeAngle_2->Sumw2();
hNCResConeAngle_2->Sumw2();
hNCDISConeAngle_2->Sumw2();
hCosmicConeAngle_2->Sumw2();
hOtherConeAngle_2->Sumw2();



TH1D *hCCCohConeAngle_3 = (TH1D*)f2->Get("hCCCohConeAngle3");
TH1D *hCCQEConeAngle_3 = (TH1D*)f->Get("hCCQEConeAngle3");
TH1D *hCCResConeAngle_3 = (TH1D*)f->Get("hCCResConeAngle3");
TH1D *hCCDISConeAngle_3 = (TH1D*)f->Get("hCCDISConeAngle3");
TH1D *hNCResConeAngle_3 = (TH1D*)f->Get("hNCResConeAngle3");
TH1D *hNCDISConeAngle_3 = (TH1D*)f->Get("hNCDISConeAngle3");
TH1D *hCosmicConeAngle_3 = (TH1D*)f->Get("hCosmicConeAngle3");
TH1D *hOtherConeAngle_3 = (TH1D*)f->Get("hOtherConeAngle3");

hCCCohConeAngle_3->Sumw2();
hCCQEConeAngle_3->Sumw2();
hCCResConeAngle_3->Sumw2();
hCCDISConeAngle_3->Sumw2();
hNCResConeAngle_3->Sumw2();
hNCDISConeAngle_3->Sumw2();
hCosmicConeAngle_3->Sumw2();
hOtherConeAngle_3->Sumw2();



TH1D *hCCCohDoCA_1 = (TH1D*)f2->Get("hCCCohDoCA21");
TH1D *hCCQEDoCA_1 = (TH1D*)f->Get("hCCQEDoCA21");
TH1D *hCCResDoCA_1 = (TH1D*)f->Get("hCCResDoCA21");
TH1D *hCCDISDoCA_1 = (TH1D*)f->Get("hCCDISDoCA21");
TH1D *hNCResDoCA_1 = (TH1D*)f->Get("hNCResDoCA21");
TH1D *hNCDISDoCA_1 = (TH1D*)f->Get("hNCDISDoCA21");
TH1D *hCosmicDoCA_1 = (TH1D*)f->Get("hCosmicDoCA21");
TH1D *hOtherDoCA_1 = (TH1D*)f->Get("hOtherDoCA21");

hCCCohDoCA_1->Sumw2();
hCCQEDoCA_1->Sumw2();
hCCResDoCA_1->Sumw2();
hCCDISDoCA_1->Sumw2();
hNCResDoCA_1->Sumw2();
hNCDISDoCA_1->Sumw2();
hCosmicDoCA_1->Sumw2();
hOtherDoCA_1->Sumw2();



TH1D *hCCCohDoCA_2 = (TH1D*)f2->Get("hCCCohDoCA22");
TH1D *hCCQEDoCA_2 = (TH1D*)f->Get("hCCQEDoCA22");
TH1D *hCCResDoCA_2 = (TH1D*)f->Get("hCCResDoCA22");
TH1D *hCCDISDoCA_2 = (TH1D*)f->Get("hCCDISDoCA22");
TH1D *hNCResDoCA_2 = (TH1D*)f->Get("hNCResDoCA22");
TH1D *hNCDISDoCA_2 = (TH1D*)f->Get("hNCDISDoCA22");
TH1D *hCosmicDoCA_2 = (TH1D*)f->Get("hCosmicDoCA22");
TH1D *hOtherDoCA_2 = (TH1D*)f->Get("hOtherDoCA22");

hCCCohDoCA_2->Sumw2();
hCCQEDoCA_2->Sumw2();
hCCResDoCA_2->Sumw2();
hCCDISDoCA_2->Sumw2();
hNCResDoCA_2->Sumw2();
hNCDISDoCA_2->Sumw2();
hCosmicDoCA_2->Sumw2();
hOtherDoCA_2->Sumw2();



TH1D *hCCCohDoCA_3 = (TH1D*)f2->Get("hCCCohDoCA23");
TH1D *hCCQEDoCA_3 = (TH1D*)f->Get("hCCQEDoCA23");
TH1D *hCCResDoCA_3 = (TH1D*)f->Get("hCCResDoCA23");
TH1D *hCCDISDoCA_3 = (TH1D*)f->Get("hCCDISDoCA23");
TH1D *hNCResDoCA_3 = (TH1D*)f->Get("hNCResDoCA23");
TH1D *hNCDISDoCA_3 = (TH1D*)f->Get("hNCDISDoCA23");
TH1D *hCosmicDoCA_3 = (TH1D*)f->Get("hCosmicDoCA23");
TH1D *hOtherDoCA_3 = (TH1D*)f->Get("hOtherDoCA23");

hCCCohDoCA_3->Sumw2();
hCCQEDoCA_3->Sumw2();
hCCResDoCA_3->Sumw2();
hCCDISDoCA_3->Sumw2();
hNCResDoCA_3->Sumw2();
hNCDISDoCA_3->Sumw2();
hCosmicDoCA_3->Sumw2();
hOtherDoCA_3->Sumw2();



TH1D *hCCCohVA_1 = (TH1D*)f2->Get("hCCCohVA1");
TH1D *hCCQEVA_1 = (TH1D*)f->Get("hCCQEVA1");
TH1D *hCCResVA_1 = (TH1D*)f->Get("hCCResVA1");
TH1D *hCCDISVA_1 = (TH1D*)f->Get("hCCDISVA1");
TH1D *hNCResVA_1 = (TH1D*)f->Get("hNCResVA1");
TH1D *hNCDISVA_1 = (TH1D*)f->Get("hNCDISVA1");
TH1D *hCosmicVA_1 = (TH1D*)f->Get("hCosmicVA1");
TH1D *hOtherVA_1 = (TH1D*)f->Get("hOtherVA1");

hCCCohVA_1->Sumw2();
hCCQEVA_1->Sumw2();
hCCResVA_1->Sumw2();
hCCDISVA_1->Sumw2();
hNCResVA_1->Sumw2();
hNCDISVA_1->Sumw2();
hCosmicVA_1->Sumw2();
hOtherVA_1->Sumw2();



TH1D *hCCCohVA_2 = (TH1D*)f2->Get("hCCCohVA22");
TH1D *hCCQEVA_2 = (TH1D*)f->Get("hCCQEVA22");
TH1D *hCCResVA_2 = (TH1D*)f->Get("hCCResVA22");
TH1D *hCCDISVA_2 = (TH1D*)f->Get("hCCDISVA22");
TH1D *hNCResVA_2 = (TH1D*)f->Get("hNCResVA22");
TH1D *hNCDISVA_2 = (TH1D*)f->Get("hNCDISVA22");
TH1D *hCosmicVA_2 = (TH1D*)f->Get("hCosmicVA22");
TH1D *hOtherVA_2 = (TH1D*)f->Get("hOtherVA22");

hCCCohVA_2->Sumw2();
hCCQEVA_2->Sumw2();
hCCResVA_2->Sumw2();
hCCDISVA_2->Sumw2();
hNCResVA_2->Sumw2();
hNCDISVA_2->Sumw2();
hCosmicVA_2->Sumw2();
hOtherVA_2->Sumw2();



TH1D *hCCCohVA_3 = (TH1D*)f2->Get("hCCCohVA3");
TH1D *hCCQEVA_3 = (TH1D*)f->Get("hCCQEVA3");
TH1D *hCCResVA_3 = (TH1D*)f->Get("hCCResVA3");
TH1D *hCCDISVA_3 = (TH1D*)f->Get("hCCDISVA3");
TH1D *hNCResVA_3 = (TH1D*)f->Get("hNCResVA3");
TH1D *hNCDISVA_3 = (TH1D*)f->Get("hNCDISVA3");
TH1D *hCosmicVA_3 = (TH1D*)f->Get("hCosmicVA3");
TH1D *hOtherVA_3 = (TH1D*)f->Get("hOtherVA3");

hCCCohVA_3->Sumw2();
hCCQEVA_3->Sumw2();
hCCResVA_3->Sumw2();
hCCDISVA_3->Sumw2();
hNCResVA_3->Sumw2();
hNCDISVA_3->Sumw2();
hCosmicVA_3->Sumw2();
hOtherVA_3->Sumw2();
// =====================================================



// -----------------------------
// --- TGraph for Cone Angle ---
// -----------------------------
int n = 180;
double x[180] = {0};
double ConeAngleEff[180] = {0};
double ConeAnglePurity[180] = {0};
double CCCohConeAngle[180] = {0};
double CCCohConeAngleRejection[180] = {0};
double CCQEConeAngle[180] = {0};
double CCResConeAngle[180] = {0};
double CCDISConeAngle[180] = {0};
double NCResConeAngle[180] = {0};
double NCDISConeAngle[180] = {0};
double CosmicConeAngle[180] = {0};
double OtherConeAngle[180] = {0};

CosmicConeAngle[0] = 1;
CCQEConeAngle[0] = 1;

for (int i = 0; i < n; i++)
   {
   x[i] = i*180/n;
   for (int g = 1; g < i+1; g++)
      {
      CCCohConeAngle[i] += hCCCohConeAngle->GetBinContent(g);
      CCQEConeAngle[i] += hCCQEConeAngle->GetBinContent(g);
      CCResConeAngle[i] += hCCResConeAngle->GetBinContent(g);
      CCDISConeAngle[i] += hCCDISConeAngle->GetBinContent(g);
      NCResConeAngle[i] += hNCResConeAngle->GetBinContent(g);
      NCDISConeAngle[i] += hNCDISConeAngle->GetBinContent(g);
      CosmicConeAngle[i] += hCosmicConeAngle->GetBinContent(g);
      OtherConeAngle[i] += hOtherConeAngle->GetBinContent(g);
      } // End g-Loop


   CCCohConeAngleRejection[i] = hCCCohConeAngle->GetEntries() - CCCohConeAngle[i];

   ConeAngleEff[i] = 100*(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + OtherConeAngle[i])/(hCCCohConeAngle->GetEntries() + hCCQEConeAngle->GetEntries() + hCCResConeAngle->GetEntries() + hCCDISConeAngle->GetEntries() + hNCResConeAngle->GetEntries() + hNCDISConeAngle->GetEntries() + hOtherConeAngle->GetEntries());
   ConeAnglePurity[i] = 100*CCCohConeAngle[i]/(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + OtherConeAngle[i]);
   //ConeAngleEff[i] = 100*(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + CosmicConeAngle[i] + OtherConeAngle[i])/(hCCCohConeAngle->GetEntries() + hCCQEConeAngle->GetEntries() + hCCResConeAngle->GetEntries() + hCCDISConeAngle->GetEntries() + hNCResConeAngle->GetEntries() + hNCDISConeAngle->GetEntries() + hCosmicConeAngle->GetEntries() + hOtherConeAngle->GetEntries());
   //ConeAnglePurity[i] = 100*CCCohConeAngle[i]/(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + CosmicConeAngle[i] + OtherConeAngle[i]);

   if (i == 0) {CCQEConeAngle[i] = CCQEConeAngle[i] - 1;}

   CCCohConeAngle[i] = CCCohConeAngle[i]*100/hCCCohConeAngle->GetEntries();
   CCCohConeAngleRejection[i] = CCCohConeAngleRejection[i]*100/hCCCohConeAngle->GetEntries();
   CCQEConeAngle[i] = 100 - CCQEConeAngle[i]*100/hCCQEConeAngle->GetEntries();
   CCResConeAngle[i] = 100 - CCResConeAngle[i]*100/hCCResConeAngle->GetEntries();
   CCDISConeAngle[i] = 100 - CCDISConeAngle[i]*100/hCCDISConeAngle->GetEntries();
   NCResConeAngle[i] = 100 - NCResConeAngle[i]*100/hNCResConeAngle->GetEntries();
   NCDISConeAngle[i] = 100 - NCDISConeAngle[i]*100/hNCDISConeAngle->GetEntries();
   CosmicConeAngle[i] = 100 - CosmicConeAngle[i]*100/hCosmicConeAngle->GetEntries();
   OtherConeAngle[i] = 100 - OtherConeAngle[i]*100/hOtherConeAngle->GetEntries();
   } // End i-Loop

TGraph* gConeAngleEff = new TGraph(n, x, ConeAngleEff);
gConeAngleEff->SetTitle("ConeAngleEff");
gConeAngleEff->SetName("ConeAngleEff");
gConeAngleEff->SetFillColor(kWhite);
gConeAngleEff->SetLineColor(kBlue);
gConeAngleEff->SetLineWidth(2);
TGraph* gConeAnglePurity = new TGraph(n, x, ConeAnglePurity);
gConeAnglePurity->SetTitle("ConeAnglePurity");
gConeAnglePurity->SetName("ConeAnglePurity");
gConeAnglePurity->SetFillColor(kWhite);
gConeAnglePurity->SetLineColor(kRed);
gConeAnglePurity->SetLineWidth(2);
TGraph* gCCCohConeAngle = new TGraph(n, x, CCCohConeAngle);
gCCCohConeAngle->SetTitle("gCCCohConeAngle");
gCCCohConeAngle->SetName("gCCCohConeAngle");
gCCCohConeAngle->SetFillColor(kWhite);
gCCCohConeAngle->SetLineColor(kBlue);
gCCCohConeAngle->SetLineWidth(2);
TGraph* gCCQEConeAngle = new TGraph(n, x, CCQEConeAngle);
gCCQEConeAngle->SetTitle("gCCQEConeAngle");
gCCQEConeAngle->SetName("gCCQEConeAngle");
gCCQEConeAngle->SetFillColor(kWhite);
gCCQEConeAngle->SetLineColor(kRed);
gCCQEConeAngle->SetLineWidth(2);
TGraph* gCCResConeAngle = new TGraph(n, x, CCResConeAngle);
gCCResConeAngle->SetTitle("gCCResConeAngle");
gCCResConeAngle->SetName("gCCResConeAngle");
gCCResConeAngle->SetFillColor(kWhite);
gCCResConeAngle->SetLineColor(kGreen);
gCCResConeAngle->SetLineWidth(2);
TGraph* gCCDISConeAngle = new TGraph(n, x, CCDISConeAngle);
gCCDISConeAngle->SetTitle("gCCDISConeAngle");
gCCDISConeAngle->SetName("gNCDISConeAngle");
gCCDISConeAngle->SetFillColor(kWhite);
gCCDISConeAngle->SetLineColor(kOrange);
gCCDISConeAngle->SetLineWidth(2);
TGraph* gNCResConeAngle = new TGraph(n, x, NCResConeAngle);
gNCResConeAngle->SetTitle("gNCResConeAngle");
gNCResConeAngle->SetName("gNCResConeAngle");
gNCResConeAngle->SetFillColor(kWhite);
gNCResConeAngle->SetLineColor(kCyan);
gNCResConeAngle->SetLineWidth(2);
TGraph* gNCDISConeAngle = new TGraph(n, x, NCDISConeAngle);
gNCDISConeAngle->SetTitle("gNCDISConeAngle");
gNCDISConeAngle->SetName("gNCDISConeAngle");
gNCDISConeAngle->SetFillColor(kWhite);
gNCDISConeAngle->SetLineColor(kMagenta);
gNCDISConeAngle->SetLineWidth(2);
TGraph* gCosmicConeAngle = new TGraph(n, x, CosmicConeAngle);
gCosmicConeAngle->SetTitle("gCosmicConeAngle");
gCosmicConeAngle->SetName("gCosmicConeAngle");
gCosmicConeAngle->SetFillColor(kWhite);
gCosmicConeAngle->SetLineColor(kBlack);
gCosmicConeAngle->SetLineWidth(2);
TGraph* gOtherConeAngle = new TGraph(n, x, OtherConeAngle);
gOtherConeAngle->SetTitle("gOtherConeAngle");
gOtherConeAngle->SetName("gOtherConeAngle");
gOtherConeAngle->SetFillColor(kWhite);
gOtherConeAngle->SetLineColor(14);
gOtherConeAngle->SetLineWidth(2);

TCanvas *c4 = new TCanvas("c4", "Cone Angle TGraphs");
c4->SetTicks();
c4->SetFillColor(kWhite);

gCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gCCCohConeAngle->GetXaxis()->CenterTitle();

gCCCohConeAngle->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohConeAngle->GetYaxis()->CenterTitle();

gCCCohConeAngle->Draw();
gCCQEConeAngle->Draw("same");
gCCResConeAngle->Draw("same");
gCCDISConeAngle->Draw("same");
gNCResConeAngle->Draw("same");
gNCDISConeAngle->Draw("same");
gCosmicConeAngle->Draw("same");
gOtherConeAngle->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,1.00,1.00);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Channel");
leg4->AddEntry(gCCCohConeAngle,"CC-COH");
leg4->AddEntry(gCCQEConeAngle,"CC-QE");
leg4->AddEntry(gCCResConeAngle,"CC-Res");
leg4->AddEntry(gCCDISConeAngle,"CC-DIS");
leg4->AddEntry(gNCResConeAngle,"NC-Res");
leg4->AddEntry(gNCDISConeAngle,"NC-DIS");
leg4->AddEntry(gOtherConeAngle,"Other");
leg4->AddEntry(gCosmicConeAngle,"Cosmic");
leg4->Draw();
// -----------------------------

TH1D *hCCCohDoCA = (TH1D*)f2->Get("hCCCohDoCA2");
TH1D *hCCQEDoCA = (TH1D*)f->Get("hCCQEDoCA2");
TH1D *hCCResDoCA = (TH1D*)f->Get("hCCResDoCA2");
TH1D *hCCDISDoCA = (TH1D*)f->Get("hCCDISDoCA2");
TH1D *hNCResDoCA = (TH1D*)f->Get("hNCResDoCA2");
TH1D *hNCDISDoCA = (TH1D*)f->Get("hNCDISDoCA2");
TH1D *hCosmicDoCA = (TH1D*)b3->Get("hCosmicDoCA2");
TH1D *hOtherDoCA = (TH1D*)f->Get("hOtherDoCA2");

// -----------------------
// --- TGraph for DoCA ---
// -----------------------
int m = 1000;
double y[1000] = {0};
double DoCAEff[1000] = {0};
double DoCAPurity[1000] = {0};
double CCCohDoCA[1000] = {0};
double CCCohDoCARejection[1000] = {0};
double CCQEDoCA[1000] = {0};
double CCResDoCA[1000] = {0};
double CCDISDoCA[1000] = {0};
double NCResDoCA[1000] = {0};
double NCDISDoCA[1000] = {0};
double CosmicDoCA[1000] = {0};
double OtherDoCA[1000] = {0};

CosmicDoCA[0] = 1;
CCQEDoCA[0] = 1;

for (int i = 0; i < m; i++)
   {
   y[i] = i*100/m;
   for (int g = 1; g < i+1; g++)
      {
      CCCohDoCA[i] += hCCCohDoCA->GetBinContent(g);
      CCQEDoCA[i] += hCCQEDoCA->GetBinContent(g);
      CCResDoCA[i] += hCCResDoCA->GetBinContent(g);
      CCDISDoCA[i] += hCCDISDoCA->GetBinContent(g);
      NCResDoCA[i] += hNCResDoCA->GetBinContent(g);
      NCDISDoCA[i] += hNCDISDoCA->GetBinContent(g);
      CosmicDoCA[i] += hCosmicDoCA->GetBinContent(g);
      OtherDoCA[i] += hOtherDoCA->GetBinContent(g);
      } // End g-Loop


   CCCohDoCARejection[i] = hCCCohDoCA->GetEntries() - CCCohDoCA[i];

   DoCAEff[i] = 100*(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + OtherDoCA[i])/(hCCCohDoCA->GetEntries() + hCCQEDoCA->GetEntries() + hCCResDoCA->GetEntries() + hCCDISDoCA->GetEntries() + hNCResDoCA->GetEntries() + hNCDISDoCA->GetEntries() + hOtherDoCA->GetEntries());
   DoCAPurity[i] = 100*CCCohDoCA[i]/(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + OtherDoCA[i]);
   //DoCAEff[i] = 100*(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + CosmicDoCA[i] + OtherDoCA[i])/(hCCCohDoCA->GetEntries() + hCCQEDoCA->GetEntries() + hCCResDoCA->GetEntries() + hCCDISDoCA->GetEntries() + hNCResDoCA->GetEntries() + hNCDISDoCA->GetEntries() + hCosmicDoCA->GetEntries() + hOtherDoCA->GetEntries());
   //DoCAPurity[i] = 100*CCCohDoCA[i]/(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + CosmicDoCA[i] + OtherDoCA[i]);

   if (i == 0) {CCQEDoCA[i] = CCQEDoCA[i] - 1;}

   CCCohDoCA[i] = CCCohDoCA[i]*100/hCCCohDoCA->GetEntries();
   CCCohDoCARejection[i] = CCCohDoCARejection[i]*100/hCCCohDoCA->GetEntries();
   CCQEDoCA[i] = 100 - CCQEDoCA[i]*100/hCCQEDoCA->GetEntries();
   CCResDoCA[i] = 100 - CCResDoCA[i]*100/hCCResDoCA->GetEntries();
   CCDISDoCA[i] = 100 - CCDISDoCA[i]*100/hCCDISDoCA->GetEntries();
   NCResDoCA[i] = 100 - NCResDoCA[i]*100/hNCResDoCA->GetEntries();
   NCDISDoCA[i] = 100 - NCDISDoCA[i]*100/hNCDISDoCA->GetEntries();
   CosmicDoCA[i] = 100 - CosmicDoCA[i]*100/hCosmicDoCA->GetEntries();
   OtherDoCA[i] = 100 - OtherDoCA[i]*100/hOtherDoCA->GetEntries();
   } // End i-Loop

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
gDoCAPurity->SetLineColor(kRed);
gDoCAPurity->SetLineWidth(2);
TGraph* gCCCohDoCA = new TGraph(m, y, CCCohDoCA);
gCCCohDoCA->SetTitle("gCCCohDoCA");
gCCCohDoCA->SetName("gCCCohDoCA");
gCCCohDoCA->SetFillColor(kWhite);
gCCCohDoCA->SetLineColor(kBlue);
gCCCohDoCA->SetLineWidth(2);
TGraph* gCCQEDoCA = new TGraph(m, y, CCQEDoCA);
gCCQEDoCA->SetTitle("gCCQEDoCA");
gCCQEDoCA->SetName("gCCQEDoCA");
gCCQEDoCA->SetFillColor(kWhite);
gCCQEDoCA->SetLineColor(kRed);
gCCQEDoCA->SetLineWidth(2);
TGraph* gCCResDoCA = new TGraph(m, y, CCResDoCA);
gCCResDoCA->SetTitle("gCCResDoCA");
gCCResDoCA->SetName("gCCResDoCA");
gCCResDoCA->SetFillColor(kWhite);
gCCResDoCA->SetLineColor(kGreen);
gCCResDoCA->SetLineWidth(2);
TGraph* gCCDISDoCA = new TGraph(m, y, CCDISDoCA);
gCCDISDoCA->SetTitle("gCCDISDoCA");
gCCDISDoCA->SetName("gCCDISDoCA");
gCCDISDoCA->SetFillColor(kWhite);
gCCDISDoCA->SetLineColor(kOrange);
gCCDISDoCA->SetLineWidth(2);
TGraph* gNCResDoCA = new TGraph(m, y, NCResDoCA);
gNCResDoCA->SetTitle("gNCResDoCA");
gNCResDoCA->SetName("gNCResDoCA");
gNCResDoCA->SetFillColor(kWhite);
gNCResDoCA->SetLineColor(kCyan);
gNCResDoCA->SetLineWidth(2);
TGraph* gNCDISDoCA = new TGraph(m, y, NCDISDoCA);
gNCDISDoCA->SetTitle("gNCDISDoCA");
gNCDISDoCA->SetName("gNCDISDoCA");
gNCDISDoCA->SetFillColor(kWhite);
gNCDISDoCA->SetLineColor(kMagenta);
gNCDISDoCA->SetLineWidth(2);
TGraph* gCosmicDoCA = new TGraph(m, y, CosmicDoCA);
gCosmicDoCA->SetTitle("gCosmicDoCA");
gCosmicDoCA->SetName("gCosmicDoCA");
gCosmicDoCA->SetFillColor(kWhite);
gCosmicDoCA->SetLineColor(kBlack);
gCosmicDoCA->SetLineWidth(2);
TGraph* gOtherDoCA = new TGraph(m, y, OtherDoCA);
gOtherDoCA->SetTitle("gOtherDoCA");
gOtherDoCA->SetName("gOtherDoCA");
gOtherDoCA->SetFillColor(kWhite);
gOtherDoCA->SetLineColor(14);
gOtherDoCA->SetLineWidth(2);

TCanvas *c5 = new TCanvas("c5", "DoCA TGraphs");
c5->SetTicks();
c5->SetFillColor(kWhite);

gCosmicDoCA->GetXaxis()->SetTitle("DoCA [cm]");
gCosmicDoCA->GetXaxis()->CenterTitle();

gCosmicDoCA->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCosmicDoCA->GetYaxis()->CenterTitle();

//gCCCohDoCA->Draw();
//gCCQEDoCA->Draw("same");
//gCCResDoCA->Draw("same");
//gCCDISDoCA->Draw("same");
//gNCResDoCA->Draw("same");
//gNCDISDoCA->Draw("same");
gCosmicDoCA->Draw();
//gOtherDoCA->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,1.00,1.00);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Channel");
//leg5->AddEntry(gCCCohDoCA,"CC-COH");
//leg5->AddEntry(gCCQEDoCA,"CC-QE");
//leg5->AddEntry(gCCResDoCA,"CC-Res");
//leg5->AddEntry(gCCDISDoCA,"CC-DIS");
//leg5->AddEntry(gNCResDoCA,"NC-Res");
//leg5->AddEntry(gNCDISDoCA,"NC-DIS");
//leg5->AddEntry(gOtherDoCA,"Other");
leg5->AddEntry(gCosmicDoCA,"Cosmic");
leg5->Draw();
// -----------------------

TH1D *hCCCohVABKGD = (TH1D*)f->Get("hCCCohVA");
TH1D *hCCCohVA = (TH1D*)f2->Get("hCCCohVA");
TH1D *hCCQEVA = (TH1D*)f->Get("hCCQEVA");
TH1D *hCCResVA = (TH1D*)f->Get("hCCResVA");
TH1D *hCCDISVA = (TH1D*)f->Get("hCCDISVA");
TH1D *hNCResVA = (TH1D*)f->Get("hNCResVA");
TH1D *hNCDISVA = (TH1D*)f->Get("hNCDISVA");
TH1D *hCosmicVA = (TH1D*)f->Get("hCosmicVA");
TH1D *hOtherVA = (TH1D*)f->Get("hOtherVA");

hSVA->Add(hCCCohVABKGD);
hSVA->Add(hCCQEVA);
hSVA->Add(hCCResVA);
hSVA->Add(hCCDISVA);
hSVA->Add(hNCResVA);
hSVA->Add(hNCDISVA);
hSVA->Add(hOtherVA);
//hSVA->Add(hCosmicVA);

// ---------------------
// --- TGraph for VA ---
// ---------------------
int j = 100;
double z[100] = {0};
double VAEff[100] = {0};
double VAPurity[100] = {0};
double CCCohVA[100] = {0};
double CCCohVARejection[100] = {0};
double CCQEVA[100] = {0};
double CCResVA[100] = {0};
double CCDISVA[100] = {0};
double NCResVA[100] = {0};
double NCDISVA[100] = {0};
double CosmicVA[100] = {0};
double OtherVA[100] = {0};

CosmicVA[0] = 1;
CCQEVA[0] = 1;

for (int i = 0; i < j; i++)
   {
   z[i] = i*500/j;
   for (int g = 1; g < i+1; g++)
      {
      CCCohVA[i] += hCCCohVA->GetBinContent(g);
      CCQEVA[i] += hCCQEVA->GetBinContent(g);
      CCResVA[i] += hCCResVA->GetBinContent(g);
      CCDISVA[i] += hCCDISVA->GetBinContent(g);
      NCResVA[i] += hNCResVA->GetBinContent(g);
      NCDISVA[i] += hNCDISVA->GetBinContent(g);
      CosmicVA[i] += hCosmicVA->GetBinContent(g);
      OtherVA[i] += hOtherVA->GetBinContent(g);
      } // End g-Loop


   CCCohVARejection[i] = hCCCohVA->GetEntries() - CCCohVA[i];

   VAEff[i] = 100*(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + OtherVA[i])/(hCCCohVA->GetEntries() + hCCQEVA->GetEntries() + hCCResVA->GetEntries() + hCCDISVA->GetEntries() + hNCResVA->GetEntries() + hNCDISVA->GetEntries() + hOtherVA->GetEntries());
   VAPurity[i] = 100*CCCohVA[i]/(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + OtherVA[i]);
   //VAEff[i] = 100*(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + CosmicVA[i] + OtherVA[i])/(hCCCohVA->GetEntries() + hCCQEVA->GetEntries() + hCCResVA->GetEntries() + hCCDISVA->GetEntries() + hNCResVA->GetEntries() + hNCDISVA->GetEntries() + hCosmicVA->GetEntries() + hOtherVA->GetEntries());
   //VAPurity[i] = 100*CCCohVA[i]/(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + CosmicVA[i] + OtherVA[i]);

   if (i == 0) {CCQEVA[i] = CCQEVA[i] - 1;}

   CCCohVA[i] = CCCohVA[i]*100/hCCCohVA->GetEntries();
   CCCohVARejection[i] = CCCohVARejection[i]*100/hCCCohVA->GetEntries();
   CCQEVA[i] = 100 - CCQEVA[i]*100/hCCQEVA->GetEntries();
   CCResVA[i] = 100 - CCResVA[i]*100/hCCResVA->GetEntries();
   CCDISVA[i] = 100 - CCDISVA[i]*100/hCCDISVA->GetEntries();
   NCResVA[i] = 100 - NCResVA[i]*100/hNCResVA->GetEntries();
   NCDISVA[i] = 100 - NCDISVA[i]*100/hNCDISVA->GetEntries();
   CosmicVA[i] = 100 - CosmicVA[i]*100/hCosmicVA->GetEntries();
   OtherVA[i] = 100 - OtherVA[i]*100/hOtherVA->GetEntries();
   } // End i-Loop

TGraph* gVAEff = new TGraph(j, z, VAEff);
gVAEff->SetTitle("gVAEff");
gVAEff->SetName("gVAEff");
gVAEff->SetFillColor(kWhite);
gVAEff->SetLineColor(kBlue);
gVAEff->SetLineWidth(2);
TGraph* gVAPurity = new TGraph(j, z, VAPurity);
gVAPurity->SetTitle("gVAPurity");
gVAPurity->SetName("gVAPurity");
gVAPurity->SetFillColor(kWhite);
gVAPurity->SetLineColor(kRed);
gVAPurity->SetLineWidth(2);
TGraph* gCCCohVA = new TGraph(j, z, CCCohVA);
gCCCohVA->SetTitle("gCCCohVA");
gCCCohVA->SetName("gCCCohVA");
gCCCohVA->SetFillColor(kWhite);
gCCCohVA->SetLineColor(kBlue);
gCCCohVA->SetLineWidth(2);
TGraph* gCCQEVA = new TGraph(j, z, CCQEVA);
gCCQEVA->SetTitle("gCCQEVA");
gCCQEVA->SetName("gCCQEVA");
gCCQEVA->SetFillColor(kWhite);
gCCQEVA->SetLineColor(kRed);
gCCQEVA->SetLineWidth(2);
TGraph* gCCResVA = new TGraph(j, z, CCResVA);
gCCResVA->SetTitle("gCCResVA");
gCCResVA->SetName("gCCResVA");
gCCResVA->SetFillColor(kWhite);
gCCResVA->SetLineColor(kGreen);
gCCResVA->SetLineWidth(2);
TGraph* gCCDISVA = new TGraph(j, z, CCDISVA);
gCCDISVA->SetTitle("gCCDISVA");
gCCDISVA->SetName("gCCDISVA");
gCCDISVA->SetFillColor(kWhite);
gCCDISVA->SetLineColor(kOrange);
gCCDISVA->SetLineWidth(2);
TGraph* gNCResVA = new TGraph(j, z, NCResVA);
gNCResVA->SetTitle("gNCResVA");
gNCResVA->SetName("gNCResVA");
gNCResVA->SetFillColor(kWhite);
gNCResVA->SetLineColor(kCyan);
gNCResVA->SetLineWidth(2);
TGraph* gNCDISVA = new TGraph(j, z, NCDISVA);
gNCDISVA->SetTitle("gNCDISVA");
gNCDISVA->SetName("gNCDISVA");
gNCDISVA->SetFillColor(kWhite);
gNCDISVA->SetLineColor(kMagenta);
gNCDISVA->SetLineWidth(2);
TGraph* gCosmicVA = new TGraph(j, z, CosmicVA);
gCosmicVA->SetTitle("gCosmicVA");
gCosmicVA->SetName("gCosmicVA");
gCosmicVA->SetFillColor(kWhite);
gCosmicVA->SetLineColor(kBlack);
gCosmicVA->SetLineWidth(2);
TGraph* gOtherVA = new TGraph(j, z, OtherVA);
gOtherVA->SetTitle("gOtherVA");
gOtherVA->SetName("gOtherVA");
gOtherVA->SetFillColor(kWhite);
gOtherVA->SetLineColor(14);
gOtherVA->SetLineWidth(2);

TCanvas *c6 = new TCanvas("c6", "Vertex Activity TGraphs");
c6->SetTicks();
c6->SetFillColor(kWhite);

gCCCohVA->GetXaxis()->SetTitle("Vertex Activity within 10cm of Vertex [MeV]");
gCCCohVA->GetXaxis()->CenterTitle();

gCCCohVA->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohVA->GetYaxis()->CenterTitle();

gCCCohVA->Draw();
gCCQEVA->Draw("same");
gCCResVA->Draw("same");
gCCDISVA->Draw("same");
gNCResVA->Draw("same");
gNCDISVA->Draw("same");
gCosmicVA->Draw("same");
gOtherVA->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,1.00,1.00);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("Channel");
leg6->AddEntry(gCCCohVA,"CC-COH");
leg6->AddEntry(gCCQEVA,"CC-QE");
leg6->AddEntry(gCCResVA,"CC-Res");
leg6->AddEntry(gCCDISVA,"CC-DIS");
leg6->AddEntry(gNCResVA,"NC-Res");
leg6->AddEntry(gNCDISVA,"NC-DIS");
leg6->AddEntry(gOtherVA,"Other");
leg6->AddEntry(gCosmicVA,"Cosmic");
leg6->Draw();
// ---------------------

TH1D *hCCCohOp = (TH1D*)f2->Get("hOpFlashPECCCoh");
TH1D *hCosmicOp = (TH1D*)f3->Get("hOpFlashPECosmic");
TH1D *hCCQEOp = (TH1D*)f->Get("hOpFlashPECCQE");
TH1D *hCCResOp = (TH1D*)f->Get("hOpFlashPECCRes");
TH1D *hCCDISOp = (TH1D*)f->Get("hOpFlashPECCDIS");
TH1D *hNCResOp = (TH1D*)f->Get("hOpFlashPENCRes");
TH1D *hNCDISOp = (TH1D*)f->Get("hOpFlashPENCDIS");
TH1D *hOtherOp = (TH1D*)f->Get("hOpFlashPEOther");

// --------------------------
// --- TGraph for OpFlash ---
// --------------------------
int k = 2000;
double t[2000] = {0};
double OpEff[2000] = {0};
double OpPurity[2000] = {0};
double CCCohOp[2000] = {0};
double CCQEOp[2000] = {0};
double CCResOp[2000] = {0};
double CCDISOp[2000] = {0};
double NCResOp[2000] = {0};
double NCDISOp[2000] = {0};
double OtherOp[2000] = {0};
double CosmicOp[2000] = {0};

for (int i = 0; i < k; i++)
   {
   t[i] = i*20000/k;
   for (int g = 1; g < i+1; g++)
      {
      CCCohOp[i] += hCCCohOp->GetBinContent(g);
      CCQEOp[i] += hCCQEOp->GetBinContent(g);
      CCResOp[i] += hCCResOp->GetBinContent(g);
      CCDISOp[i] += hCCDISOp->GetBinContent(g);
      NCResOp[i] += hNCResOp->GetBinContent(g);
      NCDISOp[i] += hNCDISOp->GetBinContent(g);
      OtherOp[i] += hOtherOp->GetBinContent(g);
      CosmicOp[i] += hCosmicOp->GetBinContent(g);
      } // End g-Loop

   OpEff[i] = 100*(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + OtherOp[i])/(hCCCohOp->GetEntries() + hCCQEOp->GetEntries() + hCCResOp->GetEntries() + hCCDISOp->GetEntries() + hNCResOp->GetEntries() + hNCDISOp->GetEntries() + hOtherOp->GetEntries());
   OpPurity[i] = 100*CCCohOp[i]/(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + OtherOp[i]);
   //OpEff[i] = 100*(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + CosmicOp[i] + OtherOp[i])/(hCCCohOp->GetEntries() + hCCQEOp->GetEntries() + hCCResOp->GetEntries() + hCCDISOp->GetEntries() + hNCResOp->GetEntries() + hNCDISOp->GetEntries() + hCosmicOp->GetEntries() + hOtherOp->GetEntries());
   //OpPurity[i] = 100*CCCohOp[i]/(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + CosmicOp[i] + OtherOp[i]);

   CCCohOp[i] = CCCohOp[i]*100/hCCCohOp->GetEntries();
   CCQEOp[i] = 100 - CCQEOp[i]*100/hCCQEOp->GetEntries();
   CCResOp[i] = 100 - CCResOp[i]*100/hCCResOp->GetEntries();
   CCDISOp[i] = 100 - CCDISOp[i]*100/hCCDISOp->GetEntries();
   NCResOp[i] = 100 - NCResOp[i]*100/hNCResOp->GetEntries();
   NCDISOp[i] = 100 - NCDISOp[i]*100/hNCDISOp->GetEntries();
   OtherOp[i] = 100 - OtherOp[i]*100/hOtherOp->GetEntries();
   CosmicOp[i] = 100 - CosmicOp[i]*100/hCosmicOp->GetEntries();
   } // End i-Loop

TGraph* gOpEff = new TGraph(k, t, OpEff);
gOpEff->SetTitle("gOpEff");
gOpEff->SetName("gOpEff");
gOpEff->SetFillColor(kWhite);
gOpEff->SetLineColor(kBlue);
gOpEff->SetLineWidth(2);
TGraph* gOpPurity = new TGraph(k, t, OpPurity);
gOpPurity->SetTitle("gOpPurity");
gOpPurity->SetName("gOpPurity");
gOpPurity->SetFillColor(kWhite);
gOpPurity->SetLineColor(kRed);
gOpPurity->SetLineWidth(2);
TGraph* gCCCohOp = new TGraph(k, t, CCCohOp);
gCCCohOp->SetTitle("gCCCohOp");
gCCCohOp->SetName("gCCCohOp");
gCCCohOp->SetFillColor(kWhite);
gCCCohOp->SetLineColor(kBlue);
gCCCohOp->SetLineWidth(2);
TGraph* gCCQEOp = new TGraph(k, t, CCQEOp);
gCCQEOp->SetTitle("gCCQEOp");
gCCQEOp->SetName("gCCQEOp");
gCCQEOp->SetFillColor(kWhite);
gCCQEOp->SetLineColor(kRed);
gCCQEOp->SetLineWidth(2);
TGraph* gCCResOp = new TGraph(k, t, CCResOp);
gCCResOp->SetTitle("gCCResOp");
gCCResOp->SetName("gCCResOp");
gCCResOp->SetFillColor(kWhite);
gCCResOp->SetLineColor(kGreen);
gCCResOp->SetLineWidth(2);
TGraph* gCCDISOp = new TGraph(k, t, CCDISOp);
gCCDISOp->SetTitle("gCCDISOp");
gCCDISOp->SetName("gCCDISOp");
gCCDISOp->SetFillColor(kWhite);
gCCDISOp->SetLineColor(kOrange);
gCCDISOp->SetLineWidth(2);
TGraph* gNCResOp = new TGraph(k, t, NCResOp);
gNCResOp->SetTitle("gNCResOp");
gNCResOp->SetName("gNCResOp");
gNCResOp->SetFillColor(kWhite);
gNCResOp->SetLineColor(kCyan);
gNCResOp->SetLineWidth(2);
TGraph* gNCDISOp = new TGraph(k, t, NCDISOp);
gNCDISOp->SetTitle("gNCDISOp");
gNCDISOp->SetName("gNCDISOp");
gNCDISOp->SetFillColor(kWhite);
gNCDISOp->SetLineColor(kMagenta);
gNCDISOp->SetLineWidth(2);
TGraph* gOtherOp = new TGraph(k, t, OtherOp);
gOtherOp->SetTitle("gOtherOp");
gOtherOp->SetName("gOtherOp");
gOtherOp->SetFillColor(kWhite);
gOtherOp->SetLineColor(14);
gOtherOp->SetLineWidth(2);
TGraph* gCosmicOp = new TGraph(k, t, CosmicOp);
gCosmicOp->SetTitle("gCosmicOp");
gCosmicOp->SetName("gCosmicOp");
gCosmicOp->SetFillColor(kWhite);
gCosmicOp->SetLineColor(kBlack);
gCosmicOp->SetLineWidth(2);

TCanvas *c7 = new TCanvas("c7", "OpFlash TGraphs");
c7->SetTicks();
c7->SetFillColor(kWhite);

gCCCohOp->GetXaxis()->SetTitle("Number of PE [PE]");
gCCCohOp->GetXaxis()->CenterTitle();

gCCCohOp->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohOp->GetYaxis()->CenterTitle();

gCCCohOp->Draw();
gCCQEOp->Draw("same");
gCCResOp->Draw("same");
gCCDISOp->Draw("same");
gNCResOp->Draw("same");
gNCDISOp->Draw("same");
gOtherOp->Draw("same");
gCosmicOp->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg7 = new TLegend();
leg7 = new TLegend(0.58,0.65,1.00,1.00);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Channel");
leg7->AddEntry(gCCCohOp,"CC-COH");
leg7->AddEntry(gCCQEOp,"CC-QE");
leg7->AddEntry(gCCResOp,"CC-Res");
leg7->AddEntry(gCCDISOp,"CC-DIS");
leg7->AddEntry(gNCResOp,"NC-Res");
leg7->AddEntry(gNCDISOp,"NC-DIS");
leg7->AddEntry(gOtherOp,"Other");
leg7->AddEntry(gCosmicOp,"Cosmic");
leg7->Draw();
// --------------------------


hCCCohConeAngle->Sumw2();
hCCQEConeAngle->Sumw2();
hCCResConeAngle->Sumw2();
hCCDISConeAngle->Sumw2();
hNCResConeAngle->Sumw2();
hNCDISConeAngle->Sumw2();
hCosmicConeAngle->Sumw2();
hOtherConeAngle->Sumw2();

hCCCohDoCA->Sumw2();
hCCQEDoCA->Sumw2();
hCCResDoCA->Sumw2();
hCCDISDoCA->Sumw2();
hNCResDoCA->Sumw2();
hNCDISDoCA->Sumw2();
hCosmicDoCA->Sumw2();
hOtherDoCA->Sumw2();

hCCCohVA->Sumw2();
hCCQEVA->Sumw2();
hCCResVA->Sumw2();
hCCDISVA->Sumw2();
hNCResVA->Sumw2();
hNCDISVA->Sumw2();
hCosmicVA->Sumw2();
hOtherVA->Sumw2();

hCCCohOp->Sumw2();
hCosmicOp->Sumw2();
hCCQEOp->Sumw2();
hCCResOp->Sumw2();
hCCDISOp->Sumw2();
hNCResOp->Sumw2();
hNCDISOp->Sumw2();
hOtherOp->Sumw2();


TCanvas *c0 = new TCanvas("c0", "Cone Angles");
c0->SetTicks();
c0->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohConeAngle->Scale(1/hCCCohConeAngle->Integral());
hCCQEConeAngle->Scale(1/hCCQEConeAngle->Integral());
hCCResConeAngle->Scale(1/hCCResConeAngle->Integral());
hCCDISConeAngle->Scale(1/hCCDISConeAngle->Integral());
hNCResConeAngle->Scale(1/hNCResConeAngle->Integral());
hNCDISConeAngle->Scale(1/hNCDISConeAngle->Integral());
hCosmicConeAngle->Scale(1/hCosmicConeAngle->Integral());
hOtherConeAngle->Scale(1/hOtherConeAngle->Integral());

hCCCohConeAngle->SetLineColor(kBlue);
hCCCohConeAngle->SetLineWidth(2);

hCCQEConeAngle->SetLineColor(kRed);
hCCQEConeAngle->SetLineWidth(2);

hCCResConeAngle->SetLineColor(kGreen);
hCCResConeAngle->SetLineWidth(2);

hCCDISConeAngle->SetLineColor(kOrange);
hCCDISConeAngle->SetLineWidth(2);

hNCResConeAngle->SetLineColor(kCyan);
hNCResConeAngle->SetLineWidth(2);

hNCDISConeAngle->SetLineColor(kMagenta);
hNCDISConeAngle->SetLineWidth(2);

hCosmicConeAngle->SetLineColor(kBlack);
hCosmicConeAngle->SetLineWidth(2);

hOtherConeAngle->SetLineColor(14);
hOtherConeAngle->SetLineWidth(2);

hCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hCCCohConeAngle->GetXaxis()->CenterTitle();

hCCCohConeAngle->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohConeAngle->GetYaxis()->CenterTitle();

hCCCohConeAngle->Draw("histo");
hCCQEConeAngle->Draw("histosame");
hCCResConeAngle->Draw("histosame");
hCCDISConeAngle->Draw("histosame");
hNCResConeAngle->Draw("histosame");
hNCDISConeAngle->Draw("histosame");
hCosmicConeAngle->Draw("histosame");
hOtherConeAngle->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg0 = new TLegend();
leg0 = new TLegend(0.58,0.65,1.00,1.00);
leg0->SetTextSize(0.04);
leg0->SetTextAlign(12);
leg0->SetFillColor(kWhite);
leg0->SetLineColor(kWhite);
leg0->SetShadowColor(kWhite);
leg0->SetHeader("Channel");
leg0->AddEntry(hCCCohConeAngle,"CC-COH");
leg0->AddEntry(hCCQEConeAngle,"CC-QE");
leg0->AddEntry(hCCResConeAngle,"CC-Res");
leg0->AddEntry(hCCDISConeAngle,"CC-DIS");
leg0->AddEntry(hNCResConeAngle,"NC-Res");
leg0->AddEntry(hNCDISConeAngle,"NC-DIS");
leg0->AddEntry(hOtherConeAngle,"Other");
leg0->AddEntry(hCosmicConeAngle,"Cosmic");
leg0->Draw();


TCanvas *c1 = new TCanvas("c1", "Distance of Closest Approach");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohDoCA->Scale(1/hCCCohDoCA->Integral());
hCCQEDoCA->Scale(1/hCCQEDoCA->Integral());
hCCResDoCA->Scale(1/hCCResDoCA->Integral());
hCCDISDoCA->Scale(1/hCCDISDoCA->Integral());
hNCResDoCA->Scale(1/hNCResDoCA->Integral());
hNCDISDoCA->Scale(1/hNCDISDoCA->Integral());
hCosmicDoCA->Scale(1/hCosmicDoCA->Integral());
hOtherDoCA->Scale(1/hOtherDoCA->Integral());

hCCCohDoCA->SetLineColor(kBlue);
hCCCohDoCA->SetLineWidth(2);

hCCQEDoCA->SetLineColor(kRed);
hCCQEDoCA->SetLineWidth(2);

hCCResDoCA->SetLineColor(kGreen);
hCCResDoCA->SetLineWidth(2);

hCCDISDoCA->SetLineColor(kOrange);
hCCDISDoCA->SetLineWidth(2);

hNCResDoCA->SetLineColor(kCyan);
hNCResDoCA->SetLineWidth(2);

hNCDISDoCA->SetLineColor(kMagenta);
hNCDISDoCA->SetLineWidth(2);

hCosmicDoCA->SetLineColor(kBlack);
hCosmicDoCA->SetLineWidth(2);

hOtherDoCA->SetLineColor(14);
hOtherDoCA->SetLineWidth(2);

hCCCohDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hCCCohDoCA->GetXaxis()->CenterTitle();

hCCCohDoCA->GetYaxis()->SetTitle("Normalized Events");
hCCCohDoCA->GetYaxis()->CenterTitle();

hCCCohDoCA->Draw("histo");
hCCQEDoCA->Draw("histosame");
hCCResDoCA->Draw("histosame");
hCCDISDoCA->Draw("histosame");
hNCResDoCA->Draw("histosame");
hNCDISDoCA->Draw("histosame");
hCosmicDoCA->Draw("histosame");
hOtherDoCA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Channel");
leg1->AddEntry(hCCCohDoCA,"CC-COH");
leg1->AddEntry(hCCQEDoCA,"CC-QE");
leg1->AddEntry(hCCResDoCA,"CC-Res");
leg1->AddEntry(hCCDISDoCA,"CC-DIS");
leg1->AddEntry(hNCResDoCA,"NC-Res");
leg1->AddEntry(hNCDISDoCA,"NC-DIS");
leg1->AddEntry(hOtherDoCA,"Other");
leg1->AddEntry(hCosmicDoCA,"Cosmic");
leg1->Draw();


TCanvas *c2 = new TCanvas("c2", "Vertex Activity");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA->Scale(1/hCCCohVA->Integral());
hCCQEVA->Scale(1/hCCQEVA->Integral());
hCCResVA->Scale(1/hCCResVA->Integral());
hCCDISVA->Scale(1/hCCDISVA->Integral());
hNCResVA->Scale(1/hNCResVA->Integral());
hNCDISVA->Scale(1/hNCDISVA->Integral());
hCosmicVA->Scale(1/hCosmicVA->Integral());
hOtherVA->Scale(1/hOtherVA->Integral());

hCCCohVA->SetLineColor(kBlue);
hCCCohVA->SetLineWidth(2);

hCCQEVA->SetLineColor(kRed);
hCCQEVA->SetLineWidth(2);

hCCResVA->SetLineColor(kGreen);
hCCResVA->SetLineWidth(2);

hCCDISVA->SetLineColor(kOrange);
hCCDISVA->SetLineWidth(2);

hNCResVA->SetLineColor(kCyan);
hNCResVA->SetLineWidth(2);

hNCDISVA->SetLineColor(kMagenta);
hNCDISVA->SetLineWidth(2);

hCosmicVA->SetLineColor(kBlack);
hCosmicVA->SetLineWidth(2);

hOtherVA->SetLineColor(14);
hOtherVA->SetLineWidth(2);

hCCCohVA->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA->GetXaxis()->CenterTitle();

hCCCohVA->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA->GetYaxis()->CenterTitle();

hCCCohVA->Draw("histo");
hCCQEVA->Draw("histosame");
hCCResVA->Draw("histosame");
hCCDISVA->Draw("histosame");
hNCResVA->Draw("histosame");
hNCDISVA->Draw("histosame");
hCosmicVA->Draw("histosame");
hOtherVA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Channel");
leg2->AddEntry(hCCCohVA,"CC-COH");
leg2->AddEntry(hCCQEVA,"CC-QE");
leg2->AddEntry(hCCResVA,"CC-Res");
leg2->AddEntry(hCCDISVA,"CC-DIS");
leg2->AddEntry(hNCResVA,"NC-Res");
leg2->AddEntry(hNCDISVA,"NC-DIS");
leg2->AddEntry(hOtherVA,"Other");
leg2->AddEntry(hCosmicVA,"Cosmic");
leg2->Draw();


TCanvas *c3 = new TCanvas("c3", "OpFlash PE");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohOp->Scale(1/hCCCohOp->Integral());
hCosmicOp->Scale(1/hCosmicOp->Integral());
hCCQEOp->Scale(1/hCCQEOp->Integral());
hCCResOp->Scale(1/hCCResOp->Integral());
hCCDISOp->Scale(1/hCCDISOp->Integral());
hNCResOp->Scale(1/hNCResOp->Integral());
hNCDISOp->Scale(1/hNCDISOp->Integral());
hOtherOp->Scale(1/hOtherOp->Integral());

hCCCohOp->SetLineColor(kBlue);
hCCCohOp->SetLineWidth(2);

hCosmicOp->SetLineColor(kBlack);
hCosmicOp->SetLineWidth(2);

hCCQEOp->SetLineColor(kRed);
hCCQEOp->SetLineWidth(2);

hCCResOp->SetLineColor(kGreen);
hCCResOp->SetLineWidth(2);

hCCDISOp->SetLineColor(kOrange);
hCCDISOp->SetLineWidth(2);

hNCResOp->SetLineColor(kCyan);
hNCResOp->SetLineWidth(2);

hNCDISOp->SetLineColor(kMagenta);
hNCDISOp->SetLineWidth(2);

hOtherOp->SetLineColor(14);
hOtherOp->SetLineWidth(2);

hCosmicOp->GetXaxis()->SetTitle("Number of PE [Number]");
hCosmicOp->GetXaxis()->CenterTitle();

hCosmicOp->GetYaxis()->SetTitle("Normalized Events [Number]");
hCosmicOp->GetYaxis()->CenterTitle();

hCCCohOp->Draw("histo");
hOtherOp->Draw("histosame");
hCCQEOp->Draw("histosame");
hCCResOp->Draw("histosame");
hCCDISOp->Draw("histosame");
hNCResOp->Draw("histosame");
hNCDISOp->Draw("histosame");
hCosmicOp->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Channel");
leg3->AddEntry(hCCCohOp,"CC-COH");
leg3->AddEntry(hCCQEOp,"CC-QE");
leg3->AddEntry(hCCResOp,"CC-Res");
leg3->AddEntry(hCCDISOp,"CC-DIS");
leg3->AddEntry(hNCResOp,"NC-Res");
leg3->AddEntry(hNCDISOp,"NC-DIS");
leg3->AddEntry(hOtherOp,"Other");
leg3->AddEntry(hCosmicOp,"Cosmic");
leg3->Draw();



TCanvas *c8 = new TCanvas("c8", "Cone Angle Purity and Efficiency");
c8->SetTicks();
c8->SetFillColor(kWhite);

gConeAngleEff->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gConeAngleEff->GetXaxis()->CenterTitle();

gConeAngleEff->GetYaxis()->SetTitle("Purity and Efficiency");
gConeAngleEff->GetYaxis()->CenterTitle();

gConeAngleEff->Draw();
gConeAnglePurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg8 = new TLegend();
leg8 = new TLegend(0.58,0.65,1.00,1.00);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Cone Angle");
leg8->AddEntry(gConeAngleEff,"Efficiency");
leg8->AddEntry(gConeAnglePurity,"Purity");
leg8->Draw();



TCanvas *c9 = new TCanvas("c9", "DoCA Purity and Efficiency");
c9->SetTicks();
c9->SetFillColor(kWhite);

gDoCAEff->GetXaxis()->SetTitle("DoCA [cm]");
gDoCAEff->GetXaxis()->CenterTitle();

gDoCAEff->GetYaxis()->SetTitle("Purity and Efficiency");
gDoCAEff->GetYaxis()->CenterTitle();

gDoCAEff->Draw();
gDoCAPurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg9 = new TLegend();
leg9 = new TLegend(0.58,0.65,1.00,1.00);
leg9->SetTextSize(0.04);
leg9->SetTextAlign(12);
leg9->SetFillColor(kWhite);
leg9->SetLineColor(kWhite);
leg9->SetShadowColor(kWhite);
leg9->SetHeader("DoCA");
leg9->AddEntry(gDoCAEff,"Efficiency");
leg9->AddEntry(gDoCAPurity,"Purity");
leg9->Draw();



TCanvas *c10 = new TCanvas("c10", "Vertex Activity Purity and Efficiency");
c10->SetTicks();
c10->SetFillColor(kWhite);

gVAEff->GetXaxis()->SetTitle("Vertex Activity [MeV]");
gVAEff->GetXaxis()->CenterTitle();

gVAEff->GetYaxis()->SetTitle("Purity and Efficiency");
gVAEff->GetYaxis()->CenterTitle();

gVAEff->Draw();
gVAPurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg10 = new TLegend();
leg10 = new TLegend(0.58,0.65,1.00,1.00);
leg10->SetTextSize(0.04);
leg10->SetTextAlign(12);
leg10->SetFillColor(kWhite);
leg10->SetLineColor(kWhite);
leg10->SetShadowColor(kWhite);
leg10->SetHeader("Vertex Activity");
leg10->AddEntry(gVAEff,"Efficiency");
leg10->AddEntry(gVAPurity,"Purity");
leg10->Draw();



TCanvas *c11 = new TCanvas("c11", "Cosmic Distance of Closest Approach");
c11->SetTicks();
c11->SetFillColor(kWhite);

hCosmicDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hCosmicDoCA->GetXaxis()->CenterTitle();

hCosmicDoCA->GetYaxis()->SetTitle("Normalized Events");
hCosmicDoCA->GetYaxis()->CenterTitle();

hCosmicDoCA->Draw("histo");



TCanvas *c12 = new TCanvas("c12", "Cone Angle Purity");
c12->SetTicks();
c12->SetFillColor(kWhite);

gConeAnglePurity->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gConeAnglePurity->GetXaxis()->CenterTitle();

gConeAnglePurity->GetYaxis()->SetTitle("Purity");
gConeAnglePurity->GetYaxis()->CenterTitle();

gConeAnglePurity->Draw();



TCanvas *c13 = new TCanvas("c13", "DoCA Purity");
c13->SetTicks();
c13->SetFillColor(kWhite);

gDoCAPurity->GetXaxis()->SetTitle("DoCA [cm]");
gDoCAPurity->GetXaxis()->CenterTitle();

gDoCAPurity->GetYaxis()->SetTitle("Purity");
gDoCAPurity->GetYaxis()->CenterTitle();

gDoCAPurity->Draw();



TCanvas *c14 = new TCanvas("c14", "Vertex Activity Purity");
c14->SetTicks();
c14->SetFillColor(kWhite);

gVAPurity->GetXaxis()->SetTitle("Vertex Activity [MeV]");
gVAPurity->GetXaxis()->CenterTitle();

gVAPurity->GetYaxis()->SetTitle("Purity");
gVAPurity->GetYaxis()->CenterTitle();

gVAPurity->Draw();






TCanvas *c15 = new TCanvas("c15", "Vertex Activity");
c15->SetTicks();
c15->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA1->Scale(1/hCCCohVA1->Integral());
hCCQEVA1->Scale(1/hCCQEVA1->Integral());
hCCResVA1->Scale(1/hCCResVA1->Integral());
hCCDISVA1->Scale(1/hCCDISVA1->Integral());
hNCResVA1->Scale(1/hNCResVA1->Integral());
hNCDISVA1->Scale(1/hNCDISVA1->Integral());
hCosmicVA1->Scale(1/hCosmicVA1->Integral());
hOtherVA1->Scale(1/hOtherVA1->Integral());

hCCCohVA1->SetLineColor(kBlue);
hCCCohVA1->SetLineWidth(2);

hCCQEVA1->SetLineColor(kRed);
hCCQEVA1->SetLineWidth(2);

hCCResVA1->SetLineColor(kGreen);
hCCResVA1->SetLineWidth(2);

hCCDISVA1->SetLineColor(kOrange);
hCCDISVA1->SetLineWidth(2);

hNCResVA1->SetLineColor(kCyan);
hNCResVA1->SetLineWidth(2);

hNCDISVA1->SetLineColor(kMagenta);
hNCDISVA1->SetLineWidth(2);

hCosmicVA1->SetLineColor(kBlack);
hCosmicVA1->SetLineWidth(2);

hOtherVA1->SetLineColor(14);
hOtherVA1->SetLineWidth(2);

hCCCohVA1->SetTitle("Vertex Activity for R = 5.0 cm");

hCCCohVA1->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA1->GetXaxis()->CenterTitle();

hCCCohVA1->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA1->GetYaxis()->CenterTitle();

hCCCohVA1->Draw("histo");
hCCQEVA1->Draw("histosame");
hCCResVA1->Draw("histosame");
hCCDISVA1->Draw("histosame");
hNCResVA1->Draw("histosame");
hNCDISVA1->Draw("histosame");
hCosmicVA1->Draw("histosame");
hOtherVA1->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg15 = new TLegend();
leg15 = new TLegend(0.58,0.65,1.00,1.00);
leg15->SetTextSize(0.04);
leg15->SetTextAlign(12);
leg15->SetFillColor(kWhite);
leg15->SetLineColor(kWhite);
leg15->SetShadowColor(kWhite);
leg15->SetHeader("Channel");
leg15->AddEntry(hCCCohVA1,"CC-COH");
leg15->AddEntry(hCCQEVA1,"CC-QE");
leg15->AddEntry(hCCResVA1,"CC-Res");
leg15->AddEntry(hCCDISVA1,"CC-DIS");
leg15->AddEntry(hNCResVA1,"NC-Res");
leg15->AddEntry(hNCDISVA1,"NC-DIS");
leg15->AddEntry(hOtherVA1,"Other");
leg15->AddEntry(hCosmicVA1,"Cosmic");
leg15->Draw();



TCanvas *c16 = new TCanvas("c16", "Vertex Activity");
c16->SetTicks();
c16->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA2->Scale(1/hCCCohVA2->Integral());
hCCQEVA2->Scale(1/hCCQEVA2->Integral());
hCCResVA2->Scale(1/hCCResVA2->Integral());
hCCDISVA2->Scale(1/hCCDISVA2->Integral());
hNCResVA2->Scale(1/hNCResVA2->Integral());
hNCDISVA2->Scale(1/hNCDISVA2->Integral());
hCosmicVA2->Scale(1/hCosmicVA2->Integral());
hOtherVA2->Scale(1/hOtherVA2->Integral());

hCCCohVA2->SetLineColor(kBlue);
hCCCohVA2->SetLineWidth(2);

hCCQEVA2->SetLineColor(kRed);
hCCQEVA2->SetLineWidth(2);

hCCResVA2->SetLineColor(kGreen);
hCCResVA2->SetLineWidth(2);

hCCDISVA2->SetLineColor(kOrange);
hCCDISVA2->SetLineWidth(2);

hNCResVA2->SetLineColor(kCyan);
hNCResVA2->SetLineWidth(2);

hNCDISVA2->SetLineColor(kMagenta);
hNCDISVA2->SetLineWidth(2);

hCosmicVA2->SetLineColor(kBlack);
hCosmicVA2->SetLineWidth(2);

hOtherVA2->SetLineColor(14);
hOtherVA2->SetLineWidth(2);

hCCCohVA2->SetTitle("Vertex Activity for R = 7.5 cm");

hCCCohVA2->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA2->GetXaxis()->CenterTitle();

hCCCohVA2->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA2->GetYaxis()->CenterTitle();

hCCCohVA2->Draw("histo");
hCCQEVA2->Draw("histosame");
hCCResVA2->Draw("histosame");
hCCDISVA2->Draw("histosame");
hNCResVA2->Draw("histosame");
hNCDISVA2->Draw("histosame");
hCosmicVA2->Draw("histosame");
hOtherVA2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg16 = new TLegend();
leg16 = new TLegend(0.58,0.65,1.00,1.00);
leg16->SetTextSize(0.04);
leg16->SetTextAlign(12);
leg16->SetFillColor(kWhite);
leg16->SetLineColor(kWhite);
leg16->SetShadowColor(kWhite);
leg16->SetHeader("Channel");
leg16->AddEntry(hCCCohVA2,"CC-COH");
leg16->AddEntry(hCCQEVA2,"CC-QE");
leg16->AddEntry(hCCResVA2,"CC-Res");
leg16->AddEntry(hCCDISVA2,"CC-DIS");
leg16->AddEntry(hNCResVA2,"NC-Res");
leg16->AddEntry(hNCDISVA2,"NC-DIS");
leg16->AddEntry(hOtherVA2,"Other");
leg16->AddEntry(hCosmicVA2,"Cosmic");
leg16->Draw();



TCanvas *c17 = new TCanvas("c17", "Vertex Activity");
c17->SetTicks();
c17->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA3->Scale(1/hCCCohVA3->Integral());
hCCQEVA3->Scale(1/hCCQEVA3->Integral());
hCCResVA3->Scale(1/hCCResVA3->Integral());
hCCDISVA3->Scale(1/hCCDISVA3->Integral());
hNCResVA3->Scale(1/hNCResVA3->Integral());
hNCDISVA3->Scale(1/hNCDISVA3->Integral());
hCosmicVA3->Scale(1/hCosmicVA3->Integral());
hOtherVA3->Scale(1/hOtherVA3->Integral());

hCCCohVA3->SetLineColor(kBlue);
hCCCohVA3->SetLineWidth(2);

hCCQEVA3->SetLineColor(kRed);
hCCQEVA3->SetLineWidth(2);

hCCResVA3->SetLineColor(kGreen);
hCCResVA3->SetLineWidth(2);

hCCDISVA3->SetLineColor(kOrange);
hCCDISVA3->SetLineWidth(2);

hNCResVA3->SetLineColor(kCyan);
hNCResVA3->SetLineWidth(2);

hNCDISVA3->SetLineColor(kMagenta);
hNCDISVA3->SetLineWidth(2);

hCosmicVA3->SetLineColor(kBlack);
hCosmicVA3->SetLineWidth(2);

hOtherVA3->SetLineColor(14);
hOtherVA3->SetLineWidth(2);

hCCCohVA3->SetTitle("Vertex Activity for R = 10.0 cm");

hCCCohVA3->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA3->GetXaxis()->CenterTitle();

hCCCohVA3->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA3->GetYaxis()->CenterTitle();

hCCCohVA3->Draw("histo");
hCCQEVA3->Draw("histosame");
hCCResVA3->Draw("histosame");
hCCDISVA3->Draw("histosame");
hNCResVA3->Draw("histosame");
hNCDISVA3->Draw("histosame");
hCosmicVA3->Draw("histosame");
hOtherVA3->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg17 = new TLegend();
leg17 = new TLegend(0.58,0.65,1.00,1.00);
leg17->SetTextSize(0.04);
leg17->SetTextAlign(12);
leg17->SetFillColor(kWhite);
leg17->SetLineColor(kWhite);
leg17->SetShadowColor(kWhite);
leg17->SetHeader("Channel");
leg17->AddEntry(hCCCohVA3,"CC-COH");
leg17->AddEntry(hCCQEVA3,"CC-QE");
leg17->AddEntry(hCCResVA3,"CC-Res");
leg17->AddEntry(hCCDISVA3,"CC-DIS");
leg17->AddEntry(hNCResVA3,"NC-Res");
leg17->AddEntry(hNCDISVA3,"NC-DIS");
leg17->AddEntry(hOtherVA3,"Other");
leg17->AddEntry(hCosmicVA3,"Cosmic");
leg17->Draw();



TCanvas *c18 = new TCanvas("c18", "Vertex Activity");
c18->SetTicks();
c18->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA4->Scale(1/hCCCohVA4->Integral());
hCCQEVA4->Scale(1/hCCQEVA4->Integral());
hCCResVA4->Scale(1/hCCResVA4->Integral());
hCCDISVA4->Scale(1/hCCDISVA4->Integral());
hNCResVA4->Scale(1/hNCResVA4->Integral());
hNCDISVA4->Scale(1/hNCDISVA4->Integral());
hCosmicVA4->Scale(1/hCosmicVA4->Integral());
hOtherVA4->Scale(1/hOtherVA4->Integral());

hCCCohVA4->SetLineColor(kBlue);
hCCCohVA4->SetLineWidth(2);

hCCQEVA4->SetLineColor(kRed);
hCCQEVA4->SetLineWidth(2);

hCCResVA4->SetLineColor(kGreen);
hCCResVA4->SetLineWidth(2);

hCCDISVA4->SetLineColor(kOrange);
hCCDISVA4->SetLineWidth(2);

hNCResVA4->SetLineColor(kCyan);
hNCResVA4->SetLineWidth(2);

hNCDISVA4->SetLineColor(kMagenta);
hNCDISVA4->SetLineWidth(2);

hCosmicVA4->SetLineColor(kBlack);
hCosmicVA4->SetLineWidth(2);

hOtherVA4->SetLineColor(14);
hOtherVA4->SetLineWidth(2);

hCCCohVA4->SetTitle("Vertex Activity for R = 12.5 cm");

hCCCohVA4->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA4->GetXaxis()->CenterTitle();

hCCCohVA4->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA4->GetYaxis()->CenterTitle();

hCCCohVA4->Draw("histo");
hCCQEVA4->Draw("histosame");
hCCResVA4->Draw("histosame");
hCCDISVA4->Draw("histosame");
hNCResVA4->Draw("histosame");
hNCDISVA4->Draw("histosame");
hCosmicVA4->Draw("histosame");
hOtherVA4->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg18 = new TLegend();
leg18 = new TLegend(0.58,0.65,1.00,1.00);
leg18->SetTextSize(0.04);
leg18->SetTextAlign(12);
leg18->SetFillColor(kWhite);
leg18->SetLineColor(kWhite);
leg18->SetShadowColor(kWhite);
leg18->SetHeader("Channel");
leg18->AddEntry(hCCCohVA4,"CC-COH");
leg18->AddEntry(hCCQEVA4,"CC-QE");
leg18->AddEntry(hCCResVA4,"CC-Res");
leg18->AddEntry(hCCDISVA4,"CC-DIS");
leg18->AddEntry(hNCResVA4,"NC-Res");
leg18->AddEntry(hNCDISVA4,"NC-DIS");
leg18->AddEntry(hOtherVA4,"Other");
leg18->AddEntry(hCosmicVA4,"Cosmic");
leg18->Draw();



TCanvas *c19 = new TCanvas("c19", "Vertex Activity");
c19->SetTicks();
c19->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA5->Scale(1/hCCCohVA5->Integral());
hCCQEVA5->Scale(1/hCCQEVA5->Integral());
hCCResVA5->Scale(1/hCCResVA5->Integral());
hCCDISVA5->Scale(1/hCCDISVA5->Integral());
hNCResVA5->Scale(1/hNCResVA5->Integral());
hNCDISVA5->Scale(1/hNCDISVA5->Integral());
hCosmicVA5->Scale(1/hCosmicVA5->Integral());
hOtherVA5->Scale(1/hOtherVA5->Integral());

hCCCohVA5->SetLineColor(kBlue);
hCCCohVA5->SetLineWidth(2);

hCCQEVA5->SetLineColor(kRed);
hCCQEVA5->SetLineWidth(2);

hCCResVA5->SetLineColor(kGreen);
hCCResVA5->SetLineWidth(2);

hCCDISVA5->SetLineColor(kOrange);
hCCDISVA5->SetLineWidth(2);

hNCResVA5->SetLineColor(kCyan);
hNCResVA5->SetLineWidth(2);

hNCDISVA5->SetLineColor(kMagenta);
hNCDISVA5->SetLineWidth(2);

hCosmicVA5->SetLineColor(kBlack);
hCosmicVA5->SetLineWidth(2);

hOtherVA5->SetLineColor(14);
hOtherVA5->SetLineWidth(2);

hCCCohVA5->SetTitle("Vertex Activity for R = 15.0 cm");

hCCCohVA5->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA5->GetXaxis()->CenterTitle();

hCCCohVA5->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA5->GetYaxis()->CenterTitle();

hCCCohVA5->Draw("histo");
hCCQEVA5->Draw("histosame");
hCCResVA5->Draw("histosame");
hCCDISVA5->Draw("histosame");
hNCResVA5->Draw("histosame");
hNCDISVA5->Draw("histosame");
hCosmicVA5->Draw("histosame");
hOtherVA5->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg19 = new TLegend();
leg19 = new TLegend(0.58,0.65,1.00,1.00);
leg19->SetTextSize(0.04);
leg19->SetTextAlign(12);
leg19->SetFillColor(kWhite);
leg19->SetLineColor(kWhite);
leg19->SetShadowColor(kWhite);
leg19->SetHeader("Channel");
leg19->AddEntry(hCCCohVA5,"CC-COH");
leg19->AddEntry(hCCQEVA5,"CC-QE");
leg19->AddEntry(hCCResVA5,"CC-Res");
leg19->AddEntry(hCCDISVA5,"CC-DIS");
leg19->AddEntry(hNCResVA5,"NC-Res");
leg19->AddEntry(hNCDISVA5,"NC-DIS");
leg19->AddEntry(hOtherVA5,"Other");
leg19->AddEntry(hCosmicVA5,"Cosmic");
leg19->Draw();



TCanvas *c20 = new TCanvas("c20", "Vertex Activity");
c20->SetTicks();
c20->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA6->Scale(1/hCCCohVA6->Integral());
hCCQEVA6->Scale(1/hCCQEVA6->Integral());
hCCResVA6->Scale(1/hCCResVA6->Integral());
hCCDISVA6->Scale(1/hCCDISVA6->Integral());
hNCResVA6->Scale(1/hNCResVA6->Integral());
hNCDISVA6->Scale(1/hNCDISVA6->Integral());
hCosmicVA6->Scale(1/hCosmicVA6->Integral());
hOtherVA6->Scale(1/hOtherVA6->Integral());

hCCCohVA6->SetLineColor(kBlue);
hCCCohVA6->SetLineWidth(2);

hCCQEVA6->SetLineColor(kRed);
hCCQEVA6->SetLineWidth(2);

hCCResVA6->SetLineColor(kGreen);
hCCResVA6->SetLineWidth(2);

hCCDISVA6->SetLineColor(kOrange);
hCCDISVA6->SetLineWidth(2);

hNCResVA6->SetLineColor(kCyan);
hNCResVA6->SetLineWidth(2);

hNCDISVA6->SetLineColor(kMagenta);
hNCDISVA6->SetLineWidth(2);

hCosmicVA6->SetLineColor(kBlack);
hCosmicVA6->SetLineWidth(2);

hOtherVA6->SetLineColor(14);
hOtherVA6->SetLineWidth(2);

hCCCohVA6->SetTitle("Vertex Activity for R = 17.5 cm");

hCCCohVA6->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA6->GetXaxis()->CenterTitle();

hCCCohVA6->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA6->GetYaxis()->CenterTitle();

hCCCohVA6->Draw("histo");
hCCQEVA6->Draw("histosame");
hCCResVA6->Draw("histosame");
hCCDISVA6->Draw("histosame");
hNCResVA6->Draw("histosame");
hNCDISVA6->Draw("histosame");
hCosmicVA6->Draw("histosame");
hOtherVA6->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg20 = new TLegend();
leg20 = new TLegend(0.58,0.65,1.00,1.00);
leg20->SetTextSize(0.04);
leg20->SetTextAlign(12);
leg20->SetFillColor(kWhite);
leg20->SetLineColor(kWhite);
leg20->SetShadowColor(kWhite);
leg20->SetHeader("Channel");
leg20->AddEntry(hCCCohVA6,"CC-COH");
leg20->AddEntry(hCCQEVA6,"CC-QE");
leg20->AddEntry(hCCResVA6,"CC-Res");
leg20->AddEntry(hCCDISVA6,"CC-DIS");
leg20->AddEntry(hNCResVA6,"NC-Res");
leg20->AddEntry(hNCDISVA6,"NC-DIS");
leg20->AddEntry(hOtherVA6,"Other");
leg20->AddEntry(hCosmicVA6,"Cosmic");
leg20->Draw();



TCanvas *c21 = new TCanvas("c21", "Vertex Activity");
c21->SetTicks();
c21->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA7->Scale(1/hCCCohVA7->Integral());
hCCQEVA7->Scale(1/hCCQEVA7->Integral());
hCCResVA7->Scale(1/hCCResVA7->Integral());
hCCDISVA7->Scale(1/hCCDISVA7->Integral());
hNCResVA7->Scale(1/hNCResVA7->Integral());
hNCDISVA7->Scale(1/hNCDISVA7->Integral());
hCosmicVA7->Scale(1/hCosmicVA7->Integral());
hOtherVA7->Scale(1/hOtherVA7->Integral());

hCCCohVA7->SetLineColor(kBlue);
hCCCohVA7->SetLineWidth(2);

hCCQEVA7->SetLineColor(kRed);
hCCQEVA7->SetLineWidth(2);

hCCResVA7->SetLineColor(kGreen);
hCCResVA7->SetLineWidth(2);

hCCDISVA7->SetLineColor(kOrange);
hCCDISVA7->SetLineWidth(2);

hNCResVA7->SetLineColor(kCyan);
hNCResVA7->SetLineWidth(2);

hNCDISVA7->SetLineColor(kMagenta);
hNCDISVA7->SetLineWidth(2);

hCosmicVA7->SetLineColor(kBlack);
hCosmicVA7->SetLineWidth(2);

hOtherVA7->SetLineColor(14);
hOtherVA7->SetLineWidth(2);

hCCCohVA7->SetTitle("Vertex Activity for R = 20.0 cm");

hCCCohVA7->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA7->GetXaxis()->CenterTitle();

hCCCohVA7->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA7->GetYaxis()->CenterTitle();

hCCCohVA7->Draw("histo");
hCCQEVA7->Draw("histosame");
hCCResVA7->Draw("histosame");
hCCDISVA7->Draw("histosame");
hNCResVA7->Draw("histosame");
hNCDISVA7->Draw("histosame");
hCosmicVA7->Draw("histosame");
hOtherVA7->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg21 = new TLegend();
leg21 = new TLegend(0.58,0.65,1.00,1.00);
leg21->SetTextSize(0.04);
leg21->SetTextAlign(12);
leg21->SetFillColor(kWhite);
leg21->SetLineColor(kWhite);
leg21->SetShadowColor(kWhite);
leg21->SetHeader("Channel");
leg21->AddEntry(hCCCohVA7,"CC-COH");
leg21->AddEntry(hCCQEVA7,"CC-QE");
leg21->AddEntry(hCCResVA7,"CC-Res");
leg21->AddEntry(hCCDISVA7,"CC-DIS");
leg21->AddEntry(hNCResVA7,"NC-Res");
leg21->AddEntry(hNCDISVA7,"NC-DIS");
leg21->AddEntry(hOtherVA7,"Other");
leg21->AddEntry(hCosmicVA7,"Cosmic");
leg21->Draw();



TCanvas *c22 = new TCanvas("c22", "Vertex Activity");
c22->SetTicks();
c22->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA8->Scale(1/hCCCohVA8->Integral());
hCCQEVA8->Scale(1/hCCQEVA8->Integral());
hCCResVA8->Scale(1/hCCResVA8->Integral());
hCCDISVA8->Scale(1/hCCDISVA8->Integral());
hNCResVA8->Scale(1/hNCResVA8->Integral());
hNCDISVA8->Scale(1/hNCDISVA8->Integral());
hCosmicVA8->Scale(1/hCosmicVA8->Integral());
hOtherVA8->Scale(1/hOtherVA8->Integral());

hCCCohVA8->SetLineColor(kBlue);
hCCCohVA8->SetLineWidth(2);

hCCQEVA8->SetLineColor(kRed);
hCCQEVA8->SetLineWidth(2);

hCCResVA8->SetLineColor(kGreen);
hCCResVA8->SetLineWidth(2);

hCCDISVA8->SetLineColor(kOrange);
hCCDISVA8->SetLineWidth(2);

hNCResVA8->SetLineColor(kCyan);
hNCResVA8->SetLineWidth(2);

hNCDISVA8->SetLineColor(kMagenta);
hNCDISVA8->SetLineWidth(2);

hCosmicVA8->SetLineColor(kBlack);
hCosmicVA8->SetLineWidth(2);

hOtherVA8->SetLineColor(14);
hOtherVA8->SetLineWidth(2);

hCCCohVA8->SetTitle("Vertex Activity for R = 22.5 cm");

hCCCohVA8->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA8->GetXaxis()->CenterTitle();

hCCCohVA8->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA8->GetYaxis()->CenterTitle();

hCCCohVA8->Draw("histo");
hCCQEVA8->Draw("histosame");
hCCResVA8->Draw("histosame");
hCCDISVA8->Draw("histosame");
hNCResVA8->Draw("histosame");
hNCDISVA8->Draw("histosame");
hCosmicVA8->Draw("histosame");
hOtherVA8->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg22 = new TLegend();
leg22 = new TLegend(0.58,0.65,1.00,1.00);
leg22->SetTextSize(0.04);
leg22->SetTextAlign(12);
leg22->SetFillColor(kWhite);
leg22->SetLineColor(kWhite);
leg22->SetShadowColor(kWhite);
leg22->SetHeader("Channel");
leg22->AddEntry(hCCCohVA8,"CC-COH");
leg22->AddEntry(hCCQEVA8,"CC-QE");
leg22->AddEntry(hCCResVA8,"CC-Res");
leg22->AddEntry(hCCDISVA8,"CC-DIS");
leg22->AddEntry(hNCResVA8,"NC-Res");
leg22->AddEntry(hNCDISVA8,"NC-DIS");
leg22->AddEntry(hOtherVA8,"Other");
leg22->AddEntry(hCosmicVA8,"Cosmic");
leg22->Draw();



TCanvas *c23 = new TCanvas("c23", "Vertex Activity");
c23->SetTicks();
c23->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA9->Scale(1/hCCCohVA9->Integral());
hCCQEVA9->Scale(1/hCCQEVA9->Integral());
hCCResVA9->Scale(1/hCCResVA9->Integral());
hCCDISVA9->Scale(1/hCCDISVA9->Integral());
hNCResVA9->Scale(1/hNCResVA9->Integral());
hNCDISVA9->Scale(1/hNCDISVA9->Integral());
hCosmicVA9->Scale(1/hCosmicVA9->Integral());
hOtherVA9->Scale(1/hOtherVA9->Integral());

hCCCohVA9->SetLineColor(kBlue);
hCCCohVA9->SetLineWidth(2);

hCCQEVA9->SetLineColor(kRed);
hCCQEVA9->SetLineWidth(2);

hCCResVA9->SetLineColor(kGreen);
hCCResVA9->SetLineWidth(2);

hCCDISVA9->SetLineColor(kOrange);
hCCDISVA9->SetLineWidth(2);

hNCResVA9->SetLineColor(kCyan);
hNCResVA9->SetLineWidth(2);

hNCDISVA9->SetLineColor(kMagenta);
hNCDISVA9->SetLineWidth(2);

hCosmicVA9->SetLineColor(kBlack);
hCosmicVA9->SetLineWidth(2);

hOtherVA9->SetLineColor(14);
hOtherVA9->SetLineWidth(2);

hCCCohVA9->SetTitle("Vertex Activity for R = 25.0 cm");

hCCCohVA9->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA9->GetXaxis()->CenterTitle();

hCCCohVA9->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA9->GetYaxis()->CenterTitle();

hCCCohVA9->Draw("histo");
hCCQEVA9->Draw("histosame");
hCCResVA9->Draw("histosame");
hCCDISVA9->Draw("histosame");
hNCResVA9->Draw("histosame");
hNCDISVA9->Draw("histosame");
hCosmicVA9->Draw("histosame");
hOtherVA9->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg23 = new TLegend();
leg23 = new TLegend(0.58,0.65,1.00,1.00);
leg23->SetTextSize(0.04);
leg23->SetTextAlign(12);
leg23->SetFillColor(kWhite);
leg23->SetLineColor(kWhite);
leg23->SetShadowColor(kWhite);
leg23->SetHeader("Channel");
leg23->AddEntry(hCCCohVA9,"CC-COH");
leg23->AddEntry(hCCQEVA9,"CC-QE");
leg23->AddEntry(hCCResVA9,"CC-Res");
leg23->AddEntry(hCCDISVA9,"CC-DIS");
leg23->AddEntry(hNCResVA9,"NC-Res");
leg23->AddEntry(hNCDISVA9,"NC-DIS");
leg23->AddEntry(hOtherVA9,"Other");
leg23->AddEntry(hCosmicVA9,"Cosmic");
leg23->Draw();



TCanvas *c24 = new TCanvas("c24", "Vertex Activity");
c24->SetTicks();
c24->SetFillColor(kWhite);

hCCCohVA10->SetLineColor(kGreen);
hCCCohVA10->SetLineWidth(2);

hCCCohVA11->SetLineColor(kRed);
hCCCohVA11->SetLineWidth(2);

hCCCohVA12->SetLineColor(kBlue);
hCCCohVA12->SetLineWidth(2);

hCCCohVA13->SetLineColor(kOrange);
hCCCohVA13->SetLineWidth(2);

hCCCohVA14->SetLineColor(kCyan);
hCCCohVA14->SetLineWidth(2);

hCCCohVA15->SetLineColor(kMagenta);
hCCCohVA15->SetLineWidth(2);

hCCCohVA16->SetLineColor(kBlack);
hCCCohVA16->SetLineWidth(2);

hCCCohVA17->SetLineColor(14);
hCCCohVA17->SetLineWidth(2);

hCCCohVA18->SetLineColor(kYellow);
hCCCohVA18->SetLineWidth(2);

hCCCohVA10->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA10->GetXaxis()->CenterTitle();

hCCCohVA10->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA10->GetYaxis()->CenterTitle();

hCCCohVA10->Draw("histo");
hCCCohVA11->Draw("histosame");
hCCCohVA12->Draw("histosame");
hCCCohVA13->Draw("histosame");
hCCCohVA14->Draw("histosame");
hCCCohVA15->Draw("histosame");
hCCCohVA16->Draw("histosame");
hCCCohVA17->Draw("histosame");
hCCCohVA18->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg24 = new TLegend();
leg24 = new TLegend(0.58,0.65,1.00,1.00);
leg24->SetTextSize(0.04);
leg24->SetTextAlign(12);
leg24->SetFillColor(kWhite);
leg24->SetLineColor(kWhite);
leg24->SetShadowColor(kWhite);
leg24->SetHeader("Channel");
leg24->AddEntry(hCCCohVA10,"R =  5.0 cm");
leg24->AddEntry(hCCCohVA11,"R =  7.5 cm");
leg24->AddEntry(hCCCohVA12,"R = 10.0 cm");
leg24->AddEntry(hCCCohVA13,"R = 12.5 cm");
leg24->AddEntry(hCCCohVA14,"R = 15.0 cm");
leg24->AddEntry(hCCCohVA15,"R = 17.5 cm");
leg24->AddEntry(hCCCohVA16,"R = 20.0 cm");
leg24->AddEntry(hCCCohVA17,"R = 22.5 cm");
leg24->AddEntry(hCCCohVA18,"R = 25.0 cm");
leg24->Draw();



TCanvas *c25 = new TCanvas("c25", "Stacked Cone Angle");
c25->SetTicks();
c25->SetFillColor(kWhite);

hSConeAngle->Draw();



TCanvas *c26 = new TCanvas("c26", "Stacked Vertex Activity");
c26->SetTicks();
c26->SetFillColor(kWhite);

hSVA->Draw();
}
