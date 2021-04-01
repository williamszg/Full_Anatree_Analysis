#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f1 = new TFile("../Wouter_Daughter_Information.root"); // <-- File for Daughters Tree
TFile *f2 = new TFile("../CCCoh_Daughter_Information.root"); // <-- File for CCCoh Daughters Tree
TFile *f3 = new TFile("../Other_Daughter_Information.root"); // <-- File for Other Daughters Tree
TFile *f4 = new TFile("Data_Histograms.root"); // <-- File for Data Information
TFile *f5 = new TFile("MC_Histograms.root"); // <-- File for New MC Information
TFile *f6 = new TFile("MC_CCCoh_Histograms.root"); // <-- File for New MC CCCoh Information





TH1D *hT = (TH1D*)f4->Get("hT");
TH1D *hTReco = (TH1D*)f5->Get("hT");
TH1D *hTRecoCCCoh = (TH1D*)f6->Get("hT");

hT->Sumw2();
hTReco->Sumw2();
hTRecoCCCoh->Sumw2();


// Creating the Stacked Histogram
THStack *hTStacked = new THStack("hTStacked", "|t| Stacked for Events Passing 2-Tracks Selection");
THStack *hTPCStacked = new THStack("hTPCStacked", "|t| Stacked for Events Passing Pion Candidacy Selection");
THStack *hTOAStacked = new THStack("hTOAStacked", "|t| Stacked for Events Passing Opening Angle Selection");
}
