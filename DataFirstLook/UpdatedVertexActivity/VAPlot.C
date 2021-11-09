#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("MC_Histograms_BothPC.root"); // <-- File for New MC Information
TFile *f2 = new TFile("MC_CCCoh_Histograms_BothPC.root"); // <-- File for New MC CCCoh Information
TFile *f3 = new TFile("CCCoh_Enhanced_Histograms_BothPC.root"); // <-- File for New MC CCCoh Enhanced Information





TH1D *hVertexActivity = (TH1D*)f1->Get("hVertexActivityFor2TracksNew");
TH1D *hVertexActivityCCCoh = (TH1D*)f2->Get("hVertexActivityFor2TracksNew");
TH1D *hVertexActivityCCCohEnhanced = (TH1D*)f3->Get("hVertexActivityFor2TracksNew");

hVertexActivity->Sumw2();
hVertexActivityCCCoh->Sumw2();
hVertexActivityCCCohEnhanced->Sumw2();


TH1D *hVertexActivityVA = (TH1D*)f1->Get("hVertexActivityForVANew");
TH1D *hVertexActivityVACCCoh = (TH1D*)f2->Get("hVertexActivityForVANew");
TH1D *hVertexActivityVACCCohEnhanced = (TH1D*)f3->Get("hVertexActivityForVANew");

hVertexActivityVA->Sumw2();
hVertexActivityVACCCoh->Sumw2();
hVertexActivityVACCCohEnhanced->Sumw2();





TCanvas *c1 = new TCanvas("c1", "The Vertex Activity After 2-Tracks Selection");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalizing the plot 
hVertexActivity->Scale(1/hVertexActivity->Integral());
hVertexActivityCCCoh->Scale(1/hVertexActivityCCCoh->Integral());
hVertexActivityCCCohEnhanced->Scale(1/hVertexActivityCCCohEnhanced->Integral());

// Setting Drawing Parameters
hVertexActivity->SetLineColor(kBlack);
hVertexActivity->SetLineWidth(2);
hVertexActivity->Rebin(50);

hVertexActivityCCCoh->SetLineColor(kRed);
hVertexActivityCCCoh->SetLineWidth(2);
hVertexActivityCCCoh->Rebin(50);

hVertexActivityCCCohEnhanced->SetLineColor(kBlue);
hVertexActivityCCCohEnhanced->SetLineWidth(2);
hVertexActivityCCCohEnhanced->Rebin(50);

hVertexActivityCCCohEnhanced->GetXaxis()->SetTitle("Vertex Activity [ADC]");
hVertexActivityCCCohEnhanced->GetXaxis()->CenterTitle();
hVertexActivityCCCohEnhanced->GetXaxis()->SetRangeUser(0, 40000);

hVertexActivityCCCohEnhanced->GetYaxis()->SetTitle("Normalized Events");
hVertexActivityCCCohEnhanced->GetYaxis()->CenterTitle();

hVertexActivityCCCohEnhanced->Draw("histo");
hVertexActivityCCCoh->Draw("histosame");
hVertexActivity->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Samples");
leg1->AddEntry(hVertexActivity,"BNB Total");
leg1->AddEntry(hVertexActivityCCCoh,"BNB CCCOH");
leg1->AddEntry(hVertexActivityCCCohEnhanced,"CCCOH Enhanced");
leg1->Draw();





TCanvas *c2 = new TCanvas("c2", "The Vertex Activity After Old VA Selection");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalizing the plot 
hVertexActivityVA->Scale(1/hVertexActivityVA->Integral());
hVertexActivityVACCCoh->Scale(1/hVertexActivityVACCCoh->Integral());
hVertexActivityVACCCohEnhanced->Scale(1/hVertexActivityVACCCohEnhanced->Integral());

// Setting Drawing Parameters
hVertexActivityVA->SetLineColor(kBlack);
hVertexActivityVA->SetLineWidth(2);
hVertexActivityVA->Rebin(50);

hVertexActivityVACCCoh->SetLineColor(kRed);
hVertexActivityVACCCoh->SetLineWidth(2);
hVertexActivityVACCCoh->Rebin(50);

hVertexActivityVACCCohEnhanced->SetLineColor(kBlue);
hVertexActivityVACCCohEnhanced->SetLineWidth(2);
hVertexActivityVACCCohEnhanced->Rebin(50);

hVertexActivityVACCCohEnhanced->GetXaxis()->SetTitle("Vertex Activity [ADC]");
hVertexActivityVACCCohEnhanced->GetXaxis()->CenterTitle();
hVertexActivityVACCCohEnhanced->GetXaxis()->SetRangeUser(0, 40000);

hVertexActivityVACCCohEnhanced->GetYaxis()->SetTitle("Normalized Events");
hVertexActivityVACCCohEnhanced->GetYaxis()->CenterTitle();

hVertexActivityVACCCohEnhanced->Draw("histo");
hVertexActivityVACCCoh->Draw("histosame");
hVertexActivityVA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Samples");
leg2->AddEntry(hVertexActivityVA,"BNB MC Total");
leg2->AddEntry(hVertexActivityVACCCoh,"BNB MC CCCOH");
leg2->AddEntry(hVertexActivityVACCCohEnhanced,"MC CCCOH Enhanced");
leg2->Draw();
}
