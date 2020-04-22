//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr 15 03:01:24 2020 by ROOT version 6.10/02
// from TTree Event/Event Tree
// found on file: NuCCanalyser_CCCoh_2.root
//////////////////////////////////////////////////////////

#ifndef OneCCCohEvent_h
#define OneCCCohEvent_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

class OneCCCohEvent {
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
   Int_t           ntrks;
   Float_t         trk_vtxx[50];   //[ntrks]
   Float_t         trk_vtxy[50];   //[ntrks]
   Float_t         trk_vtxz[50];   //[ntrks]
   Float_t         trk_endx[50];   //[ntrks]
   Float_t         trk_endy[50];   //[ntrks]
   Float_t         trk_endz[50];   //[ntrks]
   Float_t         trk_startdcosx[50];   //[ntrks]
   Float_t         trk_startdcosy[50];   //[ntrks]
   Float_t         trk_startdcosz[50];   //[ntrks]
   Float_t         trk_enddcosx[50];   //[ntrks]
   Float_t         trk_enddcosy[50];   //[ntrks]
   Float_t         trk_enddcosz[50];   //[ntrks]
   Float_t         trk_length[50];   //[ntrks]
   Float_t         trk_ke[50][3];   //[ntrks]
   Float_t         trk_range[50][3];   //[ntrks]
   Float_t         trk_pitch[50][3];   //[ntrks]
   Int_t           ntkhits[50][3];   //[ntrks]
   Float_t         trk_dedx[50][3][2000];   //[ntrks]
   Float_t         trk_dqdx[50][3][2000];   //[ntrks]
   Float_t         trk_resrange[50][3][2000];   //[ntrks]
   Float_t         trkxyz[50][3][2000][3];   //[ntrks]
   Int_t           ntrkhits[50];   //[ntrks]
   Float_t         trk_trjx[50][2000];   //[ntrks]
   Float_t         trk_trjy[50][2000];   //[ntrks]
   Float_t         trk_trjz[50][2000];   //[ntrks]
   Int_t           nallhits;
   Int_t           hit_plane[40000];   //[nallhits]
   Int_t           hit_wire[40000];   //[nallhits]
   Int_t           hit_channel[40000];   //[nallhits]
   Float_t         hit_peakT[40000];   //[nallhits]
   Float_t         hit_charge[40000];   //[nallhits]
   Float_t         hit_ph[40000];   //[nallhits]
   Float_t         hit_tstart[40000];   //[nallhits]
   Float_t         hit_tend[40000];   //[nallhits]
   Int_t           hit_trkid[40000];   //[nallhits]
   Int_t           hit_trkkey[40000];   //[nallhits]
   Int_t           hit_clukey[40000];   //[nallhits]
   Float_t         hit_dQds[40000];   //[nallhits]
   Float_t         hit_dEds[40000];   //[nallhits]
   Float_t         hit_ds[40000];   //[nallhits]
   Float_t         hit_resrange[40000];   //[nallhits]
   Float_t         hit_xt[40000];   //[nallhits]
   Float_t         hit_yt[40000];   //[nallhits]
   Float_t         hit_zt[40000];   //[nallhits]
   Float_t         hit_xc[40000];   //[nallhits]
   Float_t         hit_x[40000];   //[nallhits]
   Float_t         hit_y[40000];   //[nallhits]
   Float_t         hit_z[40000];   //[nallhits]
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
   TBranch        *b_ntrks;   //!
   TBranch        *b_trk_vtxx;   //!
   TBranch        *b_trk_vtxy;   //!
   TBranch        *b_trk_vtxz;   //!
   TBranch        *b_trk_endx;   //!
   TBranch        *b_trk_endy;   //!
   TBranch        *b_trk_endz;   //!
   TBranch        *b_trk_startdcosx;   //!
   TBranch        *b_trk_startdcosy;   //!
   TBranch        *b_trk_startdcosz;   //!
   TBranch        *b_trk_enddcosx;   //!
   TBranch        *b_trk_enddcosy;   //!
   TBranch        *b_trk_enddcosz;   //!
   TBranch        *b_trk_length;   //!
   TBranch        *b_trk_ke;   //!
   TBranch        *b_trk_range;   //!
   TBranch        *b_trk_pitch;   //!
   TBranch        *b_ntkhits;   //!
   TBranch        *b_trk_dedx;   //!
   TBranch        *b_trk_dqdx;   //!
   TBranch        *b_trk_resrange;   //!
   TBranch        *b_trkxyz;   //!
   TBranch        *b_ntrkhits;   //!
   TBranch        *b_trk_trjx;   //!
   TBranch        *b_trk_trjy;   //!
   TBranch        *b_trk_trjz;   //!
   TBranch        *b_nallhits;   //!
   TBranch        *b_hit_plane;   //!
   TBranch        *b_hit_wire;   //!
   TBranch        *b_hit_channel;   //!
   TBranch        *b_hit_peakT;   //!
   TBranch        *b_hit_charge;   //!
   TBranch        *b_hit_ph;   //!
   TBranch        *b_hit_tstart;   //!
   TBranch        *b_hit_tend;   //!
   TBranch        *b_hit_trkid;   //!
   TBranch        *b_hit_trkkey;   //!
   TBranch        *b_hit_clukey;   //!
   TBranch        *b_hit_dQds;   //!
   TBranch        *b_hit_dEds;   //!
   TBranch        *b_hit_ds;   //!
   TBranch        *b_hit_resrange;   //!
   TBranch        *b_hit_xt;   //!
   TBranch        *b_hit_yt;   //!
   TBranch        *b_hit_zt;   //!
   TBranch        *b_hit_xc;   //!
   TBranch        *b_hit_x;   //!
   TBranch        *b_hit_y;   //!
   TBranch        *b_hit_z;   //!
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

   OneCCCohEvent(TTree *tree=0);
   virtual ~OneCCCohEvent();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef OneCCCohEvent_cxx
OneCCCohEvent::OneCCCohEvent(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("NuCCanalyser_CCCoh_2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("NuCCanalyser_CCCoh_2.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("NuCCanalyser_CCCoh_2.root:/NuCCanalyzer");
      dir->GetObject("Event",tree);

   }
   Init(tree);
}

OneCCCohEvent::~OneCCCohEvent()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t OneCCCohEvent::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t OneCCCohEvent::LoadTree(Long64_t entry)
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

void OneCCCohEvent::Init(TTree *tree)
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
   fChain->SetBranchAddress("ntrks", &ntrks, &b_ntrks);
   fChain->SetBranchAddress("trk_vtxx", trk_vtxx, &b_trk_vtxx);
   fChain->SetBranchAddress("trk_vtxy", trk_vtxy, &b_trk_vtxy);
   fChain->SetBranchAddress("trk_vtxz", trk_vtxz, &b_trk_vtxz);
   fChain->SetBranchAddress("trk_endx", trk_endx, &b_trk_endx);
   fChain->SetBranchAddress("trk_endy", trk_endy, &b_trk_endy);
   fChain->SetBranchAddress("trk_endz", trk_endz, &b_trk_endz);
   fChain->SetBranchAddress("trk_startdcosx", trk_startdcosx, &b_trk_startdcosx);
   fChain->SetBranchAddress("trk_startdcosy", trk_startdcosy, &b_trk_startdcosy);
   fChain->SetBranchAddress("trk_startdcosz", trk_startdcosz, &b_trk_startdcosz);
   fChain->SetBranchAddress("trk_enddcosx", trk_enddcosx, &b_trk_enddcosx);
   fChain->SetBranchAddress("trk_enddcosy", trk_enddcosy, &b_trk_enddcosy);
   fChain->SetBranchAddress("trk_enddcosz", trk_enddcosz, &b_trk_enddcosz);
   fChain->SetBranchAddress("trk_length", trk_length, &b_trk_length);
   fChain->SetBranchAddress("trk_ke", trk_ke, &b_trk_ke);
   fChain->SetBranchAddress("trk_range", trk_range, &b_trk_range);
   fChain->SetBranchAddress("trk_pitch", trk_pitch, &b_trk_pitch);
   fChain->SetBranchAddress("ntkhits", ntkhits, &b_ntkhits);
   fChain->SetBranchAddress("trk_dedx", trk_dedx, &b_trk_dedx);
   fChain->SetBranchAddress("trk_dqdx", trk_dqdx, &b_trk_dqdx);
   fChain->SetBranchAddress("trk_resrange", trk_resrange, &b_trk_resrange);
   fChain->SetBranchAddress("trkxyz", trkxyz, &b_trkxyz);
   fChain->SetBranchAddress("ntrkhits", ntrkhits, &b_ntrkhits);
   fChain->SetBranchAddress("trk_trjx", trk_trjx, &b_trk_trjx);
   fChain->SetBranchAddress("trk_trjy", trk_trjy, &b_trk_trjy);
   fChain->SetBranchAddress("trk_trjz", trk_trjz, &b_trk_trjz);
   fChain->SetBranchAddress("nallhits", &nallhits, &b_nallhits);
   fChain->SetBranchAddress("hit_plane", hit_plane, &b_hit_plane);
   fChain->SetBranchAddress("hit_wire", hit_wire, &b_hit_wire);
   fChain->SetBranchAddress("hit_channel", hit_channel, &b_hit_channel);
   fChain->SetBranchAddress("hit_peakT", hit_peakT, &b_hit_peakT);
   fChain->SetBranchAddress("hit_charge", hit_charge, &b_hit_charge);
   fChain->SetBranchAddress("hit_ph", hit_ph, &b_hit_ph);
   fChain->SetBranchAddress("hit_tstart", hit_tstart, &b_hit_tstart);
   fChain->SetBranchAddress("hit_tend", hit_tend, &b_hit_tend);
   fChain->SetBranchAddress("hit_trkid", hit_trkid, &b_hit_trkid);
   fChain->SetBranchAddress("hit_trkkey", hit_trkkey, &b_hit_trkkey);
   fChain->SetBranchAddress("hit_clukey", hit_clukey, &b_hit_clukey);
   fChain->SetBranchAddress("hit_dQds", hit_dQds, &b_hit_dQds);
   fChain->SetBranchAddress("hit_dEds", hit_dEds, &b_hit_dEds);
   fChain->SetBranchAddress("hit_ds", hit_ds, &b_hit_ds);
   fChain->SetBranchAddress("hit_resrange", hit_resrange, &b_hit_resrange);
   fChain->SetBranchAddress("hit_xt", hit_xt, &b_hit_xt);
   fChain->SetBranchAddress("hit_yt", hit_yt, &b_hit_yt);
   fChain->SetBranchAddress("hit_zt", hit_zt, &b_hit_zt);
   fChain->SetBranchAddress("hit_xc", hit_xc, &b_hit_xc);
   fChain->SetBranchAddress("hit_x", hit_x, &b_hit_x);
   fChain->SetBranchAddress("hit_y", hit_y, &b_hit_y);
   fChain->SetBranchAddress("hit_z", hit_z, &b_hit_z);
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

Bool_t OneCCCohEvent::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void OneCCCohEvent::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t OneCCCohEvent::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef OneCCCohEvent_cxx
