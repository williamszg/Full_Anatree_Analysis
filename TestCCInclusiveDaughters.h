//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 16 09:04:48 2020 by ROOT version 6.10/02
// from TTree Daughters/Daughters Tree
// found on file: NuCCanalyser.root
//////////////////////////////////////////////////////////

#ifndef TestCCInclusiveDaughters_h
#define TestCCInclusiveDaughters_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class TestCCInclusiveDaughters {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          event;
   UInt_t          run;
   UInt_t          subrun;
   UInt_t          evt_time_sec;
   UInt_t          evt_time_nsec;
   UInt_t          hitsU;
   UInt_t          hitsV;
   UInt_t          hitsY;
   Float_t         caloU;
   Float_t         caloV;
   Float_t         caloY;
   UInt_t          hitsSps;
   UInt_t          generation;
   Float_t         track_score;
   Bool_t          is_shower;
   Bool_t          is_track;
   Bool_t          has_shower_daughter;
   Bool_t          is_track_daughter;
   Float_t         vx;
   Float_t         vy;
   Float_t         vz;
   Bool_t          start_contained;
   Float_t         vtx_distance;
   Float_t         track_length;
   Float_t         track_endx;
   Float_t         track_endy;
   Float_t         track_endz;
   Float_t         track_dirx;
   Float_t         track_diry;
   Float_t         track_dirz;
   Bool_t          track_is_muon_candidate;
   Float_t         track_range_mom_p;
   Float_t         track_range_mom_mu;
   Float_t         track_mcs_mom;
   Float_t         track_mcs_err;
   Float_t         track_mcs_ll;
   Float_t         track_chi2_proton;
   Float_t         track_chi2_muon;
   Float_t         shower_length;
   Float_t         shower_openangle;
   Float_t         shower_dirx;
   Float_t         shower_diry;
   Float_t         shower_dirz;
   Float_t         start_dedxU;
   Float_t         start_dedxV;
   Float_t         start_dedxY;
   Int_t           start_hitsU;
   Int_t           start_hitsV;
   Int_t           start_hitsY;
   Float_t         start_pitchU;
   Float_t         start_pitchV;
   Float_t         start_pitchY;
   Bool_t          mc_neutrino;
   Int_t           mc_pdg;
   Float_t         mc_hit_fraction;
   Float_t         mc_vx;
   Float_t         mc_vy;
   Float_t         mc_vz;
   Float_t         mc_vx_sce;
   Float_t         mc_vy_sce;
   Float_t         mc_vz_sce;
   Float_t         mc_length;
   Float_t         mc_energy;
   Float_t         mc_px;
   Float_t         mc_py;
   Float_t         mc_pz;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_evt_time_sec;   //!
   TBranch        *b_evt_time_nsec;   //!
   TBranch        *b_hitsU;   //!
   TBranch        *b_hitsV;   //!
   TBranch        *b_hitsY;   //!
   TBranch        *b_caloU;   //!
   TBranch        *b_caloV;   //!
   TBranch        *b_caloY;   //!
   TBranch        *b_hitsSps;   //!
   TBranch        *b_generation;   //!
   TBranch        *b_track_score;   //!
   TBranch        *b_is_shower;   //!
   TBranch        *b_is_track;   //!
   TBranch        *b_has_shower_daughter;   //!
   TBranch        *b_is_track_daughter;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_start_contained;   //!
   TBranch        *b_vtx_distance;   //!
   TBranch        *b_track_length;   //!
   TBranch        *b_track_endx;   //!
   TBranch        *b_track_endy;   //!
   TBranch        *b_track_endz;   //!
   TBranch        *b_track_dirx;   //!
   TBranch        *b_track_diry;   //!
   TBranch        *b_track_dirz;   //!
   TBranch        *b_track_is_muon_candidate;   //!
   TBranch        *b_track_range_mom_p;   //!
   TBranch        *b_track_range_mom_mu;   //!
   TBranch        *b_track_mcs_mom;   //!
   TBranch        *b_track_mcs_err;   //!
   TBranch        *b_track_mcs_ll;   //!
   TBranch        *b_track_chi2_proton;   //!
   TBranch        *b_track_chi2_muon;   //!
   TBranch        *b_shower_length;   //!
   TBranch        *b_shower_openangle;   //!
   TBranch        *b_shower_dirx;   //!
   TBranch        *b_shower_diry;   //!
   TBranch        *b_shower_dirz;   //!
   TBranch        *b_start_dedxU;   //!
   TBranch        *b_start_dedxV;   //!
   TBranch        *b_start_dedxY;   //!
   TBranch        *b_start_hitsU;   //!
   TBranch        *b_start_hitsV;   //!
   TBranch        *b_start_hitsY;   //!
   TBranch        *b_start_pitchU;   //!
   TBranch        *b_start_pitchV;   //!
   TBranch        *b_start_pitchY;   //!
   TBranch        *b_mc_neutrino;   //!
   TBranch        *b_mc_pdg;   //!
   TBranch        *b_mc_hit_fraction;   //!
   TBranch        *b_mc_vx;   //!
   TBranch        *b_mc_vy;   //!
   TBranch        *b_mc_vz;   //!
   TBranch        *b_mc_vx_sce;   //!
   TBranch        *b_mc_vy_sce;   //!
   TBranch        *b_mc_vz_sce;   //!
   TBranch        *b_mc_length;   //!
   TBranch        *b_mc_energy;   //!
   TBranch        *b_mc_px;   //!
   TBranch        *b_mc_py;   //!
   TBranch        *b_mc_pz;   //!

   TestCCInclusiveDaughters(TTree *tree=0);
   virtual ~TestCCInclusiveDaughters();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef TestCCInclusiveDaughters_cxx
TestCCInclusiveDaughters::TestCCInclusiveDaughters(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("NuCCanalyser.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("NuCCanalyser.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("NuCCanalyser.root:/NuCCanalyzer");
      dir->GetObject("Daughters",tree);

   }
   Init(tree);
}

TestCCInclusiveDaughters::~TestCCInclusiveDaughters()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TestCCInclusiveDaughters::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TestCCInclusiveDaughters::LoadTree(Long64_t entry)
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

void TestCCInclusiveDaughters::Init(TTree *tree)
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

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("evt_time_sec", &evt_time_sec, &b_evt_time_sec);
   fChain->SetBranchAddress("evt_time_nsec", &evt_time_nsec, &b_evt_time_nsec);
   fChain->SetBranchAddress("hitsU", &hitsU, &b_hitsU);
   fChain->SetBranchAddress("hitsV", &hitsV, &b_hitsV);
   fChain->SetBranchAddress("hitsY", &hitsY, &b_hitsY);
   fChain->SetBranchAddress("caloU", &caloU, &b_caloU);
   fChain->SetBranchAddress("caloV", &caloV, &b_caloV);
   fChain->SetBranchAddress("caloY", &caloY, &b_caloY);
   fChain->SetBranchAddress("hitsSps", &hitsSps, &b_hitsSps);
   fChain->SetBranchAddress("generation", &generation, &b_generation);
   fChain->SetBranchAddress("track_score", &track_score, &b_track_score);
   fChain->SetBranchAddress("is_shower", &is_shower, &b_is_shower);
   fChain->SetBranchAddress("is_track", &is_track, &b_is_track);
   fChain->SetBranchAddress("has_shower_daughter", &has_shower_daughter, &b_has_shower_daughter);
   fChain->SetBranchAddress("is_track_daughter", &is_track_daughter, &b_is_track_daughter);
   fChain->SetBranchAddress("vx", &vx, &b_vx);
   fChain->SetBranchAddress("vy", &vy, &b_vy);
   fChain->SetBranchAddress("vz", &vz, &b_vz);
   fChain->SetBranchAddress("start_contained", &start_contained, &b_start_contained);
   fChain->SetBranchAddress("vtx_distance", &vtx_distance, &b_vtx_distance);
   fChain->SetBranchAddress("track_length", &track_length, &b_track_length);
   fChain->SetBranchAddress("track_endx", &track_endx, &b_track_endx);
   fChain->SetBranchAddress("track_endy", &track_endy, &b_track_endy);
   fChain->SetBranchAddress("track_endz", &track_endz, &b_track_endz);
   fChain->SetBranchAddress("track_dirx", &track_dirx, &b_track_dirx);
   fChain->SetBranchAddress("track_diry", &track_diry, &b_track_diry);
   fChain->SetBranchAddress("track_dirz", &track_dirz, &b_track_dirz);
   fChain->SetBranchAddress("track_is_muon_candidate", &track_is_muon_candidate, &b_track_is_muon_candidate);
   fChain->SetBranchAddress("track_range_mom_p", &track_range_mom_p, &b_track_range_mom_p);
   fChain->SetBranchAddress("track_range_mom_mu", &track_range_mom_mu, &b_track_range_mom_mu);
   fChain->SetBranchAddress("track_mcs_mom", &track_mcs_mom, &b_track_mcs_mom);
   fChain->SetBranchAddress("track_mcs_err", &track_mcs_err, &b_track_mcs_err);
   fChain->SetBranchAddress("track_mcs_ll", &track_mcs_ll, &b_track_mcs_ll);
   fChain->SetBranchAddress("track_chi2_proton", &track_chi2_proton, &b_track_chi2_proton);
   fChain->SetBranchAddress("track_chi2_muon", &track_chi2_muon, &b_track_chi2_muon);
   fChain->SetBranchAddress("shower_length", &shower_length, &b_shower_length);
   fChain->SetBranchAddress("shower_openangle", &shower_openangle, &b_shower_openangle);
   fChain->SetBranchAddress("shower_dirx", &shower_dirx, &b_shower_dirx);
   fChain->SetBranchAddress("shower_diry", &shower_diry, &b_shower_diry);
   fChain->SetBranchAddress("shower_dirz", &shower_dirz, &b_shower_dirz);
   fChain->SetBranchAddress("start_dedxU", &start_dedxU, &b_start_dedxU);
   fChain->SetBranchAddress("start_dedxV", &start_dedxV, &b_start_dedxV);
   fChain->SetBranchAddress("start_dedxY", &start_dedxY, &b_start_dedxY);
   fChain->SetBranchAddress("start_hitsU", &start_hitsU, &b_start_hitsU);
   fChain->SetBranchAddress("start_hitsV", &start_hitsV, &b_start_hitsV);
   fChain->SetBranchAddress("start_hitsY", &start_hitsY, &b_start_hitsY);
   fChain->SetBranchAddress("start_pitchU", &start_pitchU, &b_start_pitchU);
   fChain->SetBranchAddress("start_pitchV", &start_pitchV, &b_start_pitchV);
   fChain->SetBranchAddress("start_pitchY", &start_pitchY, &b_start_pitchY);
   fChain->SetBranchAddress("mc_neutrino", &mc_neutrino, &b_mc_neutrino);
   fChain->SetBranchAddress("mc_pdg", &mc_pdg, &b_mc_pdg);
   fChain->SetBranchAddress("mc_hit_fraction", &mc_hit_fraction, &b_mc_hit_fraction);
   fChain->SetBranchAddress("mc_vx", &mc_vx, &b_mc_vx);
   fChain->SetBranchAddress("mc_vy", &mc_vy, &b_mc_vy);
   fChain->SetBranchAddress("mc_vz", &mc_vz, &b_mc_vz);
   fChain->SetBranchAddress("mc_vx_sce", &mc_vx_sce, &b_mc_vx_sce);
   fChain->SetBranchAddress("mc_vy_sce", &mc_vy_sce, &b_mc_vy_sce);
   fChain->SetBranchAddress("mc_vz_sce", &mc_vz_sce, &b_mc_vz_sce);
   fChain->SetBranchAddress("mc_length", &mc_length, &b_mc_length);
   fChain->SetBranchAddress("mc_energy", &mc_energy, &b_mc_energy);
   fChain->SetBranchAddress("mc_px", &mc_px, &b_mc_px);
   fChain->SetBranchAddress("mc_py", &mc_py, &b_mc_py);
   fChain->SetBranchAddress("mc_pz", &mc_pz, &b_mc_pz);
   Notify();
}

Bool_t TestCCInclusiveDaughters::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TestCCInclusiveDaughters::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TestCCInclusiveDaughters::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TestCCInclusiveDaughters_cxx
