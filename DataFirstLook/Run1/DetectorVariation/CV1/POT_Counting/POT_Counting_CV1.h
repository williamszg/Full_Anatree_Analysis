//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct  8 12:52:15 2021 by ROOT version 6.12/06
// from TTree SubRun/SubRun TTree
// found on file: /pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/Run1/DetectorVariation/NeutrinoSelectionFilter_Run1_CV1.root
//////////////////////////////////////////////////////////

#ifndef POT_Counting_CV1_h
#define POT_Counting_CV1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class POT_Counting_CV1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           subRun;
   Float_t         pot;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subRun;   //!
   TBranch        *b_pot;   //!

   POT_Counting_CV1(TTree *tree=0);
   virtual ~POT_Counting_CV1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef POT_Counting_CV1_cxx
POT_Counting_CV1::POT_Counting_CV1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/Run1/DetectorVariation/NeutrinoSelectionFilter_Run1_CV1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/Run1/DetectorVariation/NeutrinoSelectionFilter_Run1_CV1.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/Run1/DetectorVariation/NeutrinoSelectionFilter_Run1_CV1.root:/nuselection");
      dir->GetObject("SubRun",tree);

   }
   Init(tree);
}

POT_Counting_CV1::~POT_Counting_CV1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t POT_Counting_CV1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t POT_Counting_CV1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void POT_Counting_CV1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subRun", &subRun, &b_subRun);
   fChain->SetBranchAddress("pot", &pot, &b_pot);
   Notify();
}

Bool_t POT_Counting_CV1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void POT_Counting_CV1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t POT_Counting_CV1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef POT_Counting_CV1_cxx
