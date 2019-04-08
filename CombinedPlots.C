{
TFile *f = new TFile("./Histograms_NewAnalysis_BKGD.root");
TFile *f2 = new TFile("./Histograms_NewAnalysis_CCCoh.root");


TH1D *hCCCohConeAngle = (TH1D*)f2->Get("hCCCohConeAngle");
TH1D *hCCQEConeAngle = (TH1D*)f->Get("hCCQEConeAngle");
TH1D *hCCResConeAngle = (TH1D*)f->Get("hCCResConeAngle");
TH1D *hNCResConeAngle = (TH1D*)f->Get("hNCResConeAngle");
TH1D *hNCDISConeAngle = (TH1D*)f->Get("hNCDISConeAngle");
TH1D *hCosmicConeAngle = (TH1D*)f->Get("hCosmicConeAngle");

TH1D *hCCCohDoCA = (TH1D*)f2->Get("hCCCohDoCA2");
TH1D *hCCQEDoCA = (TH1D*)f->Get("hCCQEDoCA2");
TH1D *hCCResDoCA = (TH1D*)f->Get("hCCResDoCA2");
TH1D *hNCResDoCA = (TH1D*)f->Get("hNCResDoCA2");
TH1D *hNCDISDoCA = (TH1D*)f->Get("hNCDISDoCA2");
TH1D *hCosmicDoCA = (TH1D*)f->Get("hCosmicDoCA2");

TH1D *hCCCohVA = (TH1D*)f2->Get("hCCCohVA");
TH1D *hCCQEVA = (TH1D*)f->Get("hCCQEVA");
TH1D *hCCResVA = (TH1D*)f->Get("hCCResVA");
TH1D *hNCResVA = (TH1D*)f->Get("hNCResVA");
TH1D *hNCDISVA = (TH1D*)f->Get("hNCDISVA");
TH1D *hCosmicVA = (TH1D*)f->Get("hCosmicVA");

TH1D *hOpFlashPECCCoh = (TH1D*)f2->Get("hOpFlashPECCCoh");
TH1D *hOpFlashPECosmic = (TH1D*)f->Get("hOpFlashPECosmic");
TH1D *hOpFlashPECCOther = (TH1D*)f->Get("hOpFlashPECCOther");
TH1D *hOpFlashPENCOther = (TH1D*)f->Get("hOpFlashPENCOther");


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

hCCCohVA->Sumw2();
hCCQEVA->Sumw2();
hCCResVA->Sumw2();
hNCResVA->Sumw2();
hNCDISVA->Sumw2();
hCosmicVA->Sumw2();

hOpFlashPECCCoh->Sumw2();
hOpFlashPECosmic->Sumw2();
hOpFlashPECCOther->Sumw2();
hOpFlashPENCOther->Sumw2();


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

hNCResConeAngle->SetLineColor(kCyan);
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

hNCResDoCA->SetLineColor(kCyan);
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
//hCosmicDoCA->Draw("histosame");


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


TCanvas *c2 = new TCanvas("c2", "Vertex Activity");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA->Scale(1/hCCCohVA->Integral());
hCCQEVA->Scale(1/hCCQEVA->Integral());
hCCResVA->Scale(1/hCCResVA->Integral());
hNCResVA->Scale(1/hNCResVA->Integral());
hNCDISVA->Scale(1/hNCDISVA->Integral());
hCosmicVA->Scale(1/hCosmicVA->Integral());

hCCCohVA->SetLineColor(kBlue);
hCCCohVA->SetLineWidth(2);

hCCQEVA->SetLineColor(kRed);
hCCQEVA->SetLineWidth(2);

hCCResVA->SetLineColor(kGreen);
hCCResVA->SetLineWidth(2);

hNCResVA->SetLineColor(kCyan);
hNCResVA->SetLineWidth(2);

hNCDISVA->SetLineColor(kMagenta);
hNCDISVA->SetLineWidth(2);

hCosmicVA->SetLineColor(kBlack);
hCosmicVA->SetLineWidth(2);

hCCCohVA->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA->GetXaxis()->CenterTitle();

hCCCohVA->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA->GetYaxis()->CenterTitle();

hCCCohVA->Draw("histo");
hCCQEVA->Draw("histosame");
hCCResVA->Draw("histosame");
hNCResVA->Draw("histosame");
hNCDISVA->Draw("histosame");
hCosmicVA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,0.88,0.88);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Channel");
leg2->AddEntry(hCCCohVA,"CC-COH");
leg2->AddEntry(hCCQEVA,"CC-QE");
leg2->AddEntry(hCCResVA,"CC-Res");
leg2->AddEntry(hNCResVA,"NC-Res");
leg2->AddEntry(hNCDISVA,"NC-DIS");
leg2->AddEntry(hCosmicVA,"Cosmic");
leg2->Draw();


TCanvas *c3 = new TCanvas("c3", "OpFlash PE");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Area normalzing the plot 
hOpFlashPECCCoh->Scale(1/hOpFlashPECCCoh->Integral());
hOpFlashPECosmic->Scale(1/hOpFlashPECosmic->Integral());
hOpFlashPECCOther->Scale(1/hOpFlashPECCOther->Integral());
hOpFlashPENCOther->Scale(1/hOpFlashPENCOther->Integral());

hOpFlashPECCCoh->SetLineColor(kBlue);
hOpFlashPECCCoh->SetLineWidth(2);

hOpFlashPECosmic->SetLineColor(kRed);
hOpFlashPECosmic->SetLineWidth(2);

hOpFlashPECCOther->SetLineColor(kGreen);
hOpFlashPECCOther->SetLineWidth(2);

hOpFlashPENCOther->SetLineColor(kCyan);
hOpFlashPENCOther->SetLineWidth(2);

hOpFlashPECosmic->GetXaxis()->SetTitle("Number of PE [Number]");
hOpFlashPECosmic->GetXaxis()->CenterTitle();

hOpFlashPECosmic->GetYaxis()->SetTitle("Normalized Events [Number]");
hOpFlashPECosmic->GetYaxis()->CenterTitle();

hOpFlashPECosmic->Draw("histo");
hOpFlashPENCOther->Draw("histosame");
hOpFlashPECCOther->Draw("histosame");
hOpFlashPECCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,0.88,0.88);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Channel");
leg3->AddEntry(hOpFlashPECCCoh,"CC-COH");
leg3->AddEntry(hOpFlashPECosmic,"Cosmic");
leg3->AddEntry(hOpFlashPECCOther,"CC-Other");
leg3->AddEntry(hOpFlashPENCOther,"NC-Other");
leg3->Draw();
}
