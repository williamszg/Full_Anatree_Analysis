//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep 28 09:15:27 2021 by ROOT version 6.12/06
// from TTree NeutrinoSelectionFilter/Neutrino Selection TTree
// found on file: /pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/UpdatedVertexActivity/NeutrinoSelectionFilter_BKGD.root
//////////////////////////////////////////////////////////

#ifndef MCSelectionTResolution_h
#define MCSelectionTResolution_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "string"
#include "vector"

class MCSelectionTResolution {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           selected;
   Int_t           run;
   Int_t           sub;
   Int_t           evt;
   Float_t         dvtx;
   Float_t         dtrk;
   Float_t         contained_sps_ratio;
   vector<double>  *dtrk_x_boundary;
   vector<double>  *dtrk_y_boundary;
   vector<double>  *dtrk_z_boundary;
   vector<double>  *dshr_x_boundary;
   vector<double>  *dshr_y_boundary;
   vector<double>  *dshr_z_boundary;
   vector<double>  *dvtx_x_boundary;
   vector<double>  *dvtx_y_boundary;
   vector<double>  *dvtx_z_boundary;
   vector<vector<double> > *dtrk_boundary;
   vector<vector<double> > *dvtx_boundary;
   vector<vector<double> > *dshr_boundary;
   vector<vector<double> > *dmc_boundary;
   Float_t         CosmicIP;
   Float_t         CosmicIPAll3D;
   Float_t         CosmicDirAll3D;
   Float_t         CosmicIPAll2DEnds;
   Float_t         CosmicDirAll2DEnds;
   Float_t         CosmicIPAll2DOvlp;
   Float_t         CosmicDirAll2DOvlp;
   Float_t         leeweight;
   Float_t         true_pt;
   Float_t         true_pt_visible;
   Float_t         true_p;
   Float_t         true_p_visible;
   Float_t         true_e_visible;
   Float_t         _opfilter_pe_beam;
   Float_t         _opfilter_pe_veto;
   Int_t           nu_pdg;
   Int_t           ccnc;
   Int_t           nu_parent_pdg;
   Int_t           nu_hadron_pdg;
   Int_t           nu_decay_mode;
   Int_t           interaction;
   Float_t         nu_e;
   Float_t         nu_pt;
   Float_t         theta;
   Bool_t          isVtxInFiducial;
   Bool_t          truthFiducial;
   Float_t         true_nu_vtx_t;
   Float_t         true_nu_vtx_x;
   Float_t         true_nu_vtx_y;
   Float_t         true_nu_vtx_z;
   Float_t         true_nu_vtx_sce_x;
   Float_t         true_nu_vtx_sce_y;
   Float_t         true_nu_vtx_sce_z;
   Float_t         reco_nu_vtx_x;
   Float_t         reco_nu_vtx_y;
   Float_t         reco_nu_vtx_z;
   Float_t         reco_nu_vtx_sce_x;
   Float_t         reco_nu_vtx_sce_y;
   Float_t         reco_nu_vtx_sce_z;
   Int_t           nmuon;
   Float_t         muon_e;
   Float_t         muon_c;
   Float_t         muon_p;
   Int_t           nelec;
   Float_t         elec_e;
   Float_t         elec_c;
   Float_t         elec_p;
   Float_t         elec_vx;
   Float_t         elec_vy;
   Float_t         elec_vz;
   Float_t         elec_px;
   Float_t         elec_py;
   Float_t         elec_pz;
   Int_t           npi0;
   Float_t         pi0_e;
   Float_t         pi0_c;
   Float_t         pi0_p;
   Int_t           nneutron;
   Int_t           nproton;
   Float_t         proton_e;
   Float_t         proton_c;
   Float_t         proton_p;
   Int_t           npion;
   Float_t         pion_e;
   Float_t         pion_c;
   Float_t         pion_p;
   Int_t           neta;
   Float_t         eta_e;
   Int_t           nslice;
   Int_t           crtveto;
   Float_t         crthitpe;
   vector<int>     *pfp_slice_idx;
   Int_t           category;
   vector<int>     *backtracked_pdg;
   vector<float>   *backtracked_e;
   vector<int>     *backtracked_tid;
   vector<float>   *backtracked_purity;
   vector<float>   *backtracked_completeness;
   vector<float>   *backtracked_overlay_purity;
   vector<float>   *backtracked_px;
   vector<float>   *backtracked_py;
   vector<float>   *backtracked_pz;
   vector<float>   *backtracked_start_x;
   vector<float>   *backtracked_start_y;
   vector<float>   *backtracked_start_z;
   vector<float>   *backtracked_start_t;
   vector<float>   *backtracked_start_U;
   vector<float>   *backtracked_start_V;
   vector<float>   *backtracked_start_Y;
   vector<float>   *backtracked_sce_start_x;
   vector<float>   *backtracked_sce_start_y;
   vector<float>   *backtracked_sce_start_z;
   vector<float>   *backtracked_sce_start_U;
   vector<float>   *backtracked_sce_start_V;
   vector<float>   *backtracked_sce_start_Y;
   Float_t         lep_e;
   Int_t           pass;
   Int_t           swtrig;
   Int_t           evnhits;
   Int_t           slpdg;
   Int_t           slnhits;
   Int_t           n_pfps;
   Int_t           n_tracks;
   Int_t           n_showers;
   vector<unsigned int> *pfp_generation_v;
   vector<unsigned int> *pfp_trk_daughters_v;
   vector<unsigned int> *pfp_shr_daughters_v;
   vector<float>   *trk_score_v;
   vector<int>     *pfpdg;
   vector<int>     *pfnhits;
   vector<int>     *pfnplanehits_U;
   vector<int>     *pfnplanehits_V;
   vector<int>     *pfnplanehits_Y;
   vector<int>     *pfpplanesubclusters_U;
   vector<int>     *pfpplanesubclusters_V;
   vector<int>     *pfpplanesubclusters_Y;
   vector<float>   *pfpplanesubhitfracmax_U;
   vector<float>   *pfpplanesubhitfracmax_V;
   vector<float>   *pfpplanesubhitfracmax_Y;
   UInt_t          hits_u;
   UInt_t          hits_v;
   UInt_t          hits_y;
   Float_t         topological_score;
   Float_t         slclustfrac;
   vector<int>     *mc_pdg;
   vector<float>   *mc_E;
   vector<float>   *mc_vx;
   vector<float>   *mc_vy;
   vector<float>   *mc_vz;
   vector<float>   *mc_endx;
   vector<float>   *mc_endy;
   vector<float>   *mc_endz;
   vector<float>   *mc_px;
   vector<float>   *mc_py;
   vector<float>   *mc_pz;
   vector<float>   *mc_completeness;
   vector<float>   *mc_purity;
   string          *endmuonprocess;
   Float_t         endmuonmichel;
   vector<float>   *hit_peak_time_v;
   vector<float>   *hit_summedADC_v;
   vector<float>   *hit_integral_v;
   vector<float>   *hit_channel_v;
   vector<float>   *hit_view_v;
   vector<float>   *hit_wireID_v;
   Int_t           filter_antibdt;
   Int_t           filter_ncpi0;
   Int_t           filter_pi0;
   Int_t           filter_ccinclusive;
   Float_t         flash_pe;
   Float_t         flash_time;
   Float_t         nu_flashmatch_score;
   Float_t         best_cosmic_flashmatch_score;
   Float_t         best_obviouscosmic_flashmatch_score;
   vector<float>   *cosmic_flashmatch_score_v;
   Float_t         mcf_nu_e;
   Float_t         mcf_lep_e;
   Int_t           mcf_actvol;
   Int_t           mcf_nmm;
   Int_t           mcf_nmp;
   Int_t           mcf_nem;
   Int_t           mcf_nep;
   Int_t           mcf_np0;
   Int_t           mcf_npp;
   Int_t           mcf_npm;
   Float_t         mcf_mcshr_elec_etot;
   Int_t           mcf_pass_ccpi0;
   Int_t           mcf_pass_ncpi0;
   Int_t           mcf_pass_ccnopi;
   Int_t           mcf_pass_ncnopi;
   Int_t           mcf_pass_cccpi;
   Int_t           mcf_pass_nccpi;
   vector<float>   *X_SpcPts_v;
   vector<float>   *Y_SpcPts_v;
   vector<float>   *Z_SpcPts_v;
   UInt_t          shr_id_MCStool;
   UInt_t          shr_hits_max_MCStool;
   UInt_t          n_showers_contained_MCStool;
   vector<float>   *trkshrscore_v;
   Float_t         shrPCA_1Cr;
   Float_t         shrPCA_2Cr;
   Float_t         shrPCA_3Cr;
   Float_t         shrPCA_1Ce;
   Float_t         shrPCA_2Ce;
   Float_t         shrPCA_3Ce;
   Float_t         shrPCA1CAS;
   Float_t         shrPCA2CAS;
   Float_t         shrPCA3CAS;
   Float_t         shrPCA_1Cr2h;
   Float_t         shrPCA_2Cr2h;
   Float_t         shrPCA_3Cr2h;
   Float_t         shrPCA_1Cr1h;
   Float_t         shrPCA_2Cr1h;
   Float_t         shrPCA_3Cr1h;
   Float_t         shrMCSMom;
   Float_t         shrMCSMom1h;
   Float_t         shrMCSMom2h;
   Float_t         shrPCALen;
   UInt_t          n_shrSpcPts;
   vector<float>   *PCAWin_1Cr_5cm;
   vector<float>   *PCAWin_2Cr_5cm;
   vector<float>   *PCAWin_3Cr_5cm;
   vector<float>   *PCAWin_dist_5cm;
   vector<int>     *PCAWin_npts_5cm;
   Float_t         shrStart_5cm;
   Float_t         shrStartMCS_5cm;
   Float_t         shrMCSAS_5cm;
   Float_t         shrPCA1CAS_5cm;
   Float_t         shrPCA2CAS_5cm;
   Float_t         shrPCA3CAS_5cm;
   Float_t         shrPCA1CMed_5cm;
   vector<float>   *PCAWin_1Cr_2_5cm;
   vector<float>   *PCAWin_2Cr_2_5cm;
   vector<float>   *PCAWin_3Cr_2_5cm;
   vector<float>   *PCAWin_dist_2_5cm;
   vector<int>     *PCAWin_npts_2_5cm;
   Float_t         shrStart_2_5cm;
   Float_t         shrStartMCS_2_5cm;
   Float_t         shrMCSAS_2_5cm;
   Float_t         shrPCA1CAS_2_5cm;
   Float_t         shrPCA2CAS_2_5cm;
   Float_t         shrPCA3CAS_2_5cm;
   Float_t         shrPCA1CMed_2_5cm;
   Float_t         DeltaMed;
   Float_t         DeltaMed1h;
   Float_t         DeltaMed2h;
   Float_t         DeltaRMS;
   Float_t         DeltaRMS1h;
   Float_t         DeltaRMS2h;
   Float_t         CylFrac_1cm;
   Float_t         CylFrac1h_1cm;
   Float_t         CylFrac2h_1cm;
   Float_t         CylFrac_2cm;
   Float_t         CylFrac1h_2cm;
   Float_t         CylFrac2h_2cm;
   Float_t         CylFrac_3cm;
   Float_t         CylFrac1h_3cm;
   Float_t         CylFrac2h_3cm;
   Float_t         CylFrac_4cm;
   Float_t         CylFrac1h_4cm;
   Float_t         CylFrac2h_4cm;
   Float_t         CylFrac_5cm;
   Float_t         CylFrac1h_5cm;
   Float_t         CylFrac2h_5cm;
   Float_t         NeutrinoEnergy0;
   Float_t         NeutrinoEnergy1;
   Float_t         NeutrinoEnergy2;
   Float_t         SliceCaloEnergy0;
   Float_t         SliceCaloEnergy1;
   Float_t         SliceCaloEnergy2;
   Int_t           pi0truth_gamma_parent;
   Float_t         pi0truth_elec_edep;
   Float_t         pi0truth_elec_etot;
   Float_t         pi0truth_elec_dist;
   Int_t           pi0truth_elec_parent;
   Int_t           pi0truth_gamma1_tid;
   Float_t         pi0truth_gamma1_edep;
   Float_t         pi0truth_gamma1_etot;
   Float_t         pi0truth_gamma1_dist;
   Float_t         pi0truth_gamma1_elec1;
   Float_t         pi0truth_gamma1_elec2;
   Float_t         pi0truth_gamma1_xpos;
   Float_t         pi0truth_gamma1_ypos;
   Float_t         pi0truth_gamma1_zpos;
   Int_t           pi0truth_gamma2_tid;
   Float_t         pi0truth_gamma2_edep;
   Float_t         pi0truth_gamma2_etot;
   Float_t         pi0truth_gamma2_dist;
   Float_t         pi0truth_gamma2_elec1;
   Float_t         pi0truth_gamma2_elec2;
   Float_t         pi0truth_gamma2_xpos;
   Float_t         pi0truth_gamma2_ypos;
   Float_t         pi0truth_gamma2_zpos;
   Float_t         pi0truth_gammadot;
   Int_t           pi0truth_run;
   Int_t           pi0truth_sub;
   Int_t           pi0truth_evt;
   Int_t           nflag_pl1;
   Int_t           nnoise_pl1;
   Int_t           nslhits_pl1;
   Int_t           nslnoise_pl1;
   Int_t           nhits_pl1;
   Float_t         frac_slnoise_pl1;
   Float_t         secondshower_U_charge;
   Int_t           secondshower_U_nhit;
   Float_t         secondshower_U_vtxdist;
   Float_t         secondshower_U_eigenratio;
   Float_t         secondshower_U_dot;
   Float_t         secondshower_U_dir;
   Float_t         secondshower_V_charge;
   Int_t           secondshower_V_nhit;
   Float_t         secondshower_V_vtxdist;
   Float_t         secondshower_V_eigenratio;
   Float_t         secondshower_V_dot;
   Float_t         secondshower_V_dir;
   Float_t         secondshower_Y_charge;
   Int_t           secondshower_Y_nhit;
   Float_t         secondshower_Y_vtxdist;
   Float_t         secondshower_Y_eigenratio;
   Float_t         secondshower_Y_dot;
   Float_t         secondshower_Y_dir;
   Int_t           evnunhits;
   Int_t           evlepnhits;
   Int_t           evpronhits;
   Int_t           evpi1nhits;
   Int_t           evpi0nhits;
   Int_t           evneunhits;
   Int_t           evgamnhits;
   Int_t           evothnhits;
   Int_t           slnunhits;
   Int_t           sllepnhits;
   Int_t           slpronhits;
   Int_t           slpi1nhits;
   Int_t           slpi0nhits;
   Int_t           slneunhits;
   Int_t           slgamnhits;
   Int_t           slothnhits;
   vector<int>     *pfnunhits;
   vector<int>     *pflepnhits;
   vector<int>     *pfpronhits;
   vector<int>     *pfpi1nhits;
   vector<int>     *pfpi0nhits;
   vector<int>     *pfneunhits;
   vector<int>     *pfgamnhits;
   vector<int>     *pfothnhits;
   Float_t         nu_completeness_from_pfp;
   Float_t         nu_purity_from_pfp;
   vector<float>   *trk_bragg_p_v;
   vector<float>   *trk_bragg_mu_v;
   vector<float>   *trk_bragg_mip_v;
   vector<float>   *trk_pida_v;
   vector<float>   *trk_pid_chipr_v;
   vector<float>   *trk_pid_chipi_v;
   vector<float>   *trk_pid_chika_v;
   vector<float>   *trk_pid_chimu_v;
   vector<float>   *trk_bragg_p_u_v;
   vector<float>   *trk_bragg_mu_u_v;
   vector<float>   *trk_bragg_mip_u_v;
   vector<float>   *trk_pida_u_v;
   vector<float>   *trk_pid_chipr_u_v;
   vector<float>   *trk_pid_chipi_u_v;
   vector<float>   *trk_pid_chika_u_v;
   vector<float>   *trk_pid_chimu_u_v;
   vector<float>   *trk_bragg_p_v_v;
   vector<float>   *trk_bragg_mu_v_v;
   vector<float>   *trk_bragg_mip_v_v;
   vector<float>   *trk_pida_v_v;
   vector<float>   *trk_pid_chipr_v_v;
   vector<float>   *trk_pid_chipi_v_v;
   vector<float>   *trk_pid_chika_v_v;
   vector<float>   *trk_pid_chimu_v_v;
   vector<unsigned long> *trk_pfp_id_v;
   vector<float>   *trk_dir_x_v;
   vector<float>   *trk_dir_y_v;
   vector<float>   *trk_dir_z_v;
   vector<float>   *trk_start_x_v;
   vector<float>   *trk_start_y_v;
   vector<float>   *trk_start_z_v;
   vector<float>   *trk_sce_start_x_v;
   vector<float>   *trk_sce_start_y_v;
   vector<float>   *trk_sce_start_z_v;
   vector<float>   *trk_end_x_v;
   vector<float>   *trk_end_y_v;
   vector<float>   *trk_end_z_v;
   vector<float>   *trk_sce_end_x_v;
   vector<float>   *trk_sce_end_y_v;
   vector<float>   *trk_sce_end_z_v;
   vector<float>   *trk_distance_v;
   vector<float>   *trk_theta_v;
   vector<float>   *trk_phi_v;
   vector<float>   *trk_len_v;
   vector<float>   *trk_mcs_muon_mom_v;
   vector<float>   *trk_range_muon_mom_v;
   vector<float>   *trk_energy_proton_v;
   vector<float>   *trk_energy_muon_v;
   vector<float>   *trk_calo_energy_u_v;
   vector<float>   *trk_calo_energy_v_v;
   vector<float>   *trk_calo_energy_y_v;
   vector<float>   *trk_llr_pid_u_v;
   vector<float>   *trk_llr_pid_v_v;
   vector<float>   *trk_llr_pid_y_v;
   vector<float>   *trk_llr_pid_v;
   vector<float>   *trk_llr_pid_score_v;
   vector<int>     *trk_plane_v;
   vector<int>     *trk_calo_pfp_id_v;
   vector<float>   *trk_pitch_v;
   vector<float>   *trk_dedx_v;
   vector<float>   *trk_de_v;
   vector<float>   *trk_calo_x_v;
   vector<float>   *trk_calo_y_v;
   vector<float>   *trk_calo_z_v;

   // List of branches
   TBranch        *b_selected;   //!
   TBranch        *b_run;   //!
   TBranch        *b_sub;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_dvtx;   //!
   TBranch        *b_dtrk;   //!
   TBranch        *b_contained_sps_ratio;   //!
   TBranch        *b_dtrk_x_boundary;   //!
   TBranch        *b_dtrk_y_boundary;   //!
   TBranch        *b_dtrk_z_boundary;   //!
   TBranch        *b_dshr_x_boundary;   //!
   TBranch        *b_dshr_y_boundary;   //!
   TBranch        *b_dshr_z_boundary;   //!
   TBranch        *b_dvtx_x_boundary;   //!
   TBranch        *b_dvtx_y_boundary;   //!
   TBranch        *b_dvtx_z_boundary;   //!
   TBranch        *b_dtrk_boundary;   //!
   TBranch        *b_dvtx_boundary;   //!
   TBranch        *b_dshr_boundary;   //!
   TBranch        *b_dmc_boundary;   //!
   TBranch        *b_CosmicIP;   //!
   TBranch        *b_CosmicIPAll3D;   //!
   TBranch        *b_CosmicDirAll3D;   //!
   TBranch        *b_CosmicIPAll2DEnds;   //!
   TBranch        *b_CosmicDirAll2DEnds;   //!
   TBranch        *b_CosmicIPAll2DOvlp;   //!
   TBranch        *b_CosmicDirAll2DOvlp;   //!
   TBranch        *b_leeweight;   //!
   TBranch        *b_true_pt;   //!
   TBranch        *b_true_pt_visible;   //!
   TBranch        *b_true_p;   //!
   TBranch        *b_true_p_visible;   //!
   TBranch        *b_true_e_visible;   //!
   TBranch        *b_opfilter_pe_beam;   //!
   TBranch        *b_opfilter_pe_veto;   //!
   TBranch        *b_nu_pdg;   //!
   TBranch        *b_ccnc;   //!
   TBranch        *b_nu_parent_pdg;   //!
   TBranch        *b_nu_hadron_pdg;   //!
   TBranch        *b_nu_decay_mode;   //!
   TBranch        *b_interaction;   //!
   TBranch        *b_nu_e;   //!
   TBranch        *b_nu_pt;   //!
   TBranch        *b_theta;   //!
   TBranch        *b_isVtxInFiducial;   //!
   TBranch        *b_truthFiducial;   //!
   TBranch        *b_true_nu_vtx_t;   //!
   TBranch        *b_true_nu_vtx_x;   //!
   TBranch        *b_true_nu_vtx_y;   //!
   TBranch        *b_true_nu_vtx_z;   //!
   TBranch        *b_true_nu_vtx_sce_x;   //!
   TBranch        *b_true_nu_vtx_sce_y;   //!
   TBranch        *b_true_nu_vtx_sce_z;   //!
   TBranch        *b_reco_nu_vtx_x;   //!
   TBranch        *b_reco_nu_vtx_y;   //!
   TBranch        *b_reco_nu_vtx_z;   //!
   TBranch        *b_reco_nu_vtx_sce_x;   //!
   TBranch        *b_reco_nu_vtx_sce_y;   //!
   TBranch        *b_reco_nu_vtx_sce_z;   //!
   TBranch        *b_nmuon;   //!
   TBranch        *b_muon_e;   //!
   TBranch        *b_muon_c;   //!
   TBranch        *b_muon_p;   //!
   TBranch        *b_nelec;   //!
   TBranch        *b_elec_e;   //!
   TBranch        *b_elec_c;   //!
   TBranch        *b_elec_p;   //!
   TBranch        *b_elec_vx;   //!
   TBranch        *b_elec_vy;   //!
   TBranch        *b_elec_vz;   //!
   TBranch        *b_elec_px;   //!
   TBranch        *b_elec_py;   //!
   TBranch        *b_elec_pz;   //!
   TBranch        *b_npi0;   //!
   TBranch        *b_pi0_e;   //!
   TBranch        *b_pi0_c;   //!
   TBranch        *b_pi0_p;   //!
   TBranch        *b_nneutron;   //!
   TBranch        *b_nproton;   //!
   TBranch        *b_proton_e;   //!
   TBranch        *b_proton_c;   //!
   TBranch        *b_proton_p;   //!
   TBranch        *b_npion;   //!
   TBranch        *b_pion_e;   //!
   TBranch        *b_pion_c;   //!
   TBranch        *b_pion_p;   //!
   TBranch        *b_neta;   //!
   TBranch        *b_eta_e;   //!
   TBranch        *b_nslice;   //!
   TBranch        *b_crtveto;   //!
   TBranch        *b_crthitpe;   //!
   TBranch        *b_pfp_slice_idx;   //!
   TBranch        *b_category;   //!
   TBranch        *b_backtracked_pdg;   //!
   TBranch        *b_backtracked_e;   //!
   TBranch        *b_backtracked_tid;   //!
   TBranch        *b_backtracked_purity;   //!
   TBranch        *b_backtracked_completeness;   //!
   TBranch        *b_backtracked_overlay_purity;   //!
   TBranch        *b_backtracked_px;   //!
   TBranch        *b_backtracked_py;   //!
   TBranch        *b_backtracked_pz;   //!
   TBranch        *b_backtracked_start_x;   //!
   TBranch        *b_backtracked_start_y;   //!
   TBranch        *b_backtracked_start_z;   //!
   TBranch        *b_backtracked_start_t;   //!
   TBranch        *b_backtracked_start_U;   //!
   TBranch        *b_backtracked_start_V;   //!
   TBranch        *b_backtracked_start_Y;   //!
   TBranch        *b_backtracked_sce_start_x;   //!
   TBranch        *b_backtracked_sce_start_y;   //!
   TBranch        *b_backtracked_sce_start_z;   //!
   TBranch        *b_backtracked_sce_start_U;   //!
   TBranch        *b_backtracked_sce_start_V;   //!
   TBranch        *b_backtracked_sce_start_Y;   //!
   TBranch        *b_lep_e;   //!
   TBranch        *b_pass;   //!
   TBranch        *b_swtrig;   //!
   TBranch        *b_evnhits;   //!
   TBranch        *b_slpdg;   //!
   TBranch        *b_slnhits;   //!
   TBranch        *b_n_pfps;   //!
   TBranch        *b_n_tracks;   //!
   TBranch        *b_n_showers;   //!
   TBranch        *b_pfp_generation_v;   //!
   TBranch        *b_pfp_trk_daughters_v;   //!
   TBranch        *b_pfp_shr_daughters_v;   //!
   TBranch        *b_trk_score_v;   //!
   TBranch        *b_pfpdg;   //!
   TBranch        *b_pfnhits;   //!
   TBranch        *b_pfnplanehits_U;   //!
   TBranch        *b_pfnplanehits_V;   //!
   TBranch        *b_pfnplanehits_Y;   //!
   TBranch        *b_pfpplanesubclusters_U;   //!
   TBranch        *b_pfpplanesubclusters_V;   //!
   TBranch        *b_pfpplanesubclusters_Y;   //!
   TBranch        *b_pfpplanesubhitfracmax_U;   //!
   TBranch        *b_pfpplanesubhitfracmax_V;   //!
   TBranch        *b_pfpplanesubhitfracmax_Y;   //!
   TBranch        *b_hits_u;   //!
   TBranch        *b_hits_v;   //!
   TBranch        *b_hits_y;   //!
   TBranch        *b_topological_score;   //!
   TBranch        *b_slclustfrac;   //!
   TBranch        *b_mc_pdg;   //!
   TBranch        *b_mc_E;   //!
   TBranch        *b_mc_vx;   //!
   TBranch        *b_mc_vy;   //!
   TBranch        *b_mc_vz;   //!
   TBranch        *b_mc_endx;   //!
   TBranch        *b_mc_endy;   //!
   TBranch        *b_mc_endz;   //!
   TBranch        *b_mc_px;   //!
   TBranch        *b_mc_py;   //!
   TBranch        *b_mc_pz;   //!
   TBranch        *b_mc_completeness;   //!
   TBranch        *b_mc_purity;   //!
   TBranch        *b_endmuonprocess;   //!
   TBranch        *b_endmuonmichel;   //!
   TBranch        *b_hit_peak_time_v;   //!
   TBranch        *b_hit_summedADC_v;   //!
   TBranch        *b_hit_integral_v;   //!
   TBranch        *b_hit_channel_v;   //!
   TBranch        *b_hit_view_v;   //!
   TBranch        *b_hit_wireID_v;   //!
   TBranch        *b_filter_antibdt;   //!
   TBranch        *b_filter_ncpi0;   //!
   TBranch        *b_filter_pi0;   //!
   TBranch        *b_filter_ccinclusive;   //!
   TBranch        *b_flash_pe;   //!
   TBranch        *b_flash_time;   //!
   TBranch        *b_nu_flashmatch_score;   //!
   TBranch        *b_best_cosmic_flashmatch_score;   //!
   TBranch        *b_best_obviouscosmic_flashmatch_score;   //!
   TBranch        *b_cosmic_flashmatch_score_v;   //!
   TBranch        *b_mcf_nu_e;   //!
   TBranch        *b_mcf_lep_e;   //!
   TBranch        *b_mcf_actvol;   //!
   TBranch        *b_mcf_nmm;   //!
   TBranch        *b_mcf_nmp;   //!
   TBranch        *b_mcf_nem;   //!
   TBranch        *b_mcf_nep;   //!
   TBranch        *b_mcf_np0;   //!
   TBranch        *b_mcf_npp;   //!
   TBranch        *b_mcf_npm;   //!
   TBranch        *b_mcf_mcshr_elec_etot;   //!
   TBranch        *b_mcf_pass_ccpi0;   //!
   TBranch        *b_mcf_pass_ncpi0;   //!
   TBranch        *b_mcf_pass_ccnopi;   //!
   TBranch        *b_mcf_pass_ncnopi;   //!
   TBranch        *b_mcf_pass_cccpi;   //!
   TBranch        *b_mcf_pass_nccpi;   //!
   TBranch        *b_X_SpcPts_v;   //!
   TBranch        *b_Y_SpcPts_v;   //!
   TBranch        *b_Z_SpcPts_v;   //!
   TBranch        *b_shr_pfp_id;   //!
   TBranch        *b_shr_hits_max_MCStool;   //!
   TBranch        *b_n_showers_contained_MCStool;   //!
   TBranch        *b_trkshrscore_v;   //!
   TBranch        *b_shrPCA_1Cr;   //!
   TBranch        *b_shrPCA_2Cr;   //!
   TBranch        *b_shrPCA_3Cr;   //!
   TBranch        *b_shrPCA_1Ce;   //!
   TBranch        *b_shrPCA_2Ce;   //!
   TBranch        *b_shrPCA_3Ce;   //!
   TBranch        *b_shrPCA1CAS;   //!
   TBranch        *b_shrPCA2CAS;   //!
   TBranch        *b_shrPCA3CAS;   //!
   TBranch        *b_shrPCA_1Cr2h;   //!
   TBranch        *b_shrPCA_2Cr2h;   //!
   TBranch        *b_shrPCA_3Cr2h;   //!
   TBranch        *b_shrPCA_1Cr1h;   //!
   TBranch        *b_shrPCA_2Cr1h;   //!
   TBranch        *b_shrPCA_3Cr1h;   //!
   TBranch        *b_shrMCSMom;   //!
   TBranch        *b_shrMCSMom1h;   //!
   TBranch        *b_shrMCSMom2h;   //!
   TBranch        *b_shrPCALen;   //!
   TBranch        *b_n_shrSpcPts;   //!
   TBranch        *b_PCAWin_1Cr_5cm;   //!
   TBranch        *b_PCAWin_2Cr_5cm;   //!
   TBranch        *b_PCAWin_3Cr_5cm;   //!
   TBranch        *b_PCAWin_dist_5cm;   //!
   TBranch        *b_PCAWin_npts_5cm;   //!
   TBranch        *b_shrStart_5cm;   //!
   TBranch        *b_shrStartMCS_5cm;   //!
   TBranch        *b_shrMCSAS_5cm;   //!
   TBranch        *b_shrPCA1CAS_5cm;   //!
   TBranch        *b_shrPCA2CAS_5cm;   //!
   TBranch        *b_shrPCA3CAS_5cm;   //!
   TBranch        *b__shrPCA1CMed_5cm;   //!
   TBranch        *b_PCAWin_1Cr_2_5cm;   //!
   TBranch        *b_PCAWin_2Cr_2_5cm;   //!
   TBranch        *b_PCAWin_3Cr_2_5cm;   //!
   TBranch        *b_PCAWin_dist_2_5cm;   //!
   TBranch        *b_PCAWin_npts_2_5cm;   //!
   TBranch        *b_shrStart_2_5cm;   //!
   TBranch        *b_shrStartMCS_2_5cm;   //!
   TBranch        *b_shrMCSAS_2_5cm;   //!
   TBranch        *b_shrPCA1CAS_2_5cm;   //!
   TBranch        *b_shrPCA2CAS_2_5cm;   //!
   TBranch        *b_shrPCA3CAS_2_5cm;   //!
   TBranch        *b__shrPCA1CMed_2_5cm;   //!
   TBranch        *b_DeltaMed;   //!
   TBranch        *b_DeltaMed1h;   //!
   TBranch        *b_DeltaMed2h;   //!
   TBranch        *b_DeltaRMS;   //!
   TBranch        *b_DeltaRMS1h;   //!
   TBranch        *b_DeltaRMS2h;   //!
   TBranch        *b_CylFrac_1cm;   //!
   TBranch        *b_CylFrac1h_1cm;   //!
   TBranch        *b_CylFrac2h_1cm;   //!
   TBranch        *b_CylFrac_2cm;   //!
   TBranch        *b_CylFrac1h_2cm;   //!
   TBranch        *b_CylFrac2h_2cm;   //!
   TBranch        *b_CylFrac_3cm;   //!
   TBranch        *b_CylFrac1h_3cm;   //!
   TBranch        *b_CylFrac2h_3cm;   //!
   TBranch        *b_CylFrac_4cm;   //!
   TBranch        *b_CylFrac1h_4cm;   //!
   TBranch        *b_CylFrac2h_4cm;   //!
   TBranch        *b_CylFrac_5cm;   //!
   TBranch        *b_CylFrac1h_5cm;   //!
   TBranch        *b_CylFrac2h_5cm;   //!
   TBranch        *b_NeutrinoEnergy0;   //!
   TBranch        *b_NeutrinoEnergy1;   //!
   TBranch        *b_NeutrinoEnergy2;   //!
   TBranch        *b_SliceCaloEnergy0;   //!
   TBranch        *b_SliceCaloEnergy1;   //!
   TBranch        *b_SliceCaloEnergy2;   //!
   TBranch        *b_pi0truth_gamma_parent;   //!
   TBranch        *b_pi0truth_elec_edep;   //!
   TBranch        *b_pi0truth_elec_etot;   //!
   TBranch        *b_pi0truth_elec_dist;   //!
   TBranch        *b_pi0truth_elec_parent;   //!
   TBranch        *b_pi0truth_gamma1_tid;   //!
   TBranch        *b_pi0truth_gamma1_edep;   //!
   TBranch        *b_pi0truth_gamma1_etot;   //!
   TBranch        *b_pi0truth_gamma1_dist;   //!
   TBranch        *b_pi0truth_gamma1_elec1;   //!
   TBranch        *b_pi0truth_gamma1_elec2;   //!
   TBranch        *b_pi0truth_gamma1_xpos;   //!
   TBranch        *b_pi0truth_gamma1_ypos;   //!
   TBranch        *b_pi0truth_gamma1_zpos;   //!
   TBranch        *b_pi0truth_gamma2_tid;   //!
   TBranch        *b_pi0truth_gamma2_edep;   //!
   TBranch        *b_pi0truth_gamma2_etot;   //!
   TBranch        *b_pi0truth_gamma2_dist;   //!
   TBranch        *b_pi0truth_gamma2_elec1;   //!
   TBranch        *b_pi0truth_gamma2_elec2;   //!
   TBranch        *b_pi0truth_gamma2_xpos;   //!
   TBranch        *b_pi0truth_gamma2_ypos;   //!
   TBranch        *b_pi0truth_gamma2_zpos;   //!
   TBranch        *b_pi0truth_gammadot;   //!
   TBranch        *b_pi0truth_run;   //!
   TBranch        *b_pi0truth_sub;   //!
   TBranch        *b_pi0truth_evt;   //!
   TBranch        *b_nflag_pl1;   //!
   TBranch        *b_nnoise_pl1;   //!
   TBranch        *b_nslhits_pl1;   //!
   TBranch        *b_nslnoise_pl1;   //!
   TBranch        *b_nhits_pl1;   //!
   TBranch        *b_frac_slnoise_pl1;   //!
   TBranch        *b_secondshower_U_charge;   //!
   TBranch        *b_secondshower_U_nhit;   //!
   TBranch        *b_secondshower_U_vtxdist;   //!
   TBranch        *b_secondshower_U_eigenratio;   //!
   TBranch        *b_secondshower_U_dot;   //!
   TBranch        *b_secondshower_U_dir;   //!
   TBranch        *b_secondshower_V_charge;   //!
   TBranch        *b_secondshower_V_nhit;   //!
   TBranch        *b_secondshower_V_vtxdist;   //!
   TBranch        *b_secondshower_V_eigenratio;   //!
   TBranch        *b_secondshower_V_dot;   //!
   TBranch        *b_secondshower_V_dir;   //!
   TBranch        *b_secondshower_Y_charge;   //!
   TBranch        *b_secondshower_Y_nhit;   //!
   TBranch        *b_secondshower_Y_vtxdist;   //!
   TBranch        *b_secondshower_Y_eigenratio;   //!
   TBranch        *b_secondshower_Y_dot;   //!
   TBranch        *b_secondshower_Y_dir;   //!
   TBranch        *b_evnunhits;   //!
   TBranch        *b_evlepnhits;   //!
   TBranch        *b_evpronhits;   //!
   TBranch        *b_evpi1nhits;   //!
   TBranch        *b_evpi0nhits;   //!
   TBranch        *b_evneunhits;   //!
   TBranch        *b_evgamnhits;   //!
   TBranch        *b_evothnhits;   //!
   TBranch        *b_slnunhits;   //!
   TBranch        *b_sllepnhits;   //!
   TBranch        *b_slpronhits;   //!
   TBranch        *b_slpi1nhits;   //!
   TBranch        *b_slpi0nhits;   //!
   TBranch        *b_slneunhits;   //!
   TBranch        *b_slgamnhits;   //!
   TBranch        *b_slothnhits;   //!
   TBranch        *b_pfnunhits;   //!
   TBranch        *b_pflepnhits;   //!
   TBranch        *b_pfpronhits;   //!
   TBranch        *b_pfpi1nhits;   //!
   TBranch        *b_pfpi0nhits;   //!
   TBranch        *b_pfneunhits;   //!
   TBranch        *b_pfgamnhits;   //!
   TBranch        *b_pfothnhits;   //!
   TBranch        *b_nu_completeness_from_pfp;   //!
   TBranch        *b_nu_purity_from_pfp;   //!
   TBranch        *b_trk_bragg_p_v;   //!
   TBranch        *b_trk_bragg_mu_v;   //!
   TBranch        *b_trk_bragg_mip_v;   //!
   TBranch        *b_trk_pida_v;   //!
   TBranch        *b_trk_pid_chipr_v;   //!
   TBranch        *b_trk_pid_chipi_v;   //!
   TBranch        *b_trk_pid_chika_v;   //!
   TBranch        *b_trk_pid_chimu_v;   //!
   TBranch        *b_trk_bragg_p_u_v;   //!
   TBranch        *b_trk_bragg_mu_u_v;   //!
   TBranch        *b_trk_bragg_mip_u_v;   //!
   TBranch        *b_trk_pida_u_v;   //!
   TBranch        *b_trk_pid_chipr_u_v;   //!
   TBranch        *b_trk_pid_chipi_u_v;   //!
   TBranch        *b_trk_pid_chika_u_v;   //!
   TBranch        *b_trk_pid_chimu_u_v;   //!
   TBranch        *b_trk_bragg_p_v_v;   //!
   TBranch        *b_trk_bragg_mu_v_v;   //!
   TBranch        *b_trk_bragg_mip_v_v;   //!
   TBranch        *b_trk_pida_v_v;   //!
   TBranch        *b_trk_pid_chipr_v_v;   //!
   TBranch        *b_trk_pid_chipi_v_v;   //!
   TBranch        *b_trk_pid_chika_v_v;   //!
   TBranch        *b_trk_pid_chimu_v_v;   //!
   TBranch        *b_trk_pfp_id_v;   //!
   TBranch        *b_trk_dir_x_v;   //!
   TBranch        *b_trk_dir_y_v;   //!
   TBranch        *b_trk_dir_z_v;   //!
   TBranch        *b_trk_start_x_v;   //!
   TBranch        *b_trk_start_y_v;   //!
   TBranch        *b_trk_start_z_v;   //!
   TBranch        *b_trk_sce_start_x_v;   //!
   TBranch        *b_trk_sce_start_y_v;   //!
   TBranch        *b_trk_sce_start_z_v;   //!
   TBranch        *b_trk_end_x_v;   //!
   TBranch        *b_trk_end_y_v;   //!
   TBranch        *b_trk_end_z_v;   //!
   TBranch        *b_trk_sce_end_x_v;   //!
   TBranch        *b_trk_sce_end_y_v;   //!
   TBranch        *b_trk_sce_end_z_v;   //!
   TBranch        *b_trk_distance_v;   //!
   TBranch        *b_trk_theta_v;   //!
   TBranch        *b_trk_phi_v;   //!
   TBranch        *b_trk_len_v;   //!
   TBranch        *b_trk_mcs_muon_mom_v;   //!
   TBranch        *b_trk_range_muon_mom_v;   //!
   TBranch        *b_trk_energy_proton_v;   //!
   TBranch        *b_trk_energy_muon_v;   //!
   TBranch        *b_trk_calo_energy_u_v;   //!
   TBranch        *b_trk_calo_energy_v_v;   //!
   TBranch        *b_trk_calo_energy_y_v;   //!
   TBranch        *b_trk_llr_pid_u_v;   //!
   TBranch        *b_trk_llr_pid_v_v;   //!
   TBranch        *b_trk_llr_pid_y_v;   //!
   TBranch        *b_trk_llr_pid_v;   //!
   TBranch        *b_trk_llr_pid_score_v;   //!
   TBranch        *b_trk_plane_v;   //!
   TBranch        *b_trk_calo_pfp_id_v;   //!
   TBranch        *b_trk_pitch_v;   //!
   TBranch        *b_trk_dedx_v;   //!
   TBranch        *b_trk_de_v;   //!
   TBranch        *b_trk_calo_x_v;   //!
   TBranch        *b_trk_calo_y_v;   //!
   TBranch        *b_trk_calo_z_v;   //!

   MCSelectionTResolution(TTree *tree=0);
   virtual ~MCSelectionTResolution();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MCSelectionTResolution_cxx
MCSelectionTResolution::MCSelectionTResolution(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/UpdatedVertexActivity/NeutrinoSelectionFilter_BKGD.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/UpdatedVertexActivity/NeutrinoSelectionFilter_BKGD.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/pnfs/uboone/persistent/users/zwilliam/cccoh_zgrw_new_sample/cccoh_zgrw_full/UpdatedVertexActivity/NeutrinoSelectionFilter_BKGD.root:/nuselection");
      dir->GetObject("NeutrinoSelectionFilter",tree);

   }
   Init(tree);
}

MCSelectionTResolution::~MCSelectionTResolution()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MCSelectionTResolution::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MCSelectionTResolution::LoadTree(Long64_t entry)
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

void MCSelectionTResolution::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   dtrk_x_boundary = 0;
   dtrk_y_boundary = 0;
   dtrk_z_boundary = 0;
   dshr_x_boundary = 0;
   dshr_y_boundary = 0;
   dshr_z_boundary = 0;
   dvtx_x_boundary = 0;
   dvtx_y_boundary = 0;
   dvtx_z_boundary = 0;
   dtrk_boundary = 0;
   dvtx_boundary = 0;
   dshr_boundary = 0;
   dmc_boundary = 0;
   pfp_slice_idx = 0;
   backtracked_pdg = 0;
   backtracked_e = 0;
   backtracked_tid = 0;
   backtracked_purity = 0;
   backtracked_completeness = 0;
   backtracked_overlay_purity = 0;
   backtracked_px = 0;
   backtracked_py = 0;
   backtracked_pz = 0;
   backtracked_start_x = 0;
   backtracked_start_y = 0;
   backtracked_start_z = 0;
   backtracked_start_t = 0;
   backtracked_start_U = 0;
   backtracked_start_V = 0;
   backtracked_start_Y = 0;
   backtracked_sce_start_x = 0;
   backtracked_sce_start_y = 0;
   backtracked_sce_start_z = 0;
   backtracked_sce_start_U = 0;
   backtracked_sce_start_V = 0;
   backtracked_sce_start_Y = 0;
   pfp_generation_v = 0;
   pfp_trk_daughters_v = 0;
   pfp_shr_daughters_v = 0;
   trk_score_v = 0;
   pfpdg = 0;
   pfnhits = 0;
   pfnplanehits_U = 0;
   pfnplanehits_V = 0;
   pfnplanehits_Y = 0;
   pfpplanesubclusters_U = 0;
   pfpplanesubclusters_V = 0;
   pfpplanesubclusters_Y = 0;
   pfpplanesubhitfracmax_U = 0;
   pfpplanesubhitfracmax_V = 0;
   pfpplanesubhitfracmax_Y = 0;
   mc_pdg = 0;
   mc_E = 0;
   mc_vx = 0;
   mc_vy = 0;
   mc_vz = 0;
   mc_endx = 0;
   mc_endy = 0;
   mc_endz = 0;
   mc_px = 0;
   mc_py = 0;
   mc_pz = 0;
   mc_completeness = 0;
   mc_purity = 0;
   endmuonprocess = 0;
   hit_peak_time_v = 0;
   hit_summedADC_v = 0;
   hit_integral_v = 0;
   hit_channel_v = 0;
   hit_view_v = 0;
   hit_wireID_v = 0;
   cosmic_flashmatch_score_v = 0;
   X_SpcPts_v = 0;
   Y_SpcPts_v = 0;
   Z_SpcPts_v = 0;
   trkshrscore_v = 0;
   PCAWin_1Cr_5cm = 0;
   PCAWin_2Cr_5cm = 0;
   PCAWin_3Cr_5cm = 0;
   PCAWin_dist_5cm = 0;
   PCAWin_npts_5cm = 0;
   PCAWin_1Cr_2_5cm = 0;
   PCAWin_2Cr_2_5cm = 0;
   PCAWin_3Cr_2_5cm = 0;
   PCAWin_dist_2_5cm = 0;
   PCAWin_npts_2_5cm = 0;
   pfnunhits = 0;
   pflepnhits = 0;
   pfpronhits = 0;
   pfpi1nhits = 0;
   pfpi0nhits = 0;
   pfneunhits = 0;
   pfgamnhits = 0;
   pfothnhits = 0;
   trk_bragg_p_v = 0;
   trk_bragg_mu_v = 0;
   trk_bragg_mip_v = 0;
   trk_pida_v = 0;
   trk_pid_chipr_v = 0;
   trk_pid_chipi_v = 0;
   trk_pid_chika_v = 0;
   trk_pid_chimu_v = 0;
   trk_bragg_p_u_v = 0;
   trk_bragg_mu_u_v = 0;
   trk_bragg_mip_u_v = 0;
   trk_pida_u_v = 0;
   trk_pid_chipr_u_v = 0;
   trk_pid_chipi_u_v = 0;
   trk_pid_chika_u_v = 0;
   trk_pid_chimu_u_v = 0;
   trk_bragg_p_v_v = 0;
   trk_bragg_mu_v_v = 0;
   trk_bragg_mip_v_v = 0;
   trk_pida_v_v = 0;
   trk_pid_chipr_v_v = 0;
   trk_pid_chipi_v_v = 0;
   trk_pid_chika_v_v = 0;
   trk_pid_chimu_v_v = 0;
   trk_pfp_id_v = 0;
   trk_dir_x_v = 0;
   trk_dir_y_v = 0;
   trk_dir_z_v = 0;
   trk_start_x_v = 0;
   trk_start_y_v = 0;
   trk_start_z_v = 0;
   trk_sce_start_x_v = 0;
   trk_sce_start_y_v = 0;
   trk_sce_start_z_v = 0;
   trk_end_x_v = 0;
   trk_end_y_v = 0;
   trk_end_z_v = 0;
   trk_sce_end_x_v = 0;
   trk_sce_end_y_v = 0;
   trk_sce_end_z_v = 0;
   trk_distance_v = 0;
   trk_theta_v = 0;
   trk_phi_v = 0;
   trk_len_v = 0;
   trk_mcs_muon_mom_v = 0;
   trk_range_muon_mom_v = 0;
   trk_energy_proton_v = 0;
   trk_energy_muon_v = 0;
   trk_calo_energy_u_v = 0;
   trk_calo_energy_v_v = 0;
   trk_calo_energy_y_v = 0;
   trk_llr_pid_u_v = 0;
   trk_llr_pid_v_v = 0;
   trk_llr_pid_y_v = 0;
   trk_llr_pid_v = 0;
   trk_llr_pid_score_v = 0;
   trk_plane_v = 0;
   trk_calo_pfp_id_v = 0;
   trk_pitch_v = 0;
   trk_dedx_v = 0;
   trk_de_v = 0;
   trk_calo_x_v = 0;
   trk_calo_y_v = 0;
   trk_calo_z_v = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("selected", &selected, &b_selected);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("sub", &sub, &b_sub);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("dvtx", &dvtx, &b_dvtx);
   fChain->SetBranchAddress("dtrk", &dtrk, &b_dtrk);
   fChain->SetBranchAddress("contained_sps_ratio", &contained_sps_ratio, &b_contained_sps_ratio);
   fChain->SetBranchAddress("dtrk_x_boundary", &dtrk_x_boundary, &b_dtrk_x_boundary);
   fChain->SetBranchAddress("dtrk_y_boundary", &dtrk_y_boundary, &b_dtrk_y_boundary);
   fChain->SetBranchAddress("dtrk_z_boundary", &dtrk_z_boundary, &b_dtrk_z_boundary);
   fChain->SetBranchAddress("dshr_x_boundary", &dshr_x_boundary, &b_dshr_x_boundary);
   fChain->SetBranchAddress("dshr_y_boundary", &dshr_y_boundary, &b_dshr_y_boundary);
   fChain->SetBranchAddress("dshr_z_boundary", &dshr_z_boundary, &b_dshr_z_boundary);
   fChain->SetBranchAddress("dvtx_x_boundary", &dvtx_x_boundary, &b_dvtx_x_boundary);
   fChain->SetBranchAddress("dvtx_y_boundary", &dvtx_y_boundary, &b_dvtx_y_boundary);
   fChain->SetBranchAddress("dvtx_z_boundary", &dvtx_z_boundary, &b_dvtx_z_boundary);
   fChain->SetBranchAddress("dtrk_boundary", &dtrk_boundary, &b_dtrk_boundary);
   fChain->SetBranchAddress("dvtx_boundary", &dvtx_boundary, &b_dvtx_boundary);
   fChain->SetBranchAddress("dshr_boundary", &dshr_boundary, &b_dshr_boundary);
   fChain->SetBranchAddress("dmc_boundary", &dmc_boundary, &b_dmc_boundary);
   fChain->SetBranchAddress("CosmicIP", &CosmicIP, &b_CosmicIP);
   fChain->SetBranchAddress("CosmicIPAll3D", &CosmicIPAll3D, &b_CosmicIPAll3D);
   fChain->SetBranchAddress("CosmicDirAll3D", &CosmicDirAll3D, &b_CosmicDirAll3D);
   fChain->SetBranchAddress("CosmicIPAll2DEnds", &CosmicIPAll2DEnds, &b_CosmicIPAll2DEnds);
   fChain->SetBranchAddress("CosmicDirAll2DEnds", &CosmicDirAll2DEnds, &b_CosmicDirAll2DEnds);
   fChain->SetBranchAddress("CosmicIPAll2DOvlp", &CosmicIPAll2DOvlp, &b_CosmicIPAll2DOvlp);
   fChain->SetBranchAddress("CosmicDirAll2DOvlp", &CosmicDirAll2DOvlp, &b_CosmicDirAll2DOvlp);
   fChain->SetBranchAddress("leeweight", &leeweight, &b_leeweight);
   fChain->SetBranchAddress("true_pt", &true_pt, &b_true_pt);
   fChain->SetBranchAddress("true_pt_visible", &true_pt_visible, &b_true_pt_visible);
   fChain->SetBranchAddress("true_p", &true_p, &b_true_p);
   fChain->SetBranchAddress("true_p_visible", &true_p_visible, &b_true_p_visible);
   fChain->SetBranchAddress("true_e_visible", &true_e_visible, &b_true_e_visible);
   fChain->SetBranchAddress("_opfilter_pe_beam", &_opfilter_pe_beam, &b_opfilter_pe_beam);
   fChain->SetBranchAddress("_opfilter_pe_veto", &_opfilter_pe_veto, &b_opfilter_pe_veto);
   fChain->SetBranchAddress("nu_pdg", &nu_pdg, &b_nu_pdg);
   fChain->SetBranchAddress("ccnc", &ccnc, &b_ccnc);
   fChain->SetBranchAddress("nu_parent_pdg", &nu_parent_pdg, &b_nu_parent_pdg);
   fChain->SetBranchAddress("nu_hadron_pdg", &nu_hadron_pdg, &b_nu_hadron_pdg);
   fChain->SetBranchAddress("nu_decay_mode", &nu_decay_mode, &b_nu_decay_mode);
   fChain->SetBranchAddress("interaction", &interaction, &b_interaction);
   fChain->SetBranchAddress("nu_e", &nu_e, &b_nu_e);
   fChain->SetBranchAddress("nu_pt", &nu_pt, &b_nu_pt);
   fChain->SetBranchAddress("theta", &theta, &b_theta);
   fChain->SetBranchAddress("isVtxInFiducial", &isVtxInFiducial, &b_isVtxInFiducial);
   fChain->SetBranchAddress("truthFiducial", &truthFiducial, &b_truthFiducial);
   fChain->SetBranchAddress("true_nu_vtx_t", &true_nu_vtx_t, &b_true_nu_vtx_t);
   fChain->SetBranchAddress("true_nu_vtx_x", &true_nu_vtx_x, &b_true_nu_vtx_x);
   fChain->SetBranchAddress("true_nu_vtx_y", &true_nu_vtx_y, &b_true_nu_vtx_y);
   fChain->SetBranchAddress("true_nu_vtx_z", &true_nu_vtx_z, &b_true_nu_vtx_z);
   fChain->SetBranchAddress("true_nu_vtx_sce_x", &true_nu_vtx_sce_x, &b_true_nu_vtx_sce_x);
   fChain->SetBranchAddress("true_nu_vtx_sce_y", &true_nu_vtx_sce_y, &b_true_nu_vtx_sce_y);
   fChain->SetBranchAddress("true_nu_vtx_sce_z", &true_nu_vtx_sce_z, &b_true_nu_vtx_sce_z);
   fChain->SetBranchAddress("reco_nu_vtx_x", &reco_nu_vtx_x, &b_reco_nu_vtx_x);
   fChain->SetBranchAddress("reco_nu_vtx_y", &reco_nu_vtx_y, &b_reco_nu_vtx_y);
   fChain->SetBranchAddress("reco_nu_vtx_z", &reco_nu_vtx_z, &b_reco_nu_vtx_z);
   fChain->SetBranchAddress("reco_nu_vtx_sce_x", &reco_nu_vtx_sce_x, &b_reco_nu_vtx_sce_x);
   fChain->SetBranchAddress("reco_nu_vtx_sce_y", &reco_nu_vtx_sce_y, &b_reco_nu_vtx_sce_y);
   fChain->SetBranchAddress("reco_nu_vtx_sce_z", &reco_nu_vtx_sce_z, &b_reco_nu_vtx_sce_z);
   fChain->SetBranchAddress("nmuon", &nmuon, &b_nmuon);
   fChain->SetBranchAddress("muon_e", &muon_e, &b_muon_e);
   fChain->SetBranchAddress("muon_c", &muon_c, &b_muon_c);
   fChain->SetBranchAddress("muon_p", &muon_p, &b_muon_p);
   fChain->SetBranchAddress("nelec", &nelec, &b_nelec);
   fChain->SetBranchAddress("elec_e", &elec_e, &b_elec_e);
   fChain->SetBranchAddress("elec_c", &elec_c, &b_elec_c);
   fChain->SetBranchAddress("elec_p", &elec_p, &b_elec_p);
   fChain->SetBranchAddress("elec_vx", &elec_vx, &b_elec_vx);
   fChain->SetBranchAddress("elec_vy", &elec_vy, &b_elec_vy);
   fChain->SetBranchAddress("elec_vz", &elec_vz, &b_elec_vz);
   fChain->SetBranchAddress("elec_px", &elec_px, &b_elec_px);
   fChain->SetBranchAddress("elec_py", &elec_py, &b_elec_py);
   fChain->SetBranchAddress("elec_pz", &elec_pz, &b_elec_pz);
   fChain->SetBranchAddress("npi0", &npi0, &b_npi0);
   fChain->SetBranchAddress("pi0_e", &pi0_e, &b_pi0_e);
   fChain->SetBranchAddress("pi0_c", &pi0_c, &b_pi0_c);
   fChain->SetBranchAddress("pi0_p", &pi0_p, &b_pi0_p);
   fChain->SetBranchAddress("nneutron", &nneutron, &b_nneutron);
   fChain->SetBranchAddress("nproton", &nproton, &b_nproton);
   fChain->SetBranchAddress("proton_e", &proton_e, &b_proton_e);
   fChain->SetBranchAddress("proton_c", &proton_c, &b_proton_c);
   fChain->SetBranchAddress("proton_p", &proton_p, &b_proton_p);
   fChain->SetBranchAddress("npion", &npion, &b_npion);
   fChain->SetBranchAddress("pion_e", &pion_e, &b_pion_e);
   fChain->SetBranchAddress("pion_c", &pion_c, &b_pion_c);
   fChain->SetBranchAddress("pion_p", &pion_p, &b_pion_p);
   fChain->SetBranchAddress("neta", &neta, &b_neta);
   fChain->SetBranchAddress("eta_e", &eta_e, &b_eta_e);
   fChain->SetBranchAddress("nslice", &nslice, &b_nslice);
   fChain->SetBranchAddress("crtveto", &crtveto, &b_crtveto);
   fChain->SetBranchAddress("crthitpe", &crthitpe, &b_crthitpe);
   fChain->SetBranchAddress("pfp_slice_idx", &pfp_slice_idx, &b_pfp_slice_idx);
   fChain->SetBranchAddress("category", &category, &b_category);
   fChain->SetBranchAddress("backtracked_pdg", &backtracked_pdg, &b_backtracked_pdg);
   fChain->SetBranchAddress("backtracked_e", &backtracked_e, &b_backtracked_e);
   fChain->SetBranchAddress("backtracked_tid", &backtracked_tid, &b_backtracked_tid);
   fChain->SetBranchAddress("backtracked_purity", &backtracked_purity, &b_backtracked_purity);
   fChain->SetBranchAddress("backtracked_completeness", &backtracked_completeness, &b_backtracked_completeness);
   fChain->SetBranchAddress("backtracked_overlay_purity", &backtracked_overlay_purity, &b_backtracked_overlay_purity);
   fChain->SetBranchAddress("backtracked_px", &backtracked_px, &b_backtracked_px);
   fChain->SetBranchAddress("backtracked_py", &backtracked_py, &b_backtracked_py);
   fChain->SetBranchAddress("backtracked_pz", &backtracked_pz, &b_backtracked_pz);
   fChain->SetBranchAddress("backtracked_start_x", &backtracked_start_x, &b_backtracked_start_x);
   fChain->SetBranchAddress("backtracked_start_y", &backtracked_start_y, &b_backtracked_start_y);
   fChain->SetBranchAddress("backtracked_start_z", &backtracked_start_z, &b_backtracked_start_z);
   fChain->SetBranchAddress("backtracked_start_t", &backtracked_start_t, &b_backtracked_start_t);
   fChain->SetBranchAddress("backtracked_start_U", &backtracked_start_U, &b_backtracked_start_U);
   fChain->SetBranchAddress("backtracked_start_V", &backtracked_start_V, &b_backtracked_start_V);
   fChain->SetBranchAddress("backtracked_start_Y", &backtracked_start_Y, &b_backtracked_start_Y);
   fChain->SetBranchAddress("backtracked_sce_start_x", &backtracked_sce_start_x, &b_backtracked_sce_start_x);
   fChain->SetBranchAddress("backtracked_sce_start_y", &backtracked_sce_start_y, &b_backtracked_sce_start_y);
   fChain->SetBranchAddress("backtracked_sce_start_z", &backtracked_sce_start_z, &b_backtracked_sce_start_z);
   fChain->SetBranchAddress("backtracked_sce_start_U", &backtracked_sce_start_U, &b_backtracked_sce_start_U);
   fChain->SetBranchAddress("backtracked_sce_start_V", &backtracked_sce_start_V, &b_backtracked_sce_start_V);
   fChain->SetBranchAddress("backtracked_sce_start_Y", &backtracked_sce_start_Y, &b_backtracked_sce_start_Y);
   fChain->SetBranchAddress("lep_e", &lep_e, &b_lep_e);
   fChain->SetBranchAddress("pass", &pass, &b_pass);
   fChain->SetBranchAddress("swtrig", &swtrig, &b_swtrig);
   fChain->SetBranchAddress("evnhits", &evnhits, &b_evnhits);
   fChain->SetBranchAddress("slpdg", &slpdg, &b_slpdg);
   fChain->SetBranchAddress("slnhits", &slnhits, &b_slnhits);
   fChain->SetBranchAddress("n_pfps", &n_pfps, &b_n_pfps);
   fChain->SetBranchAddress("n_tracks", &n_tracks, &b_n_tracks);
   fChain->SetBranchAddress("n_showers", &n_showers, &b_n_showers);
   fChain->SetBranchAddress("pfp_generation_v", &pfp_generation_v, &b_pfp_generation_v);
   fChain->SetBranchAddress("pfp_trk_daughters_v", &pfp_trk_daughters_v, &b_pfp_trk_daughters_v);
   fChain->SetBranchAddress("pfp_shr_daughters_v", &pfp_shr_daughters_v, &b_pfp_shr_daughters_v);
   fChain->SetBranchAddress("trk_score_v", &trk_score_v, &b_trk_score_v);
   fChain->SetBranchAddress("pfpdg", &pfpdg, &b_pfpdg);
   fChain->SetBranchAddress("pfnhits", &pfnhits, &b_pfnhits);
   fChain->SetBranchAddress("pfnplanehits_U", &pfnplanehits_U, &b_pfnplanehits_U);
   fChain->SetBranchAddress("pfnplanehits_V", &pfnplanehits_V, &b_pfnplanehits_V);
   fChain->SetBranchAddress("pfnplanehits_Y", &pfnplanehits_Y, &b_pfnplanehits_Y);
   fChain->SetBranchAddress("pfpplanesubclusters_U", &pfpplanesubclusters_U, &b_pfpplanesubclusters_U);
   fChain->SetBranchAddress("pfpplanesubclusters_V", &pfpplanesubclusters_V, &b_pfpplanesubclusters_V);
   fChain->SetBranchAddress("pfpplanesubclusters_Y", &pfpplanesubclusters_Y, &b_pfpplanesubclusters_Y);
   fChain->SetBranchAddress("pfpplanesubhitfracmax_U", &pfpplanesubhitfracmax_U, &b_pfpplanesubhitfracmax_U);
   fChain->SetBranchAddress("pfpplanesubhitfracmax_V", &pfpplanesubhitfracmax_V, &b_pfpplanesubhitfracmax_V);
   fChain->SetBranchAddress("pfpplanesubhitfracmax_Y", &pfpplanesubhitfracmax_Y, &b_pfpplanesubhitfracmax_Y);
   fChain->SetBranchAddress("hits_u", &hits_u, &b_hits_u);
   fChain->SetBranchAddress("hits_v", &hits_v, &b_hits_v);
   fChain->SetBranchAddress("hits_y", &hits_y, &b_hits_y);
   fChain->SetBranchAddress("topological_score", &topological_score, &b_topological_score);
   fChain->SetBranchAddress("slclustfrac", &slclustfrac, &b_slclustfrac);
   fChain->SetBranchAddress("mc_pdg", &mc_pdg, &b_mc_pdg);
   fChain->SetBranchAddress("mc_E", &mc_E, &b_mc_E);
   fChain->SetBranchAddress("mc_vx", &mc_vx, &b_mc_vx);
   fChain->SetBranchAddress("mc_vy", &mc_vy, &b_mc_vy);
   fChain->SetBranchAddress("mc_vz", &mc_vz, &b_mc_vz);
   fChain->SetBranchAddress("mc_endx", &mc_endx, &b_mc_endx);
   fChain->SetBranchAddress("mc_endy", &mc_endy, &b_mc_endy);
   fChain->SetBranchAddress("mc_endz", &mc_endz, &b_mc_endz);
   fChain->SetBranchAddress("mc_px", &mc_px, &b_mc_px);
   fChain->SetBranchAddress("mc_py", &mc_py, &b_mc_py);
   fChain->SetBranchAddress("mc_pz", &mc_pz, &b_mc_pz);
   fChain->SetBranchAddress("mc_completeness", &mc_completeness, &b_mc_completeness);
   fChain->SetBranchAddress("mc_purity", &mc_purity, &b_mc_purity);
   fChain->SetBranchAddress("endmuonprocess", &endmuonprocess, &b_endmuonprocess);
   fChain->SetBranchAddress("endmuonmichel", &endmuonmichel, &b_endmuonmichel);
   fChain->SetBranchAddress("hit_peak_time_v", &hit_peak_time_v, &b_hit_peak_time_v);
   fChain->SetBranchAddress("hit_summedADC_v", &hit_summedADC_v, &b_hit_summedADC_v);
   fChain->SetBranchAddress("hit_integral_v", &hit_integral_v, &b_hit_integral_v);
   fChain->SetBranchAddress("hit_channel_v", &hit_channel_v, &b_hit_channel_v);
   fChain->SetBranchAddress("hit_view_v", &hit_view_v, &b_hit_view_v);
   fChain->SetBranchAddress("hit_wireID_v", &hit_wireID_v, &b_hit_wireID_v);
   fChain->SetBranchAddress("filter_antibdt", &filter_antibdt, &b_filter_antibdt);
   fChain->SetBranchAddress("filter_ncpi0", &filter_ncpi0, &b_filter_ncpi0);
   fChain->SetBranchAddress("filter_pi0", &filter_pi0, &b_filter_pi0);
   fChain->SetBranchAddress("filter_ccinclusive", &filter_ccinclusive, &b_filter_ccinclusive);
   fChain->SetBranchAddress("flash_pe", &flash_pe, &b_flash_pe);
   fChain->SetBranchAddress("flash_time", &flash_time, &b_flash_time);
   fChain->SetBranchAddress("nu_flashmatch_score", &nu_flashmatch_score, &b_nu_flashmatch_score);
   fChain->SetBranchAddress("best_cosmic_flashmatch_score", &best_cosmic_flashmatch_score, &b_best_cosmic_flashmatch_score);
   fChain->SetBranchAddress("best_obviouscosmic_flashmatch_score", &best_obviouscosmic_flashmatch_score, &b_best_obviouscosmic_flashmatch_score);
   fChain->SetBranchAddress("cosmic_flashmatch_score_v", &cosmic_flashmatch_score_v, &b_cosmic_flashmatch_score_v);
   fChain->SetBranchAddress("mcf_nu_e", &mcf_nu_e, &b_mcf_nu_e);
   fChain->SetBranchAddress("mcf_lep_e", &mcf_lep_e, &b_mcf_lep_e);
   fChain->SetBranchAddress("mcf_actvol", &mcf_actvol, &b_mcf_actvol);
   fChain->SetBranchAddress("mcf_nmm", &mcf_nmm, &b_mcf_nmm);
   fChain->SetBranchAddress("mcf_nmp", &mcf_nmp, &b_mcf_nmp);
   fChain->SetBranchAddress("mcf_nem", &mcf_nem, &b_mcf_nem);
   fChain->SetBranchAddress("mcf_nep", &mcf_nep, &b_mcf_nep);
   fChain->SetBranchAddress("mcf_np0", &mcf_np0, &b_mcf_np0);
   fChain->SetBranchAddress("mcf_npp", &mcf_npp, &b_mcf_npp);
   fChain->SetBranchAddress("mcf_npm", &mcf_npm, &b_mcf_npm);
   fChain->SetBranchAddress("mcf_mcshr_elec_etot", &mcf_mcshr_elec_etot, &b_mcf_mcshr_elec_etot);
   fChain->SetBranchAddress("mcf_pass_ccpi0", &mcf_pass_ccpi0, &b_mcf_pass_ccpi0);
   fChain->SetBranchAddress("mcf_pass_ncpi0", &mcf_pass_ncpi0, &b_mcf_pass_ncpi0);
   fChain->SetBranchAddress("mcf_pass_ccnopi", &mcf_pass_ccnopi, &b_mcf_pass_ccnopi);
   fChain->SetBranchAddress("mcf_pass_ncnopi", &mcf_pass_ncnopi, &b_mcf_pass_ncnopi);
   fChain->SetBranchAddress("mcf_pass_cccpi", &mcf_pass_cccpi, &b_mcf_pass_cccpi);
   fChain->SetBranchAddress("mcf_pass_nccpi", &mcf_pass_nccpi, &b_mcf_pass_nccpi);
   fChain->SetBranchAddress("X_SpcPts_v", &X_SpcPts_v, &b_X_SpcPts_v);
   fChain->SetBranchAddress("Y_SpcPts_v", &Y_SpcPts_v, &b_Y_SpcPts_v);
   fChain->SetBranchAddress("Z_SpcPts_v", &Z_SpcPts_v, &b_Z_SpcPts_v);
   fChain->SetBranchAddress("shr_id_MCStool", &shr_id_MCStool, &b_shr_pfp_id);
   fChain->SetBranchAddress("shr_hits_max_MCStool", &shr_hits_max_MCStool, &b_shr_hits_max_MCStool);
   fChain->SetBranchAddress("n_showers_contained_MCStool", &n_showers_contained_MCStool, &b_n_showers_contained_MCStool);
   fChain->SetBranchAddress("trkshrscore_v", &trkshrscore_v, &b_trkshrscore_v);
   fChain->SetBranchAddress("shrPCA_1Cr", &shrPCA_1Cr, &b_shrPCA_1Cr);
   fChain->SetBranchAddress("shrPCA_2Cr", &shrPCA_2Cr, &b_shrPCA_2Cr);
   fChain->SetBranchAddress("shrPCA_3Cr", &shrPCA_3Cr, &b_shrPCA_3Cr);
   fChain->SetBranchAddress("shrPCA_1Ce", &shrPCA_1Ce, &b_shrPCA_1Ce);
   fChain->SetBranchAddress("shrPCA_2Ce", &shrPCA_2Ce, &b_shrPCA_2Ce);
   fChain->SetBranchAddress("shrPCA_3Ce", &shrPCA_3Ce, &b_shrPCA_3Ce);
   fChain->SetBranchAddress("shrPCA1CAS", &shrPCA1CAS, &b_shrPCA1CAS);
   fChain->SetBranchAddress("shrPCA2CAS", &shrPCA2CAS, &b_shrPCA2CAS);
   fChain->SetBranchAddress("shrPCA3CAS", &shrPCA3CAS, &b_shrPCA3CAS);
   fChain->SetBranchAddress("shrPCA_1Cr2h", &shrPCA_1Cr2h, &b_shrPCA_1Cr2h);
   fChain->SetBranchAddress("shrPCA_2Cr2h", &shrPCA_2Cr2h, &b_shrPCA_2Cr2h);
   fChain->SetBranchAddress("shrPCA_3Cr2h", &shrPCA_3Cr2h, &b_shrPCA_3Cr2h);
   fChain->SetBranchAddress("shrPCA_1Cr1h", &shrPCA_1Cr1h, &b_shrPCA_1Cr1h);
   fChain->SetBranchAddress("shrPCA_2Cr1h", &shrPCA_2Cr1h, &b_shrPCA_2Cr1h);
   fChain->SetBranchAddress("shrPCA_3Cr1h", &shrPCA_3Cr1h, &b_shrPCA_3Cr1h);
   fChain->SetBranchAddress("shrMCSMom", &shrMCSMom, &b_shrMCSMom);
   fChain->SetBranchAddress("shrMCSMom1h", &shrMCSMom1h, &b_shrMCSMom1h);
   fChain->SetBranchAddress("shrMCSMom2h", &shrMCSMom2h, &b_shrMCSMom2h);
   fChain->SetBranchAddress("shrPCALen", &shrPCALen, &b_shrPCALen);
   fChain->SetBranchAddress("n_shrSpcPts", &n_shrSpcPts, &b_n_shrSpcPts);
   fChain->SetBranchAddress("PCAWin_1Cr_5cm", &PCAWin_1Cr_5cm, &b_PCAWin_1Cr_5cm);
   fChain->SetBranchAddress("PCAWin_2Cr_5cm", &PCAWin_2Cr_5cm, &b_PCAWin_2Cr_5cm);
   fChain->SetBranchAddress("PCAWin_3Cr_5cm", &PCAWin_3Cr_5cm, &b_PCAWin_3Cr_5cm);
   fChain->SetBranchAddress("PCAWin_dist_5cm", &PCAWin_dist_5cm, &b_PCAWin_dist_5cm);
   fChain->SetBranchAddress("PCAWin_npts_5cm", &PCAWin_npts_5cm, &b_PCAWin_npts_5cm);
   fChain->SetBranchAddress("shrStart_5cm", &shrStart_5cm, &b_shrStart_5cm);
   fChain->SetBranchAddress("shrStartMCS_5cm", &shrStartMCS_5cm, &b_shrStartMCS_5cm);
   fChain->SetBranchAddress("shrMCSAS_5cm", &shrMCSAS_5cm, &b_shrMCSAS_5cm);
   fChain->SetBranchAddress("shrPCA1CAS_5cm", &shrPCA1CAS_5cm, &b_shrPCA1CAS_5cm);
   fChain->SetBranchAddress("shrPCA2CAS_5cm", &shrPCA2CAS_5cm, &b_shrPCA2CAS_5cm);
   fChain->SetBranchAddress("shrPCA3CAS_5cm", &shrPCA3CAS_5cm, &b_shrPCA3CAS_5cm);
   fChain->SetBranchAddress("shrPCA1CMed_5cm", &shrPCA1CMed_5cm, &b__shrPCA1CMed_5cm);
   fChain->SetBranchAddress("PCAWin_1Cr_2_5cm", &PCAWin_1Cr_2_5cm, &b_PCAWin_1Cr_2_5cm);
   fChain->SetBranchAddress("PCAWin_2Cr_2_5cm", &PCAWin_2Cr_2_5cm, &b_PCAWin_2Cr_2_5cm);
   fChain->SetBranchAddress("PCAWin_3Cr_2_5cm", &PCAWin_3Cr_2_5cm, &b_PCAWin_3Cr_2_5cm);
   fChain->SetBranchAddress("PCAWin_dist_2_5cm", &PCAWin_dist_2_5cm, &b_PCAWin_dist_2_5cm);
   fChain->SetBranchAddress("PCAWin_npts_2_5cm", &PCAWin_npts_2_5cm, &b_PCAWin_npts_2_5cm);
   fChain->SetBranchAddress("shrStart_2_5cm", &shrStart_2_5cm, &b_shrStart_2_5cm);
   fChain->SetBranchAddress("shrStartMCS_2_5cm", &shrStartMCS_2_5cm, &b_shrStartMCS_2_5cm);
   fChain->SetBranchAddress("shrMCSAS_2_5cm", &shrMCSAS_2_5cm, &b_shrMCSAS_2_5cm);
   fChain->SetBranchAddress("shrPCA1CAS_2_5cm", &shrPCA1CAS_2_5cm, &b_shrPCA1CAS_2_5cm);
   fChain->SetBranchAddress("shrPCA2CAS_2_5cm", &shrPCA2CAS_2_5cm, &b_shrPCA2CAS_2_5cm);
   fChain->SetBranchAddress("shrPCA3CAS_2_5cm", &shrPCA3CAS_2_5cm, &b_shrPCA3CAS_2_5cm);
   fChain->SetBranchAddress("shrPCA1CMed_2_5cm", &shrPCA1CMed_2_5cm, &b__shrPCA1CMed_2_5cm);
   fChain->SetBranchAddress("DeltaMed", &DeltaMed, &b_DeltaMed);
   fChain->SetBranchAddress("DeltaMed1h", &DeltaMed1h, &b_DeltaMed1h);
   fChain->SetBranchAddress("DeltaMed2h", &DeltaMed2h, &b_DeltaMed2h);
   fChain->SetBranchAddress("DeltaRMS", &DeltaRMS, &b_DeltaRMS);
   fChain->SetBranchAddress("DeltaRMS1h", &DeltaRMS1h, &b_DeltaRMS1h);
   fChain->SetBranchAddress("DeltaRMS2h", &DeltaRMS2h, &b_DeltaRMS2h);
   fChain->SetBranchAddress("CylFrac_1cm", &CylFrac_1cm, &b_CylFrac_1cm);
   fChain->SetBranchAddress("CylFrac1h_1cm", &CylFrac1h_1cm, &b_CylFrac1h_1cm);
   fChain->SetBranchAddress("CylFrac2h_1cm", &CylFrac2h_1cm, &b_CylFrac2h_1cm);
   fChain->SetBranchAddress("CylFrac_2cm", &CylFrac_2cm, &b_CylFrac_2cm);
   fChain->SetBranchAddress("CylFrac1h_2cm", &CylFrac1h_2cm, &b_CylFrac1h_2cm);
   fChain->SetBranchAddress("CylFrac2h_2cm", &CylFrac2h_2cm, &b_CylFrac2h_2cm);
   fChain->SetBranchAddress("CylFrac_3cm", &CylFrac_3cm, &b_CylFrac_3cm);
   fChain->SetBranchAddress("CylFrac1h_3cm", &CylFrac1h_3cm, &b_CylFrac1h_3cm);
   fChain->SetBranchAddress("CylFrac2h_3cm", &CylFrac2h_3cm, &b_CylFrac2h_3cm);
   fChain->SetBranchAddress("CylFrac_4cm", &CylFrac_4cm, &b_CylFrac_4cm);
   fChain->SetBranchAddress("CylFrac1h_4cm", &CylFrac1h_4cm, &b_CylFrac1h_4cm);
   fChain->SetBranchAddress("CylFrac2h_4cm", &CylFrac2h_4cm, &b_CylFrac2h_4cm);
   fChain->SetBranchAddress("CylFrac_5cm", &CylFrac_5cm, &b_CylFrac_5cm);
   fChain->SetBranchAddress("CylFrac1h_5cm", &CylFrac1h_5cm, &b_CylFrac1h_5cm);
   fChain->SetBranchAddress("CylFrac2h_5cm", &CylFrac2h_5cm, &b_CylFrac2h_5cm);
   fChain->SetBranchAddress("NeutrinoEnergy0", &NeutrinoEnergy0, &b_NeutrinoEnergy0);
   fChain->SetBranchAddress("NeutrinoEnergy1", &NeutrinoEnergy1, &b_NeutrinoEnergy1);
   fChain->SetBranchAddress("NeutrinoEnergy2", &NeutrinoEnergy2, &b_NeutrinoEnergy2);
   fChain->SetBranchAddress("SliceCaloEnergy0", &SliceCaloEnergy0, &b_SliceCaloEnergy0);
   fChain->SetBranchAddress("SliceCaloEnergy1", &SliceCaloEnergy1, &b_SliceCaloEnergy1);
   fChain->SetBranchAddress("SliceCaloEnergy2", &SliceCaloEnergy2, &b_SliceCaloEnergy2);
   fChain->SetBranchAddress("pi0truth_gamma_parent", &pi0truth_gamma_parent, &b_pi0truth_gamma_parent);
   fChain->SetBranchAddress("pi0truth_elec_edep", &pi0truth_elec_edep, &b_pi0truth_elec_edep);
   fChain->SetBranchAddress("pi0truth_elec_etot", &pi0truth_elec_etot, &b_pi0truth_elec_etot);
   fChain->SetBranchAddress("pi0truth_elec_dist", &pi0truth_elec_dist, &b_pi0truth_elec_dist);
   fChain->SetBranchAddress("pi0truth_elec_parent", &pi0truth_elec_parent, &b_pi0truth_elec_parent);
   fChain->SetBranchAddress("pi0truth_gamma1_tid", &pi0truth_gamma1_tid, &b_pi0truth_gamma1_tid);
   fChain->SetBranchAddress("pi0truth_gamma1_edep", &pi0truth_gamma1_edep, &b_pi0truth_gamma1_edep);
   fChain->SetBranchAddress("pi0truth_gamma1_etot", &pi0truth_gamma1_etot, &b_pi0truth_gamma1_etot);
   fChain->SetBranchAddress("pi0truth_gamma1_dist", &pi0truth_gamma1_dist, &b_pi0truth_gamma1_dist);
   fChain->SetBranchAddress("pi0truth_gamma1_elec1", &pi0truth_gamma1_elec1, &b_pi0truth_gamma1_elec1);
   fChain->SetBranchAddress("pi0truth_gamma1_elec2", &pi0truth_gamma1_elec2, &b_pi0truth_gamma1_elec2);
   fChain->SetBranchAddress("pi0truth_gamma1_xpos", &pi0truth_gamma1_xpos, &b_pi0truth_gamma1_xpos);
   fChain->SetBranchAddress("pi0truth_gamma1_ypos", &pi0truth_gamma1_ypos, &b_pi0truth_gamma1_ypos);
   fChain->SetBranchAddress("pi0truth_gamma1_zpos", &pi0truth_gamma1_zpos, &b_pi0truth_gamma1_zpos);
   fChain->SetBranchAddress("pi0truth_gamma2_tid", &pi0truth_gamma2_tid, &b_pi0truth_gamma2_tid);
   fChain->SetBranchAddress("pi0truth_gamma2_edep", &pi0truth_gamma2_edep, &b_pi0truth_gamma2_edep);
   fChain->SetBranchAddress("pi0truth_gamma2_etot", &pi0truth_gamma2_etot, &b_pi0truth_gamma2_etot);
   fChain->SetBranchAddress("pi0truth_gamma2_dist", &pi0truth_gamma2_dist, &b_pi0truth_gamma2_dist);
   fChain->SetBranchAddress("pi0truth_gamma2_elec1", &pi0truth_gamma2_elec1, &b_pi0truth_gamma2_elec1);
   fChain->SetBranchAddress("pi0truth_gamma2_elec2", &pi0truth_gamma2_elec2, &b_pi0truth_gamma2_elec2);
   fChain->SetBranchAddress("pi0truth_gamma2_xpos", &pi0truth_gamma2_xpos, &b_pi0truth_gamma2_xpos);
   fChain->SetBranchAddress("pi0truth_gamma2_ypos", &pi0truth_gamma2_ypos, &b_pi0truth_gamma2_ypos);
   fChain->SetBranchAddress("pi0truth_gamma2_zpos", &pi0truth_gamma2_zpos, &b_pi0truth_gamma2_zpos);
   fChain->SetBranchAddress("pi0truth_gammadot", &pi0truth_gammadot, &b_pi0truth_gammadot);
   fChain->SetBranchAddress("pi0truth_run", &pi0truth_run, &b_pi0truth_run);
   fChain->SetBranchAddress("pi0truth_sub", &pi0truth_sub, &b_pi0truth_sub);
   fChain->SetBranchAddress("pi0truth_evt", &pi0truth_evt, &b_pi0truth_evt);
   fChain->SetBranchAddress("nflag_pl1", &nflag_pl1, &b_nflag_pl1);
   fChain->SetBranchAddress("nnoise_pl1", &nnoise_pl1, &b_nnoise_pl1);
   fChain->SetBranchAddress("nslhits_pl1", &nslhits_pl1, &b_nslhits_pl1);
   fChain->SetBranchAddress("nslnoise_pl1", &nslnoise_pl1, &b_nslnoise_pl1);
   fChain->SetBranchAddress("nhits_pl1", &nhits_pl1, &b_nhits_pl1);
   fChain->SetBranchAddress("frac_slnoise_pl1", &frac_slnoise_pl1, &b_frac_slnoise_pl1);
   fChain->SetBranchAddress("secondshower_U_charge", &secondshower_U_charge, &b_secondshower_U_charge);
   fChain->SetBranchAddress("secondshower_U_nhit", &secondshower_U_nhit, &b_secondshower_U_nhit);
   fChain->SetBranchAddress("secondshower_U_vtxdist", &secondshower_U_vtxdist, &b_secondshower_U_vtxdist);
   fChain->SetBranchAddress("secondshower_U_eigenratio", &secondshower_U_eigenratio, &b_secondshower_U_eigenratio);
   fChain->SetBranchAddress("secondshower_U_dot", &secondshower_U_dot, &b_secondshower_U_dot);
   fChain->SetBranchAddress("secondshower_U_dir", &secondshower_U_dir, &b_secondshower_U_dir);
   fChain->SetBranchAddress("secondshower_V_charge", &secondshower_V_charge, &b_secondshower_V_charge);
   fChain->SetBranchAddress("secondshower_V_nhit", &secondshower_V_nhit, &b_secondshower_V_nhit);
   fChain->SetBranchAddress("secondshower_V_vtxdist", &secondshower_V_vtxdist, &b_secondshower_V_vtxdist);
   fChain->SetBranchAddress("secondshower_V_eigenratio", &secondshower_V_eigenratio, &b_secondshower_V_eigenratio);
   fChain->SetBranchAddress("secondshower_V_dot", &secondshower_V_dot, &b_secondshower_V_dot);
   fChain->SetBranchAddress("secondshower_V_dir", &secondshower_V_dir, &b_secondshower_V_dir);
   fChain->SetBranchAddress("secondshower_Y_charge", &secondshower_Y_charge, &b_secondshower_Y_charge);
   fChain->SetBranchAddress("secondshower_Y_nhit", &secondshower_Y_nhit, &b_secondshower_Y_nhit);
   fChain->SetBranchAddress("secondshower_Y_vtxdist", &secondshower_Y_vtxdist, &b_secondshower_Y_vtxdist);
   fChain->SetBranchAddress("secondshower_Y_eigenratio", &secondshower_Y_eigenratio, &b_secondshower_Y_eigenratio);
   fChain->SetBranchAddress("secondshower_Y_dot", &secondshower_Y_dot, &b_secondshower_Y_dot);
   fChain->SetBranchAddress("secondshower_Y_dir", &secondshower_Y_dir, &b_secondshower_Y_dir);
   fChain->SetBranchAddress("evnunhits", &evnunhits, &b_evnunhits);
   fChain->SetBranchAddress("evlepnhits", &evlepnhits, &b_evlepnhits);
   fChain->SetBranchAddress("evpronhits", &evpronhits, &b_evpronhits);
   fChain->SetBranchAddress("evpi1nhits", &evpi1nhits, &b_evpi1nhits);
   fChain->SetBranchAddress("evpi0nhits", &evpi0nhits, &b_evpi0nhits);
   fChain->SetBranchAddress("evneunhits", &evneunhits, &b_evneunhits);
   fChain->SetBranchAddress("evgamnhits", &evgamnhits, &b_evgamnhits);
   fChain->SetBranchAddress("evothnhits", &evothnhits, &b_evothnhits);
   fChain->SetBranchAddress("slnunhits", &slnunhits, &b_slnunhits);
   fChain->SetBranchAddress("sllepnhits", &sllepnhits, &b_sllepnhits);
   fChain->SetBranchAddress("slpronhits", &slpronhits, &b_slpronhits);
   fChain->SetBranchAddress("slpi1nhits", &slpi1nhits, &b_slpi1nhits);
   fChain->SetBranchAddress("slpi0nhits", &slpi0nhits, &b_slpi0nhits);
   fChain->SetBranchAddress("slneunhits", &slneunhits, &b_slneunhits);
   fChain->SetBranchAddress("slgamnhits", &slgamnhits, &b_slgamnhits);
   fChain->SetBranchAddress("slothnhits", &slothnhits, &b_slothnhits);
   fChain->SetBranchAddress("pfnunhits", &pfnunhits, &b_pfnunhits);
   fChain->SetBranchAddress("pflepnhits", &pflepnhits, &b_pflepnhits);
   fChain->SetBranchAddress("pfpronhits", &pfpronhits, &b_pfpronhits);
   fChain->SetBranchAddress("pfpi1nhits", &pfpi1nhits, &b_pfpi1nhits);
   fChain->SetBranchAddress("pfpi0nhits", &pfpi0nhits, &b_pfpi0nhits);
   fChain->SetBranchAddress("pfneunhits", &pfneunhits, &b_pfneunhits);
   fChain->SetBranchAddress("pfgamnhits", &pfgamnhits, &b_pfgamnhits);
   fChain->SetBranchAddress("pfothnhits", &pfothnhits, &b_pfothnhits);
   fChain->SetBranchAddress("nu_completeness_from_pfp", &nu_completeness_from_pfp, &b_nu_completeness_from_pfp);
   fChain->SetBranchAddress("nu_purity_from_pfp", &nu_purity_from_pfp, &b_nu_purity_from_pfp);
   fChain->SetBranchAddress("trk_bragg_p_v", &trk_bragg_p_v, &b_trk_bragg_p_v);
   fChain->SetBranchAddress("trk_bragg_mu_v", &trk_bragg_mu_v, &b_trk_bragg_mu_v);
   fChain->SetBranchAddress("trk_bragg_mip_v", &trk_bragg_mip_v, &b_trk_bragg_mip_v);
   fChain->SetBranchAddress("trk_pida_v", &trk_pida_v, &b_trk_pida_v);
   fChain->SetBranchAddress("trk_pid_chipr_v", &trk_pid_chipr_v, &b_trk_pid_chipr_v);
   fChain->SetBranchAddress("trk_pid_chipi_v", &trk_pid_chipi_v, &b_trk_pid_chipi_v);
   fChain->SetBranchAddress("trk_pid_chika_v", &trk_pid_chika_v, &b_trk_pid_chika_v);
   fChain->SetBranchAddress("trk_pid_chimu_v", &trk_pid_chimu_v, &b_trk_pid_chimu_v);
   fChain->SetBranchAddress("trk_bragg_p_u_v", &trk_bragg_p_u_v, &b_trk_bragg_p_u_v);
   fChain->SetBranchAddress("trk_bragg_mu_u_v", &trk_bragg_mu_u_v, &b_trk_bragg_mu_u_v);
   fChain->SetBranchAddress("trk_bragg_mip_u_v", &trk_bragg_mip_u_v, &b_trk_bragg_mip_u_v);
   fChain->SetBranchAddress("trk_pida_u_v", &trk_pida_u_v, &b_trk_pida_u_v);
   fChain->SetBranchAddress("trk_pid_chipr_u_v", &trk_pid_chipr_u_v, &b_trk_pid_chipr_u_v);
   fChain->SetBranchAddress("trk_pid_chipi_u_v", &trk_pid_chipi_u_v, &b_trk_pid_chipi_u_v);
   fChain->SetBranchAddress("trk_pid_chika_u_v", &trk_pid_chika_u_v, &b_trk_pid_chika_u_v);
   fChain->SetBranchAddress("trk_pid_chimu_u_v", &trk_pid_chimu_u_v, &b_trk_pid_chimu_u_v);
   fChain->SetBranchAddress("trk_bragg_p_v_v", &trk_bragg_p_v_v, &b_trk_bragg_p_v_v);
   fChain->SetBranchAddress("trk_bragg_mu_v_v", &trk_bragg_mu_v_v, &b_trk_bragg_mu_v_v);
   fChain->SetBranchAddress("trk_bragg_mip_v_v", &trk_bragg_mip_v_v, &b_trk_bragg_mip_v_v);
   fChain->SetBranchAddress("trk_pida_v_v", &trk_pida_v_v, &b_trk_pida_v_v);
   fChain->SetBranchAddress("trk_pid_chipr_v_v", &trk_pid_chipr_v_v, &b_trk_pid_chipr_v_v);
   fChain->SetBranchAddress("trk_pid_chipi_v_v", &trk_pid_chipi_v_v, &b_trk_pid_chipi_v_v);
   fChain->SetBranchAddress("trk_pid_chika_v_v", &trk_pid_chika_v_v, &b_trk_pid_chika_v_v);
   fChain->SetBranchAddress("trk_pid_chimu_v_v", &trk_pid_chimu_v_v, &b_trk_pid_chimu_v_v);
   fChain->SetBranchAddress("trk_pfp_id_v", &trk_pfp_id_v, &b_trk_pfp_id_v);
   fChain->SetBranchAddress("trk_dir_x_v", &trk_dir_x_v, &b_trk_dir_x_v);
   fChain->SetBranchAddress("trk_dir_y_v", &trk_dir_y_v, &b_trk_dir_y_v);
   fChain->SetBranchAddress("trk_dir_z_v", &trk_dir_z_v, &b_trk_dir_z_v);
   fChain->SetBranchAddress("trk_start_x_v", &trk_start_x_v, &b_trk_start_x_v);
   fChain->SetBranchAddress("trk_start_y_v", &trk_start_y_v, &b_trk_start_y_v);
   fChain->SetBranchAddress("trk_start_z_v", &trk_start_z_v, &b_trk_start_z_v);
   fChain->SetBranchAddress("trk_sce_start_x_v", &trk_sce_start_x_v, &b_trk_sce_start_x_v);
   fChain->SetBranchAddress("trk_sce_start_y_v", &trk_sce_start_y_v, &b_trk_sce_start_y_v);
   fChain->SetBranchAddress("trk_sce_start_z_v", &trk_sce_start_z_v, &b_trk_sce_start_z_v);
   fChain->SetBranchAddress("trk_end_x_v", &trk_end_x_v, &b_trk_end_x_v);
   fChain->SetBranchAddress("trk_end_y_v", &trk_end_y_v, &b_trk_end_y_v);
   fChain->SetBranchAddress("trk_end_z_v", &trk_end_z_v, &b_trk_end_z_v);
   fChain->SetBranchAddress("trk_sce_end_x_v", &trk_sce_end_x_v, &b_trk_sce_end_x_v);
   fChain->SetBranchAddress("trk_sce_end_y_v", &trk_sce_end_y_v, &b_trk_sce_end_y_v);
   fChain->SetBranchAddress("trk_sce_end_z_v", &trk_sce_end_z_v, &b_trk_sce_end_z_v);
   fChain->SetBranchAddress("trk_distance_v", &trk_distance_v, &b_trk_distance_v);
   fChain->SetBranchAddress("trk_theta_v", &trk_theta_v, &b_trk_theta_v);
   fChain->SetBranchAddress("trk_phi_v", &trk_phi_v, &b_trk_phi_v);
   fChain->SetBranchAddress("trk_len_v", &trk_len_v, &b_trk_len_v);
   fChain->SetBranchAddress("trk_mcs_muon_mom_v", &trk_mcs_muon_mom_v, &b_trk_mcs_muon_mom_v);
   fChain->SetBranchAddress("trk_range_muon_mom_v", &trk_range_muon_mom_v, &b_trk_range_muon_mom_v);
   fChain->SetBranchAddress("trk_energy_proton_v", &trk_energy_proton_v, &b_trk_energy_proton_v);
   fChain->SetBranchAddress("trk_energy_muon_v", &trk_energy_muon_v, &b_trk_energy_muon_v);
   fChain->SetBranchAddress("trk_calo_energy_u_v", &trk_calo_energy_u_v, &b_trk_calo_energy_u_v);
   fChain->SetBranchAddress("trk_calo_energy_v_v", &trk_calo_energy_v_v, &b_trk_calo_energy_v_v);
   fChain->SetBranchAddress("trk_calo_energy_y_v", &trk_calo_energy_y_v, &b_trk_calo_energy_y_v);
   fChain->SetBranchAddress("trk_llr_pid_u_v", &trk_llr_pid_u_v, &b_trk_llr_pid_u_v);
   fChain->SetBranchAddress("trk_llr_pid_v_v", &trk_llr_pid_v_v, &b_trk_llr_pid_v_v);
   fChain->SetBranchAddress("trk_llr_pid_y_v", &trk_llr_pid_y_v, &b_trk_llr_pid_y_v);
   fChain->SetBranchAddress("trk_llr_pid_v", &trk_llr_pid_v, &b_trk_llr_pid_v);
   fChain->SetBranchAddress("trk_llr_pid_score_v", &trk_llr_pid_score_v, &b_trk_llr_pid_score_v);
   fChain->SetBranchAddress("trk_plane_v", &trk_plane_v, &b_trk_plane_v);
   fChain->SetBranchAddress("trk_calo_pfp_id_v", &trk_calo_pfp_id_v, &b_trk_calo_pfp_id_v);
   fChain->SetBranchAddress("trk_pitch_v", &trk_pitch_v, &b_trk_pitch_v);
   fChain->SetBranchAddress("trk_dedx_v", &trk_dedx_v, &b_trk_dedx_v);
   fChain->SetBranchAddress("trk_de_v", &trk_de_v, &b_trk_de_v);
   fChain->SetBranchAddress("trk_calo_x_v", &trk_calo_x_v, &b_trk_calo_x_v);
   fChain->SetBranchAddress("trk_calo_y_v", &trk_calo_y_v, &b_trk_calo_y_v);
   fChain->SetBranchAddress("trk_calo_z_v", &trk_calo_z_v, &b_trk_calo_z_v);
   Notify();
}

Bool_t MCSelectionTResolution::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MCSelectionTResolution::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MCSelectionTResolution::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MCSelectionTResolution_cxx
