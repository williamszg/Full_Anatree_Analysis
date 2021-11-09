#define POT_Counting_WireModX_cxx
#include "POT_Counting_WireModX.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

TH1D *hPOTCounting = new TH1D("hPOTCounting", "The POT for this file", 1000, 0, 100E16);

void POT_Counting_WireModX::Loop()
{
   if (fChain == 0) return;


   Float_t TotalPOT = 0;


   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      // ===========================
      // === Counting up the POT ===
      // ===========================
      hPOTCounting->Fill(pot);
      TotalPOT += pot;
      // ===========================

   }

   std::cout<<"The POT for this sample is = "<<TotalPOT<<std::endl;
   std::cout<<"The POT Integral = "<<hPOTCounting->Integral()<<std::endl;
   std::cout<<"The POT Mean Value = "<<hPOTCounting->GetMean()<<std::endl;
   std::cout<<"The POT for this sample using the mean and integral is = "<<(hPOTCounting->Integral())*(hPOTCounting->GetMean())<<std::endl;
   hPOTCounting->Draw();

   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // %%% Saving Histograms to a File Here %%%
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   TFile *TMCInfo = new TFile("WireModX_POT.root", "RECREATE");

   hPOTCounting->Write();

}
