#define TestCCInclusiveEvent_cxx
#include "TestCCInclusiveEvent.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

TH1D *hCCCohOrNot = new TH1D("hCCCohOrNot", "CC-Coh as opposed to other events histogram", 3, -0.5, 2.5);
TH1D *hCCCohBeforeNuEnergy = new TH1D("hCCCohBeforeNuEnergy", "CC-Coh Neutrino Energy for All CC-Coh Events", 25, 0, 5);
TH1D *hCCCohAfterNuEnergy = new TH1D("hCCCohAfterNuEnergy", "CC-Coh Neutrino Energy for CC-Coh Events That Pass the CC-Inclusive Selection", 25, 0, 5);
TH1D *hCCInclusiveBeforeNuEnergy = new TH1D("hCCInclusiveBeforeNuEnergy", "CC-Inclusive Neutrino Energy for All CC-Coh Events", 25, 0, 5);
TH1D *hCCInclusiveAfterNuEnergy = new TH1D("hCCInclusiveAfterNuEnergy", "CC-Inclusive Neutrino Energy for CC-Coh Events That Pass the CC-Inclusive Selection", 25, 0, 5);
TH1D *hNuVtxDiffX = new TH1D("hNuVtxDiffX", "Neutrino Vtx Difference in X Position from Truth (Reco - Truth)", 501, -250.5, 250.5);
TH1D *hNuVtxDiffY = new TH1D("hNuVtxDiffY", "Neutrino Vtx Difference in Y Position from Truth (Reco - Truth)", 461, -230.5, 230.5);
TH1D *hNuVtxDiffZ = new TH1D("hNuVtxDiffZ", "Neutrino Vtx Difference in Z Position from Truth (Reco - Truth)", 2081, -1040.5, 1040.5);
TH1D *hNuVtxDiffSCEX = new TH1D("hNuVtxDiffSCEX", "Neutrino Vtx Difference in X Position from SCE Truth (Reco - Truth)", 501, -250.5, 250.5);
TH1D *hNuVtxDiffSCEY = new TH1D("hNuVtxDiffSCEY", "Neutrino Vtx Difference in Y Position from SCE Truth (Reco - Truth)", 461, -230.5, 230.5);
TH1D *hNuVtxDiffSCEZ = new TH1D("hNuVtxDiffSCEZ", "Neutrino Vtx Difference in Z Position from SCE Truth (Reco - Truth)", 2081, -1040.5, 1040.5);

// ================================================
// === Within Detector/Fiducial Volume Function ===
// ================================================
bool Within(bool w, double x, double y, double z)
{
   // If bool w input is 0, then you are checking if it is within the Detector Volume
   // If bool w input is 1, then you are checking if it is within the Fiducial Volume

   bool withinVolume = false; // This is the value returned after the check, 0 means out, 1 means in

   // #######################
   // ### Detector Volume ###
   // #######################
   double xDi = 0, xDf = 250;
   double yDi = -115, yDf = 115;
   double zDi = 0, zDf = 1040;
   
   // #######################
   // ### Fiducial Volume ###
   // #######################
   double xFi = 10, xFf = 240;
   double yFi = -95, yFf = 95;
   double zFi = 10, zFf = 1030;

   if (w == false)
      {
      if (x >= xDi && x <= xDf && y >= yDi && y <= yDf && z >= zDi && z <= zDf) {withinVolume = true;}
      }

   if (w == true)
      {
      if (x >= xFi && x <= xFf && y >= yFi && y <= yFf && z >= zFi && z <= zFf) {withinVolume = true;}
      }

   return withinVolume;
} // End Within Function
// ================================================

void TestCCInclusiveEvent::Loop()
{
   double CountingAfter = 0;
   double CountingBefore = 0;


   // --------------------------------
   // --- Creating File for Ntuple ---
   // --------------------------------
   TFile f("EventNtuple.root", "RECREATE");
   //TFile f("CCInclusive.root", "RECREATE");


   // Initializing the Ntuple
   TTree EventNtuple("EventNtuple", "MC Event Ntuple Information");

   // Defining the Information for the Ntuple
   int Event, Run, Subrun, CC_Selected;
   float Nu_Flash_Chi2, Obvious_Cosmic_Chi2, NuEnergy, NuPx, NuPy, NuPz;

   EventNtuple.Branch("Event", &Event, "Event/I");
   EventNtuple.Branch("Run", &Run, "Run/I");
   EventNtuple.Branch("Subrun", &Subrun, "Subrun/I");
   EventNtuple.Branch("CC_Selected", &CC_Selected, "CC_Selected/I");
   EventNtuple.Branch("Nu_Flash_Chi2", &Nu_Flash_Chi2, "Nu_Flash_Chi2/F");
   EventNtuple.Branch("Obvious_Cosmic_Chi2", &Obvious_Cosmic_Chi2, "Obvious_Cosmic_Chi2/F");
   EventNtuple.Branch("NuEnergy", &NuEnergy, "NuEnergy/F");
   EventNtuple.Branch("NuPx", &NuPx, "NuPx/F");
   EventNtuple.Branch("NuPy", &NuPy, "NuPy/F");
   EventNtuple.Branch("NuPz", &NuPz, "NuPz/F");


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   int Nentries = nentries;
   //int Nentries = 10000;

   std::cout<<"|======================================|"<<std::endl;
   std::cout<<"     Number of Events = "<<nentries<<std::endl;
   std::cout<<"|======================================|"<<std::endl;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<Nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if (jentry%10000 == 0) std::cout<<"Event = "<<jentry<<std::endl;

      bool containedRecoD = Within(0, nu_vx, nu_vy, nu_vz);
      bool containedTruthD = Within(0, mc_nu_vx, mc_nu_vy, mc_nu_vz);
      bool containedTruthSCED = Within(0, mc_nu_vx_sce, mc_nu_vy_sce, mc_nu_vz_sce);

      Event = event;
      Run = run;
      Subrun = subrun;
      Nu_Flash_Chi2 = nu_flash_chi2;
      Obvious_Cosmic_Chi2 = obvious_cosmic_chi2;
      NuEnergy = mc_nu_energy;
      NuPx = mc_nu_px;
      NuPy = mc_nu_py;
      NuPz = mc_nu_pz;

      if (containedRecoD && containedTruthD && containedTruthSCED) {
	 double DiffVx = nu_vx - mc_nu_vx;
	 double DiffVy = nu_vy - mc_nu_vy;
	 double DiffVz = nu_vz - mc_nu_vz;
	 double DiffSCEVx = nu_vx - mc_nu_vx_sce;
	 double DiffSCEVy = nu_vy - mc_nu_vy_sce;
	 double DiffSCEVz = nu_vz - mc_nu_vz_sce;

	 hNuVtxDiffX->Fill(DiffVx);
	 hNuVtxDiffY->Fill(DiffVy);
	 hNuVtxDiffZ->Fill(DiffVz);
	 hNuVtxDiffSCEX->Fill(DiffSCEVx);
	 hNuVtxDiffSCEY->Fill(DiffSCEVy);
	 hNuVtxDiffSCEZ->Fill(DiffSCEVz);
         }

      //if (nu_mu_cc_selected) CountingAfter = CountingAfter + 1;
      if (nu_mu_cc_selected) CC_Selected = 1;
      else CC_Selected = 0;

      

      hCCCohOrNot->Fill(0);
      if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && num_primary_daughters >= 2) hCCInclusiveBeforeNuEnergy->Fill(mc_nu_energy);
      if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && mc_nu_interaction_type == 3 && num_primary_daughters >= 2) CountingBefore = CountingBefore + 1; // set mc_nu_interaction_type back to 3 for Coh, but 1 is Res
      //if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && num_primary_daughters >= 2) CountingBefore = CountingBefore + 1;
      if (nu_mu_cc_selected) hCCInclusiveAfterNuEnergy->Fill(mc_nu_energy);

      if (mc_nu_ccnc == 0 && mc_nu_interaction_type == 3 && mc_nu_pdg == 14 && num_primary_daughters >= 2) { // set mc_nu_interaction_type back to 3 for Coh, but 1 is Res
      //if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && num_primary_daughters >= 2) {
         EventNtuple.Fill(); // Filling the EventNtuple with the information I need strictly for CC-Coh Events
	 hCCCohOrNot->Fill(1);
	 hCCCohBeforeNuEnergy->Fill(mc_nu_energy);
	 if (nu_mu_cc_selected) {
            hCCCohOrNot->Fill(2);
	    hCCCohAfterNuEnergy->Fill(mc_nu_energy);
	    CountingAfter = CountingAfter + 1;
	 }

      }
      

   }// <-- Close Event For Loop

   std::cout<<"Amount of CC-Inclusive Before = "<<CountingBefore<<std::endl;
   std::cout<<"Amount of CC-Inclusive Selected = "<<CountingAfter<<std::endl;
   std::cout<<"Their Efficiency = "<<(CountingAfter/CountingBefore)*100.<<std::endl;

   // -----------------------------
   // --- Saving Ntuple to File ---
   // -----------------------------
   EventNtuple.Write();
   hCCCohOrNot->Write();
   hCCCohBeforeNuEnergy->Write();
   hCCCohAfterNuEnergy->Write();
   hCCInclusiveBeforeNuEnergy->Write();
   hCCInclusiveAfterNuEnergy->Write();
   hNuVtxDiffX->Write();
   hNuVtxDiffY->Write();
   hNuVtxDiffZ->Write();
   hNuVtxDiffSCEX->Write();
   hNuVtxDiffSCEY->Write();
   hNuVtxDiffSCEZ->Write();
   f.Close();
   // -----------------------------

}// <-- Close void WouterRun1BigEvent::Loop()
