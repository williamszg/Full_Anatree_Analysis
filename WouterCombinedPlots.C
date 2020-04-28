{
TFile *f = new TFile("Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("EventNtuple.root"); // <-- File for Event Tree
TFile *f3 = new TFile("CCRES_Daughter_Information.root"); // <-- File for CCRes Daughters Tree
TFile *f4 = new TFile("Other_Daughter_Information.root"); // <-- File for Other (aka NOT CCCoh) Daughters Tree
TFile *f5 = new TFile("CCQE_Daughter_Information.root"); // <-- File for CCQE Daughters Tree
TFile *f6 = new TFile("NC_Daughter_Information.root"); // <-- File for NC Daughters Tree
TFile *f7 = new TFile("CCDIS_Daughter_Information.root"); // <-- File for CCDIS Daughters Tree


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

TH1D *hRecoVA2CCRes = (TH1D*)f3->Get("hRecoVA2");
TH1D *hRecoVA2CCDIS = (TH1D*)f7->Get("hRecoVA2");
TH1D *hRecoVA2Other = (TH1D*)f4->Get("hRecoVA2");
TH1D *hRecoVA2CCQE = (TH1D*)f5->Get("hRecoVA2");
TH1D *hRecoVA2NC = (TH1D*)f6->Get("hRecoVA2");

hRecoVA2CCRes->Sumw2();
hRecoVA2CCDIS->Sumw2();
hRecoVA2Other->Sumw2();
hRecoVA2CCQE->Sumw2();
hRecoVA2NC->Sumw2();

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

hCutByCutMuonCandidate->Divide(hCutByCutMuonCandidateDivide);
hCutByCutMuonCandidateCCQE->Divide(hCutByCutMuonCandidateDivideCCQE);
hCutByCutMuonCandidateCCRes->Divide(hCutByCutMuonCandidateDivideCCRes);
hCutByCutMuonCandidateCCDIS->Divide(hCutByCutMuonCandidateDivideCCDIS);
hCutByCutMuonCandidateOther->Divide(hCutByCutMuonCandidateDivideOther);
hCutByCutMuonCandidateNC->Divide(hCutByCutMuonCandidateDivideNC);

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

hCutByCutMuonCandidate->GetYaxis()->SetRangeUser(0,1.05);

hCutByCutMuonCandidate->Draw("E1");
hCutByCutMuonCandidateCCQE->Draw("E1same");
hCutByCutMuonCandidateCCRes->Draw("E1same");
hCutByCutMuonCandidateCCDIS->Draw("E1same");
hCutByCutMuonCandidateOther->Draw("E1same");
hCutByCutMuonCandidateNC->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg18 = new TLegend();
leg18 = new TLegend(0.58,0.65,1.00,1.00);
leg18->SetTextSize(0.04);
leg18->SetTextAlign(12);
leg18->SetFillColor(kWhite);
leg18->SetLineColor(kWhite);
leg18->SetShadowColor(kWhite);
leg18->SetHeader("Cone Angles");
leg18->AddEntry(hCutByCutMuonCandidate,"CCCoh");
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
double CCCohConeAngle[181] = {0};
double CCCohConeAngleR[181] = {0};
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

for (int i = 0; i < n; i++)
   {
   x[i] = i*180/n;
   for (int g = 1; g < i+1; g++)
      {
      CCCohConeAngle[i] += hTrueConeAngle->GetBinContent(g);
      CCCohConeAngleR[i] += hRecoConeAngle->GetBinContent(g);
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

   ConeAngleEff[i] = 100*(CCCohConeAngle[i])/(hTrueConeAngle->GetEntries());
   ConeAngleEffR[i] = 100*(CCCohConeAngleR[i])/(hRecoConeAngle->GetEntries());
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
gNCConeAngleR->SetTitle("gCCQEConeAngleR");
gNCConeAngleR->SetName("gCCQEConeAngleR");
gNCConeAngleR->SetFillColor(kWhite);
gNCConeAngleR->SetLineColor(kGreen);
gNCConeAngleR->SetLineWidth(2);

TCanvas *c24 = new TCanvas("c24", "Cone Angle TGraphs");
c24->SetTicks();
c24->SetFillColor(kWhite);

gCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gCCCohConeAngle->GetXaxis()->CenterTitle();

gCCCohConeAngle->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohConeAngle->GetYaxis()->CenterTitle();

gCCCohConeAngle->Draw();
gCCCohConeAngleR->Draw("same");
gCCResConeAngle->Draw("same");
gCCResConeAngleR->Draw("same");
gCCDISConeAngle->Draw("same");
gCCDISConeAngleR->Draw("same");
gOtherConeAngle->Draw("same");
gOtherConeAngleR->Draw("same");
gCCQEConeAngle->Draw("same");
gCCQEConeAngleR->Draw("same");
gNCConeAngle->Draw("same");
gNCConeAngleR->Draw("same");

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
leg24->AddEntry(gCCQEConeAngle,"CCQE True");
leg24->AddEntry(gCCQEConeAngleR,"CCQE Reco");
leg24->AddEntry(gCCResConeAngle,"CCRes True");
leg24->AddEntry(gCCResConeAngleR,"CCRes Reco");
leg24->AddEntry(gCCDISConeAngle,"CCDIS True");
leg24->AddEntry(gCCDISConeAngleR,"CCDIS Reco");
leg24->AddEntry(gOtherConeAngle,"Other True");
leg24->AddEntry(gOtherConeAngleR,"Other Reco");
leg24->AddEntry(gNCConeAngle,"NC True");
leg24->AddEntry(gNCConeAngleR,"NC Reco");
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
hTrueConeAngleCCQE->Draw("histosame");
hRecoConeAngleCCQE->Draw("histosame");
hTrueConeAngleCCRes->Draw("histosame");
hRecoConeAngleCCRes->Draw("histosame");
hTrueConeAngleCCDIS->Draw("histosame");
hRecoConeAngleCCDIS->Draw("histosame");
hTrueConeAngleOther->Draw("histosame");
hRecoConeAngleOther->Draw("histosame");
hTrueConeAngleNC->Draw("histosame");
hRecoConeAngleNC->Draw("histosame");


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
leg20->AddEntry(hTrueConeAngleCCQE,"CCQE True");
leg20->AddEntry(hRecoConeAngleCCQE,"CCQE Reco");
leg20->AddEntry(hTrueConeAngleCCRes,"CCRes True");
leg20->AddEntry(hRecoConeAngleCCRes,"CCRes Reco");
leg20->AddEntry(hTrueConeAngleCCDIS,"CCDIS True");
leg20->AddEntry(hRecoConeAngleCCDIS,"CCDIS Reco");
leg20->AddEntry(hTrueConeAngleOther,"Other True");
leg20->AddEntry(hRecoConeAngleOther,"Other Reco");
leg20->AddEntry(hTrueConeAngleNC,"NC True");
leg20->AddEntry(hRecoConeAngleNC,"NC Reco");
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

for (int i = 0; i < m; i++) {
   y[i] = i*100/m;
   for (int g = 1; g < i+1; g++)
      {
      CCCohDoCA[i] += hTrueDoCA->GetBinContent(g);
      CCCohDoCAR[i] += hRecoDoCA->GetBinContent(g);
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
      } // End g-Loop


   CCCohDoCARejection[i] = hRecoDoCA->GetEntries() - CCCohDoCA[i];

   DoCAEff[i] = 100*(CCCohDoCA[i])/(hTrueDoCA->GetEntries());

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

TCanvas *c25 = new TCanvas("c25", "DoCA TGraphs");
c25->SetTicks();
c25->SetFillColor(kWhite);

gCCCohDoCAR->GetXaxis()->SetTitle("DoCA [cm]");
gCCCohDoCAR->GetXaxis()->CenterTitle();

gCCCohDoCAR->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohDoCAR->GetYaxis()->CenterTitle();

gCCCohDoCAR->Draw();
gCCCohDoCA->Draw("same");
gCCResDoCA->Draw("same");
gCCResDoCAR->Draw("same");
gCCDISDoCA->Draw("same");
gCCDISDoCAR->Draw("same");
gOtherDoCA->Draw("same");
gOtherDoCAR->Draw("same");
gCCQEDoCA->Draw("same");
gCCQEDoCAR->Draw("same");
gNCDoCA->Draw("same");
gNCDoCAR->Draw("same");

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
leg25->AddEntry(gCCQEDoCA,"CCQE True");
leg25->AddEntry(gCCQEDoCAR,"CCQE Reco");
leg25->AddEntry(gCCResDoCA,"CCRes True");
leg25->AddEntry(gCCResDoCAR,"CCRes Reco");
leg25->AddEntry(gCCDISDoCA,"CCDIS True");
leg25->AddEntry(gCCDISDoCAR,"CCDIS Reco");
leg25->AddEntry(gOtherDoCA,"Other True");
leg25->AddEntry(gOtherDoCAR,"Other Reco");
leg25->AddEntry(gNCDoCA,"NC True");
leg25->AddEntry(gNCDoCAR,"NC Reco");
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


hTrueDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hTrueDoCA->GetXaxis()->CenterTitle();
//hTrueDoCA->GetXaxis()->SetRangeUser(-20.5,20.5);

hTrueDoCA->GetYaxis()->SetTitle("Number of Events");
hTrueDoCA->GetYaxis()->CenterTitle();

hTrueDoCA->Draw("histo");
hRecoDoCA->Draw("histosame");
hTrueDoCACCQE->Draw("histosame");
hRecoDoCACCQE->Draw("histosame");
hTrueDoCACCRes->Draw("histosame");
hRecoDoCACCRes->Draw("histosame");
hTrueDoCACCDIS->Draw("histosame");
hRecoDoCACCDIS->Draw("histosame");
hTrueDoCAOther->Draw("histosame");
hRecoDoCAOther->Draw("histosame");
hTrueDoCANC->Draw("histosame");
hRecoDoCANC->Draw("histosame");


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
leg21->AddEntry(hTrueDoCACCQE,"CCQE True");
leg21->AddEntry(hRecoDoCACCQE,"CCQE Reco");
leg21->AddEntry(hTrueDoCACCRes,"CCRes True");
leg21->AddEntry(hRecoDoCACCRes,"CCRes Reco");
leg21->AddEntry(hTrueDoCACCDIS,"CCDIS True");
leg21->AddEntry(hRecoDoCACCDIS,"CCDIS Reco");
leg21->AddEntry(hTrueDoCAOther,"Other True");
leg21->AddEntry(hRecoDoCAOther,"Other Reco");
leg21->AddEntry(hTrueDoCANC,"NC True");
leg21->AddEntry(hRecoDoCANC,"NC Reco");
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
hRecoVA2NC->Draw("histosame");
hRecoVA2CCRes->Draw("histosame");
hRecoVA2CCDIS->Draw("histosame");
hRecoVA2CCQE->Draw("histosame");
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
leg23->AddEntry(hRecoVA2CCQE,"CCQE Reco");
leg23->AddEntry(hRecoVA2CCRes,"CCRes Reco");
leg23->AddEntry(hRecoVA2CCDIS,"CCDIS Reco");
leg23->AddEntry(hRecoVA2Other,"Other Reco");
leg23->AddEntry(hRecoVA2NC,"NC Reco");
leg23->Draw();






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
*/
// --------------------------------------
}
