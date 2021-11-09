#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("CV1/MC_Histograms_Run1_DV_CV1.root"); // <-- File for Run1 Regular MC Sample
TFile *f2 = new TFile("CV1/POT_Counting/CV1_POT.root"); // <-- File for POT of Run1 Regular MC Sample
TFile *f3 = new TFile("LYDown/MC_Histograms_Run1_DV_LYDown.root"); // <-- File for Run1 Detector Variation WireModX Sample
TFile *f4 = new TFile("LYDown/POT_Counting/LYDown_POT.root"); // <-- File for POT of Run1 Detector Variation WireModX Sample
TFile *f5 = new TFile("LYAtten/MC_Histograms_Run1_DV_LYAtten.root"); // <-- File for Run1 Detector Variation WireModYZ Sample
TFile *f6 = new TFile("LYAtten/POT_Counting/LYAtten_POT.root"); // <-- File for POT of Run1 Detector Variation WireModYZ Sample
TFile *f7 = new TFile("LYRayleigh/MC_Histograms_Run1_DV_LYRayleigh.root"); // <-- File for Run1 Detector Variation WireModThetaXZ Sample
TFile *f8 = new TFile("LYRayleigh/POT_Counting/LYRayleigh_POT.root"); // <-- File for POT of Run1 Detector Variation WireModThetaXZ Sample





TH1D *hT = (TH1D*)f1->Get("hT");
TH1D *hTWireModX = (TH1D*)f3->Get("hT");
TH1D *hTWireModYZ = (TH1D*)f5->Get("hT");
TH1D *hTWireModThetaXZ = (TH1D*)f7->Get("hT");

hT->Sumw2();
hTWireModX->Sumw2();
hTWireModYZ->Sumw2();
hTWireModThetaXZ->Sumw2();


TH1D* hTC = (TH1D*)hT->Clone();
TH1D* hTWireModXC = (TH1D*)hTWireModX->Clone();
TH1D* hTWireModYZC = (TH1D*)hTWireModYZ->Clone();
TH1D* hTWireModThetaXZC = (TH1D*)hTWireModThetaXZ->Clone();


TH1D *hTOA = (TH1D*)f1->Get("hTOA");
TH1D *hTOAWireModX = (TH1D*)f3->Get("hTOA");
TH1D *hTOAWireModYZ = (TH1D*)f5->Get("hTOA");
TH1D *hTOAWireModThetaXZ = (TH1D*)f7->Get("hTOA");

hTOA->Sumw2();
hTOAWireModX->Sumw2();
hTOAWireModYZ->Sumw2();
hTOAWireModThetaXZ->Sumw2();


TH1D* hTOAC = (TH1D*)hTOA->Clone();
TH1D* hTOAWireModXC = (TH1D*)hTOAWireModX->Clone();
TH1D* hTOAWireModYZC = (TH1D*)hTOAWireModYZ->Clone();
TH1D* hTOAWireModThetaXZC = (TH1D*)hTOAWireModThetaXZ->Clone();


TH1D *hRecoMuonCandidateMomentum = (TH1D*)f1->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModX = (TH1D*)f3->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModYZ = (TH1D*)f5->Get("hRecoMuonCandidateMomentum");
TH1D *hRecoMuonCandidateMomentumWireModThetaXZ = (TH1D*)f7->Get("hRecoMuonCandidateMomentum");

hRecoMuonCandidateMomentum->Sumw2();
hRecoMuonCandidateMomentumWireModX->Sumw2();
hRecoMuonCandidateMomentumWireModYZ->Sumw2();
hRecoMuonCandidateMomentumWireModThetaXZ->Sumw2();


TH1D* hRecoMuonCandidateMomentumC = (TH1D*)hRecoMuonCandidateMomentum->Clone();
TH1D* hRecoMuonCandidateMomentumWireModXC = (TH1D*)hRecoMuonCandidateMomentumWireModX->Clone();
TH1D* hRecoMuonCandidateMomentumWireModYZC = (TH1D*)hRecoMuonCandidateMomentumWireModYZ->Clone();
TH1D* hRecoMuonCandidateMomentumWireModThetaXZC = (TH1D*)hRecoMuonCandidateMomentumWireModThetaXZ->Clone();


TH1D *hRecoMuonCandidateMomentumOA = (TH1D*)f1->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModX = (TH1D*)f3->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModYZ = (TH1D*)f5->Get("hRecoMuonCandidateMomentumAfterOA");
TH1D *hRecoMuonCandidateMomentumOAWireModThetaXZ = (TH1D*)f7->Get("hRecoMuonCandidateMomentumAfterOA");

hRecoMuonCandidateMomentumOA->Sumw2();
hRecoMuonCandidateMomentumOAWireModX->Sumw2();
hRecoMuonCandidateMomentumOAWireModYZ->Sumw2();
hRecoMuonCandidateMomentumOAWireModThetaXZ->Sumw2();


TH1D* hRecoMuonCandidateMomentumOAC = (TH1D*)hRecoMuonCandidateMomentumOA->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModXC = (TH1D*)hRecoMuonCandidateMomentumOAWireModX->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModYZC = (TH1D*)hRecoMuonCandidateMomentumOAWireModYZ->Clone();
TH1D* hRecoMuonCandidateMomentumOAWireModThetaXZC = (TH1D*)hRecoMuonCandidateMomentumOAWireModThetaXZ->Clone();


TH1D *hRecoPionCandidateMomentum = (TH1D*)f1->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModX = (TH1D*)f3->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModYZ = (TH1D*)f5->Get("hRecoPionCandidateMomentum");
TH1D *hRecoPionCandidateMomentumWireModThetaXZ = (TH1D*)f7->Get("hRecoPionCandidateMomentum");

hRecoPionCandidateMomentum->Sumw2();
hRecoPionCandidateMomentumWireModX->Sumw2();
hRecoPionCandidateMomentumWireModYZ->Sumw2();
hRecoPionCandidateMomentumWireModThetaXZ->Sumw2();


TH1D* hRecoPionCandidateMomentumC = (TH1D*)hRecoPionCandidateMomentum->Clone();
TH1D* hRecoPionCandidateMomentumWireModXC = (TH1D*)hRecoPionCandidateMomentumWireModX->Clone();
TH1D* hRecoPionCandidateMomentumWireModYZC = (TH1D*)hRecoPionCandidateMomentumWireModYZ->Clone();
TH1D* hRecoPionCandidateMomentumWireModThetaXZC = (TH1D*)hRecoPionCandidateMomentumWireModThetaXZ->Clone();


TH1D *hRecoPionCandidateMomentumOA = (TH1D*)f1->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModX = (TH1D*)f3->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModYZ = (TH1D*)f5->Get("hRecoPionCandidateMomentumAfterOA");
TH1D *hRecoPionCandidateMomentumOAWireModThetaXZ = (TH1D*)f7->Get("hRecoPionCandidateMomentumAfterOA");

hRecoPionCandidateMomentumOA->Sumw2();
hRecoPionCandidateMomentumOAWireModX->Sumw2();
hRecoPionCandidateMomentumOAWireModYZ->Sumw2();
hRecoPionCandidateMomentumOAWireModThetaXZ->Sumw2();


TH1D* hRecoPionCandidateMomentumOAC = (TH1D*)hRecoPionCandidateMomentumOA->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModXC = (TH1D*)hRecoPionCandidateMomentumOAWireModX->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModYZC = (TH1D*)hRecoPionCandidateMomentumOAWireModYZ->Clone();
TH1D* hRecoPionCandidateMomentumOAWireModThetaXZC = (TH1D*)hRecoPionCandidateMomentumOAWireModThetaXZ->Clone();





TH1D *hPOTCountingBKGD = (TH1D*)f2->Get("hPOTCounting");
TH1D *hPOTCountingWireModX = (TH1D*)f4->Get("hPOTCounting");
TH1D *hPOTCountingWireModYZ = (TH1D*)f6->Get("hPOTCounting");
TH1D *hPOTCountingWireModThetaXZ = (TH1D*)f8->Get("hPOTCounting");

hPOTCountingBKGD->Sumw2();
hPOTCountingWireModX->Sumw2();
hPOTCountingWireModYZ->Sumw2();
hPOTCountingWireModThetaXZ->Sumw2();





// |-------------------------------------------|
// |--- Setting The Scale Factors Using POT ---|
// |-------------------------------------------|
double Run1ScaleFactorMC = (5.21E19)/((hPOTCountingBKGD->Integral())*(hPOTCountingBKGD->GetMean()));
std::cout<<"Run1ScaleFactorMC = "<<Run1ScaleFactorMC<<std::endl;
double Run1ScaleFactorWireModX = (5.21E19)/((hPOTCountingWireModX->Integral())*(hPOTCountingWireModX->GetMean()));
std::cout<<"Run1ScaleFactorWireModX = "<<Run1ScaleFactorWireModX<<std::endl;
double Run1ScaleFactorWireModYZ = (5.21E19)/((hPOTCountingWireModYZ->Integral())*(hPOTCountingWireModYZ->GetMean()));
std::cout<<"Run1ScaleFactorWireModYZ = "<<Run1ScaleFactorWireModYZ<<std::endl;
double Run1ScaleFactorWireModThetaXZ = (5.21E19)/((hPOTCountingWireModThetaXZ->Integral())*(hPOTCountingWireModThetaXZ->GetMean()));
std::cout<<"Run1ScaleFactorWireModThetaXZ = "<<Run1ScaleFactorWireModThetaXZ<<std::endl;
// |-------------------------------------------|


// |====================================|
// |=== Rebinning Variables Are Here ===|
// |====================================|
int RebinT = 100; // Variable used to rebin the |t| Plots
int RebinP = 20; // Variable used to rebin the Momentum Plots
// |====================================|





TCanvas *c1 = new TCanvas("c1", "Reco |t| After 2 Tracks");
c1->SetTicks();
c1->SetFillColor(kWhite);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Scale(Run1ScaleFactorMC);
hT->Rebin(RebinT);
hTWireModX->SetLineColor(kRed);
hTWireModX->SetLineStyle(9);
hTWireModX->SetLineWidth(2);
hTWireModX->Scale(Run1ScaleFactorWireModX);
hTWireModX->Rebin(RebinT);
hTWireModYZ->SetLineColor(kGreen);
hTWireModYZ->SetLineStyle(9);
hTWireModYZ->SetLineWidth(2);
hTWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hTWireModYZ->Rebin(RebinT);
hTWireModThetaXZ->SetLineColor(kBlue);
hTWireModThetaXZ->SetLineStyle(9);
hTWireModThetaXZ->SetLineWidth(2);
hTWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hTWireModThetaXZ->Rebin(RebinT);


hT->Draw("HIST");
hTWireModX->Draw("HISTsame");
hTWireModYZ->Draw("HISTsame");
hTWireModThetaXZ->Draw("HISTsame");
hT->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hT->GetXaxis()->CenterTitle();
hT->GetYaxis()->SetTitle("Number of Events");
hT->GetYaxis()->CenterTitle();

hT->Draw("HISTsame");
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
leg1->AddEntry(hT,"Run 1 CV");
leg1->AddEntry(hTWireModX,"Run 1 DV LYDown");
leg1->AddEntry(hTWireModYZ,"Run 1 DV LYAtten");
leg1->AddEntry(hTWireModThetaXZ,"Run 1 DV LYRayleigh");
leg1->Draw();





TCanvas *c2 = new TCanvas("c2", "|t| Fluctuation After 2 Tracks");
c2->SetTicks();
c2->SetFillColor(kWhite);

hTC->SetLineColor(kBlack);
hTC->SetLineWidth(2);
hTC->Scale(Run1ScaleFactorMC);
hTC->Rebin(RebinT);
hTWireModXC->SetLineColor(kRed);
hTWireModXC->SetLineStyle(9);
hTWireModXC->SetLineWidth(2);
hTWireModXC->Scale(Run1ScaleFactorWireModX);
hTWireModXC->Rebin(RebinT);
hTWireModYZC->SetLineColor(kGreen);
hTWireModYZC->SetLineStyle(9);
hTWireModYZC->SetLineWidth(2);
hTWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hTWireModYZC->Rebin(RebinT);
hTWireModThetaXZC->SetLineColor(kBlue);
hTWireModThetaXZC->SetLineStyle(9);
hTWireModThetaXZC->SetLineWidth(2);
hTWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hTWireModThetaXZC->Rebin(RebinT);


// Making the Fluctuations
hTWireModXC->Add(hTC, -1);
hTWireModXC->Divide(hTC);
hTWireModYZC->Add(hTC, -1);
hTWireModYZC->Divide(hTC);
hTWireModThetaXZC->Add(hTC, -1);
hTWireModThetaXZC->Divide(hTC);


hTWireModXC->Draw("HIST");
hTWireModYZC->Draw("HISTsame");
hTWireModThetaXZC->Draw("HISTsame");
hTWireModXC->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTWireModXC->GetXaxis()->CenterTitle();
hTWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hTWireModXC->GetYaxis()->CenterTitle();

hTWireModXC->Draw("HISTsame");
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
leg2->AddEntry(hTWireModXC,"LYDown");
leg2->AddEntry(hTWireModYZC,"LYAtten");
leg2->AddEntry(hTWireModThetaXZC,"LYRayleigh");
leg2->Draw();





TCanvas *c3 = new TCanvas("c3", "Reco |t| After Opening Angle");
c3->SetTicks();
c3->SetFillColor(kWhite);

hTOA->SetLineColor(kBlack);
hTOA->SetLineWidth(2);
hTOA->Scale(Run1ScaleFactorMC);
hTOA->Rebin(RebinT);
hTOAWireModX->SetLineColor(kRed);
hTOAWireModX->SetLineStyle(9);
hTOAWireModX->SetLineWidth(2);
hTOAWireModX->Scale(Run1ScaleFactorWireModX);
hTOAWireModX->Rebin(RebinT);
hTOAWireModYZ->SetLineColor(kGreen);
hTOAWireModYZ->SetLineStyle(9);
hTOAWireModYZ->SetLineWidth(2);
hTOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hTOAWireModYZ->Rebin(RebinT);
hTOAWireModThetaXZ->SetLineColor(kBlue);
hTOAWireModThetaXZ->SetLineStyle(9);
hTOAWireModThetaXZ->SetLineWidth(2);
hTOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hTOAWireModThetaXZ->Rebin(RebinT);


hTOA->Draw("HIST");
hTOAWireModX->Draw("HISTsame");
hTOAWireModYZ->Draw("HISTsame");
hTOAWireModThetaXZ->Draw("HISTsame");
hTOA->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTOA->GetXaxis()->CenterTitle();
hTOA->GetYaxis()->SetTitle("Number of Events");
hTOA->GetYaxis()->CenterTitle();

hTOA->Draw("HISTsame");
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
leg3->AddEntry(hTOA,"Run 1 CV");
leg3->AddEntry(hTOAWireModX,"Run 1 DV LYDown");
leg3->AddEntry(hTOAWireModYZ,"Run 1 DV LYAtten");
leg3->AddEntry(hTOAWireModThetaXZ,"Run 1 DV LYRayleigh");
leg3->Draw();





TCanvas *c4 = new TCanvas("c4", "|t| Fluctuation After Opening Angle");
c4->SetTicks();
c4->SetFillColor(kWhite);

hTOAC->SetLineColor(kBlack);
hTOAC->SetLineWidth(2);
hTOAC->Scale(Run1ScaleFactorMC);
hTOAC->Rebin(RebinT);
hTOAWireModXC->SetLineColor(kRed);
hTOAWireModXC->SetLineStyle(9);
hTOAWireModXC->SetLineWidth(2);
hTOAWireModXC->Scale(Run1ScaleFactorWireModX);
hTOAWireModXC->Rebin(RebinT);
hTOAWireModYZC->SetLineColor(kGreen);
hTOAWireModYZC->SetLineStyle(9);
hTOAWireModYZC->SetLineWidth(2);
hTOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hTOAWireModYZC->Rebin(RebinT);
hTOAWireModThetaXZC->SetLineColor(kBlue);
hTOAWireModThetaXZC->SetLineStyle(9);
hTOAWireModThetaXZC->SetLineWidth(2);
hTOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hTOAWireModThetaXZC->Rebin(RebinT);


// Making the Fluctuations
hTOAWireModXC->Add(hTOAC, -1);
hTOAWireModXC->Divide(hTOAC);
hTOAWireModYZC->Add(hTOAC, -1);
hTOAWireModYZC->Divide(hTOAC);
hTOAWireModThetaXZC->Add(hTOAC, -1);
hTOAWireModThetaXZC->Divide(hTOAC);


hTOAWireModXC->Draw("HIST");
hTOAWireModYZC->Draw("HISTsame");
hTOAWireModThetaXZC->Draw("HISTsame");
hTOAWireModXC->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hTOAWireModXC->GetXaxis()->CenterTitle();
hTOAWireModXC->GetYaxis()->SetTitle("Error (#frac{Mod - CV}{CV})");
hTOAWireModXC->GetYaxis()->CenterTitle();

hTOAWireModXC->Draw("HISTsame");
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
leg4->AddEntry(hTOAWireModXC,"LYDown");
leg4->AddEntry(hTOAWireModYZC,"LYAtten");
leg4->AddEntry(hTOAWireModThetaXZC,"LYRayleigh");
leg4->Draw();




/*
TCanvas *c5 = new TCanvas("c5", "Muon Candidate Momentum After 2 Tracks");
c5->SetTicks();
c5->SetFillColor(kWhite);

hRecoMuonCandidateMomentum->SetLineColor(kBlack);
hRecoMuonCandidateMomentum->SetLineWidth(2);
hRecoMuonCandidateMomentum->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentum->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModX->SetLineColor(kRed);
hRecoMuonCandidateMomentumWireModX->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModX->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModX->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumWireModX->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModYZ->SetLineColor(kGreen);
hRecoMuonCandidateMomentumWireModYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModYZ->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumWireModYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineColor(kBlue);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaXZ->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumWireModThetaXZ->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaYZ->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumWireModThetaYZ->Rebin(RebinP);


hRecoMuonCandidateMomentum->Draw("HIST");
hRecoMuonCandidateMomentumWireModX->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaXZ->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaYZ->Draw("HISTsame");
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
leg5->AddEntry(hRecoMuonCandidateMomentum,"Run 1 Overlay MC");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModX,"Run 1 DV WireModX");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModYZ,"Run 1 DV WireModYZ");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModThetaXZ,"Run 1 DV WireModThetaXZ");
leg5->AddEntry(hRecoMuonCandidateMomentumWireModThetaYZ,"Run 1 DV WireModThetaYZ");
leg5->Draw();





TCanvas *c6 = new TCanvas("c6", "Muon Candidate Momentum Fluctuation After 2 Tracks");
c6->SetTicks();
c6->SetFillColor(kWhite);

hRecoMuonCandidateMomentumC->SetLineColor(kBlack);
hRecoMuonCandidateMomentumC->SetLineWidth(2);
hRecoMuonCandidateMomentumC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModXC->SetLineColor(kRed);
hRecoMuonCandidateMomentumWireModXC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModXC->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumWireModXC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModYZC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumWireModYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModYZC->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumWireModYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineColor(kBlue);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaXZC->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumWireModThetaXZC->Rebin(RebinP);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumWireModThetaYZC->SetLineWidth(2);
hRecoMuonCandidateMomentumWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumWireModThetaYZC->Rebin(RebinP);


// Making the Fluctuations
hRecoMuonCandidateMomentumWireModXC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModXC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModYZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModYZC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModThetaXZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModThetaXZC->Divide(hRecoMuonCandidateMomentumC);
hRecoMuonCandidateMomentumWireModThetaYZC->Add(hRecoMuonCandidateMomentumC, -1);
hRecoMuonCandidateMomentumWireModThetaYZC->Divide(hRecoMuonCandidateMomentumC);


hRecoMuonCandidateMomentumWireModXC->Draw("HIST");
hRecoMuonCandidateMomentumWireModYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaXZC->Draw("HISTsame");
hRecoMuonCandidateMomentumWireModThetaYZC->Draw("HISTsame");
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
leg6->Draw();





TCanvas *c7 = new TCanvas("c7", "Muon Candidate Momentum After Opening Angle");
c7->SetTicks();
c7->SetFillColor(kWhite);

hRecoMuonCandidateMomentumOA->SetLineColor(kBlack);
hRecoMuonCandidateMomentumOA->SetLineWidth(2);
hRecoMuonCandidateMomentumOA->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumOA->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModX->SetLineColor(kRed);
hRecoMuonCandidateMomentumOAWireModX->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModX->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModX->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumOAWireModX->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineColor(kGreen);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModYZ->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumOAWireModYZ->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineColor(kBlue);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaXZ->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumOAWireModThetaXZ->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaYZ->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumOAWireModThetaYZ->Rebin(RebinP);


hRecoMuonCandidateMomentumOA->Draw("HIST");
hRecoMuonCandidateMomentumOAWireModX->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModYZ->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaXZ->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaYZ->Draw("HISTsame");
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
leg7->AddEntry(hRecoMuonCandidateMomentumOA,"Run 1 Overlay MC");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModX,"Run 1 DV WireModX");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModYZ,"Run 1 DV WireModYZ");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaXZ,"Run 1 DV WireModThetaXZ");
leg7->AddEntry(hRecoMuonCandidateMomentumOAWireModThetaYZ,"Run 1 DV WireModThetaYZ");
leg7->Draw();





TCanvas *c8 = new TCanvas("c8", "Muon Candidate Momentum Fluctuation After Opening Angle");
c8->SetTicks();
c8->SetFillColor(kWhite);

hRecoMuonCandidateMomentumOAC->SetLineColor(kBlack);
hRecoMuonCandidateMomentumOAC->SetLineWidth(2);
hRecoMuonCandidateMomentumOAC->Scale(Run1ScaleFactorMC);
hRecoMuonCandidateMomentumOAC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModXC->SetLineColor(kRed);
hRecoMuonCandidateMomentumOAWireModXC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModXC->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoMuonCandidateMomentumOAWireModXC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineColor(kGreen);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModYZC->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoMuonCandidateMomentumOAWireModYZC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineColor(kBlue);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaXZC->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Rebin(RebinP);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineColor(kMagenta);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineStyle(9);
hRecoMuonCandidateMomentumOAWireModThetaYZC->SetLineWidth(2);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Rebin(RebinP);


// Making the Fluctuations
hRecoMuonCandidateMomentumOAWireModXC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModXC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModYZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModYZC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModThetaXZC->Divide(hRecoMuonCandidateMomentumOAC);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Add(hRecoMuonCandidateMomentumOAC, -1);
hRecoMuonCandidateMomentumOAWireModThetaYZC->Divide(hRecoMuonCandidateMomentumOAC);


hRecoMuonCandidateMomentumOAWireModXC->Draw("HIST");
hRecoMuonCandidateMomentumOAWireModYZC->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaXZC->Draw("HISTsame");
hRecoMuonCandidateMomentumOAWireModThetaYZC->Draw("HISTsame");
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
leg8->Draw();





TCanvas *c9 = new TCanvas("c9", "Pion Candidate Momentum After 2 Tracks");
c9->SetTicks();
c9->SetFillColor(kWhite);

hRecoPionCandidateMomentum->SetLineColor(kBlack);
hRecoPionCandidateMomentum->SetLineWidth(2);
hRecoPionCandidateMomentum->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentum->Rebin(RebinP);
hRecoPionCandidateMomentumWireModX->SetLineColor(kRed);
hRecoPionCandidateMomentumWireModX->SetLineStyle(9);
hRecoPionCandidateMomentumWireModX->SetLineWidth(2);
hRecoPionCandidateMomentumWireModX->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumWireModX->Rebin(RebinP);
hRecoPionCandidateMomentumWireModYZ->SetLineColor(kGreen);
hRecoPionCandidateMomentumWireModYZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModYZ->SetLineWidth(2);
hRecoPionCandidateMomentumWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumWireModYZ->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineColor(kBlue);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaXZ->SetLineWidth(2);
hRecoPionCandidateMomentumWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumWireModThetaXZ->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineColor(kMagenta);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaYZ->SetLineWidth(2);
hRecoPionCandidateMomentumWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumWireModThetaYZ->Rebin(RebinP);


hRecoPionCandidateMomentum->Draw("HIST");
hRecoPionCandidateMomentumWireModX->Draw("HISTsame");
hRecoPionCandidateMomentumWireModYZ->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaXZ->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaYZ->Draw("HISTsame");
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
leg9->AddEntry(hRecoPionCandidateMomentum,"Run 1 Overlay MC");
leg9->AddEntry(hRecoPionCandidateMomentumWireModX,"Run 1 DV WireModX");
leg9->AddEntry(hRecoPionCandidateMomentumWireModYZ,"Run 1 DV WireModYZ");
leg9->AddEntry(hRecoPionCandidateMomentumWireModThetaXZ,"Run 1 DV WireModThetaXZ");
leg9->AddEntry(hRecoPionCandidateMomentumWireModThetaYZ,"Run 1 DV WireModThetaYZ");
leg9->Draw();





TCanvas *c10 = new TCanvas("c10", "Pion Candidate Momentum Fluctuation After 2 Tracks");
c10->SetTicks();
c10->SetFillColor(kWhite);

hRecoPionCandidateMomentumC->SetLineColor(kBlack);
hRecoPionCandidateMomentumC->SetLineWidth(2);
hRecoPionCandidateMomentumC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModXC->SetLineColor(kRed);
hRecoPionCandidateMomentumWireModXC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModXC->SetLineWidth(2);
hRecoPionCandidateMomentumWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumWireModXC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModYZC->SetLineColor(kGreen);
hRecoPionCandidateMomentumWireModYZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModYZC->SetLineWidth(2);
hRecoPionCandidateMomentumWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumWireModYZC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineColor(kBlue);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaXZC->SetLineWidth(2);
hRecoPionCandidateMomentumWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumWireModThetaXZC->Rebin(RebinP);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineColor(kMagenta);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineStyle(9);
hRecoPionCandidateMomentumWireModThetaYZC->SetLineWidth(2);
hRecoPionCandidateMomentumWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumWireModThetaYZC->Rebin(RebinP);


// Making the Fluctuations
hRecoPionCandidateMomentumWireModXC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModXC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModYZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModYZC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModThetaXZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModThetaXZC->Divide(hRecoPionCandidateMomentumC);
hRecoPionCandidateMomentumWireModThetaYZC->Add(hRecoPionCandidateMomentumC, -1);
hRecoPionCandidateMomentumWireModThetaYZC->Divide(hRecoPionCandidateMomentumC);


hRecoPionCandidateMomentumWireModXC->Draw("HIST");
hRecoPionCandidateMomentumWireModYZC->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaXZC->Draw("HISTsame");
hRecoPionCandidateMomentumWireModThetaYZC->Draw("HISTsame");
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
leg10->Draw();





TCanvas *c11 = new TCanvas("c11", "Pion Candidate Momentum After Opening Angle");
c11->SetTicks();
c11->SetFillColor(kWhite);

hRecoPionCandidateMomentumOA->SetLineColor(kBlack);
hRecoPionCandidateMomentumOA->SetLineWidth(2);
hRecoPionCandidateMomentumOA->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumOA->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModX->SetLineColor(kRed);
hRecoPionCandidateMomentumOAWireModX->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModX->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModX->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumOAWireModX->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModYZ->SetLineColor(kGreen);
hRecoPionCandidateMomentumOAWireModYZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModYZ->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModYZ->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumOAWireModYZ->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineColor(kBlue);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaXZ->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModThetaXZ->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumOAWireModThetaXZ->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineColor(kMagenta);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaYZ->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModThetaYZ->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumOAWireModThetaYZ->Rebin(RebinP);


hRecoPionCandidateMomentumOA->Draw("HIST");
hRecoPionCandidateMomentumOAWireModX->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModYZ->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaXZ->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaYZ->Draw("HISTsame");
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
leg11->AddEntry(hRecoPionCandidateMomentumOA,"Run 1 Overlay MC");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModX,"Run 1 DV WireModX");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModYZ,"Run 1 DV WireModYZ");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModThetaXZ,"Run 1 DV WireModThetaXZ");
leg11->AddEntry(hRecoPionCandidateMomentumOAWireModThetaYZ,"Run 1 DV WireModThetaYZ");
leg11->Draw();





TCanvas *c12 = new TCanvas("c12", "Pion Candidate Momentum Fluctuation After Opening Angle");
c12->SetTicks();
c12->SetFillColor(kWhite);

hRecoPionCandidateMomentumOAC->SetLineColor(kBlack);
hRecoPionCandidateMomentumOAC->SetLineWidth(2);
hRecoPionCandidateMomentumOAC->Scale(Run1ScaleFactorMC);
hRecoPionCandidateMomentumOAC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModXC->SetLineColor(kRed);
hRecoPionCandidateMomentumOAWireModXC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModXC->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModXC->Scale(Run1ScaleFactorWireModX);
hRecoPionCandidateMomentumOAWireModXC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModYZC->SetLineColor(kGreen);
hRecoPionCandidateMomentumOAWireModYZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModYZC->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModYZC->Scale(Run1ScaleFactorWireModYZ);
hRecoPionCandidateMomentumOAWireModYZC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineColor(kBlue);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaXZC->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModThetaXZC->Scale(Run1ScaleFactorWireModThetaXZ);
hRecoPionCandidateMomentumOAWireModThetaXZC->Rebin(RebinP);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineColor(kMagenta);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineStyle(9);
hRecoPionCandidateMomentumOAWireModThetaYZC->SetLineWidth(2);
hRecoPionCandidateMomentumOAWireModThetaYZC->Scale(Run1ScaleFactorWireModThetaYZ);
hRecoPionCandidateMomentumOAWireModThetaYZC->Rebin(RebinP);


// Making the Fluctuations
hRecoPionCandidateMomentumOAWireModXC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModXC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModYZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModYZC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModThetaXZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModThetaXZC->Divide(hRecoPionCandidateMomentumOAC);
hRecoPionCandidateMomentumOAWireModThetaYZC->Add(hRecoPionCandidateMomentumOAC, -1);
hRecoPionCandidateMomentumOAWireModThetaYZC->Divide(hRecoPionCandidateMomentumOAC);


hRecoPionCandidateMomentumOAWireModXC->Draw("HIST");
hRecoPionCandidateMomentumOAWireModYZC->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaXZC->Draw("HISTsame");
hRecoPionCandidateMomentumOAWireModThetaYZC->Draw("HISTsame");
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
leg12->Draw();*/
}
