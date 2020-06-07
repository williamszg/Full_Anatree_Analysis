#define BackgroundEvent_cxx
#include "BackgroundEvent.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#define PI 3.14159265

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
TH1D *hTopologicalScore = new TH1D("hTopologicalScore", "Topological Score of Neutrino Events", 25, 0, 1);
TH1D *hPandoraPDGCode = new TH1D("hPandoraPDGCode", "Pandora PDG Code of the Neutrinos in the Event", 15, -0.5, 14.5);
TH1D *hNuFlash = new TH1D("hNuFlash", "Flash #chi^{2} Values", 101, -0.5, 100.5);

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
   double yFi = -105, yFf = 105;
   double zFi = 10, zFf = 990;

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

// ===================================
// === Distance Between Two Points ===
// ===================================
double Distance(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v01(x0-x1, y0-y1, z0-z1);
   d = v01.Mag();
   return d;
} // End Distance Function
// ===================================

// =======================================
// === Absolute Difference Calculation ===
// =======================================
double Difference(double x0, double x1)
{
   double d = -999;
   TVector3 v01(x0-x1, 0, 0);
   d = v01.Mag();
   return d;
} // End Difference Function
// =======================================

// ========================
// === Wire Calculation ===
// ========================
double Wire(double x)
{
   double w = (3.33328*x) + 4799.19;
   return w;
} // End Wire Function
// ========================

// ========================
// === Tick Calculation ===
// ========================
double Tick(double x)
{
   double t = (18.2148*x) + 818.351;
   return t;
} // End Tick Function
// ========================

// ---------------------------
// --- Cone Angle Function ---
// ---------------------------
double ConeAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
  TVector3 v1(x1, y1, z1);
  TVector3 v2(x2, y2, z2);
  TVector3 z(0, 0, 1);
  TVector3 v3 = v1 + v2;
  Double_t coneangle = v3.Angle(z);
  return coneangle;
}
// ---------------------------

void BackgroundEvent::Loop()
{
   double CountingAfter = 0;
   double CountingBefore = 0;


   // =================================
   // === Setting Events to Look At ===
   // =================================
   int CCOrNC_Check = 0; // 0 means CC and 1 means NC
   int InteractionType_Check = 0; // 0 is for QE 1 is for RES 2 is for DIS and 3 is for Coh
   // =================================


   // --------------------------------
   // --- Creating File for Ntuple ---
   // --------------------------------
   //TFile f("EventNtuple.root", "RECREATE");
   //TFile f("CCInclusive.root", "RECREATE");
   //TFile f("CCQEEventNtuple.root", "RECREATE");
   //TFile f("CCResEventNtuple.root", "RECREATE");
   //TFile f("OtherEventNtuple.root", "RECREATE");
   TFile f("AllEventNtuple.root", "RECREATE");


   // Initializing the Ntuple
   TTree EventNtuple("EventNtuple", "MC Event Ntuple Information");

   // Defining the Information for the Ntuple
   int Event, Run, Subrun, CC_Selected, CCNC, InteractionType, Pandora_NuPDG, Vtx_Contained, Mc_Vtx_Contained, nTracksInBubble5, nTracksInBubble, nTracksInBubble15, nTracksInBubbleCosmic;
   float Nu_Flash_Chi2, Obvious_Cosmic_Chi2, NuEnergy, NuPx, NuPy, NuPz, NuVx, NuVy, NuVz, Topological_Score, DoCA, DoCACosmic, ConeAngleCosmic, ConeAngleCosmicBoth, Vtx_Activity, Vtx_Activity_Tracks, Vtx_Activity_Cosmic;

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
   EventNtuple.Branch("NuVx", &NuVx, "NuVx/F");
   EventNtuple.Branch("NuVy", &NuVy, "NuVy/F");
   EventNtuple.Branch("NuVz", &NuVz, "NuVz/F");
   EventNtuple.Branch("CCNC", &CCNC, "CCNC/I");
   EventNtuple.Branch("InteractionType", &InteractionType, "InteractionType/I");
   EventNtuple.Branch("Topological_Score", &Topological_Score, "Topological_Score/F");
   EventNtuple.Branch("Pandora_NuPDG", &Pandora_NuPDG, "Pandora_NuPDG/I");
   EventNtuple.Branch("Vtx_Contained", &Vtx_Contained, "Vtx_Contained/I");
   EventNtuple.Branch("Mc_Vtx_Contained", &Mc_Vtx_Contained, "Mc_Vtx_Contained/I");
   EventNtuple.Branch("DoCA", &DoCA, "DoCA/F");
   EventNtuple.Branch("DoCACosmic", &DoCACosmic, "DoCACosmic/F");
   EventNtuple.Branch("ConeAngleCosmic", &ConeAngleCosmic, "ConeAngleCosmic/F");
   EventNtuple.Branch("ConeAngleCosmicBoth", &ConeAngleCosmicBoth, "ConeAngleCosmicBoth/F");
   EventNtuple.Branch("Vtx_Activity", &Vtx_Activity, "Vtx_Activity/F");
   EventNtuple.Branch("Vtx_Activity_Tracks", &Vtx_Activity_Tracks, "Vtx_Activity_Tracks/F");
   EventNtuple.Branch("Vtx_Activity_Cosmic", &Vtx_Activity_Cosmic, "Vtx_Activity_Cosmic/F");
   EventNtuple.Branch("nTracksInBubble5", &nTracksInBubble5, "nTracksInBubble5/I");
   EventNtuple.Branch("nTracksInBubble", &nTracksInBubble, "nTracksInBubble/I");
   EventNtuple.Branch("nTracksInBubble15", &nTracksInBubble15, "nTracksInBubble15/I");
   EventNtuple.Branch("nTracksInBubbleCosmic", &nTracksInBubbleCosmic, "nTracksInBubbleCosmic/I");


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   //int Nentries = nentries;
   int Nentries = 83000;

   std::cout<<"|======================================|"<<std::endl;
   std::cout<<"     Number of Events = "<<nentries<<std::endl;
   std::cout<<"|======================================|"<<std::endl;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<Nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if (jentry%10 == 0) std::cout<<"Event = "<<jentry<<std::endl;

      bool containedRecoD = Within(0, nu_vx, nu_vy, nu_vz);
      bool containedTruthD = Within(0, mc_nu_vx, mc_nu_vy, mc_nu_vz);
      bool containedTruthSCED = Within(0, mc_nu_vx_sce, mc_nu_vy_sce, mc_nu_vz_sce);
      bool containedTruthF = Within(1, mc_nu_vx, mc_nu_vy, mc_nu_vz);
      bool containedRecoF = Within(1, nu_vx, nu_vy, nu_vz);

      Event = event;
      Run = run;
      Subrun = subrun;
      Nu_Flash_Chi2 = nu_flash_chi2;
      Obvious_Cosmic_Chi2 = obvious_cosmic_chi2;
      NuEnergy = mc_nu_energy;
      NuPx = mc_nu_px;
      NuPy = mc_nu_py;
      NuPz = mc_nu_pz;
      NuVx = nu_vx;
      NuVy = nu_vy;
      NuVz = nu_vz;
      CCNC = mc_nu_ccnc;
      InteractionType = mc_nu_interaction_type;
      Topological_Score = nu_score;
      Pandora_NuPDG = nu_pdg;
      Vtx_Contained = 0;
      Mc_Vtx_Contained = 0;

      hPandoraPDGCode->Fill(nu_pdg);
      hNuFlash->Fill(nu_flash_chi2);


      // =====================================
      // === DoCA Calculation Happens Here ===
      // =====================================
      float doca = 9999;
      float docaCosmic = 9999;
      float coneangleCosmic = 360;
      float coneangleCosmicBoth = 360;
      int ntracksinsidebubble5 = 0;
      int ntracksinsidebubble = 0;
      int ntracksinsidebubble15 = 0;
      int ntracksinsidebubbleCosmic = 0;
      for (int i = 0; i < ntrks; i++) {
	 int j = 2;
         //for (int j = 0; j < 3; j++) {
            for (int k = 0; k < ntkhits[i][j]; k++) {
               for (int l = i+1; l < ntrks; l++) {
		  int m = 2;
	          //for (int m = 0; m < 3; m++) {
		     for (int n = 0; n < ntkhits[l][m]; n++) {
			if ((trkxyz[i][j][k][0] > 0) && (trkxyz[l][m][n][0] > 0) && (trkxyz[i][j][k][2] > 0) && (trkxyz[l][m][n][2] > 0)) {
		           double dist = Distance(trkxyz[i][j][k][0], trkxyz[i][j][k][1], trkxyz[i][j][k][2], trkxyz[l][m][n][0], trkxyz[l][m][n][1], trkxyz[l][m][n][2]);
			   if (dist < doca) { doca = dist; }
			   if (trk_cosmic[i] != 0 && trk_cosmic[l] != 0) {
                              double distCosmic = Distance(trkxyz[i][j][k][0], trkxyz[i][j][k][1], trkxyz[i][j][k][2], trkxyz[l][m][n][0], trkxyz[l][m][n][1], trkxyz[l][m][n][2]);
			      if (distCosmic < docaCosmic) { docaCosmic = distCosmic; }
			   }// <-- Close IF Statement for Cosmic DoCA Calculation
			}// <-- Close IF Statement to make sure it is filled
		     }// <-- Close Second Number Trk Hits in Plane For Loop
		  //}// <-- Close Second Planes For Loop
	          if (trk_cosmic[i] != 0) {
		     double angleCosmic = ConeAngle(trk_startdcosx[i], trk_startdcosy[i], trk_startdcosz[i], trk_startdcosx[l], trk_startdcosy[l], trk_startdcosz[l])*180./PI;
		     if (angleCosmic < coneangleCosmic) coneangleCosmic = angleCosmic;
		     if (trk_cosmic[l] != 0 && angleCosmic < coneangleCosmicBoth) coneangleCosmicBoth = angleCosmic; 
	          }// <-- Close IF Statement to get the at least one track is a cosmic cone angle  
	       }// <-- Close Second Tracks For Loop
	    }// <-- Close Number Trk Hits in Plane For Loop
	 //}// <-- Close Planes For Loop
         
	 // -------------------------------------------
         // --- Number of Tracks Within Bubble Size ---
	 // -------------------------------------------
	 double vertex_radius = 10.; // <-- Setting the bubble radius in cm
         double vertex_distance = Distance(nu_vx, nu_vy, nu_vz, trk_vtxx[i], trk_vtxy[i], trk_vtxz[i]);

	 if (vertex_distance <= 5.) ntracksinsidebubble5++;
	 if (vertex_distance <= vertex_radius) ntracksinsidebubble++;
	 if (vertex_distance <= 15.) ntracksinsidebubble15++;
	 if (vertex_distance <= vertex_radius && trk_cosmic[i] != 0) ntracksinsidebubbleCosmic++;
	 // -------------------------------------------

      }// <-- Close Tracks For Loop

      DoCA = doca;
      DoCACosmic = docaCosmic;
      ConeAngleCosmic = coneangleCosmic;
      ConeAngleCosmicBoth = coneangleCosmicBoth;
      if (ConeAngleCosmic == 360) ConeAngleCosmic = -999;
      if (ConeAngleCosmicBoth == 360) ConeAngleCosmicBoth = -999;
      nTracksInBubble5 = ntracksinsidebubble5;
      nTracksInBubble = ntracksinsidebubble;
      nTracksInBubble15 = ntracksinsidebubble15;
      nTracksInBubbleCosmic = ntracksinsidebubbleCosmic;
      if (jentry%10 == 0) std::cout<<"nTracksInBubble 5, 10, 15, Cosmic = "<<nTracksInBubble5<<", "<<nTracksInBubble<<", "<<nTracksInBubble15<<", "<<nTracksInBubbleCosmic<<std::endl;
      if (jentry%10 == 0) std::cout<<"DoCA, DoCACosmic = "<<DoCA<<", "<<DoCACosmic<<std::endl;
      if (jentry%10 == 0) std::cout<<"ConeAngleCosmic, ConeAngleCosmicBoth = "<<ConeAngleCosmic<<", "<<ConeAngleCosmicBoth<<std::endl;
      // =====================================


      // ================================================
      // === Vertex Activity Calculation Happens Here ===
      // ================================================
      float vtxactivity = 0;
      float withinwires = 30;
      float withinticks = 182;
      float WIRE = Wire(nu_vz);
      float TICK = Tick(nu_vx);
      float vtxactivitytrks = 0;
      float vtxactivityCosmic = 0;

      //if (jentry%10 == 0) std::cout<<"Wire = "<<WIRE<<", Tick = "<<TICK<<std::endl;

      for (int i = 0; i < nallhits; i++) {
         if (hit_plane[i] == 2) {
	    if ((Difference(hit_channel[i], WIRE) <= withinwires) && (Difference(hit_peakT[i], TICK) <= withinticks)) {
	       vtxactivity = vtxactivity + hit_charge[i];
	       if (hit_trkid[i] >= 0) {
	          vtxactivitytrks = vtxactivitytrks + hit_charge[i];
		  for (int g = 0; g < ntrks; g++) {
		     if (trk_id[g] == hit_trkid[i]) { 
		        if (trk_cosmic[g] != 0) { vtxactivityCosmic = vtxactivityCosmic + hit_charge[i]; }
			break;
		     }// <-- Close IF Statement for calculating cosmic vtx activity
	          }// <-- Close For Loop for hit is associated with a cosmic track
	       }// <-- Close Hit is a Cosmic Hit Check
	    }// <-- Close Hit is Within Range Defined Condition
         }// <-- Close Hit is in Collection Plane Condition
      }// <-- Close Hits For Loop

      Vtx_Activity = vtxactivity;
      Vtx_Activity_Tracks = vtxactivitytrks;
      Vtx_Activity_Cosmic = vtxactivityCosmic;
      if (jentry%10 == 0) std::cout<<"Vtx_Activity = "<<Vtx_Activity<<std::endl;
      if (jentry%10 == 0) std::cout<<"Vtx_Activity_Tracks = "<<Vtx_Activity_Tracks<<std::endl;
      if (jentry%10 == 0) std::cout<<"Vtx_Activity_Cosmic = "<<Vtx_Activity_Cosmic<<std::endl;
      // ================================================


      //if (jentry%10 == 0) { std::cout<<"DoCA, Vtx Activity = "<<DoCA<<", "<<Vtx_Activity<<std::endl; }


      //if (containedTruthD) Mc_Vtx_Contained = 1;
      if (containedTruthF) Mc_Vtx_Contained = 1;
      if (containedRecoF) Vtx_Contained = 1;

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
      if (mc_nu_ccnc == CCOrNC_Check && mc_nu_pdg == 14/* && num_primary_daughters >= 2*/) hCCInclusiveBeforeNuEnergy->Fill(mc_nu_energy);
      if (mc_nu_ccnc == CCOrNC_Check && mc_nu_pdg == 14 && mc_nu_interaction_type == InteractionType_Check/* && num_primary_daughters >= 2*/) CountingBefore = CountingBefore + 1; // set mc_nu_interaction_type back to 3 for Coh, but 1 is Res
      //if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && num_primary_daughters >= 2) CountingBefore = CountingBefore + 1;
      if (nu_mu_cc_selected) hCCInclusiveAfterNuEnergy->Fill(mc_nu_energy);

      if (mc_nu_pdg == 14) {
      //if (mc_nu_interaction_type == InteractionType_Check && mc_nu_ccnc == CCOrNC_Check && mc_nu_pdg == 14) { // set mc_nu_interaction_type back to 3 for Coh, but 1 is Res
      //if (mc_nu_ccnc == 0 && mc_nu_pdg == 14 && num_primary_daughters >= 2) {
         EventNtuple.Fill(); // Filling the EventNtuple with the information I need strictly for CC-Coh Events
	 hCCCohOrNot->Fill(1);
	 hCCCohBeforeNuEnergy->Fill(mc_nu_energy);
	 if (nu_mu_cc_selected) {
            //std::cout<<"The topological score is = "<<nu_score<<std::endl;
	    hTopologicalScore->Fill(nu_score);
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
   hTopologicalScore->Write();
   hPandoraPDGCode->Write();
   hNuFlash->Write();
   f.Close();
   // -----------------------------

}// <-- Close void WouterRun1BigEvent::Loop()
