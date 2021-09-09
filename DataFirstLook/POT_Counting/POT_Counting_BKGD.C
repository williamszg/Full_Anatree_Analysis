#define POT_Counting_BKGD_cxx
#include "POT_Counting_BKGD.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void POT_Counting_BKGD::Loop()
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
      TotalPOT += pot;
      // ===========================

   }

   std::cout<<"The POT for this sample is = "<<TotalPOT<<std::endl;

}
