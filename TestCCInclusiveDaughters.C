#define TestCCInclusiveDaughters_cxx
#include "TestCCInclusiveDaughters.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

// -------------------------------
// --- Histograms Defined Here ---
// -------------------------------
TH1D *hMuonMuonChi2 = new TH1D("hMuonMuonChi2", "The Muon #chi^{2} Score for Muon Tracks", 1000, 0, 350);
TH1D *hMuonProtonChi2 = new TH1D("hMuonProtonChi2", "The Proton #chi^{2} Score for Muon Tracks", 1000, 0, 350);
TH1D *hMuonRatioChi2 = new TH1D("hMuonRatioChi2", "The Muon Tracks #chi^{2} Ratio of Proton #chi^{2} / Muon #chi^{2}", 100, 0, 30);

TH1D *hPionMuonChi2 = new TH1D("hPionMuonChi2", "The Muon #chi^{2} Score for Pion Tracks", 1000, 0, 350);
TH1D *hPionProtonChi2 = new TH1D("hPionProtonChi2", "The Proton #chi^{2} Score for Pion Tracks", 1000, 0, 350);
TH1D *hPionRatioChi2 = new TH1D("hPionRatioChi2", "The Pion Tracks #chi^{2} Ratio of Proton #chi^{2} / Muon #chi^{2}", 100, 0, 30);

TH1D *hProtonMuonChi2 = new TH1D("hProtonMuonChi2", "The Muon #chi^{2} Score for Proton Tracks", 1000, 0, 350);
TH1D *hProtonProtonChi2 = new TH1D("hProtonProtonChi2", "The Proton #chi^{2} Score for Proton Tracks", 1000, 0, 350);
TH1D *hProtonRatioChi2 = new TH1D("hProtonRatioChi2", "The Proton Tracks #chi^{2} Ratio of Proton #chi^{2} / Muon #chi^{2}", 100, 0, 30);

TH2D *hMuonTracksMuonChi2VsProtonChi2 = new TH2D("hMuonTracksMuonChi2VsProtonChi2", "For Muon Tracks the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);
TH2D *hPionTracksMuonChi2VsProtonChi2 = new TH2D("hPionTracksMuonChi2VsProtonChi2", "For Pion Tracks the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);
TH2D *hProtonTracksMuonChi2VsProtonChi2 = new TH2D("hProtonTracksMuonChi2VsProtonChi2", "For Proton Tracks the Muon #chi^{2} Vs Proton #chi^{2}", 1000, 0, 350, 1000, 0, 350);

TH1D *hMuonPandoraTrackLength = new TH1D("hMuonPandoraTrackLength", "The Track Length of Pandora Muon Tracks", 401, -0.5, 400.5);
TH1D *hPionPandoraTrackLength = new TH1D("hPionPandoraTrackLength", "The Track Length of Pandora Pion Tracks", 401, -0.5, 400.5);
TH1D *hProtonPandoraTrackLength = new TH1D("hProtonPandoraTrackLength", "The Track Length of Pandora Proton Tracks", 401, -0.5, 400.5);

TH1D *hMuonTrueTrackLength = new TH1D("hMuonTrueTrackLength", "The True Track Length of Muon Tracks", 401, -0.5, 400.5);
TH1D *hPionTrueTrackLength = new TH1D("hPionTrueTrackLength", "The True Track Length of Pion Tracks", 401, -0.5, 400.5);
TH1D *hProtonTrueTrackLength = new TH1D("hProtonTrueTrackLength", "The True Track Length of Proton Tracks", 401, -0.5, 400.5);

TH2D *hMuonPandoraVsTrueTrackLength = new TH2D("hMuonPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Muons", 401, -0.5, 400.5, 401, -0.5, 400.5);
TH2D *hPionPandoraVsTrueTrackLength = new TH2D("hPionPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Pions", 401, -0.5, 400.5, 401, -0.5, 400.5);
TH2D *hProtonPandoraVsTrueTrackLength = new TH2D("hProtonPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Protons", 401, -0.5, 400.5, 401, -0.5, 400.5);

TH1D *hMuonTrackScore = new TH1D("hMuonTrackScore", "The Track Score of Muon Tracks", 100, 0.6, 1.0);
TH1D *hPionTrackScore = new TH1D("hPionTrackScore", "The Track Score of Pion Tracks", 100, 0.6, 1.0);
TH1D *hProtonTrackScore = new TH1D("hProtonTrackScore", "The Track Score of Proton Tracks", 100, 0.6, 1.0);

TH1D *hMuonVtxDistance = new TH1D("hMuonVtxDistance", "The Vertex Distance for Muon Tracks", 100, 0, 6.0);
TH1D *hPionVtxDistance = new TH1D("hPionVtxDistance", "The Vertex Distance for Pion Tracks", 100, 0, 6.0);
TH1D *hProtonVtxDistance = new TH1D("hProtonVtxDistance", "The Vertex Distance for Proton Tracks", 100, 0, 6.0);

TH1D *hMatchedNuEnergy = new TH1D("hMatchedNuEnergy", "CC-Coh Neutrino Energy for All CC-Coh Events", 25, 0, 5);
TH1D *hPassedNuEnergy = new TH1D("hPassedNuEnergy", "CC-Coh Neutrino Energy for All CC-Coh Events That Passed Selection", 25, 0, 5);

TH1D *hMatchedT = new TH1D("hMatchedT", "CC-Coh |t| for Matched Events", 500, 0, 0.25);
TH1D *hPassedT = new TH1D("hPassedT", "CC-Coh |t| for Events That Passed Selection", 500, 0, 0.25);
// -------------------------------





void TestCCInclusiveDaughters::Loop()
{
   if (fChain == 0) return;


   int nPassedSelection = 0;

   // ------------------------------------------
   // --- Trying to Load in the Saved Ntuple ---
   // ------------------------------------------
   TFile *file = TFile::Open("EventNtuple.root");
   //TFile *file = TFile::Open("CCInclusive.root");
   TTree *t = (TTree*)file->Get("EventNtuple");

   int Event, Run, Subrun, CC_Selected;
   float Nu_Flash_Chi2, Obvious_Cosmic_Chi2, NuEnergy, NuPx, NuPy, NuPz;
   int CountMatching = 0;

   t->SetBranchAddress("Event", &Event);
   t->SetBranchAddress("Run", &Run);
   t->SetBranchAddress("Subrun", &Subrun);
   t->SetBranchAddress("Nu_Flash_Chi2", &Nu_Flash_Chi2);
   t->SetBranchAddress("Obvious_Cosmic_Chi2", &Obvious_Cosmic_Chi2);
   t->SetBranchAddress("NuEnergy", &NuEnergy);
   t->SetBranchAddress("NuPx", &NuPx);
   t->SetBranchAddress("NuPy", &NuPy);
   t->SetBranchAddress("NuPz", &NuPz);
   t->SetBranchAddress("CC_Selected", &CC_Selected);

   Int_t nevents = t->GetEntries();
   std::cout<<"nevents = "<<nevents<<std::endl;
   // ------------------------------------------

   double Muons [nevents][9];
   double Pions [nevents][9];
   double T [nevents];
   double Neutrinos [nevents][8];

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries; jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;


      int ParticleContained = 0; // boolean for particle containment initialized as false


      if (jentry%10000 == 0) std::cout<<"Event = "<<jentry<<std::endl;


      // ----------------------------------|
      // --- Check Particle Containment ---|
      // ----------------------------------|
      double EndX = track_endx;
      double EndY = track_endy;
      double EndZ = track_endz;

      if (EndX >= 10 && EndX <= 230 && EndY >= -105 && EndY <= 105 && EndZ >= 10 && EndZ <= 990) ParticleContained = 1; // <-- Containment conditions
      // ----------------------------------|


      // ------------------------------------------------
      // --- Trying to Load and Match to Saved Ntuple ---
      // ------------------------------------------------
      bool Matched = false;
      bool ccselected = false;
      float nuFlash = -999;
      float obviousCosmic = -999;
      float nuenergy = -999;

      for (Int_t i = 0; i < nevents; i++) {
         t->GetEntry(i);

	 if (Event == event && Run == run && Subrun == subrun) {
            Matched = true;
	    if (CC_Selected == 1) ccselected = true;
	    CountMatching++;
	    nuFlash = Nu_Flash_Chi2;
	    obviousCosmic = Obvious_Cosmic_Chi2;
	    nuenergy = NuEnergy;
	    if (mc_pdg == 13 && generation == 2 && mc_neutrino == 1) { // If the track is a muon track, save four-momentum information
               Muons[i][0] = mc_energy;
	       Muons[i][1] = mc_px;
	       Muons[i][2] = mc_py;
	       Muons[i][3] = mc_pz;
	       Muons[i][4] = event;
	       Muons[i][5] = run;
	       Muons[i][6] = subrun;
	       Muons[i][7] = CC_Selected;
	       Muons[i][8] = ParticleContained;
	       Neutrinos[i][0] = NuEnergy;
	       Neutrinos[i][1] = NuPx;
	       Neutrinos[i][2] = NuPy;
	       Neutrinos[i][3] = NuPz;
	       Neutrinos[i][4] = event;
	       Neutrinos[i][5] = run;
	       Neutrinos[i][6] = subrun;
	       Neutrinos[i][7] = CC_Selected;
	    }
	    if (mc_pdg == 211 && generation == 2 && mc_neutrino == 1) { // If the track is a pion track, save four-momentum information
               Pions[i][0] = mc_energy;
	       Pions[i][1] = mc_px;
	       Pions[i][2] = mc_py;
	       Pions[i][3] = mc_pz;
	       Pions[i][4] = event;
	       Pions[i][5] = run;
	       Pions[i][6] = subrun;
	       Pions[i][7] = CC_Selected;
	       Pions[i][8] = ParticleContained;
	    }
	 }

      }
      // ------------------------------------------------


      //if (generation == 2 && mc_neutrino == 1 && start_contained && Matched) {
      if (generation == 2 && mc_neutrino == 1 && start_contained /*&& ParticleContained == 1*/) {

         //if (Matched) hMatchedNuEnergy->Fill(nuenergy);
         //hMatchedNuEnergy->Fill(nuenergy, 0.5);

         // === Adding In Selection Criteria ===
	 if (Matched && ccselected) {
         //if (track_chi2_proton > 60 && track_chi2_muon < 30 && (track_chi2_proton/track_chi2_muon) > 7 && track_score > 0.8 && vtx_distance < 4 && track_length > 20 && (nuFlash/obviousCosmic) < 5 && nuFlash < 10) {
            nPassedSelection++;
	    //hPassedNuEnergy->Fill(nuenergy);
	 }

	 // === For Muon Tracks That Are Direct Neutrino Daughters And Matched A Neutrino ===
         if (mc_pdg == 13) {
            hMuonMuonChi2->Fill(track_chi2_muon);
	    hMuonProtonChi2->Fill(track_chi2_proton);
	    hMuonRatioChi2->Fill(track_chi2_proton/track_chi2_muon);
	    hMuonTracksMuonChi2VsProtonChi2->Fill(track_chi2_proton, track_chi2_muon);
	    hMuonPandoraTrackLength->Fill(track_length);
	    hMuonTrueTrackLength->Fill(mc_length);
	    hMuonPandoraVsTrueTrackLength->Fill(mc_length, track_length);
	    hMuonTrackScore->Fill(track_score);
	    hMuonVtxDistance->Fill(vtx_distance);
         }// <-- End Muon If Statement

	 // === For Pion Tracks That Are Direct Neutrino Daughters And Matched A Neutrino ===
         if (mc_pdg == 211) {
            hPionMuonChi2->Fill(track_chi2_muon);
	    hPionProtonChi2->Fill(track_chi2_proton);
	    hPionRatioChi2->Fill(track_chi2_proton/track_chi2_muon);
	    hPionTracksMuonChi2VsProtonChi2->Fill(track_chi2_proton, track_chi2_muon);
	    hPionPandoraTrackLength->Fill(track_length);
	    hPionTrueTrackLength->Fill(mc_length);
	    hPionPandoraVsTrueTrackLength->Fill(mc_length, track_length);
	    hPionTrackScore->Fill(track_score);
	    hPionVtxDistance->Fill(vtx_distance);
         }// <-- End Pion If Statement

	 // === For Proton Tracks That Are Direct Neutrino Daughters And Matched A Neutrino ===
         if (mc_pdg == 2212) {
            hProtonMuonChi2->Fill(track_chi2_muon);
	    hProtonProtonChi2->Fill(track_chi2_proton);
	    hProtonRatioChi2->Fill(track_chi2_proton/track_chi2_muon);
	    hProtonTracksMuonChi2VsProtonChi2->Fill(track_chi2_proton, track_chi2_muon);
	    hProtonPandoraTrackLength->Fill(track_length);
	    hProtonTrueTrackLength->Fill(mc_length);
	    hProtonPandoraVsTrueTrackLength->Fill(mc_length, track_length);
	    hProtonTrackScore->Fill(track_score);
	    hProtonVtxDistance->Fill(vtx_distance);
         }// <-- End Proton If Statement

      }// <-- End Direct Neutrino Daughter If check


   }// <-- End Event For Loop


   for (Int_t k = 0; k < nevents; k++) {
      T[k] = abs(pow(Neutrinos[k][0] - Muons[k][0] - Pions[k][0], 2) - pow(Neutrinos[k][1] - Muons[k][1] - Pions[k][1], 2) - pow(Neutrinos[k][2] - Muons[k][2] - Pions[k][2], 2) - pow(Neutrinos[k][3] - Muons[k][3] - Pions[k][3], 2));
      //T[k] = pow(Muons[k][0] - Muons[k][3] + Pions[k][0] - Pions[k][3], 2) + pow(Muons[k][1] + Pions[k][1], 2) + pow(Muons[k][2] + Pions[k][2], 2);

      if ((Muons[k][8] == 1 || Pions[k][8] == 1)) {
         hMatchedT->Fill(T[k]);
         hMatchedNuEnergy->Fill(Neutrinos[k][0]);
      }

      if ((Muons[k][7] == 1 || Pions[k][7] == 1) && (Muons[k][8] == 1 || Pions[k][8] == 1)) {
         hPassedT->Fill(T[k]);
	 hPassedNuEnergy->Fill(Neutrinos[k][0]);
      }
   }// <-- End k For Loop for T calculations


   std::cout<<"Matched an Event this many times = "<<CountMatching<<std::endl;
   std::cout<<"Number that Passed Selection = "<<nPassedSelection<<std::endl;

   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // %%% Saving Histograms to File %%%
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   TFile *TDaughtersInfo = new TFile("Wouter_Daughter_Information.root", "RECREATE");

   hMuonMuonChi2->Write();
   hMuonProtonChi2->Write();
   hMuonRatioChi2->Write();

   hPionMuonChi2->Write();
   hPionProtonChi2->Write();
   hPionRatioChi2->Write();

   hProtonMuonChi2->Write();
   hProtonProtonChi2->Write();
   hProtonRatioChi2->Write();

   hMuonTracksMuonChi2VsProtonChi2->Write();
   hPionTracksMuonChi2VsProtonChi2->Write();
   hProtonTracksMuonChi2VsProtonChi2->Write();

   hMuonPandoraTrackLength->Write();
   hPionPandoraTrackLength->Write();
   hProtonPandoraTrackLength->Write();

   hMuonTrueTrackLength->Write();
   hPionTrueTrackLength->Write();
   hProtonTrueTrackLength->Write();

   hMuonPandoraVsTrueTrackLength->Write();
   hPionPandoraVsTrueTrackLength->Write();
   hProtonPandoraVsTrueTrackLength->Write();

   hMuonTrackScore->Write();
   hPionTrackScore->Write();
   hProtonTrackScore->Write();

   hMuonVtxDistance->Write();
   hPionVtxDistance->Write();
   hProtonVtxDistance->Write();

   hMatchedNuEnergy->Write();
   hPassedNuEnergy->Write();

   hMatchedT->Write();
   hPassedT->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

}
