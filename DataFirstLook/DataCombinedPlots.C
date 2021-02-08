#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("../Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("../CCCoh_Daughter_Information.root"); // <-- File for CCCoh Daughters Tree
TFile *f3 = new TFile("../Other_Daughter_Information.root"); // <-- File for Other Daughters Tree
TFile *f4 = new TFile("Data_Histograms.root"); // <-- File for Data Information





TH1D *hT = (TH1D*)f4->Get("hT");
TH1D *hTAfter2RecoCCCoh = (TH1D*)f2->Get("hTAfter2Reco");
TH1D *hTAfter2RecoOther = (TH1D*)f3->Get("hTAfter2Reco");
TH1D *hTAfter2TrueCCCoh = (TH1D*)f2->Get("hTAfter2True");
TH1D *hTAfter2TrueOther = (TH1D*)f3->Get("hTAfter2True");

hT->Sumw2();
hTAfter2RecoCCCoh->Sumw2();
hTAfter2RecoOther->Sumw2();
hTAfter2TrueCCCoh->Sumw2();
hTAfter2TrueOther->Sumw2();


TH1D *hNumTrksWithin10 = (TH1D*)f4->Get("hNumTrksWithin10");
TH1D *hNTracksInBubbleCCCoh = (TH1D*)f2->Get("hNTracksInBubble");
TH1D *hNTracksInBubbleOther = (TH1D*)f3->Get("hNTracksInBubble");

hNumTrksWithin10->Sumw2();
hNTracksInBubbleCCCoh->Sumw2();
hNTracksInBubbleOther->Sumw2();


TH1D *hNumMuonCandidates = (TH1D*)f4->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesCCCoh = (TH1D*)f2->Get("hNumMuonCandidates");
TH1D *hNumMuonCandidatesOther = (TH1D*)f3->Get("hNumMuonCandidates");

hNumMuonCandidates->Sumw2();
hNumMuonCandidatesCCCoh->Sumw2();
hNumMuonCandidatesOther->Sumw2();


TH1D *hConeAngleFor2Tracks = (TH1D*)f4->Get("hConeAngleFor2Tracks");
TH1D *hRecoConeAngleCCCoh = (TH1D*)f2->Get("hRecoConeAngleAfter2");
TH1D *hRecoConeAngleOther = (TH1D*)f3->Get("hRecoConeAngleAfter2");
TH1D *hTrueConeAngleCCCoh = (TH1D*)f2->Get("hTrueConeAngleAfter2");
TH1D *hTrueConeAngleOther = (TH1D*)f3->Get("hTrueConeAngleAfter2");

hConeAngleFor2Tracks->Sumw2();
hRecoConeAngleCCCoh->Sumw2();
hRecoConeAngleOther->Sumw2();
hTrueConeAngleCCCoh->Sumw2();
hTrueConeAngleOther->Sumw2();


TH1D *hOpeningAngleFor2Tracks = (TH1D*)f4->Get("hOpeningAngleFor2Tracks");
TH1D *hRecoOpeningAngleCCCoh = (TH1D*)f2->Get("hRecoOpeningAngleAfter2");
TH1D *hRecoOpeningAngleOther = (TH1D*)f3->Get("hRecoOpeningAngleAfter2");
TH1D *hTrueOpeningAngleCCCoh = (TH1D*)f2->Get("hTrueOpeningAngleAfter2");
TH1D *hTrueOpeningAngleOther = (TH1D*)f3->Get("hTrueOpeningAngleAfter2");

hOpeningAngleFor2Tracks->Sumw2();
hRecoOpeningAngleCCCoh->Sumw2();
hRecoOpeningAngleOther->Sumw2();
hTrueOpeningAngleCCCoh->Sumw2();
hTrueOpeningAngleOther->Sumw2();


TH1D *hRecoNuEnergy = (TH1D*)f4->Get("hRecoNuEnergy");
TH1D *hRecoNuEnergyConeAngle = (TH1D*)f4->Get("hRecoNuEnergyConeAngle");
TH1D *hRecoNuEnergyDoCA = (TH1D*)f4->Get("hRecoNuEnergyDoCA");
TH1D *hRecoNuEnergyPionCandidate = (TH1D*)f4->Get("hRecoNuEnergyPionCandidate");
TH1D *hRecoNuEnergyT = (TH1D*)f4->Get("hRecoNuEnergyT");

hRecoNuEnergy->Sumw2();
hRecoNuEnergyConeAngle->Sumw2();
hRecoNuEnergyDoCA->Sumw2();
hRecoNuEnergyPionCandidate->Sumw2();
hRecoNuEnergyT->Sumw2();


TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2 = (TH2D*)f4->Get("hMuonCandidateTracksMuonChi2VsProtonChi2");
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2 = (TH2D*)f4->Get("hPionCandidateTracksMuonChi2VsProtonChi2");
TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA = (TH2D*)f4->Get("hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA");
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA = (TH2D*)f4->Get("hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA");





// ========================================
// === Defining Some Scale Factors Here ===
// ========================================
double After2TracksCutMCtoDataScaleFactor = 4132./17065.;
// ========================================





TCanvas *c1 = new TCanvas("c1", "The Area Normalized |t| Plots After 2 Tracks Selection");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Adding the MC Histograms
hTAfter2RecoCCCoh->Add(hTAfter2RecoOther);
hTAfter2TrueCCCoh->Add(hTAfter2TrueOther);

// Area normalzing the plot 
hTAfter2RecoCCCoh->Scale(1/hTAfter2RecoCCCoh->Integral());
hTAfter2TrueCCCoh->Scale(1/hTAfter2TrueCCCoh->Integral());
//hTAfter2RecoCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
//hTAfter2TrueCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
hT->Scale(1/hT->Integral());

// Setting Drawing Parameters
hTAfter2TrueCCCoh->SetLineColor(kBlue);
hTAfter2TrueCCCoh->SetLineWidth(2);
hTAfter2TrueCCCoh->Rebin(50);

hTAfter2RecoCCCoh->SetLineColor(kRed);
hTAfter2RecoCCCoh->SetLineWidth(2);
hTAfter2RecoCCCoh->Rebin(50);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Rebin(50);

hT->GetXaxis()->SetTitle("|t| [GeV^{2}/c^{2}]");
hT->GetXaxis()->CenterTitle();

hT->GetYaxis()->SetTitle("Normalized Events");
hT->GetYaxis()->CenterTitle();

hT->Draw("E1");
hTAfter2RecoCCCoh->Draw("histosame");
hTAfter2TrueCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,1.00,1.00);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Samples");
leg1->AddEntry(hTAfter2TrueCCCoh,"MC True");
leg1->AddEntry(hTAfter2RecoCCCoh,"MC Reco");
leg1->AddEntry(hT,"Data");
leg1->Draw();




TCanvas *c2 = new TCanvas("c2", "The Area Normalized Number of Tracks Within 10cm of Neutrino Vertex");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Adding the MC Histograms
hNTracksInBubbleCCCoh->Add(hNTracksInBubbleOther);

// Area normalzing the plot 
hNTracksInBubbleCCCoh->Scale(1/hNTracksInBubbleCCCoh->Integral());
hNumTrksWithin10->Scale(1/hNumTrksWithin10->Integral());

// Setting Drawing Parameters
hNTracksInBubbleCCCoh->SetLineColor(kRed);
hNTracksInBubbleCCCoh->SetLineWidth(2);
//hNTracksInBubbleCCCoh->Rebin(50);

hNumTrksWithin10->SetLineColor(kBlack);
hNumTrksWithin10->SetLineWidth(2);
//hNumTrksWithin10->Rebin(50);

hNumTrksWithin10->GetXaxis()->SetTitle("Number of Tracks");
hNumTrksWithin10->GetXaxis()->CenterTitle();

hNumTrksWithin10->GetYaxis()->SetTitle("Normalized Events");
hNumTrksWithin10->GetYaxis()->CenterTitle();

hNumTrksWithin10->Draw("E1");
hNTracksInBubbleCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,1.00,1.00);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Samples");
leg2->AddEntry(hNTracksInBubbleCCCoh,"MC Reco");
leg2->AddEntry(hNumTrksWithin10,"Data");
leg2->Draw();




TCanvas *c3 = new TCanvas("c3", "The Area Normalized Number of Muon Candidates for Events");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Adding the MC Histograms
hNumMuonCandidatesCCCoh->Add(hNumMuonCandidatesOther);

// Area normalzing the plot 
hNumMuonCandidatesCCCoh->Scale(1/hNumMuonCandidatesCCCoh->Integral());
hNumMuonCandidates->Scale(1/hNumMuonCandidates->Integral());

// Setting Drawing Parameters
hNumMuonCandidatesCCCoh->SetLineColor(kRed);
hNumMuonCandidatesCCCoh->SetLineWidth(2);
//hNumMuonCandidatesCCCoh->Rebin(50);

hNumMuonCandidates->SetLineColor(kBlack);
hNumMuonCandidates->SetLineWidth(2);
//hNumMuonCandidates->Rebin(50);

hNumMuonCandidates->GetXaxis()->SetTitle("Number of Muon Candidates");
hNumMuonCandidates->GetXaxis()->CenterTitle();

hNumMuonCandidates->GetYaxis()->SetTitle("Normalized Events");
hNumMuonCandidates->GetYaxis()->CenterTitle();

hNumMuonCandidates->Draw("E1");
hNumMuonCandidatesCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,1.00,1.00);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Samples");
leg3->AddEntry(hNumMuonCandidatesCCCoh,"MC Reco");
leg3->AddEntry(hNumMuonCandidates,"Data");
leg3->Draw();




TCanvas *c4 = new TCanvas("c4", "The Area Normalized Cone Angle for Events Passing 2 Tracks");
c4->SetTicks();
c4->SetFillColor(kWhite);

// Adding the MC Histograms
hRecoConeAngleCCCoh->Add(hRecoConeAngleOther);
hTrueConeAngleCCCoh->Add(hTrueConeAngleOther);

// Area normalzing the plot 
hRecoConeAngleCCCoh->Scale(1/hRecoConeAngleCCCoh->Integral());
hTrueConeAngleCCCoh->Scale(1/hTrueConeAngleCCCoh->Integral());
//hRecoConeAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
//hTrueConeAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
hConeAngleFor2Tracks->Scale(1/hConeAngleFor2Tracks->Integral());

// Setting Drawing Parameters
hTrueConeAngleCCCoh->SetLineColor(kBlue);
hTrueConeAngleCCCoh->SetLineWidth(2);
hTrueConeAngleCCCoh->Rebin(5);

hRecoConeAngleCCCoh->SetLineColor(kRed);
hRecoConeAngleCCCoh->SetLineWidth(2);
hRecoConeAngleCCCoh->Rebin(5);

hConeAngleFor2Tracks->SetLineColor(kBlack);
hConeAngleFor2Tracks->SetLineWidth(2);
hConeAngleFor2Tracks->Rebin(5);

hTrueConeAngleCCCoh->GetXaxis()->SetTitle("Cone Angles [Degrees]");
hTrueConeAngleCCCoh->GetXaxis()->CenterTitle();

hTrueConeAngleCCCoh->GetYaxis()->SetTitle("Normalized Events");
hTrueConeAngleCCCoh->GetYaxis()->CenterTitle();

hTrueConeAngleCCCoh->Draw("histo");
hRecoConeAngleCCCoh->Draw("histosame");
hConeAngleFor2Tracks->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,1.00,1.00);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Samples");
leg4->AddEntry(hTrueConeAngleCCCoh,"MC True");
leg4->AddEntry(hRecoConeAngleCCCoh,"MC Reco");
leg4->AddEntry(hConeAngleFor2Tracks,"Data");
leg4->Draw();




TCanvas *c5 = new TCanvas("c5", "The Area Normalized Opening Angle for Events Passing 2 Tracks");
c5->SetTicks();
c5->SetFillColor(kWhite);

// Adding the MC Histograms
hRecoOpeningAngleCCCoh->Add(hRecoOpeningAngleOther);
hTrueOpeningAngleCCCoh->Add(hTrueOpeningAngleOther);

// Area normalzing the plot 
hRecoOpeningAngleCCCoh->Scale(1/hRecoOpeningAngleCCCoh->Integral());
hTrueOpeningAngleCCCoh->Scale(1/hTrueOpeningAngleCCCoh->Integral());
//hRecoOpeningAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
//hTrueOpeningAngleCCCoh->Scale(After2TracksCutMCtoDataScaleFactor);
hOpeningAngleFor2Tracks->Scale(1/hOpeningAngleFor2Tracks->Integral());

// Setting Drawing Parameters
hTrueOpeningAngleCCCoh->SetLineColor(kBlue);
hTrueOpeningAngleCCCoh->SetLineWidth(2);
hTrueOpeningAngleCCCoh->Rebin(5);

hRecoOpeningAngleCCCoh->SetLineColor(kRed);
hRecoOpeningAngleCCCoh->SetLineWidth(2);
hRecoOpeningAngleCCCoh->Rebin(5);

hOpeningAngleFor2Tracks->SetLineColor(kBlack);
hOpeningAngleFor2Tracks->SetLineWidth(2);
hOpeningAngleFor2Tracks->Rebin(5);

hOpeningAngleFor2Tracks->GetXaxis()->SetTitle("#theta_{#mu#pi} [Degrees]");
hOpeningAngleFor2Tracks->GetXaxis()->CenterTitle();

hOpeningAngleFor2Tracks->GetYaxis()->SetTitle("Normalized Events");
hOpeningAngleFor2Tracks->GetYaxis()->CenterTitle();

hOpeningAngleFor2Tracks->Draw("E1");
hRecoOpeningAngleCCCoh->Draw("histosame");
hTrueOpeningAngleCCCoh->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,1.00,1.00);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Samples");
leg5->AddEntry(hTrueOpeningAngleCCCoh,"MC True");
leg5->AddEntry(hRecoOpeningAngleCCCoh,"MC Reco");
leg5->AddEntry(hOpeningAngleFor2Tracks,"Data");
leg5->Draw();




TCanvas *c6 = new TCanvas("c6", "The Reconstructed Neutrino Energy for Events After 2-Tracks Selection");
c6->SetTicks();
c6->SetFillColor(kWhite);

// Setting Drawing Parameters
hRecoNuEnergy->SetLineColor(kBlack);
hRecoNuEnergy->SetLineWidth(2);
hRecoNuEnergy->Rebin(20);

hRecoNuEnergyConeAngle->SetLineColor(kBlue);
hRecoNuEnergyConeAngle->SetLineWidth(2);
hRecoNuEnergyConeAngle->Rebin(20);

hRecoNuEnergyDoCA->SetLineColor(kRed);
hRecoNuEnergyDoCA->SetLineWidth(2);
hRecoNuEnergyDoCA->Rebin(20);

hRecoNuEnergyPionCandidate->SetLineColor(kGreen);
hRecoNuEnergyPionCandidate->SetLineWidth(2);
hRecoNuEnergyPionCandidate->Rebin(20);

hRecoNuEnergyT->SetLineColor(kGray);
hRecoNuEnergyT->SetLineWidth(2);
hRecoNuEnergyT->Rebin(20);

hRecoNuEnergy->GetXaxis()->SetTitle("E_{#nu} [GeV]");
hRecoNuEnergy->GetXaxis()->CenterTitle();

hRecoNuEnergy->GetYaxis()->SetTitle("Events");
hRecoNuEnergy->GetYaxis()->CenterTitle();

hRecoNuEnergy->Draw("E1");
hRecoNuEnergyConeAngle->Draw("E1same");
hRecoNuEnergyDoCA->Draw("E1same");
hRecoNuEnergyPionCandidate->Draw("E1same");
hRecoNuEnergyT->Draw("E1same");


// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,1.00,1.00);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("After Which Selection");
leg6->AddEntry(hRecoNuEnergy,"2-Tracks");
leg6->AddEntry(hRecoNuEnergyConeAngle,"Cone Angle");
leg6->AddEntry(hRecoNuEnergyDoCA,"DoCA");
leg6->AddEntry(hRecoNuEnergyPionCandidate,"Pion Candidacy");
leg6->AddEntry(hRecoNuEnergyT,"|t|");
leg6->Draw();




TCanvas *c7 = new TCanvas("c7", "Muon Candidate Tracks After 2-Tracks Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c7->SetTicks();
c7->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2->Draw("COLZ");




TCanvas *c8 = new TCanvas("c8", "Pion Candidate Tracks After 2-Tracks Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c8->SetTicks();
c8->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2->Draw("COLZ");




TCanvas *c9 = new TCanvas("c9", "Muon Candidate Tracks After DoCA Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c9->SetTicks();
c9->SetFillColor(kWhite);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->SetTitle("p #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->SetTitle("#mu #chi^{2}");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->CenterTitle();

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinX(10);
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinY(5);

hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 350., "X");
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hMuonCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Draw("COLZ");




TCanvas *c10 = new TCanvas("c10", "Pion Candidate Tracks After DoCA Selection #mu #chi^{2} Vs p #chi^{2}", 2);
c10->SetTicks();
c10->SetFillColor(kWhite);

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->SetTitle("p #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetXaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->SetTitle("#mu #chi^{2}");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->GetYaxis()->CenterTitle();

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinX(10);
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->RebinY(5);

hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 350., "X");
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->SetAxisRange(0., 100., "Y");

gStyle->SetPalette(kRainBow);
gPad->SetLogz();
hPionCandidateTracksMuonChi2VsProtonChi2AfterDoCA->Draw("COLZ");
}
