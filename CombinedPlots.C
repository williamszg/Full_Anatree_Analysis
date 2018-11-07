{
TFile *f = new TFile("./AllFiles/Histograms_NewAnalysis_ALL.root");


TH1D *hCCCohConeAngle = (TH1D*)f->Get("hCCCohConeAngle");
TH1D *hCCQEConeAngle = (TH1D*)f->Get("hCCQEConeAngle");
TH1D *hCCResConeAngle = (TH1D*)f->Get("hCCResConeAngle");
TH1D *hNCResConeAngle = (TH1D*)f->Get("hNCResConeAngle");
TH1D *hNCDISConeAngle = (TH1D*)f->Get("hNCDISConeAngle");
TH1D *hCosmicConeAngle = (TH1D*)f->Get("hCosmicConeAngle");

TH1D *hCCCohDoCA = (TH1D*)f->Get("hCCCohDoCA");
TH1D *hCCQEDoCA = (TH1D*)f->Get("hCCQEDoCA");
TH1D *hCCResDoCA = (TH1D*)f->Get("hCCResDoCA");
TH1D *hNCResDoCA = (TH1D*)f->Get("hNCResDoCA");
TH1D *hNCDISDoCA = (TH1D*)f->Get("hNCDISDoCA");
TH1D *hCosmicDoCA = (TH1D*)f->Get("hCosmicDoCA");


hCCCohConeAngle->Sumw2();
hCCQEConeAngle->Sumw2();
hCCResConeAngle->Sumw2();
hNCResConeAngle->Sumw2();
hNCDISConeAngle->Sumw2();
hCosmicConeAngle->Sumw2();

hCCCohDoCA->Sumw2();
hCCQEDoCA->Sumw2();
hCCResDoCA->Sumw2();
hNCResDoCA->Sumw2();
hNCDISDoCA->Sumw2();
hCosmicDoCA->Sumw2();


TCanvas *c0 = new TCanvas("c0", "Cone Angles");
c0->SetTicks();
c0->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohConeAngle->Scale(1/hCCCohConeAngle->Integral());
hCCQEConeAngle->Scale(1/hCCQEConeAngle->Integral());
hCCResConeAngle->Scale(1/hCCResConeAngle->Integral());
hNCResConeAngle->Scale(1/hNCResConeAngle->Integral());
hNCDISConeAngle->Scale(1/hNCDISConeAngle->Integral());
hCosmicConeAngle->Scale(1/hCosmicConeAngle->Integral());

hCCCohConeAngle->SetLineColor(kBlue);
hCCCohConeAngle->SetLineWidth(2);

hCCQEConeAngle->SetLineColor(kRed);
hCCQEConeAngle->SetLineWidth(2);

hCCResConeAngle->SetLineColor(kGreen);
hCCResConeAngle->SetLineWidth(2);

hNCResConeAngle->SetLineColor(kYellow);
hNCResConeAngle->SetLineWidth(2);

hNCDISConeAngle->SetLineColor(kMagenta);
hNCDISConeAngle->SetLineWidth(2);

hCosmicConeAngle->SetLineColor(kBlack);
hCosmicConeAngle->SetLineWidth(2);

hCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hCCCohConeAngle->GetXaxis()->CenterTitle();

hCCCohConeAngle->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohConeAngle->GetYaxis()->CenterTitle();

hCCCohConeAngle->Draw("histo");
hCCQEConeAngle->Draw("histosame");
hCCResConeAngle->Draw("histosame");
hNCResConeAngle->Draw("histosame");
hNCDISConeAngle->Draw("histosame");
hCosmicConeAngle->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg0 = new TLegend();
leg0 = new TLegend(0.58,0.65,0.88,0.88);
leg0->SetTextSize(0.04);
leg0->SetTextAlign(12);
leg0->SetFillColor(kWhite);
leg0->SetLineColor(kWhite);
leg0->SetShadowColor(kWhite);
leg0->SetHeader("Channel");
leg0->AddEntry(hCCCohConeAngle,"CC-COH");
leg0->AddEntry(hCCQEConeAngle,"CC-QE");
leg0->AddEntry(hCCResConeAngle,"CC-Res");
leg0->AddEntry(hNCResConeAngle,"NC-Res");
leg0->AddEntry(hNCDISConeAngle,"NC-DIS");
leg0->AddEntry(hCosmicConeAngle,"Cosmic");
leg0->Draw();


TCanvas *c1 = new TCanvas("c1", "Distance of Closest Approach");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohDoCA->Scale(1/hCCCohDoCA->Integral());
hCCQEDoCA->Scale(1/hCCQEDoCA->Integral());
hCCResDoCA->Scale(1/hCCResDoCA->Integral());
hNCResDoCA->Scale(1/hNCResDoCA->Integral());
hNCDISDoCA->Scale(1/hNCDISDoCA->Integral());
hCosmicDoCA->Scale(1/hCosmicDoCA->Integral());

hCCCohDoCA->SetLineColor(kBlue);
hCCCohDoCA->SetLineWidth(2);

hCCQEDoCA->SetLineColor(kRed);
hCCQEDoCA->SetLineWidth(2);

hCCResDoCA->SetLineColor(kGreen);
hCCResDoCA->SetLineWidth(2);

hNCResDoCA->SetLineColor(kYellow);
hNCResDoCA->SetLineWidth(2);

hNCDISDoCA->SetLineColor(kMagenta);
hNCDISDoCA->SetLineWidth(2);

hCosmicDoCA->SetLineColor(kBlack);
hCosmicDoCA->SetLineWidth(2);

hCCCohDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hCCCohDoCA->GetXaxis()->CenterTitle();

hCCCohDoCA->GetYaxis()->SetTitle("Normalized Events");
hCCCohDoCA->GetYaxis()->CenterTitle();

hCCCohDoCA->Draw("histo");
hCCQEDoCA->Draw("histosame");
hCCResDoCA->Draw("histosame");
hNCResDoCA->Draw("histosame");
hNCDISDoCA->Draw("histosame");
hCosmicDoCA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,0.88,0.88);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Channel");
leg1->AddEntry(hCCCohDoCA,"CC-COH");
leg1->AddEntry(hCCQEDoCA,"CC-QE");
leg1->AddEntry(hCCResDoCA,"CC-Res");
leg1->AddEntry(hNCResDoCA,"NC-Res");
leg1->AddEntry(hNCDISDoCA,"NC-DIS");
leg1->AddEntry(hCosmicDoCA,"Cosmic");
leg1->Draw();
}
