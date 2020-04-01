//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Mar 12 00:40:25 2020 by ROOT version 6.10/02
// from TTree Event/Event Tree
// found on file: NuCCanalyser_CCCoh_Complete.root
//////////////////////////////////////////////////////////

#ifndef CCCohEvent_h
#define CCCohEvent_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

class CCCohEvent {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          event;
   UInt_t          run;
   UInt_t          subrun;
   Float_t         event_weight;
   UInt_t          evt_time_sec;
   UInt_t          evt_time_nsec;
   UInt_t          numpfp;
   UInt_t          hitsU;
   UInt_t          hitsV;
   UInt_t          hitsY;
   UInt_t          total_hits;
   Float_t         caloU;
   Float_t         caloV;
   Float_t         caloY;
   UInt_t          hitsSps;
   UInt_t          num_primary_daughters;
   UInt_t          num_daughters;
   UInt_t          num_showers;
   UInt_t          num_tracks;
   Bool_t          daughters_stored;
   Float_t         nu_vx;
   Float_t         nu_vy;
   Float_t         nu_vz;
   Bool_t          nu_contained;
   Bool_t          daughters_start_contained;
   Int_t           nu_pdg;
   Float_t         nu_score;
   Float_t         nu_flash_chi2;
   Float_t         obvious_cosmic_chi2;
   Bool_t          nu_mu_cc_selected;
   UInt_t          num_neutrinos;
   Float_t         mc_nu_vx;
   Float_t         mc_nu_vy;
   Float_t         mc_nu_vz;
   Float_t         mc_nu_vx_sce;
   Float_t         mc_nu_vy_sce;
   Float_t         mc_nu_vz_sce;
   Float_t         mc_nu_energy;
   Float_t         mc_nu_px;
   Float_t         mc_nu_py;
   Float_t         mc_nu_pz;
   Float_t         mc_nu_lepton_energy;
   Float_t         mc_nu_lepton_px;
   Float_t         mc_nu_lepton_py;
   Float_t         mc_nu_lepton_pz;
   Float_t         mc_nu_lepton_theta;
   Float_t         mc_nu_time;
   Int_t           mc_nu_pdg;
   Int_t           mc_nu_interaction_type;
   Int_t           mc_nu_target;
   Int_t           mc_nu_hitnuc;
   Int_t           mc_nu_hitquark;
   Float_t         mc_nu_w;
   Float_t         mc_nu_x;
   Float_t         mc_nu_y;
   Float_t         mc_nu_qsqr;
   Bool_t          mc_nu_ccnc;
   Float_t         mc_nu_vtx_distance;
   UInt_t          num_matched_daughters;
   Bool_t          cosmic_matched;
   Float_t         clustered_hit_completeness;
   Float_t         matched_hit_fraction;
   vector<bool>    *mc_nu_daughter_matched;
   vector<int>     *mc_nu_daughter_pdg;
   vector<float>   *mc_nu_daughter_energy;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event_weight;   //!
   TBranch        *b_evt_time_sec;   //!
   TBranch        *b_evt_time_nsec;   //!
   TBranch        *b_numpfp;   //!
   TBranch        *b_hitsU;   //!
   TBranch        *b_hitsV;   //!
   TBranch        *b_hitsY;   //!
   TBranch        *b_total_hits;   //!
   TBranch        *b_caloU;   //!
   TBranch        *b_caloV;   //!
   TBranch        *b_caloY;   //!
   TBranch        *b_hitsSps;   //!
   TBranch        *b_num_primary_daughters;   //!
   TBranch        *b_num_daughters;   //!
   TBranch        *b_num_showers;   //!
   TBranch        *b_num_tracks;   //!
   TBranch        *b_daughters_stored;   //!
   TBranch        *b_nu_vx;   //!
   TBranch        *b_nu_vy;   //!
   TBranch        *b_nu_vz;   //!
   TBranch        *b_nu_contained;   //!
   TBranch        *b_daughters_start_contained;   //!
   TBranch        *b_nu_pdg;   //!
   TBranch        *b_nu_score;   //!
   TBranch        *b_nu_flash_chi2;   //!
   TBranch        *b_obvious_cosmic_chi2;   //!
   TBranch        *b_nu_mu_cc_selected;   //!
   TBranch        *b_num_neutrinos;   //!
   TBranch        *b_mc_nu_vx;   //!
   TBranch        *b_mc_nu_vy;   //!
   TBranch        *b_mc_nu_vz;   //!
   TBranch        *b_mc_nu_vx_sce;   //!
   TBranch        *b_mc_nu_vy_sce;   //!
   TBranch        *b_mc_nu_vz_sce;   //!
   TBranch        *b_mc_nu_energy;   //!
   TBranch        *b_mc_nu_px;   //!
   TBranch        *b_mc_nu_py;   //!
   TBranch        *b_mc_nu_pz;   //!
   TBranch        *b_mc_nu_lepton_energy;   //!
   TBranch        *b_mc_nu_lepton_px;   //!
   TBranch        *b_mc_nu_lepton_py;   //!
   TBranch        *b_mc_nu_lepton_pz;   //!
   TBranch        *b_mc_nu_lepton_theta;   //!
   TBranch        *b_mc_nu_time;   //!
   TBranch        *b_mc_nu_pdg;   //!
   TBranch        *b_mc_nu_interaction_type;   //!
   TBranch        *b_mc_nu_target;   //!
   TBranch        *b_mc_nu_hitnuc;   //!
   TBranch        *b_mc_nu_hitquark;   //!
   TBranch        *b_mc_nu_w;   //!
   TBranch        *b_mc_nu_x;   //!
   TBranch        *b_mc_nu_y;   //!
   TBranch        *b_mc_nu_qsqr;   //!
   TBranch        *b_mc_nu_ccnc;   //!
   TBranch        *b_mc_nu_vtx_distance;   //!
   TBranch        *b_num_matched_daughters;   //!
   TBranch        *b_cosmic_matched;   //!
   TBranch        *b_clustered_hit_completeness;   //!
   TBranch        *b_matched_hit_fraction;   //!
   TBranch        *b_mc_nu_daughter_matched;   //!
   TBranch        *b_mc_nu_daughter_pdg;   //!
   TBranch        *b_mc_nu_daughter_energy;   //!

   CCCohEvent(TTree *tree=0);
   virtual ~CCCohEvent();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CCCohEvent_cxx
CCCohEvent::CCCohEvent(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("NuCCanalyser_CCCoh_Complete.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("NuCCanalyser_CCCoh_Complete.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("NuCCanalyser_CCCoh_Complete.root:/NuCCanalyzer");
      dir->GetObject("Event",tree);

   }
   Init(tree);
}

CCCohEvent::~CCCohEvent()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CCCohEvent::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CCCohEvent::LoadTree(Long64_t entry)
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

void CCCohEvent::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mc_nu_daughter_matched = 0;
   mc_nu_daughter_pdg = 0;
   mc_nu_daughter_energy = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event_weight", &event_weight, &b_event_weight);
   fChain->SetBranchAddress("evt_time_sec", &evt_time_sec, &b_evt_time_sec);
   fChain->SetBranchAddress("evt_time_nsec", &evt_time_nsec, &b_evt_time_nsec);
   fChain->SetBranchAddress("numpfp", &numpfp, &b_numpfp);
   fChain->SetBranchAddress("hitsU", &hitsU, &b_hitsU);
   fChain->SetBranchAddress("hitsV", &hitsV, &b_hitsV);
   fChain->SetBranchAddress("hitsY", &hitsY, &b_hitsY);
   fChain->SetBranchAddress("total_hits", &total_hits, &b_total_hits);
   fChain->SetBranchAddress("caloU", &caloU, &b_caloU);
   fChain->SetBranchAddress("caloV", &caloV, &b_caloV);
   fChain->SetBranchAddress("caloY", &caloY, &b_caloY);
   fChain->SetBranchAddress("hitsSps", &hitsSps, &b_hitsSps);
   fChain->SetBranchAddress("num_primary_daughters", &num_primary_daughters, &b_num_primary_daughters);
   fChain->SetBranchAddress("num_daughters", &num_daughters, &b_num_daughters);
   fChain->SetBranchAddress("num_showers", &num_showers, &b_num_showers);
   fChain->SetBranchAddress("num_tracks", &num_tracks, &b_num_tracks);
   fChain->SetBranchAddress("daughters_stored", &daughters_stored, &b_daughters_stored);
   fChain->SetBranchAddress("nu_vx", &nu_vx, &b_nu_vx);
   fChain->SetBranchAddress("nu_vy", &nu_vy, &b_nu_vy);
   fChain->SetBranchAddress("nu_vz", &nu_vz, &b_nu_vz);
   fChain->SetBranchAddress("nu_contained", &nu_contained, &b_nu_contained);
   fChain->SetBranchAddress("daughters_start_contained", &daughters_start_contained, &b_daughters_start_contained);
   fChain->SetBranchAddress("nu_pdg", &nu_pdg, &b_nu_pdg);
   fChain->SetBranchAddress("nu_score", &nu_score, &b_nu_score);
   fChain->SetBranchAddress("nu_flash_chi2", &nu_flash_chi2, &b_nu_flash_chi2);
   fChain->SetBranchAddress("obvious_cosmic_chi2", &obvious_cosmic_chi2, &b_obvious_cosmic_chi2);
   fChain->SetBranchAddress("nu_mu_cc_selected", &nu_mu_cc_selected, &b_nu_mu_cc_selected);
   fChain->SetBranchAddress("num_neutrinos", &num_neutrinos, &b_num_neutrinos);
   fChain->SetBranchAddress("mc_nu_vx", &mc_nu_vx, &b_mc_nu_vx);
   fChain->SetBranchAddress("mc_nu_vy", &mc_nu_vy, &b_mc_nu_vy);
   fChain->SetBranchAddress("mc_nu_vz", &mc_nu_vz, &b_mc_nu_vz);
   fChain->SetBranchAddress("mc_nu_vx_sce", &mc_nu_vx_sce, &b_mc_nu_vx_sce);
   fChain->SetBranchAddress("mc_nu_vy_sce", &mc_nu_vy_sce, &b_mc_nu_vy_sce);
   fChain->SetBranchAddress("mc_nu_vz_sce", &mc_nu_vz_sce, &b_mc_nu_vz_sce);
   fChain->SetBranchAddress("mc_nu_energy", &mc_nu_energy, &b_mc_nu_energy);
   fChain->SetBranchAddress("mc_nu_px", &mc_nu_px, &b_mc_nu_px);
   fChain->SetBranchAddress("mc_nu_py", &mc_nu_py, &b_mc_nu_py);
   fChain->SetBranchAddress("mc_nu_pz", &mc_nu_pz, &b_mc_nu_pz);
   fChain->SetBranchAddress("mc_nu_lepton_energy", &mc_nu_lepton_energy, &b_mc_nu_lepton_energy);
   fChain->SetBranchAddress("mc_nu_lepton_px", &mc_nu_lepton_px, &b_mc_nu_lepton_px);
   fChain->SetBranchAddress("mc_nu_lepton_py", &mc_nu_lepton_py, &b_mc_nu_lepton_py);
   fChain->SetBranchAddress("mc_nu_lepton_pz", &mc_nu_lepton_pz, &b_mc_nu_lepton_pz);
   fChain->SetBranchAddress("mc_nu_lepton_theta", &mc_nu_lepton_theta, &b_mc_nu_lepton_theta);
   fChain->SetBranchAddress("mc_nu_time", &mc_nu_time, &b_mc_nu_time);
   fChain->SetBranchAddress("mc_nu_pdg", &mc_nu_pdg, &b_mc_nu_pdg);
   fChain->SetBranchAddress("mc_nu_interaction_type", &mc_nu_interaction_type, &b_mc_nu_interaction_type);
   fChain->SetBranchAddress("mc_nu_target", &mc_nu_target, &b_mc_nu_target);
   fChain->SetBranchAddress("mc_nu_hitnuc", &mc_nu_hitnuc, &b_mc_nu_hitnuc);
   fChain->SetBranchAddress("mc_nu_hitquark", &mc_nu_hitquark, &b_mc_nu_hitquark);
   fChain->SetBranchAddress("mc_nu_w", &mc_nu_w, &b_mc_nu_w);
   fChain->SetBranchAddress("mc_nu_x", &mc_nu_x, &b_mc_nu_x);
   fChain->SetBranchAddress("mc_nu_y", &mc_nu_y, &b_mc_nu_y);
   fChain->SetBranchAddress("mc_nu_qsqr", &mc_nu_qsqr, &b_mc_nu_qsqr);
   fChain->SetBranchAddress("mc_nu_ccnc", &mc_nu_ccnc, &b_mc_nu_ccnc);
   fChain->SetBranchAddress("mc_nu_vtx_distance", &mc_nu_vtx_distance, &b_mc_nu_vtx_distance);
   fChain->SetBranchAddress("num_matched_daughters", &num_matched_daughters, &b_num_matched_daughters);
   fChain->SetBranchAddress("cosmic_matched", &cosmic_matched, &b_cosmic_matched);
   fChain->SetBranchAddress("clustered_hit_completeness", &clustered_hit_completeness, &b_clustered_hit_completeness);
   fChain->SetBranchAddress("matched_hit_fraction", &matched_hit_fraction, &b_matched_hit_fraction);
   fChain->SetBranchAddress("mc_nu_daughter_matched", &mc_nu_daughter_matched, &b_mc_nu_daughter_matched);
   fChain->SetBranchAddress("mc_nu_daughter_pdg", &mc_nu_daughter_pdg, &b_mc_nu_daughter_pdg);
   fChain->SetBranchAddress("mc_nu_daughter_energy", &mc_nu_daughter_energy, &b_mc_nu_daughter_energy);
   Notify();
}

Bool_t CCCohEvent::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CCCohEvent::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CCCohEvent::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CCCohEvent_cxx
