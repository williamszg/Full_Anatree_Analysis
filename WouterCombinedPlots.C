{
TFile *f = new TFile("Wouter_Daughter_Information.root"); // <-- File for Daughters




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

TH2D *hMuonTracksMuonChi2VsProtonChi2 = (TH2D*)f->Get("hMuonTracksMuonChi2VsProtonChi2");
TH2D *hPionTracksMuonChi2VsProtonChi2 = (TH2D*)f->Get("hPionTracksMuonChi2VsProtonChi2");
TH2D *hProtonTracksMuonChi2VsProtonChi2 = (TH2D*)f->Get("hProtonTracksMuonChi2VsProtonChi2");

TH1D *hMuonRatioChi2 = (TH1D*)f->Get("hMuonRatioChi2");
TH1D *hPionRatioChi2 = (TH1D*)f->Get("hPionRatioChi2");
TH1D *hProtonRatioChi2 = (TH1D*)f->Get("hProtonRatioChi2");

hMuonRatioChi2->Sumw2();
hPionRatioChi2->Sumw2();
hProtonRatioChi2->Sumw2();

TH1D *hMuonTrueTrackLength = (TH1D*)f->Get("hMuonTrueTrackLength");
TH1D *hPionTrueTrackLength = (TH1D*)f->Get("hPionTrueTrackLength");
TH1D *hProtonTrueTrackLength = (TH1D*)f->Get("hProtonTrueTrackLength");

hMuonTrueTrackLength->Sumw2();
hPionTrueTrackLength->Sumw2();
hProtonTrueTrackLength->Sumw2();

TH2D *hMuonPandoraVsTrueTrackLength = (TH2D*)f->Get("hMuonPandoraVsTrueTrackLength");
TH2D *hPionPandoraVsTrueTrackLength = (TH2D*)f->Get("hPionPandoraVsTrueTrackLength");
TH2D *hProtonPandoraVsTrueTrackLength = (TH2D*)f->Get("hProtonPandoraVsTrueTrackLength");




TCanvas *c1 = new TCanvas("c1", "The Muon Chi2 Values for Different Particle Species");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonMuonChi2->Scale(1/hMuonMuonChi2->Integral());
hPionMuonChi2->Scale(1/hPionMuonChi2->Integral());
hProtonMuonChi2->Scale(1/hProtonMuonChi2->Integral());

hMuonMuonChi2->SetFillColor(kBlue);
hMuonMuonChi2->SetFillStyle(3005);
hMuonMuonChi2->SetLineColor(kBlue);
hMuonMuonChi2->SetLineWidth(2);

hPionMuonChi2->SetFillColor(kGreen);
hPionMuonChi2->SetFillStyle(3006);
hPionMuonChi2->SetLineColor(kGreen);
hPionMuonChi2->SetLineWidth(2);

hProtonMuonChi2->SetFillColor(kOrange);
hProtonMuonChi2->SetFillStyle(3007);
hProtonMuonChi2->SetLineColor(kOrange);
hProtonMuonChi2->SetLineWidth(2);

hMuonMuonChi2->GetXaxis()->SetTitle("#mu #chi^{2}");
hMuonMuonChi2->GetXaxis()->CenterTitle();

hMuonMuonChi2->GetYaxis()->SetTitle("Normalized Events");
hMuonMuonChi2->GetYaxis()->CenterTitle();

hMuonMuonChi2->Draw("histo");
hPionMuonChi2->Draw("histosame");
hProtonMuonChi2->Draw("histosame");


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
leg1->AddEntry(hProtonMuonChi2,"p");
leg1->Draw();



TCanvas *c2 = new TCanvas("c2", "The Proton Chi2 Values for Different Particle Species");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonProtonChi2->Scale(1/hMuonProtonChi2->Integral());
hPionProtonChi2->Scale(1/hPionProtonChi2->Integral());
hProtonProtonChi2->Scale(1/hProtonProtonChi2->Integral());

hMuonProtonChi2->SetFillColor(kBlue);
hMuonProtonChi2->SetFillStyle(3005);
hMuonProtonChi2->SetLineColor(kBlue);
hMuonProtonChi2->SetLineWidth(2);

hPionProtonChi2->SetFillColor(kGreen);
hPionProtonChi2->SetFillStyle(3006);
hPionProtonChi2->SetLineColor(kGreen);
hPionProtonChi2->SetLineWidth(2);

hProtonProtonChi2->SetFillColor(kOrange);
hProtonProtonChi2->SetFillStyle(3007);
hProtonProtonChi2->SetLineColor(kOrange);
hProtonProtonChi2->SetLineWidth(2);

hMuonProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hMuonProtonChi2->GetXaxis()->CenterTitle();

hMuonProtonChi2->GetYaxis()->SetTitle("Normalized Events");
hMuonProtonChi2->GetYaxis()->CenterTitle();

hMuonProtonChi2->Draw("histo");
hPionProtonChi2->Draw("histosame");
hProtonProtonChi2->Draw("histosame");


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
leg2->AddEntry(hProtonProtonChi2,"p");
leg2->Draw();



TCanvas *c3 = new TCanvas("c3", "The Pandora Track Lengths of Different Particle Species");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonPandoraTrackLength->Scale(1/hMuonPandoraTrackLength->Integral());
hPionPandoraTrackLength->Scale(1/hPionPandoraTrackLength->Integral());
hProtonPandoraTrackLength->Scale(1/hProtonPandoraTrackLength->Integral());

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

hPionPandoraTrackLength->GetYaxis()->SetTitle("Normalized Events");
hPionPandoraTrackLength->GetYaxis()->CenterTitle();

hPionPandoraTrackLength->Draw("histo");
hProtonPandoraTrackLength->Draw("histosame");
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
leg3->AddEntry(hProtonPandoraTrackLength,"p");
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

hProtonTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hProtonTracksMuonChi2VsProtonChi2->Draw("COLZ");



TCanvas *c7 = new TCanvas("c7", "The #chi^{2} Ratios of Proton #chi^{2} / Muon #chi^{2}");
c7->SetTicks();
c7->SetFillColor(kWhite);

// Area normalzing the plot 
hMuonRatioChi2->Scale(1/hMuonRatioChi2->Integral());
hPionRatioChi2->Scale(1/hPionRatioChi2->Integral());
hProtonRatioChi2->Scale(1/hProtonRatioChi2->Integral());

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

hProtonRatioChi2->GetXaxis()->SetTitle("Ratio (p #chi^{2} / #mu #chi^{2})");
hProtonRatioChi2->GetXaxis()->CenterTitle();

hProtonRatioChi2->GetYaxis()->SetTitle("Normalized Events");
hProtonRatioChi2->GetYaxis()->CenterTitle();

hProtonRatioChi2->Draw("histo");
hPionRatioChi2->Draw("histosame");
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
leg7->AddEntry(hProtonRatioChi2,"p");
leg7->Draw();



TCanvas *c8 = new TCanvas("c8", "The True Track Lengths of Different Particle Species");
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

hProtonTrueTrackLength->GetXaxis()->SetTitle("Track Length [cm]");
hProtonTrueTrackLength->GetXaxis()->CenterTitle();

hProtonTrueTrackLength->GetYaxis()->SetTitle("Normalized Events");
hProtonTrueTrackLength->GetYaxis()->CenterTitle();

hProtonTrueTrackLength->Draw("histo");
hPionTrueTrackLength->Draw("histosame");
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
}
