#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

{
TFile *f = new TFile("../UpdatedVertexActivity/Data_Histograms_BothPC.root"); // <-- File for Run1 Unblinded Data Sample
TFile *f1 = new TFile("../UpdatedVertexActivity/MC_Histograms_BothPC.root"); // <-- File for Run1 Regular MC Sample
TFile *f2 = new TFile("../POT_Counting/POT_BKGD.root"); // <-- File for POT of Run1 Regular MC Sample
TFile *f3 = new TFile("../UpdatedVertexActivity/CCCoh_Enhanced_Histograms_BothPC.root"); // <-- File for Run1 Enhanced CCCoh Sample
TFile *f4 = new TFile("../POT_Counting/POT_CCCoh.root"); // <-- File for POT of Run1 Enhanced CCCoh Sample





TH1D *hT = (TH1D*)f->Get("hTOA");
TH1D *hTMC = (TH1D*)f1->Get("hTOA");
TH1D *hTMCCCCoh = (TH1D*)f3->Get("hTOA");

hT->Sumw2();
hTMC->Sumw2();
hTMCCCCoh->Sumw2();


TH1D* hTC = (TH1D*)hT->Clone();







TH1D *hPOTCountingBKGD = (TH1D*)f2->Get("hPOTCounting");
TH1D *hPOTCountingCCCoh = (TH1D*)f4->Get("hPOTCounting");

hPOTCountingBKGD->Sumw2();
hPOTCountingCCCoh->Sumw2();





// |-------------------------------------------|
// |--- Setting The Scale Factors Using POT ---|
// |-------------------------------------------|
double Run1ScaleFactorMC = (5.21E19)/((hPOTCountingBKGD->Integral())*(hPOTCountingBKGD->GetMean()));
std::cout<<"Run1ScaleFactorMC = "<<Run1ScaleFactorMC<<std::endl;
double Run1ScaleFactorCCCoh = (5.21E19)/((hPOTCountingCCCoh->Integral())*(hPOTCountingCCCoh->GetMean()));
std::cout<<"Run1ScaleFactorCCCoh = "<<Run1ScaleFactorCCCoh<<std::endl;
// |-------------------------------------------|


// |====================================|
// |=== Rebinning Variables Are Here ===|
// |====================================|
int RebinT = 100; // Variable used to rebin the |t| Plots
// |====================================|



// |-----------------------------------------------|
// |--- Variables for Calculating Cross Section ---|
// |-----------------------------------------------|
double FluxRatio = 7.38e-10; // This is the flux/POT (so just multiply by the POT to get the flux)
double POT = 5.21e19; // This is the POT of the sample, so adjust it when needed!
double Flux = FluxRatio*POT; // This is the flux!
double densityMC = 1.3954; // density of argon for MC
double densityData = 1.3836; // density of argon measured from data
double FiducialVolume = 49185005.76; // the fiducial volume of the MicroBooNE detector for my analysis
double Avogadro = 6.02e23; // Avogadro's Number
double m_mol = 39.95; // amu/moles
double N_Targets_MC = densityMC*FiducialVolume*Avogadro/m_mol; // number of targets for MC
double N_Targets_Data = densityData*FiducialVolume*Avogadro/m_mol; // number of targets for Data
double Efficiency = 0.09; // efficiency that pass OA for CCCoh Enhanced
// |-----------------------------------------------|





TCanvas *c1 = new TCanvas("c1", "Reco |t| After 2 Tracks");
c1->SetTicks();
c1->SetFillColor(kWhite);

hT->SetLineColor(kBlack);
hT->SetLineWidth(2);
hT->Rebin(RebinT);
hTMC->Scale(Run1ScaleFactorMC);
hTMC->Rebin(RebinT);
hTMCCCCoh->Scale(Run1ScaleFactorCCCoh);
hTMCCCCoh->Rebin(RebinT);



hT->Draw("Data");
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
leg1->AddEntry(hT,"Run 1 Overlay MC");
leg1->Draw();




double cross_section_MC = (hTMCCCCoh->Integral())/(N_Targets_MC*Flux*Efficiency);
double cross_section_Data = (hT->Integral() - hTMC->Integral() + hTMCCCCoh->Integral())/(N_Targets_Data*Flux*Efficiency);

std::cout<<"Data Cross Section = "<<cross_section_Data<<std::endl;
std::cout<<"MC Cross Section = "<<cross_section_MC<<std::endl;
}
