#define WouterRun1BigDaughters_cxx
#include "WouterRun1BigDaughters.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

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
// -------------------------------





void WouterRun1BigDaughters::Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;


      if (generation == 2 && mc_neutrino == 1) {

	 // === For Muon Tracks That Are Direct Neutrino Daughters And Matched A Neutrino ===
         if (mc_pdg == 13) {
            hMuonMuonChi2->Fill(track_chi2_muon);
	    hMuonProtonChi2->Fill(track_chi2_proton);
	    hMuonRatioChi2->Fill(track_chi2_proton/track_chi2_muon);
	    hMuonTracksMuonChi2VsProtonChi2->Fill(track_chi2_proton, track_chi2_muon);
	    hMuonPandoraTrackLength->Fill(track_length);
	    hMuonTrueTrackLength->Fill(mc_length);
	    hMuonPandoraVsTrueTrackLength->Fill(mc_length, track_length);
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
         }// <-- End Proton If Statement

      }// <-- End Direct Neutrino Daughter If check


   }// <-- End Event For Loop

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
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

}
