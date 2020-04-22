{
TFile *f = new TFile("Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("EventNtuple.root"); // <-- File for Event Tree



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

hMatchedNuEnergy->Sumw2();
hPassedNuEnergy->Sumw2();

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

//hRecoVA0->Sumw2();
//hRecoVA1->Sumw2();
//hRecoVA2->Sumw2();
//hRecoVAAll->Sumw2();

// Creating the Stacked Histogram
THStack *hRecoVAStacked = new THStack("hRecoVAStacked", "Hit Charges from All Planes Stacked for CC-Coh Events");




TCanvas *c1 = new TCanvas("c1", "The Muon Chi2 Values for Different Particle Species", 2);
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
hProtonProtonChi2->Scale(1/hProtonProtonChi2->Integral());

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
//hProtonTrueTrackLength->Draw("histosame");
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
//leg8->AddEntry(hProtonTrueTrackLength,"p");
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
hProtonTrackScore->Scale(1/hProtonTrackScore->Integral());

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
hProtonVtxDistance->Scale(1/hProtonVtxDistance->Integral());

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

hPassedNuEnergy->Divide(hMatchedNuEnergy);

hPassedNuEnergy->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hPassedNuEnergy->GetXaxis()->CenterTitle();

hPassedNuEnergy->GetYaxis()->SetTitle("Passing Efficiency");
hPassedNuEnergy->GetYaxis()->CenterTitle();

hPassedNuEnergy->Draw("E1");



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



TCanvas *c18 = new TCanvas("c18", "The Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events");
c18->SetTicks();
c18->SetFillColor(kWhite);

hCutByCutMuonCandidate->SetLineColor(kBlue);
hCutByCutMuonCandidate->SetLineWidth(2);

hCutByCutMuonCandidate->Divide(hCutByCutMuonCandidateDivide);

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
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(14, "Cone Angle < 40^{o}");
hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(15, "DoCA Cut < 10cm");

hCutByCutMuonCandidate->Draw("E1");



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
double CCCohConeAngle[181] = {0};
double CCCohConeAngleR[181] = {0};

for (int i = 0; i < n; i++)
   {
   x[i] = i*180/n;
   for (int g = 1; g < i+1; g++)
      {
      CCCohConeAngle[i] += hTrueConeAngle->GetBinContent(g);
      CCCohConeAngleR[i] += hRecoConeAngle->GetBinContent(g);
      } // End g-Loop

   ConeAngleEff[i] = 100*(CCCohConeAngle[i])/(hTrueConeAngle->GetEntries());
   CCCohConeAngle[i] = CCCohConeAngle[i]*100/hTrueConeAngle->GetEntries();
   ConeAngleEffR[i] = 100*(CCCohConeAngleR[i])/(hRecoConeAngle->GetEntries());
   CCCohConeAngleR[i] = CCCohConeAngleR[i]*100/hRecoConeAngle->GetEntries();
   } // End i-Loop

TGraph* gConeAngleEff = new TGraph(n, x, ConeAngleEff);
gConeAngleEff->SetTitle("ConeAngleEff");
gConeAngleEff->SetName("ConeAngleEff");
gConeAngleEff->SetFillColor(kWhite);
gConeAngleEff->SetLineColor(kBlue);
gConeAngleEff->SetLineWidth(2);
TGraph* gCCCohConeAngle = new TGraph(n, x, CCCohConeAngle);
gCCCohConeAngle->SetTitle("gCCCohConeAngle");
gCCCohConeAngle->SetName("gCCCohConeAngle");
gCCCohConeAngle->SetFillColor(kWhite);
gCCCohConeAngle->SetLineColor(kBlue);
gCCCohConeAngle->SetLineWidth(2);
TGraph* gConeAngleEffR = new TGraph(n, x, ConeAngleEffR);
gConeAngleEffR->SetTitle("ConeAngleEffR");
gConeAngleEffR->SetName("ConeAngleEffR");
gConeAngleEffR->SetFillColor(kWhite);
gConeAngleEffR->SetLineColor(kRed);
gConeAngleEffR->SetLineWidth(2);
TGraph* gCCCohConeAngleR = new TGraph(n, x, CCCohConeAngleR);
gCCCohConeAngleR->SetTitle("gCCCohConeAngleR");
gCCCohConeAngleR->SetName("gCCCohConeAngleR");
gCCCohConeAngleR->SetFillColor(kWhite);
gCCCohConeAngleR->SetLineColor(kRed);
gCCCohConeAngleR->SetLineWidth(2);

TCanvas *c24 = new TCanvas("c24", "Cone Angle TGraphs");
c24->SetTicks();
c24->SetFillColor(kWhite);

gCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gCCCohConeAngle->GetXaxis()->CenterTitle();

gCCCohConeAngle->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohConeAngle->GetYaxis()->CenterTitle();

gCCCohConeAngle->Draw();
gCCCohConeAngleR->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg24 = new TLegend();
leg24 = new TLegend(0.58,0.65,1.00,1.00);
leg24->SetTextSize(0.04);
leg24->SetTextAlign(12);
leg24->SetFillColor(kWhite);
leg24->SetLineColor(kWhite);
leg24->SetShadowColor(kWhite);
leg24->SetHeader("Channel");
leg24->AddEntry(gCCCohConeAngle,"True");
leg24->AddEntry(gCCCohConeAngleR,"Reco");
leg24->Draw();
// -----------------------------



TCanvas *c20 = new TCanvas("c20", "The True and Reconstructed Cone Angles for CC-Coh Events", 2);
c20->SetTicks();
c20->SetFillColor(kWhite);

// Area normalzing the plot 
hTrueConeAngle->Scale(1/hTrueConeAngle->Integral());
hRecoConeAngle->Scale(1/hRecoConeAngle->Integral());

hTrueConeAngle->SetLineColor(kBlue);
hTrueConeAngle->SetLineWidth(2);
hTrueConeAngle->SetFillColor(kBlue);
hTrueConeAngle->SetFillStyle(3005);

hRecoConeAngle->SetLineColor(kRed);
hRecoConeAngle->SetLineWidth(2);
hRecoConeAngle->SetFillColor(kRed);
hRecoConeAngle->SetFillStyle(3006);

hTrueConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hTrueConeAngle->GetXaxis()->CenterTitle();
//hTrueConeAngle->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueConeAngle->GetYaxis()->SetTitle("Number of Events");
hTrueConeAngle->GetYaxis()->CenterTitle();

hTrueConeAngle->Draw("histo");
hRecoConeAngle->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg20 = new TLegend();
leg20 = new TLegend(0.58,0.65,1.00,1.00);
leg20->SetTextSize(0.04);
leg20->SetTextAlign(12);
leg20->SetFillColor(kWhite);
leg20->SetLineColor(kWhite);
leg20->SetShadowColor(kWhite);
leg20->SetHeader("Cone Angles");
leg20->AddEntry(hTrueConeAngle,"MC Truth");
leg20->AddEntry(hRecoConeAngle,"Reconstructed");
leg20->Draw();



// -----------------------
// --- TGraph for DoCA ---
// -----------------------
int m = 101;
double y[101] = {0};
double DoCAEff[101] = {0};
double CCCohDoCA[101] = {0};
double CCCohDoCAR[101] = {0};
double CCCohDoCARejection[101] = {0};

for (int i = 0; i < m; i++) {
   y[i] = i*100/m;
   for (int g = 1; g < i+1; g++)
      {
      CCCohDoCA[i] += hTrueDoCA->GetBinContent(g);
      CCCohDoCAR[i] += hRecoDoCA->GetBinContent(g);
      } // End g-Loop


   CCCohDoCARejection[i] = hRecoDoCA->GetEntries() - CCCohDoCA[i];

   DoCAEff[i] = 100*(CCCohDoCA[i])/(hTrueDoCA->GetEntries());

   CCCohDoCA[i] = CCCohDoCA[i]*100/(hTrueDoCA->GetEntries() - hTrueDoCA->GetBinContent(102));
   CCCohDoCAR[i] = CCCohDoCAR[i]*100/hRecoDoCA->GetEntries();
   CCCohDoCARejection[i] = CCCohDoCARejection[i]*100/hRecoDoCA->GetEntries();
} // End i-Loop

TGraph* gDoCAEff = new TGraph(m, y, DoCAEff);
gDoCAEff->SetTitle("gDoCAEff");
gDoCAEff->SetName("gDoCAEff");
gDoCAEff->SetFillColor(kWhite);
gDoCAEff->SetLineColor(kBlue);
gDoCAEff->SetLineWidth(2);
TGraph* gCCCohDoCA = new TGraph(m, y, CCCohDoCA);
gCCCohDoCA->SetTitle("gCCCohDoCA");
gCCCohDoCA->SetName("gCCCohDoCA");
gCCCohDoCA->SetFillColor(kWhite);
gCCCohDoCA->SetLineColor(kBlue);
gCCCohDoCA->SetLineWidth(2);
TGraph* gCCCohDoCAR = new TGraph(m, y, CCCohDoCAR);
gCCCohDoCAR->SetTitle("gCCCohDoCAR");
gCCCohDoCAR->SetName("gCCCohDoCAR");
gCCCohDoCAR->SetFillColor(kWhite);
gCCCohDoCAR->SetLineColor(kRed);
gCCCohDoCAR->SetLineWidth(2);

TCanvas *c25 = new TCanvas("c25", "DoCA TGraphs");
c25->SetTicks();
c25->SetFillColor(kWhite);

gCCCohDoCAR->GetXaxis()->SetTitle("DoCA [cm]");
gCCCohDoCAR->GetXaxis()->CenterTitle();

gCCCohDoCAR->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohDoCAR->GetYaxis()->CenterTitle();

gCCCohDoCAR->Draw();
gCCCohDoCA->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg25 = new TLegend();
leg25 = new TLegend(0.58,0.65,1.00,1.00);
leg25->SetTextSize(0.04);
leg25->SetTextAlign(12);
leg25->SetFillColor(kWhite);
leg25->SetLineColor(kWhite);
leg25->SetShadowColor(kWhite);
leg25->SetHeader("Channel");
leg25->AddEntry(gCCCohDoCA,"True");
leg25->AddEntry(gCCCohDoCAR,"Reco");
leg25->Draw();
// -----------------------



TCanvas *c21 = new TCanvas("c21", "The True and Reconstructed Distance of Closest Approach for CC-Coh Events", 2);
c21->SetTicks();
c21->SetFillColor(kWhite);

// Area normalzing the plot 
hTrueDoCA->Scale(1/hTrueDoCA->Integral());
hRecoDoCA->Scale(1/hRecoDoCA->Integral());

hTrueDoCA->SetLineColor(kBlue);
hTrueDoCA->SetLineWidth(2);
hTrueDoCA->SetFillColor(kBlue);
hTrueDoCA->SetFillStyle(3005);

hRecoDoCA->SetLineColor(kRed);
hRecoDoCA->SetLineWidth(2);
hRecoDoCA->SetFillColor(kRed);
hRecoDoCA->SetFillStyle(3006);

hTrueDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hTrueDoCA->GetXaxis()->CenterTitle();
//hTrueDoCA->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueDoCA->GetYaxis()->SetTitle("Number of Events");
hTrueDoCA->GetYaxis()->CenterTitle();

hTrueDoCA->Draw("histo");
hRecoDoCA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg21 = new TLegend();
leg21 = new TLegend(0.58,0.65,1.00,1.00);
leg21->SetTextSize(0.04);
leg21->SetTextAlign(12);
leg21->SetFillColor(kWhite);
leg21->SetLineColor(kWhite);
leg21->SetShadowColor(kWhite);
leg21->SetHeader("Distance of Closest Approach");
leg21->AddEntry(hTrueDoCA,"MC Truth");
leg21->AddEntry(hRecoDoCA,"Reconstructed");
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


TCanvas *c23 = new TCanvas("c23", "The Reconstructed Hit Charge for CC-Coh Events within Vertex Activity Distance", 2);
c23->SetTicks();
c23->SetFillColor(kWhite);

// Area normalzing the plot 
hRecoVA0->Scale(1/hRecoVA0->Integral());
hRecoVA1->Scale(1/hRecoVA1->Integral());
hRecoVA2->Scale(1/hRecoVA2->Integral());
hRecoVAAll->Scale(1/hRecoVAAll->Integral());

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

hRecoVAAll->SetLineColor(kBlack);
hRecoVAAll->SetLineWidth(2);
hRecoVAAll->SetFillColor(kBlack);
hRecoVAAll->SetFillStyle(3008);

hRecoVAAll->GetXaxis()->SetTitle("Summed Hit Charge within VA Bubble [ADC]");
hRecoVAAll->GetXaxis()->CenterTitle();

hRecoVAAll->GetYaxis()->SetTitle("Number of Events");
hRecoVAAll->GetYaxis()->CenterTitle();

hRecoVAAll->Draw("histo");
hRecoVA0->Draw("histosame");
hRecoVA1->Draw("histosame");
hRecoVA2->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg23 = new TLegend();
leg23 = new TLegend(0.58,0.65,1.00,1.00);
leg23->SetTextSize(0.04);
leg23->SetTextAlign(12);
leg23->SetFillColor(kWhite);
leg23->SetLineColor(kWhite);
leg23->SetShadowColor(kWhite);
leg23->SetHeader("Vertex Activity");
leg23->AddEntry(hRecoVA0,"Plane 0");
leg23->AddEntry(hRecoVA1,"Plane 1");
leg23->AddEntry(hRecoVA2,"Plane 2");
leg23->AddEntry(hRecoVAAll,"All Planes");
leg23->Draw();






// --------------------------------------
// --- Saving the Plots to PNG Images ---
// --------------------------------------

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

// --------------------------------------
}
