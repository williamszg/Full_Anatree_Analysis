#define MCTruth_cxx
#include "MCTruth.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <string>
#include <iostream>
#include <TVector3.h>

// ===================================================================================================================
// ====================================       PUT HISTOGRAMS HERE           ==========================================
// ===================================================================================================================

void MCTruth::Loop()
{
if (fChain == 0) return;
Long64_t nentries = fChain->GetEntriesFast();
Long64_t nbytes = 0, nb = 0;


// ###############################
// ### Looping over all events ###
// ###############################
for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
   std::cout<<"Run: "<<run<<", SubRun: "<<subrun<<", Event: "<<event<<std::endl;
   
   // #########################
   // ### Loading the event ###
   // #########################
   Long64_t ientry = LoadTree(jentry);
   if (ientry < 0) break;
   nb = fChain->GetEntry(jentry);   nbytes += nb;
   
   
   // ### Loop over MCTruth Events ###
   for(int nMCT = 0; nMCT < mcevts_truth; nMCT++)
      {
      std::cout<<"Neutrino PDG = "<<nuPDG_truth[nMCT]<<", Mode: "<<mode_truth[nMCT]<<std::endl;
      std::cout<<"Nu Vtx X "<<nuvtxx_truth[nMCT]<<", Y "<<nuvtxy_truth[nMCT]<<", Z "<<nuvtxz_truth[nMCT]<<std::endl;
      std::cout<<"----------------------------------------------------------"<<std::endl;
      std::cout<<"Space Charge Corrected X "<<sp_charge_corrected_nuvtxx_truth[nMCT]<<
      ", Y "<<sp_charge_corrected_nuvtxy_truth[nMCT]<<", Z "<<sp_charge_corrected_nuvtxz_truth[nMCT]<<std::endl;
      }//<---End nMCT loop
   
   
   std::cout<<" Number of MC Tracks = "<<no_mctracks<<std::endl;
   // ### Loop over MCTracks ###
   for(int nMCtrk = 0; nMCtrk < no_mctracks; nMCtrk++)
      {
      std::vector<string> test = *mctrk_Process;
      if(test[nMCtrk] == "primary")
         {
         std::cout<<"mctrk_Process = "<<test[nMCtrk]<<", PDG "<<mctrk_pdg[nMCtrk]<<std::endl;
	 std::cout<<"Start X = "<<mctrk_startX[nMCtrk]<<", Y "<<mctrk_startY[nMCtrk]<<", Z "<<mctrk_startZ[nMCtrk]<<std::endl;
	 }
      
      
      }//<----end nMCTrk
   
   
   // ### Loop over all Geant4 Primary Particles ###
   for(int npriG4 = 0; npriG4 < no_primaries; npriG4++)
      {
      std::cout<<"Primary Particle :"<<pdg[npriG4]<<std::endl;
      std::cout<<"Number of Trajectory Points = "<<NTrTrajPts[npriG4]<<std::endl;
      
      // ### Loop over the trajectory points ###
      for(int npriTrjPts = 0; npriTrjPts < NTrTrajPts[npriG4]; npriTrjPts++)
         {
	 std::cout<<"X "<<TrueTraj_X[npriG4][npriTrjPts]<<", Y "<<TrueTraj_Y[npriG4][npriTrjPts]<<", Z "<<
	 TrueTraj_Z[npriG4][npriTrjPts]<<" Energy "<<TrueTraj_E[npriG4][npriTrjPts]<<std::endl;
	 
	 
	 }//<---end npriTrjPts
      
      
      }//<---End npriG4
   
   
   
   // ### Looking at Reconstructed Hits and trying to match information ###
   
   
   std::cout<<std::endl;
   }//<---end jentry loop
   
   
}//<---End Loop Function
