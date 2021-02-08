#define BackgroundDaughters_cxx
#include "BackgroundDaughters.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#define PI 3.14159265

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

TH1D *hMuonPandoraTrackLength = new TH1D("hMuonPandoraTrackLength", "The Track Length of Pandora Muon Tracks", 400, 0, 400);
TH1D *hPionPandoraTrackLength = new TH1D("hPionPandoraTrackLength", "The Track Length of Pandora Pion Tracks", 400, 0, 400);
TH1D *hProtonPandoraTrackLength = new TH1D("hProtonPandoraTrackLength", "The Track Length of Pandora Proton Tracks", 400, 0, 400);

TH1D *hMuonTrueTrackLength = new TH1D("hMuonTrueTrackLength", "The True Track Length of Muon Tracks", 400, 0, 400);
TH1D *hPionTrueTrackLength = new TH1D("hPionTrueTrackLength", "The True Track Length of Pion Tracks", 400, 0, 400);
TH1D *hProtonTrueTrackLength = new TH1D("hProtonTrueTrackLength", "The True Track Length of Proton Tracks", 400, 0, 400);

TH2D *hMuonPandoraVsTrueTrackLength = new TH2D("hMuonPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Muons", 400, 0, 400, 400, 0, 400);
TH2D *hPionPandoraVsTrueTrackLength = new TH2D("hPionPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Pions", 400, 0, 400, 400, 0, 400);
TH2D *hProtonPandoraVsTrueTrackLength = new TH2D("hProtonPandoraVsTrueTrackLength", "Pandora Vs True Track Length for Protons", 400, 0, 400, 400, 0, 400);

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

TH1D *hCutByCutMuonCandidate = new TH1D("hCutByCutMuonCandidate", "The Cut by Cut Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events", 19, -0.5, 18.5);
TH1D *hCutByCutMuonCandidateDivide = new TH1D("hCutByCutMuonCandidateDivide", "The Cut by Cut Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events Denominator", 19, -0.5, 18.5);
TH1D *hNumMuonCandidates = new TH1D("hNumMuonCandidates", "The Number of Tracks that Passed the Muon Candidacy", 30, 0, 30);

TH1D *hFurtherEventSelection = new TH1D("hFurtherEventSelection", "The Event Selection That Takes Place After Muon Candidacy for CC-Coh", 5, -0.5, 4.5);
TH1D *hFurtherEventSelectionDivide = new TH1D("hFurtherEventSelectionDivide", "The Event Selection That Takes Place After Muon Candidacy for CC-Coh Denominator", 5, -0.5, 4.5);

TH1D *hTrueConeAngle = new TH1D("hTrueConeAngle", "The Cone Angle from MC Truth Information", 180, 0, 180);
TH1D *hRecoConeAngle = new TH1D("hRecoConeAngle", "The Cone Angle from Reconstructed Information", 180, 0, 180);

TH1D *hTrueDoCA = new TH1D("hTrueDoCA", "The Distance of Closest Approach from MC Truth Information", 100, 0, 100);
TH1D *hRecoDoCA = new TH1D("hRecoDoCA", "The Distance of Closest Approach from Reconstructed Information", 100, 0, 100);

TH1D *hRecoVA0 = new TH1D("hRecoVA0", "The Vertex Activity from Reconstructed Information in Plane 0", 1000, 0, 50000);
TH1D *hRecoVA1 = new TH1D("hRecoVA1", "The Vertex Activity from Reconstructed Information in Plane 1", 1000, 0, 50000);
TH1D *hRecoVA2 = new TH1D("hRecoVA2", "The Vertex Activity from Reconstructed Information in Plane 2", 1000, 0, 50000);
TH1D *hRecoVAAll = new TH1D("hRecoVAAll", "The Vertex Activity from Reconstructed Information from all Planes", 1000, 0, 50000);

TH1D *hPionOrMuonIsCandidate = new TH1D("hPionOrMuonIsCandidate", "Whether a Pion or a Muon or some other particle was selected as the Muon Candidate", 3, -0.5, 2.5);

TH1D *hTrueOpeningAngle = new TH1D("hTrueOpeningAngle", "The Opening Angle from MC Truth Information", 180, 0, 180);
TH1D *hRecoOpeningAngle = new TH1D("hRecoOpeningAngle", "The Opening Angle from Reconstructed Information", 180, 0, 180);

TH1D *hCutByCutMuonCandidate2 = new TH1D("hCutByCutMuonCandidate2", "The Cut by Cut Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events", 20, -0.5, 19.5);
TH1D *hCutByCutMuonCandidateDivide2 = new TH1D("hCutByCutMuonCandidateDivide2", "The Cut by Cut Efficiency of the CC-Inclusive Muon Candidate Selection for CC-Coh Events Denominator", 20, -0.5, 19.5);

TH1D *hNTracksInBubble5 = new TH1D("hNTracksInBubble5", "The Number of Tracks within 5cm of Reconstructed Vertex", 16, -0.5, 15.5);
TH1D *hNTracksInBubble = new TH1D("hNTracksInBubble", "The Number of Tracks within 10cm of Reconstructed Vertex", 16, -0.5, 15.5);
TH1D *hNTracksInBubble15 = new TH1D("hNTracksInBubble15", "The Number of Tracks within 15cm of Reconstructed Vertex", 16, -0.5, 15.5);
TH1D *hNTracksInBubbleCosmic = new TH1D("hNTracksInBubbleCosmic", "The Number of Cosmic Tracks within 10cm of Reconstructed Vertex", 16, -0.5, 15.5);
TH1D *hRecoVA2Tracks = new TH1D("hRecoVA2Tracks", "The Vertex Activity from Reconstructed Information in Plane 2 Exclusively for Hits Belonging to a Track", 1000, 0, 50000);
TH1D *hRecoVA2Minus = new TH1D("hRecoVA2Minus", "The Vertex Activity from Reconstructed Information in Plane 2 of Hits Not Belonging to Tracks", 1000, 0, 50000);
TH1D *hRecoVA2Cosmic = new TH1D("hRecoVA2Cosmic", "The Vertex Activity from Reconstructed Information in Plane 2 of Hits Belonging to Cosmic Tracks", 1000, 0, 50000);
TH1D *hRecoVA2Chosen = new TH1D("hRecoVA2Chosen", "The Vertex Activity from Reconstructed Information in Plane 2 of Hits Belonging to Tracks That Aren't Cosmics", 1000, 0, 50000);
TH1D *hRecoConeAngleCosmic = new TH1D("hRecoConeAngleCosmic", "The Cone Angle from Reconstructed Information for Cosmic Tracks", 180, 0, 180);
TH1D *hRecoConeAngleCosmicBoth = new TH1D("hRecoConeAngleCosmicBoth", "The Cone Angle from Reconstructed Information for Cosmic Tracks", 180, 0, 180);
TH1D *hRecoDoCACosmic = new TH1D("hRecoDoCACosmic", "The Distance of Closest Approach from Reconstructed Information for Cosmics", 100, 0, 100);
TH1D *hT = new TH1D("hT", "|t| for Events That Passed Selection", 1000, 0, 1.0);
TH1D *hT2_5 = new TH1D("hT2_5", "|t| for Events That Passed Selection with 2 Tracks Within the Bubble Radius of 5cm", 1000, 0, 1.0);
TH1D *hT2 = new TH1D("hT2", "|t| for Events That Passed Selection with 2 Tracks Within the Bubble Radius of 10cm", 1000, 0, 1.0);
TH1D *hT2_15 = new TH1D("hT2_15", "|t| for Events That Passed Selection with 2 Tracks Within the Bubble Radius of 15cm", 1000, 0, 1.0);

TH2D *hTrueConeAngleVsOpeningAngle = new TH2D("hTrueConeAngleVsOpeningAngle", "Cone Angle Vs Opening Angle from True Information", 180, 0, 180, 180, 0, 180);
TH2D *hRecoConeAngleVsOpeningAngle = new TH2D("hRecoConeAngleVsOpeningAngle", "Cone Angle Vs Opening Angle from Reco Information", 180, 0, 180, 180, 0, 180);

TH1D *hAfterNuEnergy = new TH1D("hAfterNuEnergy", "Neutrino Energy for CC-Coh Events That Pass My Selection with Cuts Off", 25, 0, 5);
TH1D *hAfterNuEnergy2 = new TH1D("hAfterNuEnergy2", "Neutrino Energy for CC-Coh Events That Pass My Selection with All Cuts On", 25, 0, 5);

TH1D *hMuonCandidateMuonChi2After = new TH1D("hMuonCandidateMuonChi2After", "The Muon #chi^{2} Score for Muon Candidate Tracks After Main Selection", 1000, 0, 350);
TH1D *hPionCandidateMuonChi2After = new TH1D("hPionCandidateMuonChi2After", "The Muon #chi^{2} Score for Pion Candidate Tracks After Main Selection", 1000, 0, 350);

TH1D *hMuonCandidateProtonChi2After = new TH1D("hMuonCandidateProtonChi2After", "The Proton #chi^{2} Score for Muon Candidate Tracks After Main Selection", 1000, 0, 350);
TH1D *hPionCandidateProtonChi2After = new TH1D("hPionCandidateProtonChi2After", "The Proton #chi^{2} Score for Pion Candidate Tracks After Main Selection", 1000, 0, 350);

TH2D *hMuonCandidateTracksMuonChi2VsProtonChi2After = new TH2D("hMuonCandidateTracksMuonChi2VsProtonChi2After", "For Muon Candidate Tracks the Muon #chi^{2} Vs Proton #chi^{2} After My Selection", 1000, 0, 350, 1000, 0, 350);
TH2D *hPionCandidateTracksMuonChi2VsProtonChi2After = new TH2D("hPionCandidateTracksMuonChi2VsProtonChi2After", "For Pion Candidate Tracks the Muon #chi^{2} Vs Proton #chi^{2} After My Selection", 1000, 0, 350, 1000, 0, 350);

TH1D *hMuonCandidateTrueTrackLengthAfter = new TH1D("hMuonCandidateTrueTrackLengthAfter", "The True Track Length of Muon Candidate Tracks After My Selection", 1000, -0.5, 999.5);
TH1D *hPionCandidateTrueTrackLengthAfter = new TH1D("hPionCandidateTrueTrackLengthAfter", "The True Track Length of Pion Candidate Tracks After My Selection", 1000, -0.5, 999.5);

TH1D *hMuonCandidateRecoTrackLengthAfter = new TH1D("hMuonCandidateRecoTrackLengthAfter", "The Reconstructed Track Length of Muon Candidate Tracks After My Selection", 1000, -0.5, 999.5);
TH1D *hPionCandidateRecoTrackLengthAfter = new TH1D("hPionCandidateRecoTrackLengthAfter", "The Reconstructed Track Length of Pion Candidate Tracks After My Selection", 1000, -0.5, 999.5);

TH1D *hMuonCandidateDeltaLengthAfter = new TH1D("hMuonCandidateDeltaLengthAfter", "The Difference (True - Reco) Length of Muon Candidate Tracks After My Selection", 1000, -250, 250);
TH1D *hPionCandidateDeltaLengthAfter = new TH1D("hPionCandidateDeltaLengthAfter", "The Difference (True - Reco) Length of Pion Candidate Tracks After My Selection", 1000, -250, 250);

TH2D *hMuonCandidateRecoLengthVsMuonChi2 = new TH2D("hMuonCandidateRecoLengthVsMuonChi2", "For Muon Candidate Tracks the Reco Length Vs Muon #chi^{2} After My Selection", 1000, 0, 350, 1000, -0.5, 999.5);
TH2D *hMuonCandidateRecoLengthVsProtonChi2 = new TH2D("hMuonCandidateRecoLengthVsProtonChi2", "For Muon Candidate Tracks the Reco Length Vs Proton #chi^{2} After My Selection", 1000, 0, 350, 1000, -0.5, 999.5);

TH2D *hPionCandidateRecoLengthVsMuonChi2 = new TH2D("hPionCandidateRecoLengthVsMuonChi2", "For Pion Candidate Tracks the Reco Length Vs Muon #chi^{2} After My Selection", 1000, 0, 350,  1000, -0.5, 999.5);
TH2D *hPionCandidateRecoLengthVsProtonChi2 = new TH2D("hPionCandidateRecoLengthVsProtonChi2", "For Pion Candidate Tracks the Reco Length Vs Proton #chi^{2} After My Selection", 1000, 0, 350, 1000, -0.5, 999.5);

TH1D *hMuonCandidateTrueTrackLengthAfter2 = new TH1D("hMuonCandidateTrueTrackLengthAfter2", "The True Track Length of Muon Candidate Tracks After My Pion Selection", 1000, -0.5, 999.5);
TH1D *hPionCandidateTrueTrackLengthAfter2 = new TH1D("hPionCandidateTrueTrackLengthAfter2", "The True Track Length of Pion Candidate Tracks After My Pion Selection", 1000, -0.5, 999.5);

TH1D *hMuonCandidateRecoTrackLengthAfter2 = new TH1D("hMuonCandidateRecoTrackLengthAfter2", "The Reconstructed Track Length of Muon Candidate Tracks After My Pion Selection", 1000, -0.5, 999.5);
TH1D *hPionCandidateRecoTrackLengthAfter2 = new TH1D("hPionCandidateRecoTrackLengthAfter2", "The Reconstructed Track Length of Pion Candidate Tracks After My Pion Selection", 1000, -0.5, 999.5);

TH1D *hMuonCandidateDeltaLengthAfter2 = new TH1D("hMuonCandidateDeltaLengthAfter2", "The Difference (True - Reco) Length of Muon Candidate Tracks After My Pion Selection", 1000, -250, 250);
TH1D *hPionCandidateDeltaLengthAfter2 = new TH1D("hPionCandidateDeltaLengthAfter2", "The Difference (True - Reco) Length of Pion Candidate Tracks After My Pion Selection", 1000, -250, 250);

TH1D *hTrueConeAngleAfter = new TH1D("hTrueConeAngleAfter", "The Cone Angle from MC Truth Information After Pion Selection", 180, 0, 180);
TH1D *hRecoConeAngleAfter = new TH1D("hRecoConeAngleAfter", "The Cone Angle from Reconstructed Information After Pion Selection", 180, 0, 180);

TH1D *hTrueOpeningAngleAfter = new TH1D("hTrueOpeningAngleAfter", "The Opening Angle from MC Truth Information After Pion Selection", 180, 0, 180);
TH1D *hRecoOpeningAngleAfter = new TH1D("hRecoOpeningAngleAfter", "The Opening Angle from Reconstructed Information After Pion Selection", 180, 0, 180);

TH1D *hTrueMuonOpeningAngleAfter = new TH1D("hTrueMuonOpeningAngleAfter", "The Muon Candidate's Opening Angle from MC Truth Information After Pion Selection", 180, 0, 180);
TH1D *hRecoMuonOpeningAngleAfter = new TH1D("hRecoMuonOpeningAngleAfter", "The Muon Candidate's Opening Angle from Reconstructed Information After Pion Selection", 180, 0, 180);

TH1D *hTruePionOpeningAngleAfter = new TH1D("hTruePionOpeningAngleAfter", "The Pion Candidate's Opening Angle from MC Truth Information After Pion Selection", 180, 0, 180);
TH1D *hRecoPionOpeningAngleAfter = new TH1D("hRecoPionOpeningAngleAfter", "The Pion Candidate's Opening Angle from Reconstructed Information After Pion Selection", 180, 0, 180);

TH1D *hMuonCandidateAfterMomentumTrue = new TH1D("hMuonCandidateAfterMomentumTrue", "The Muon Candidate's True Momentum After Pion Selection", 1000, 0, 5);
TH1D *hPionCandidateAfterMomentumTrue = new TH1D("hPionCandidateAfterMomentumTrue", "The Pion Candidate's True Momentum After Pion Selection", 1000, 0, 5);

TH1D *hMuonCandidateAfterMomentumReco = new TH1D("hMuonCandidateAfterMomentumReco", "The Muon Candidate's Reco Momentum After Pion Selection", 1000, 0, 5);
TH1D *hPionCandidateAfterMomentumReco = new TH1D("hPionCandidateAfterMomentumReco", "The Pion Candidate's Reco Momentum After Pion Selection", 1000, 0, 5);

TH1D *hTAfterTrue = new TH1D("hTAfterTrue", "True |t| After Pion Selection", 1000, 0, 1.0);
TH1D *hTAfterReco = new TH1D("hTAfterReco", "Reco |t| After Pion Selection", 1000, 0, 1.0);

TH1D *hMuonCandidateAfterLMomentumReco = new TH1D("hMuonCandidateAfterLMomentumReco", "The Muon Candidate's Reco Length Based Momentum After Pion Selection", 1000, 0, 5);
TH1D *hPionCandidateAfterLMomentumReco = new TH1D("hPionCandidateAfterLMomentumReco", "The Pion Candidate's Reco Length Based Momentum After Pion Selection", 1000, 0, 5);

TH1D *hMuonCandidateAfterMomentumDelta = new TH1D("hMuonCandidateAfterMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco MCS) After Pion Selection", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterMomentumDelta = new TH1D("hPionCandidateAfterMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco MCS) After Pion Selection", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfterLMomentumDelta = new TH1D("hMuonCandidateAfterLMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Range) After Pion Selection", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterLMomentumDelta = new TH1D("hPionCandidateAfterLMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Range) After Pion Selection", 1000, -2.5, 2.5);

TH1D *hTrueConeAngleAfter2 = new TH1D("hTrueConeAngleAfter2", "The Cone Angle from MC Truth Information After 2 Tracks", 180, 0, 180);
TH1D *hRecoConeAngleAfter2 = new TH1D("hRecoConeAngleAfter2", "The Cone Angle from Reconstructed Information After 2 Tracks", 180, 0, 180);

TH1D *hTrueOpeningAngleAfter2 = new TH1D("hTrueOpeningAngleAfter2", "The Opening Angle from MC Truth Information After 2 Tracks", 180, 0, 180);
TH1D *hRecoOpeningAngleAfter2 = new TH1D("hRecoOpeningAngleAfter2", "The Opening Angle from Reconstructed Information After 2 Tracks", 180, 0, 180);

TH1D *hTrueMuonOpeningAngleAfter2 = new TH1D("hTrueMuonOpeningAngleAfter2", "The Muon Candidate's Opening Angle from MC Truth Information After 2 Tracks", 180, 0, 180);
TH1D *hRecoMuonOpeningAngleAfter2 = new TH1D("hRecoMuonOpeningAngleAfter2", "The Muon Candidate's Opening Angle from Reconstructed Information After 2 Tracks", 180, 0, 180);

TH1D *hTruePionOpeningAngleAfter2 = new TH1D("hTruePionOpeningAngleAfter2", "The Pion Candidate's Opening Angle from MC Truth Information After 2 Tracks", 180, 0, 180);
TH1D *hRecoPionOpeningAngleAfter2 = new TH1D("hRecoPionOpeningAngleAfter2", "The Pion Candidate's Opening Angle from Reconstructed Information After 2 Tracks", 180, 0, 180);

TH1D *hMuonCandidateAfter2MomentumTrue = new TH1D("hMuonCandidateAfter2MomentumTrue", "The Muon Candidate's True Momentum After 2 Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfter2MomentumTrue = new TH1D("hPionCandidateAfter2MomentumTrue", "The Pion Candidate's True Momentum After 2 Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfter2MomentumReco = new TH1D("hMuonCandidateAfter2MomentumReco", "The Muon Candidate's Reco Momentum After 2 Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfter2MomentumReco = new TH1D("hPionCandidateAfter2MomentumReco", "The Pion Candidate's Reco Momentum After 2 Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfter2LMomentumReco = new TH1D("hMuonCandidateAfter2LMomentumReco", "The Muon Candidate's Reco Length Based Momentum After 2 Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfter2LMomentumReco = new TH1D("hPionCandidateAfter2LMomentumReco", "The Pion Candidate's Reco Length Based Momentum After 2 Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfter2MomentumDelta = new TH1D("hMuonCandidateAfter2MomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco MCS) After 2 Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfter2MomentumDelta = new TH1D("hPionCandidateAfter2MomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco MCS) After 2 Tracks", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfter2LMomentumDelta = new TH1D("hMuonCandidateAfter2LMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Range) After 2 Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfter2LMomentumDelta = new TH1D("hPionCandidateAfter2LMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Range) After 2 Tracks", 1000, -2.5, 2.5);

TH1D *hTAfter2True = new TH1D("hTAfter2True", "True |t| After 2 Tracks", 1000, 0, 1.0);
TH1D *hTAfter2Reco = new TH1D("hTAfter2Reco", "Reco |t| After 2 Tracks", 1000, 0, 1.0);

TH1D *hTAfterDelta = new TH1D("hTAfterDelta", "Delta |t| (True - Reco) After Pion Selection", 1000, -0.5, 0.5);
TH1D *hTAfter2Delta = new TH1D("hTAfter2Delta", "Delta |t| (True - Reco) After 2 Tracks", 1000, -0.5, 0.5);

TH1D *hMuonCandidateAfterContainedMomentumTrue = new TH1D("hMuonCandidateAfterContainedMomentumTrue", "The Muon Candidate's True Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterContainedMomentumTrue = new TH1D("hPionCandidateAfterContainedMomentumTrue", "The Pion Candidate's True Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterContainedMomentumReco = new TH1D("hMuonCandidateAfterContainedMomentumReco", "The Muon Candidate's Reco Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterContainedMomentumReco = new TH1D("hPionCandidateAfterContainedMomentumReco", "The Pion Candidate's Reco Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterContainedLMomentumReco = new TH1D("hMuonCandidateAfterContainedLMomentumReco", "The Muon Candidate's Reco Length Based Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterContainedLMomentumReco = new TH1D("hPionCandidateAfterContainedLMomentumReco", "The Pion Candidate's Reco Length Based Momentum After Pion Selection of Contained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterContainedMomentumDelta = new TH1D("hMuonCandidateAfterContainedMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco MCS) After Pion Selection of Contained Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterContainedMomentumDelta = new TH1D("hPionCandidateAfterContainedMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco MCS) After Pion Selection of Contained Tracks", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfterContainedLMomentumDelta = new TH1D("hMuonCandidateAfterContainedLMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Range) After Pion Selection of Contained Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterContainedLMomentumDelta = new TH1D("hPionCandidateAfterContainedLMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Range) After Pion Selection of Contained Tracks", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfterUnContainedMomentumTrue = new TH1D("hMuonCandidateAfterUnContainedMomentumTrue", "The Muon Candidate's True Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterUnContainedMomentumTrue = new TH1D("hPionCandidateAfterUnContainedMomentumTrue", "The Pion Candidate's True Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterUnContainedMomentumReco = new TH1D("hMuonCandidateAfterUnContainedMomentumReco", "The Muon Candidate's Reco Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterUnContainedMomentumReco = new TH1D("hPionCandidateAfterUnContainedMomentumReco", "The Pion Candidate's Reco Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterUnContainedLMomentumReco = new TH1D("hMuonCandidateAfterUnContainedLMomentumReco", "The Muon Candidate's Reco Length Based Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);
TH1D *hPionCandidateAfterUnContainedLMomentumReco = new TH1D("hPionCandidateAfterUnContainedLMomentumReco", "The Pion Candidate's Reco Length Based Momentum After Pion Selection of UnContained Tracks", 1000, 0, 5);

TH1D *hMuonCandidateAfterUnContainedMomentumDelta = new TH1D("hMuonCandidateAfterUnContainedMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco MCS) After Pion Selection of UnContained Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterUnContainedMomentumDelta = new TH1D("hPionCandidateAfterUnContainedMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco MCS) After Pion Selection of UnContained Tracks", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfterUnContainedLMomentumDelta = new TH1D("hMuonCandidateAfterUnContainedLMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Range) After Pion Selection of UnContained Tracks", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterUnContainedLMomentumDelta = new TH1D("hPionCandidateAfterUnContainedLMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Range) After Pion Selection of UnContained Tracks", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfterComboMomentumReco = new TH1D("hMuonCandidateAfterComboMomentumReco", "The Muon Candidate's Reco Momentum After Pion Selection Using Combination", 1000, 0, 5);
TH1D *hPionCandidateAfterComboMomentumReco = new TH1D("hPionCandidateAfterComboMomentumReco", "The Pion Candidate's Reco Momentum After Pion Selection Using Combination", 1000, 0, 5);

TH1D *hMuonCandidateAfterComboMomentumDelta = new TH1D("hMuonCandidateAfterComboMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Combo) After Pion Selection Using Combination", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfterComboMomentumDelta = new TH1D("hPionCandidateAfterComboMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Combo) After Pion Selection Using Combination", 1000, -2.5, 2.5);

TH1D *hMuonCandidateAfter2ComboMomentumReco = new TH1D("hMuonCandidateAfter2ComboMomentumReco", "The Muon Candidate's Reco Momentum After 2 Tracks Using Combination", 1000, 0, 5);
TH1D *hPionCandidateAfter2ComboMomentumReco = new TH1D("hPionCandidateAfter2ComboMomentumReco", "The Pion Candidate's Reco Momentum After 2 Tracks Using Combination", 1000, 0, 5);

TH1D *hMuonCandidateAfter2ComboMomentumDelta = new TH1D("hMuonCandidateAfter2ComboMomentumDelta", "The Muon Candidate's Delta Momentum (True - Reco Combo) After 2 Tracks Using Combination", 1000, -2.5, 2.5);
TH1D *hPionCandidateAfter2ComboMomentumDelta = new TH1D("hPionCandidateAfter2ComboMomentumDelta", "The Pion Candidate's Delta Momentum (True - Reco Combo) After 2 Tracks Using Combination", 1000, -2.5, 2.5);
// -------------------------------


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


// ------------------------------
// --- Opening Angle Function ---
// ------------------------------
double OpeningAngle(double x1, double y1, double z1, double x2, double y2, double z2)
{
  TVector3 v1(x1, y1, z1);
  TVector3 v2(x2, y2, z2);
  Double_t openingangle = v1.Angle(v2);
  return openingangle;
}
// ------------------------------


// -------------------------------------------
// --- Distance of Closest Approach Method ---
// -------------------------------------------
double DoCAC(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v(x0-x1, y0-y1, z0-z1);
   d = v.Mag();
   return d;
}
// -------------------------------------------


// -----------------------------------
// --- Distance Between Two Points ---
// -----------------------------------
double Distance(double x0, double y0, double z0, double x1, double y1, double z1)
{
   double d = -999;
   TVector3 v01(x0-x1, y0-y1, z0-z1);
   d = v01.Mag();
   return d;
}
// -----------------------------------


// -----------------------------------
// --- Pion Momentum Estimate Andy ---
// -----------------------------------
double PionMomentumEstimate(double r)
{
   double a = 0.25798;
   double b = 0.0024088;
   double c = 0.18828;
   double d = 0.11687;
   double p = a + b*r - c*pow(r,-d);
   return p;
}
// -----------------------------------


void BackgroundDaughters::Loop()
{
   if (fChain == 0) return;


   // ==========================================
   // === Selection Checks for Which Channel ===
   // ==========================================
   int CCOrNC_Check = 0; // 0 for CC and 1 for NC
   int InteractionType_Check = 3; // 0 for QE 1 for Res 2 for DIS and 3 for Coh
   // ==========================================

   int nPassedSelection = 0;



   /*TFile f("CCCohPassedSelection.root", "CREATE");

   TTree Ntuple("Ntuple", "Event Ntuple Information that Passed Selection");

   int EventRunSubrunPassed;

   Ntuple.Branch("EventRunSubrunPassed", &EventRunSubrunPassed, "EventRunSubrunPassed/I");*/


   // ------------------------------------------
   // --- Trying to Load in the Saved Ntuple ---
   // ------------------------------------------
   //TFile *file = TFile::Open("EventNtuple.root");
   //TFile *file = TFile::Open("CCInclusive.root");
   //TFile *file = TFile::Open("CCQEEventNtuple.root");
   //TFile *file = TFile::Open("CCResEventNtuple.root");
   //TFile *file = TFile::Open("OtherEventNtuple.root");
   TFile *file = TFile::Open("AllEventNtuple.root");
   TTree *t = (TTree*)file->Get("EventNtuple");

   int Event, Run, Subrun, CC_Selected, CCNC, InteractionType, Pandora_NuPDG, Vtx_Contained, Mc_Vtx_Contained, nTracksInBubble5, nTracksInBubble, nTracksInBubble15, nTracksInBubbleCosmic;
   float Nu_Flash_Chi2, Obvious_Cosmic_Chi2, NuEnergy, NuPx, NuPy, NuPz, NuVx, NuVy, NuVz, Topological_Score, DoCA, DoCACosmic, ConeAngleCosmic, ConeAngleCosmicBoth, Vtx_Activity, Vtx_Activity_Tracks, Vtx_Activity_Cosmic;
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
   t->SetBranchAddress("NuVx", &NuVx);
   t->SetBranchAddress("NuVy", &NuVy);
   t->SetBranchAddress("NuVz", &NuVz);
   t->SetBranchAddress("CC_Selected", &CC_Selected);
   t->SetBranchAddress("CCNC", &CCNC);
   t->SetBranchAddress("InteractionType", &InteractionType);
   t->SetBranchAddress("Topological_Score", &Topological_Score);
   t->SetBranchAddress("Pandora_NuPDG", &Pandora_NuPDG);
   t->SetBranchAddress("Vtx_Contained", &Vtx_Contained);
   t->SetBranchAddress("Mc_Vtx_Contained", &Mc_Vtx_Contained);
   t->SetBranchAddress("DoCA", &DoCA);
   t->SetBranchAddress("DoCACosmic", &DoCACosmic);
   t->SetBranchAddress("ConeAngleCosmic", &ConeAngleCosmic);
   t->SetBranchAddress("ConeAngleCosmicBoth", &ConeAngleCosmicBoth);
   t->SetBranchAddress("Vtx_Activity", &Vtx_Activity);
   t->SetBranchAddress("Vtx_Activity_Tracks", &Vtx_Activity_Tracks);
   t->SetBranchAddress("Vtx_Activity_Cosmic", &Vtx_Activity_Cosmic);
   t->SetBranchAddress("nTracksInBubble5", &nTracksInBubble5);
   t->SetBranchAddress("nTracksInBubble", &nTracksInBubble);
   t->SetBranchAddress("nTracksInBubble15", &nTracksInBubble15);
   t->SetBranchAddress("nTracksInBubbleCosmic", &nTracksInBubbleCosmic);

   Int_t nevents = t->GetEntries();
   std::cout<<"nevents from matched = "<<nevents<<std::endl;
   // ------------------------------------------

   //Int_t NEvents = 10000;

   //double Muons [NEvents][12];
   //double Pions [NEvents][12];
   //double T [NEvents];
   //double Neutrinos [NEvents][9];
   double pandora_vtx [nevents][3];
   int pandora_pdg = 0;
   int vtx_contained = 0;
   int mc_vtx_contained = 0;
   float t1 = 0;
   float t2 = 0;
   float t3 = 0;
   float t_MC = 0;

   int EVT = 0;
   int RUN = 0;
   int SUB = 0;

   bool cut1 = false; // Change back to false eventually!
   bool cut2 = false;
   bool cut3 = false;
   bool cut4 = false; // Change back to false eventually!
   bool cut5 = false;
   bool cut6 = false;
   bool cut7 = false;
   bool PassedEvent = false;
   bool PassedEvent2 = false;
   int nPassedEvent = 0;
   int AmountPassed = 0;

   bool cut8 = false;
   bool cut9 = false; // Change back to false eventually!
   bool cut10 = false;
   bool cut11 = false;
   bool cut12 = false;
   bool cutFlashRatio = false;
   bool PassedAllCuts = false;
   bool PassedAllCuts2 = false;

   // ---------------------------------------------
   // --- The Cut Values Used in Muon Candidacy ---
   // ---------------------------------------------
   double cut1Value = 0.85;
   double cut2Value = 4; // This is normally set at 4cm, but you've changed it so MAKE SURE TO CHANGE IT BACK!!
   int cut3Value = 2;
   double cut4Value = 20;
   double cut5Value = 60;
   double cut6Value = 30;
   double cut7Value = 7;
   double cutFlashRatioValue = 5;
   // ---------------------------------------------

   // ------------------------------------------------
   // --- The Cut Values Used in Further Selection ---
   // ------------------------------------------------
   int cut21Value = 14;
   // The cut 2 value has to do with the starting vertex of the daughter candidates
   // The cut 3 value has to do with the neutrino vertex being within the fiducial volume
   double cut241Value = 10; // The cut 4 has an or statement so it requires two values
   double cut242Value = 0.25; // The cut 4 has an or statement so it requires two values
   double cut25Value = 0.06;
   // ------------------------------------------------

   // --------------------------------------------
   // --- The Cone Angle Calculation Variables ---
   // --------------------------------------------
   double CAValues [6];

   CAValues[0] = 100;
   CAValues[1] = 100;
   CAValues[2] = 100;
   CAValues[3] = 100;
   CAValues[4] = 100;
   CAValues[5] = 100;

   double TrueCA = -99;
   double RecoCA = -99;

   double ConeAngleCutValue = 20; //was at 40
   // --------------------------------------------

   // -----------------------------------------------
   // --- The Opening Angle Calculation Variables ---
   // -----------------------------------------------
   double OAValues [6];

   OAValues[0] = 100;
   OAValues[1] = 100;
   OAValues[2] = 100;
   OAValues[3] = 100;
   OAValues[4] = 100;
   OAValues[5] = 100;

   double TrueOA = -99;
   double RecoOA = -99;
   // -----------------------------------------------

   // --------------------------------------
   // --- The DoCA Calculation Variables ---
   // --------------------------------------
   double DoCAValues [6];

   DoCAValues[0] = 0;
   DoCAValues[1] = 0;
   DoCAValues[2] = 0;
   DoCAValues[3] = 0;
   DoCAValues[4] = 0;
   DoCAValues[5] = 0;

   double TrueDoCA = -999;
   double RecoDoCA = -999;

   double theDoCA = -999;

   double DoCACutValue = 7; //was at 10
   // --------------------------------------

   // -------------------------------
   // --- Vertex Activity Metrics ---
   // -------------------------------
   double VACut = 10;
   double VAReco0 = 0;
   double VAReco1 = 0;
   double VAReco2 = 0;
   double VARecoAll = 0;

   double theVA = 0;
   
   double VACutValue = 7500; //was at 8000
   // -------------------------------

   // ----------------------------
   // --- Pion Candidates Cuts ---
   // ----------------------------
   double MuonChi2CutValue = 20;
   double ProtonChi2CutValue = 50;
   // ----------------------------

   // --------------------------------------------
   // --- Values for Memory in Selection Stage ---
   // --------------------------------------------
   int CurrentCandidatePDG = 0;
   double CurrentCandidateMuonChi2 = -99;
   double CurrentCandidateProtonChi2 = -99;
   double CurrentCandidateTrueLength = -99;
   double CurrentCandidateLength = -99;
   double CurrentCandidateTOA = -99;
   double CurrentCandidateROA = -99;
   double CurrentCandidateTM = -99;
   double CurrentCandidateRM = -99;
   double CurrentCandidateRLM = -99;
   double CurrentCandidateRMCombo = -99;
   double CurrentCandidateE = -99;
   double CurrentCandidatePx = -99;
   double CurrentCandidatePy = -99;
   double CurrentCandidatePz = -99;
   double CurrentCandidateContained = 0;
   double CurrentCandidateDirX = -99;
   double CurrentCandidateDirY = -99;
   double CurrentCandidateDirZ = -99;
   double PionCandidateMuonChi2 = -99;
   double PionCandidateProtonChi2 = -99;
   double PionCandidateTrueLength = -99;
   double PionCandidateLength = -99;
   double PionCandidateTOA = -99;
   double PionCandidateROA = -99;
   double PionCandidateTM = -99;
   double PionCandidateRM = -99;
   double PionCandidateRLM = -99;
   double PionCandidateRMCombo = -99;
   double PionCandidateE = -99;
   double PionCandidatePx = -99;
   double PionCandidatePy = -99;
   double PionCandidatePz = -99;
   double PionCandidateContained = 0;

   double MuonMass = 0.1057; //mass in GeV
   double PionMass = 0.13957; //mass in GeV
   // --------------------------------------------


   int EventRunSubrun = 0;

   Long64_t nentries = fChain->GetEntriesFast();

   //Long64_t Nentries = nentries; // <-- Comment this out to run over the number below.
   Long64_t Nentries = 120000; // <-- Comment this out to run over entire file!

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<Nentries; jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;


      int ParticleContained = 0; // boolean for particle containment initialized as false
      int ParticleContainedStart = 0; // boolean for particle start point initialized as false


      if (jentry%100 == 0) std::cout<<"Event = "<<jentry<<std::endl;


      // ----------------------------------|
      // --- Check Particle Containment ---|
      // ----------------------------------|
      double EndX = track_endx;
      double EndY = track_endy;
      //double EndZ = track_endz;
      double EndZ = vz + track_length*track_dirz;
      double StartX = vx;
      double StartY = vy;
      double StartZ = vz;

      if (EndX >= 10 && EndX <= 230 && EndY >= -105 && EndY <= 105 && EndZ >= 10 && EndZ <= 990) ParticleContained = 1; // <-- Containment conditions
      //if (StartX >= 10 && StartX <= 230 && StartY >= -105 && StartY <= 105 && StartZ >= 10 && StartZ <= 990) ParticleContainedStart = 1; // <-- Containment conditions
      if (start_contained) ParticleContainedStart = 1;
      // ----------------------------------|


      // ------------------------------------------------
      // --- Trying to Load and Match to Saved Ntuple ---
      // ------------------------------------------------
      bool Matched = false;
      bool ccselected = false;
      float nuFlash = -999;
      float obviousCosmic = -999;
      float flashRatio = 999;
      float nuenergy = -999;
      float top_score = -999;
      float vtx_activity_tracks = 0;
      float vtx_activity_cosmics = 0;
      float ntrksinbubble5 = 0;
      float ntrksinbubble = 0;
      float ntrksinbubble15 = 0;
      float ntrksinbubbleCosmic = 0;
      float theDoCACosmic = 9999;
      float CACosmic = 9999;
      float CACosmicBoth = 9999;
      double VertexX = -9999;
      double VertexY = -9999;
      double VertexZ = -9999;
      double distanceToNuVtx = 99999;

      for (Int_t i = 0; i < nevents; i++) {
         t->GetEntry(i);

	 if (Event == event && Run == run && Subrun == subrun && (InteractionType != InteractionType_Check || (InteractionType == InteractionType_Check && CCNC != CCOrNC_Check)) && is_track) {
	 //if (Event == event && Run == run && Subrun == subrun && InteractionType == InteractionType_Check && CCNC == CCOrNC_Check && is_track) {
	 //if (Event == event && Run == run && Subrun == subrun && CCNC == CCOrNC_Check && is_track) {
            Matched = true;
	    //if (jentry%10 == 0) std::cout<<"We Matched!"<<std::endl; // This is to see if we are actually making it to this point in the Matched condition!
	    if (CC_Selected == 1) ccselected = true;
	    CountMatching++;
	    nuFlash = Nu_Flash_Chi2;
	    obviousCosmic = Obvious_Cosmic_Chi2;
	    flashRatio = Nu_Flash_Chi2/Obvious_Cosmic_Chi2;
	    nuenergy = NuEnergy;
	    top_score = Topological_Score;
	    pandora_vtx[i][0] = NuVx;
	    pandora_vtx[i][1] = NuVy;
	    pandora_vtx[i][2] = NuVz;
	    VertexX = NuVx;
	    VertexY = NuVy;
	    VertexZ = NuVz;
	    pandora_pdg = Pandora_NuPDG;
	    vtx_contained = Vtx_Contained;
	    mc_vtx_contained = Mc_Vtx_Contained;
	    theDoCA = DoCA;
	    theVA = Vtx_Activity;
            vtx_activity_tracks = Vtx_Activity_Tracks;
            vtx_activity_cosmics = Vtx_Activity_Cosmic;
            ntrksinbubble5 = nTracksInBubble5;
            ntrksinbubble = nTracksInBubble;
            ntrksinbubble15 = nTracksInBubble15;
            ntrksinbubbleCosmic = nTracksInBubbleCosmic;
	    theDoCACosmic = DoCACosmic;
	    CACosmic = ConeAngleCosmic;
	    CACosmicBoth = ConeAngleCosmicBoth;
      
	    /*if (mc_pdg == 13 && generation == 2 && mc_neutrino == 1) { // If the track is a muon track, save four-momentum information
               Muons[i][0] = mc_energy;
	       Muons[i][1] = mc_px;
	       Muons[i][2] = mc_py;
	       Muons[i][3] = mc_pz;
	       Muons[i][4] = event;
	       Muons[i][5] = run;
	       Muons[i][6] = subrun;
	       Muons[i][7] = CC_Selected;
	       Muons[i][8] = ParticleContained;
	       Muons[i][9] = track_dirx;
	       Muons[i][10] = track_diry;
	       Muons[i][11] = track_dirz;
	       Neutrinos[i][0] = NuEnergy;
	       Neutrinos[i][1] = NuPx;
	       Neutrinos[i][2] = NuPy;
	       Neutrinos[i][3] = NuPz;
	       Neutrinos[i][4] = event;
	       Neutrinos[i][5] = run;
	       Neutrinos[i][6] = subrun;
	       Neutrinos[i][7] = CC_Selected;
	       Neutrinos[i][8] = Mc_Vtx_Contained;
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
	       Pions[i][9] = track_dirx;
	       Pions[i][10] = track_diry;
	       Pions[i][11] = track_dirz;
	    }*/

	    break;
	 }// <-- Close IF Statement for Matching Condition

      }// <-- Close For Loop to find the Matched event
      // ------------------------------------------------


      if (mc_vtx_contained == 0) continue;


      if (mc_vtx_contained == 1) {
         for (int i = 0; i < ntrkhits; i++) {
            double distance = Distance(mc_vx_sce, mc_vy_sce, mc_vz_sce, track_sps_pos[i][0], track_sps_pos[i][1], track_sps_pos[i][2]);
	    if (distance <= VACut) {
	       VARecoAll = VARecoAll + track_hit_charge[i];
	       if (track_hit_plane[i] == 0) VAReco0 = VAReco0 + track_hit_charge[i];
	       if (track_hit_plane[i] == 1) VAReco1 = VAReco1 + track_hit_charge[i];
	       if (track_hit_plane[i] == 2) VAReco2 = VAReco2 + track_hit_charge[i];
	    }
         }
      }


      if (Matched && mc_vtx_contained == 1) {

         distanceToNuVtx = Distance(StartX, StartY, StartZ, VertexX, VertexY, VertexZ);

         t1 = t1 + mc_energy - mc_pz;
	 t2 = t2 + mc_px;
	 t3 = t3 + mc_py;

         //if ((EVT != event && RUN != run && SUB != subrun) || (jentry == nentries - 1)) { // Original attempt at filling the histograms correctly
         if ((EventRunSubrun != event + run + subrun) || (jentry == nentries - 1)) { // New attempt at figuring out cut by cut efficiencies

	    t_MC = (t1*t1) + abs((t2*t2) + (t3*t3));

            //if (jentry%10 == 0) std::cout<<"|t| = "<<t_MC<<std::endl;

	    t1 = 0;
	    t2 = 0;
	    t3 = 0;

            hMatchedNuEnergy->Fill(nuenergy);
            hCutByCutMuonCandidate->Fill(0);
            hCutByCutMuonCandidate2->Fill(0);
	    hCutByCutMuonCandidateDivide->Fill(0); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(1); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(2); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(3); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(4); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(5); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(6); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(7); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(8); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(9); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(10); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(11); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(12); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(13); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(14); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(15); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(16); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(17); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide->Fill(18); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(0); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(1); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(2); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(3); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(4); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(5); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(6); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(7); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(8); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(9); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(10); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(11); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(12); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(13); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(14); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(15); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(16); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(17); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(18); // Making the histogram to get the efficiency
	    hCutByCutMuonCandidateDivide2->Fill(19); // Making the histogram to get the efficiency
	    hFurtherEventSelectionDivide->Fill(0); // Making the histogram to get the efficiency for the Further Selection
	    hFurtherEventSelectionDivide->Fill(1); // Making the histogram to get the efficiency for the Further Selection
	    hFurtherEventSelectionDivide->Fill(2); // Making the histogram to get the efficiency for the Further Selection
	    hFurtherEventSelectionDivide->Fill(3); // Making the histogram to get the efficiency for the Further Selection
	    hFurtherEventSelectionDivide->Fill(4); // Making the histogram to get the efficiency for the Further Selection
            hCutByCutMuonCandidate->Fill(1);
	    if(cut2) {
	       hCutByCutMuonCandidate->Fill(2);
	       if(cut3) {
	          hCutByCutMuonCandidate->Fill(3);
		  hCutByCutMuonCandidate->Fill(4);
	          if (cut5) {
		     hCutByCutMuonCandidate->Fill(5);
	             if (cut6) {
		        hCutByCutMuonCandidate->Fill(6);
		     }
		  }
	       }
	    }
	    if (cut1) {
               hCutByCutMuonCandidate2->Fill(1);
	       if(cut2) {
	          hCutByCutMuonCandidate2->Fill(2);
		  if(cut3) {
	             hCutByCutMuonCandidate2->Fill(3);
		     if(cut4) {
		        hCutByCutMuonCandidate2->Fill(4);
			if (cut5) {
		           hCutByCutMuonCandidate2->Fill(5);
			   if (cut6) {
		              hCutByCutMuonCandidate2->Fill(6);
		           }
		        }
		     }
		  }
	       }
	    }
	    if (PassedEvent2) {
	       hCutByCutMuonCandidate2->Fill(7);
	       if (cut8) {
		  hCutByCutMuonCandidate2->Fill(8);
		  if (cut9) {
		     hCutByCutMuonCandidate2->Fill(9);
		     if (cut10) {
			hCutByCutMuonCandidate2->Fill(10);
			if (cut11) {
			   hCutByCutMuonCandidate2->Fill(11);
			   if (cut12) {
			      hCutByCutMuonCandidate2->Fill(12);
		           }
		        }
		     }
	          }
	       }
	       if (PassedAllCuts2) {
		  hCutByCutMuonCandidate2->Fill(13);
		  hPassedNuEnergy->Fill(nuenergy);
		  if (ntrksinbubble >= 2) { 
		     hCutByCutMuonCandidate2->Fill(14);
		     if (ntrksinbubble == 2) {
			hCutByCutMuonCandidate2->Fill(15);
                        hTrueConeAngleAfter2->Fill(TrueCA);
                        hRecoConeAngleAfter2->Fill(RecoCA);
                        hTrueOpeningAngleAfter2->Fill(TrueOA);
                        hRecoOpeningAngleAfter2->Fill(RecoOA);
			hTrueMuonOpeningAngleAfter2->Fill(CurrentCandidateTOA);
		        hRecoMuonOpeningAngleAfter2->Fill(CurrentCandidateROA);
		        hTruePionOpeningAngleAfter2->Fill(PionCandidateTOA);
		        hRecoPionOpeningAngleAfter2->Fill(PionCandidateROA);
			hMuonCandidateAfter2MomentumTrue->Fill(CurrentCandidateTM);
			hMuonCandidateAfter2MomentumReco->Fill(CurrentCandidateRM);
			hPionCandidateAfter2MomentumTrue->Fill(PionCandidateTM);
			hPionCandidateAfter2MomentumReco->Fill(PionCandidateRM);
			hMuonCandidateAfter2LMomentumReco->Fill(CurrentCandidateRLM);
			hPionCandidateAfter2LMomentumReco->Fill(PionCandidateRLM);
			hMuonCandidateAfter2MomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRM);
			hPionCandidateAfter2MomentumDelta->Fill(PionCandidateTM - PionCandidateRM);
			hMuonCandidateAfter2LMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRLM);
			hPionCandidateAfter2LMomentumDelta->Fill(PionCandidateTM - PionCandidateRLM);
			hTAfter2True->Fill(t_MC);
			hTAfter2Reco->Fill(pow(PionCandidateE+CurrentCandidateE-PionCandidatePz-CurrentCandidatePz,2) + pow((PionCandidatePx+CurrentCandidatePx),2) + pow((PionCandidatePy+CurrentCandidatePy),2));
			hTAfter2Delta->Fill(t_MC - pow(PionCandidateE+CurrentCandidateE-PionCandidatePz-CurrentCandidatePz,2) + pow((PionCandidatePx+CurrentCandidatePx),2) + pow((PionCandidatePy+CurrentCandidatePy),2));
		        hMuonCandidateAfter2ComboMomentumReco->Fill(CurrentCandidateRMCombo);
			hPionCandidateAfter2ComboMomentumReco->Fill(PionCandidateRMCombo);
			hMuonCandidateAfter2ComboMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRMCombo);
			hPionCandidateAfter2ComboMomentumDelta->Fill(PionCandidateTM - PionCandidateRMCombo);
			if (RecoCA <= ConeAngleCutValue && RecoCA != -99) {
			   hCutByCutMuonCandidate2->Fill(16);
                           if (theDoCA <= DoCACutValue && theDoCA != -999) {
                              hCutByCutMuonCandidate2->Fill(17);
                              if (theVA <= VACutValue) {
                                 hCutByCutMuonCandidate2->Fill(18);
				 //EventRunSubrunPassed = EventRunSubrun;
				 //Ntuple.Fill();
				 hAfterNuEnergy2->Fill(nuenergy);
                                 hMuonCandidateTrueTrackLengthAfter->Fill(CurrentCandidateTrueLength);
                                 hMuonCandidateRecoTrackLengthAfter->Fill(CurrentCandidateLength);
		                 hMuonCandidateMuonChi2After->Fill(CurrentCandidateMuonChi2);
		                 hMuonCandidateProtonChi2After->Fill(CurrentCandidateProtonChi2);
		                 hMuonCandidateTracksMuonChi2VsProtonChi2After->Fill(CurrentCandidateProtonChi2, CurrentCandidateMuonChi2);
		                 hPionCandidateTrueTrackLengthAfter->Fill(PionCandidateTrueLength);
                                 hPionCandidateRecoTrackLengthAfter->Fill(PionCandidateLength);
		                 hPionCandidateMuonChi2After->Fill(PionCandidateMuonChi2);
		                 hPionCandidateProtonChi2After->Fill(PionCandidateProtonChi2);
		                 hPionCandidateTracksMuonChi2VsProtonChi2After->Fill(PionCandidateProtonChi2, PionCandidateMuonChi2);
				 hMuonCandidateDeltaLengthAfter->Fill(CurrentCandidateTrueLength - CurrentCandidateLength);
				 hPionCandidateDeltaLengthAfter->Fill(PionCandidateTrueLength - PionCandidateLength);
				 hMuonCandidateRecoLengthVsMuonChi2->Fill(CurrentCandidateMuonChi2, CurrentCandidateLength);
				 hMuonCandidateRecoLengthVsProtonChi2->Fill(CurrentCandidateProtonChi2, CurrentCandidateLength);
				 hPionCandidateRecoLengthVsMuonChi2->Fill(PionCandidateMuonChi2, PionCandidateLength);
				 hPionCandidateRecoLengthVsProtonChi2->Fill(PionCandidateProtonChi2, PionCandidateLength);
				 if (PionCandidateMuonChi2 >= 0 && PionCandidateMuonChi2 < MuonChi2CutValue && (PionCandidateProtonChi2 > ProtonChi2CutValue || PionCandidateProtonChi2 == 0)) {
                                    hCutByCutMuonCandidate2->Fill(19);
                                    hMuonCandidateTrueTrackLengthAfter2->Fill(CurrentCandidateTrueLength);
                                    hMuonCandidateRecoTrackLengthAfter2->Fill(CurrentCandidateLength);
		                    hPionCandidateTrueTrackLengthAfter2->Fill(PionCandidateTrueLength);
                                    hPionCandidateRecoTrackLengthAfter2->Fill(PionCandidateLength);
				    hMuonCandidateDeltaLengthAfter2->Fill(CurrentCandidateTrueLength - CurrentCandidateLength);
				    hPionCandidateDeltaLengthAfter2->Fill(PionCandidateTrueLength - PionCandidateLength);
                                    hTrueConeAngleAfter->Fill(TrueCA);
                                    hRecoConeAngleAfter->Fill(RecoCA);
                                    hTrueOpeningAngleAfter->Fill(TrueOA);
                                    hRecoOpeningAngleAfter->Fill(RecoOA);
				    hTrueMuonOpeningAngleAfter->Fill(CurrentCandidateTOA);
				    hRecoMuonOpeningAngleAfter->Fill(CurrentCandidateROA);
				    hTruePionOpeningAngleAfter->Fill(PionCandidateTOA);
				    hRecoPionOpeningAngleAfter->Fill(PionCandidateROA);
				    hMuonCandidateAfterMomentumTrue->Fill(CurrentCandidateTM);
				    hMuonCandidateAfterMomentumReco->Fill(CurrentCandidateRM);
				    hPionCandidateAfterMomentumTrue->Fill(PionCandidateTM);
				    hPionCandidateAfterMomentumReco->Fill(PionCandidateRM);
				    hMuonCandidateAfterLMomentumReco->Fill(CurrentCandidateRLM);
				    hPionCandidateAfterLMomentumReco->Fill(PionCandidateRLM);
				    hMuonCandidateAfterMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRM);
				    hPionCandidateAfterMomentumDelta->Fill(PionCandidateTM - PionCandidateRM);
				    hMuonCandidateAfterLMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRLM);
				    hPionCandidateAfterLMomentumDelta->Fill(PionCandidateTM - PionCandidateRLM);
			            hTAfterTrue->Fill(t_MC);
			            hTAfterReco->Fill(pow(PionCandidateE+CurrentCandidateE-PionCandidatePz-CurrentCandidatePz,2) + pow((PionCandidatePx+CurrentCandidatePx),2) + pow((PionCandidatePy+CurrentCandidatePy),2));
			            hTAfterDelta->Fill(t_MC - pow(PionCandidateE+CurrentCandidateE-PionCandidatePz-CurrentCandidatePz,2) + pow((PionCandidatePx+CurrentCandidatePx),2) + pow((PionCandidatePy+CurrentCandidatePy),2));
				    if (CurrentCandidateContained == 1) {
				       hMuonCandidateAfterContainedMomentumTrue->Fill(CurrentCandidateTM);
				       hMuonCandidateAfterContainedMomentumReco->Fill(CurrentCandidateRM);
				       hMuonCandidateAfterContainedLMomentumReco->Fill(CurrentCandidateRLM);
				       hMuonCandidateAfterContainedMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRM);
				       hMuonCandidateAfterContainedLMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRLM);
				    }
				    if (CurrentCandidateContained == 0) {
				       hMuonCandidateAfterUnContainedMomentumTrue->Fill(CurrentCandidateTM);
				       hMuonCandidateAfterUnContainedMomentumReco->Fill(CurrentCandidateRM);
				       hMuonCandidateAfterUnContainedLMomentumReco->Fill(CurrentCandidateRLM);
				       hMuonCandidateAfterUnContainedMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRM);
				       hMuonCandidateAfterUnContainedLMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRLM);
				    }
				    if (PionCandidateContained == 1) {
				       hPionCandidateAfterContainedMomentumTrue->Fill(PionCandidateTM);
				       hPionCandidateAfterContainedMomentumReco->Fill(PionCandidateRM);
				       hPionCandidateAfterContainedLMomentumReco->Fill(PionCandidateRLM);
				       hPionCandidateAfterContainedMomentumDelta->Fill(PionCandidateTM - PionCandidateRM);
				       hPionCandidateAfterContainedLMomentumDelta->Fill(PionCandidateTM - PionCandidateRLM);
				    }
				    if (PionCandidateContained == 0) {
				       hPionCandidateAfterUnContainedMomentumTrue->Fill(PionCandidateTM);
				       hPionCandidateAfterUnContainedMomentumReco->Fill(PionCandidateRM);
				       hPionCandidateAfterUnContainedLMomentumReco->Fill(PionCandidateRLM);
				       hPionCandidateAfterUnContainedMomentumDelta->Fill(PionCandidateTM - PionCandidateRM);
				       hPionCandidateAfterUnContainedLMomentumDelta->Fill(PionCandidateTM - PionCandidateRLM);
				    }
				    hMuonCandidateAfterComboMomentumReco->Fill(CurrentCandidateRMCombo);
				    hPionCandidateAfterComboMomentumReco->Fill(PionCandidateRMCombo);
				    hMuonCandidateAfterComboMomentumDelta->Fill(CurrentCandidateTM - CurrentCandidateRMCombo);
				    hPionCandidateAfterComboMomentumDelta->Fill(PionCandidateTM - PionCandidateRMCombo);
			         }
                              }
                           }
			}
		     }
		  }
	       }
	    }
	    if (PassedEvent) {
	       nPassedEvent++;
	       hCutByCutMuonCandidate->Fill(7);
	       hNumMuonCandidates->Fill(AmountPassed);
	       //if (AmountPassed == 2) std::cout<<"For 2 Passed Tracks: Event, Run, Subrun = "<<event<<", "<<run<<", "<<subrun<<std::endl;
	       //if (AmountPassed >= 3) std::cout<<"For 3 or More Passed Tracks: Event, Run, Subrun = "<<event<<", "<<run<<", "<<subrun<<std::endl;
	       AmountPassed = 0;
	       if (CurrentCandidatePDG == 13) hPionOrMuonIsCandidate->Fill(0);
	       else if (CurrentCandidatePDG == 211) hPionOrMuonIsCandidate->Fill(1);
	       else if (CurrentCandidatePDG != 0) hPionOrMuonIsCandidate->Fill(2);

	       if (cut8) {
	          hFurtherEventSelection->Fill(0);
		  hCutByCutMuonCandidate->Fill(8);
		  hFurtherEventSelection->Fill(1);
		  hCutByCutMuonCandidate->Fill(9);
		  if (cut10) {
		     hFurtherEventSelection->Fill(2);
                     hCutByCutMuonCandidate->Fill(10);
	             if (cut11) {
			hFurtherEventSelection->Fill(3);
			hCutByCutMuonCandidate->Fill(11);
			if (cut12) {
			   hCutByCutMuonCandidate->Fill(12);
			}
		     }
		  }
	       }
	       if (PassedAllCuts) {
	          hFurtherEventSelection->Fill(4);
		  hCutByCutMuonCandidate->Fill(13);
		  if (ntrksinbubble >= 2) { 
		     hCutByCutMuonCandidate->Fill(14);
		     if (ntrksinbubble == 2) {
			hCutByCutMuonCandidate->Fill(15);
			if (RecoCA <= ConeAngleCutValue && RecoCA != -99) {
			   hCutByCutMuonCandidate->Fill(16);
                           if (theDoCA <= DoCACutValue && theDoCA != -999) {
			      hCutByCutMuonCandidate->Fill(17);
                              if (theVA <= VACutValue) {
			         hCutByCutMuonCandidate->Fill(18);
				 hAfterNuEnergy->Fill(nuenergy);
                              }
                           }
			}
		     }
		  }
		  if (TrueCA != -99 && RecoCA != -99) {
		     hTrueConeAngle->Fill(TrueCA);
		     hRecoConeAngle->Fill(RecoCA);
		     hRecoConeAngleCosmic->Fill(CACosmic);
		     hRecoConeAngleCosmicBoth->Fill(CACosmicBoth);
		     if (TrueOA != -99 && RecoOA != -99) {
		        hTrueOpeningAngle->Fill(TrueOA);
		        hRecoOpeningAngle->Fill(RecoOA);
		        hTrueConeAngleVsOpeningAngle->Fill(TrueOA, TrueCA);
		        hRecoConeAngleVsOpeningAngle->Fill(RecoOA, RecoCA);
		        TrueOA = -99;
		        RecoOA = -99;
		     }
		     TrueCA = -99;
		     RecoCA = -99;
	          }
		  //if (RecoDoCA <= DoCACutValue && RecoDoCA != -999) hCutByCutMuonCandidate->Fill(14);
		  //if (theDoCA <= DoCACutValue && theDoCA != -999) hCutByCutMuonCandidate->Fill(14);
		  if (TrueDoCA != -999 && RecoDoCA != -999) {
		     //if (RecoDoCA > 50) std::cout<<"Event, Run, Subrun = "<<event<<", "<<run<<", "<<subrun<<std::endl;
		     hTrueDoCA->Fill(TrueDoCA);
		     //hRecoDoCA->Fill(RecoDoCA);
		     hRecoDoCA->Fill(theDoCA);
		     hRecoDoCACosmic->Fill(theDoCACosmic);
		     TrueDoCA = -999;
		     RecoDoCA = -999;
                  }
		  hRecoVA0->Fill(VAReco0);
		  hRecoVA1->Fill(VAReco1);
		  //hRecoVA2->Fill(VAReco2);
		  hRecoVA2->Fill(theVA);
                  hRecoVA2Tracks->Fill(vtx_activity_tracks);
                  hRecoVA2Minus->Fill(theVA - vtx_activity_tracks);
                  hRecoVA2Cosmic->Fill(vtx_activity_cosmics);
                  hRecoVA2Chosen->Fill(vtx_activity_tracks - vtx_activity_cosmics);
		  hRecoVAAll->Fill(VARecoAll);
		  VAReco0 = 0;
		  VAReco1 = 0;
		  VAReco2 = 0;
		  VARecoAll = 0;
                  hNTracksInBubble5->Fill(ntrksinbubble5);
                  hNTracksInBubble->Fill(ntrksinbubble);
                  hNTracksInBubble15->Fill(ntrksinbubble15);
                  hNTracksInBubbleCosmic->Fill(ntrksinbubbleCosmic);
		  hT->Fill(t_MC);
		  if (ntrksinbubble5 == 2) hT2_5->Fill(t_MC);
		  if (ntrksinbubble == 2) hT2->Fill(t_MC);
		  if (ntrksinbubble15 == 2) hT2_15->Fill(t_MC);
                  t_MC = 0;
	       }
	    }
	    if (!PassedEvent && jentry != 0) hNumMuonCandidates->Fill(0);
            EVT = event;
	    RUN = run;
	    SUB = subrun;
	    EventRunSubrun = event + run + subrun;
	    cut1 = false; // Change back to false eventually!
	    cut2 = false;
	    cut3 = false;
	    cut4 = false; // Change back to false eventually!
	    cut5 = false;
	    cut6 = false;
	    cut7 = false;
	    PassedEvent = false;
	    PassedEvent2 = false;
	    cut8 = false;
	    cut9 = false; // Change back to false eventually!
	    cut10 = false;
	    cut11 = false;
	    cut12 = false;
	    cutFlashRatio = false;
	    PassedAllCuts = false;
	    PassedAllCuts2 = false;
	    CurrentCandidatePDG = 0;
	    CurrentCandidateMuonChi2 = -99;
	    CurrentCandidateProtonChi2 = -99;
	    CurrentCandidateTrueLength = -99;
	    CurrentCandidateLength = -99;
	    CurrentCandidateTOA = -99;
	    CurrentCandidateROA = -99;
	    CurrentCandidateTM = -99;
	    CurrentCandidateRM = -99;
	    CurrentCandidateRLM = -99;
	    CurrentCandidateRMCombo = -99;
	    CurrentCandidateE = -99;
	    CurrentCandidatePx = -99;
	    CurrentCandidatePy = -99;
	    CurrentCandidatePz = -99;
	    CurrentCandidateContained = 0;
	    CurrentCandidateDirX = -99;
	    CurrentCandidateDirY = -99;
	    CurrentCandidateDirZ = -99;
	    PionCandidateMuonChi2 = -99;
	    PionCandidateProtonChi2 = -99;
	    PionCandidateTrueLength = -99;
	    PionCandidateLength = -99;
	    PionCandidateTOA = -99;
	    PionCandidateROA = -99;
	    PionCandidateTM = -99;
	    PionCandidateRM = -99;
	    PionCandidateRLM = -99;
	    PionCandidateRMCombo = -99;
	    PionCandidateE = -99;
	    PionCandidatePx = -99;
	    PionCandidatePy = -99;
	    PionCandidatePz = -99;
	    PionCandidateContained = 0;

         }

         if (!PassedEvent) {
            if (track_score > cut1Value) cut1 = true;
	    else cut1 = false; // Change back to false eventually!
	    if (vtx_distance < cut2Value) cut2 = true;
	    else cut2 = false;
	    if (generation == cut3Value) cut3 = true;
	    else cut3 = false;
	    if (track_length > cut4Value) cut4 = true;
	    else cut4 = false; // Change back to false eventually!
            if (track_chi2_proton > cut5Value) cut5 = true;
	    else cut5 = false;
	    if (track_chi2_muon < cut6Value) cut6 = true;
	    else cut6 = false;
            if (track_chi2_proton/track_chi2_muon > cut7Value) cut7 = true;	    
	    else cut7 = false;
	    if (pandora_pdg == cut21Value) cut8 = true;
	    else cut8 = false;
	    if (ParticleContainedStart == 1) cut9 = true;
	    else cut9 = false; // Change back to false eventually!
	    if (vtx_contained == 1) cut10 = true;
	    else cut10 = false;
	    if (nuFlash < cut241Value || top_score > cut242Value) cut11 = true;
	    else cut11 = false;
	    if (top_score > cut25Value) cut12 = true;
	    else cut12 = false;
	    if (flashRatio < cutFlashRatioValue) cutFlashRatio = true;
	    else cutFlashRatio = false;
         }

         if (PassedEvent || (track_score > cut1Value && vtx_distance < cut2Value && generation == cut3Value && track_length > cut4Value && track_chi2_proton > cut5Value && track_chi2_muon < cut6Value && track_chi2_proton/track_chi2_muon > cut7Value)) AmountPassed++;

	 if (cut2 && cut3 && cut5 && cut6 && cut7) {
            PassedEvent = true;
	 }
	 else PassedEvent = false;
	 if (cut1 && cut2 && cut3 && cut4 && cut5 && cut6 && cut7) {
            PassedEvent2 = true;
	 }
	 else PassedEvent2 = false;

	 if (cut2 && cut3 && cut5 && cut6 && cut7 && cut8 && cut10 && cut11 && cut12 && cutFlashRatio) PassedAllCuts = true;
	 else PassedAllCuts = false;
	 if (cut1 && cut2 && cut3 && cut4 && cut5 && cut6 && cut7 && cut8 && cut9 && cut10 && cut11 && cut12 && cutFlashRatio) PassedAllCuts2 = true;
	 else PassedAllCuts2 = false;

	 if (PassedAllCuts) {
	    double CAT = ConeAngle(CAValues[0], CAValues[1], CAValues[2], mc_px, mc_py, mc_pz)*180/PI;
	    double CAR = ConeAngle(CAValues[3], CAValues[4], CAValues[5], track_dirx, track_diry, track_dirz)*180/PI;
	    double OAT = OpeningAngle(OAValues[0], OAValues[1], OAValues[2], mc_px, mc_py, mc_pz)*180/PI;
	    double OAR = OpeningAngle(OAValues[3], OAValues[4], OAValues[5], track_dirx, track_diry, track_dirz)*180/PI;
	    double DoCAT = DoCAC(DoCAValues[0], DoCAValues[1], DoCAValues[2], mc_vx_sce, mc_vy_sce, mc_vz_sce);
	    double DoCAR = DoCAC(DoCAValues[3], DoCAValues[4], DoCAValues[5], vx, vy, vz);
	    if ((TrueCA == -99 && RecoCA == -99) || (CAT < TrueCA && CAR < RecoCA)) {
	       TrueCA = CAT;
	       RecoCA = CAR;
	       CAValues[0] = mc_px;
	       CAValues[1] = mc_py;
	       CAValues[2] = mc_pz;
	       CAValues[3] = track_dirx;
	       CAValues[4] = track_diry;
	       CAValues[5] = track_dirz;
	    }
	    if ((TrueOA == -99 && RecoOA == -99) || (OAT < TrueOA && OAR < RecoOA)) {
	       TrueOA = OAT;
	       RecoOA = OAR;
	       OAValues[0] = mc_px;
	       OAValues[1] = mc_py;
	       OAValues[2] = mc_pz;
	       OAValues[3] = track_dirx;
	       OAValues[4] = track_diry;
	       OAValues[5] = track_dirz;
	    }
	    if ((TrueDoCA == -999 && RecoDoCA == -999) || (DoCAT < TrueDoCA && DoCAR < RecoDoCA)) {
	       TrueDoCA = DoCAT;
	       RecoDoCA = DoCAR;
	       DoCAValues[0] = mc_vx_sce;
	       DoCAValues[1] = mc_vy_sce;
	       DoCAValues[2] = mc_vz_sce;
	       DoCAValues[3] = vx;
	       DoCAValues[4] = vy;
	       DoCAValues[5] = vz;
	    }
         }
      }


      //if (generation == 2 && mc_neutrino == 1 && start_contained && Matched) {
      if (/*generation == 2 &&*/ mc_neutrino == 1 && start_contained /*&& ParticleContained == 1*/) {

         //if (Matched) hMatchedNuEnergy->Fill(nuenergy);
         //hMatchedNuEnergy->Fill(nuenergy, 0.5);

         // === Adding In Selection Criteria ===
	 if (Matched && ccselected) {
         //if (track_chi2_proton > 60 && track_chi2_muon < 30 && (track_chi2_proton/track_chi2_muon) > 7 && track_score > 0.8 && vtx_distance < 4 && track_length > 20 && (nuFlash/obviousCosmic) < 5 && nuFlash < 10) {
            nPassedSelection++;
	    //hPassedNuEnergy->Fill(nuenergy);
	    
	    if (distanceToNuVtx < VACut && track_length > CurrentCandidateLength && track_is_muon_candidate) {
	       if (CurrentCandidateLength != -99 && PionCandidateLength == -99) {
		  PionCandidateContained = CurrentCandidateContained;
		  PionCandidateLength = CurrentCandidateLength;
		  PionCandidateTrueLength = CurrentCandidateTrueLength;
		  PionCandidateMuonChi2 = CurrentCandidateMuonChi2;
		  PionCandidateProtonChi2 = CurrentCandidateProtonChi2;
		  PionCandidateTOA = CurrentCandidateTOA;
		  PionCandidateROA = CurrentCandidateROA;
		  PionCandidateTM = CurrentCandidateTM;
		  PionCandidateRM = CurrentCandidateRM;
		  PionCandidateRLM = PionMomentumEstimate(PionCandidateLength);
	          if (PionCandidateContained == 1) PionCandidateRMCombo = PionMomentumEstimate(PionCandidateLength);
	          if (PionCandidateContained == 0) PionCandidateRMCombo = CurrentCandidateRM;
		  PionCandidateE = pow((CurrentCandidateE*CurrentCandidateE) - (CurrentCandidateRMCombo*CurrentCandidateRMCombo) + (CurrentCandidateRM*CurrentCandidateRM) - (MuonMass*MuonMass) + (PionMass*PionMass), 0.5);
		  PionCandidatePx = PionCandidateRMCombo*CurrentCandidateDirX;
		  PionCandidatePy = PionCandidateRMCombo*CurrentCandidateDirY;
		  PionCandidatePz = PionCandidateRMCombo*CurrentCandidateDirZ;
	          }
	       if (CurrentCandidateLength != -99 && CurrentCandidateLength > PionCandidateLength && PionCandidateLength != -99) {
		  PionCandidateContained = CurrentCandidateContained;
		  PionCandidateLength = CurrentCandidateLength;
		  PionCandidateTrueLength = CurrentCandidateTrueLength;
		  PionCandidateMuonChi2 = CurrentCandidateMuonChi2;
		  PionCandidateProtonChi2 = CurrentCandidateProtonChi2;
		  PionCandidateTOA = CurrentCandidateTOA;
		  PionCandidateROA = CurrentCandidateROA;
		  PionCandidateTM = CurrentCandidateTM;
		  PionCandidateRM = CurrentCandidateRM;
		  PionCandidateRLM = PionMomentumEstimate(PionCandidateLength);
	          if (PionCandidateContained == 1) PionCandidateRMCombo = PionMomentumEstimate(PionCandidateLength);
	          if (PionCandidateContained == 0) PionCandidateRMCombo = CurrentCandidateRM;
		  PionCandidateE = pow((CurrentCandidateE*CurrentCandidateE) - (CurrentCandidateRMCombo*CurrentCandidateRMCombo) + (CurrentCandidateRM*CurrentCandidateRM) - (MuonMass*MuonMass) + (PionMass*PionMass), 0.5);
		  PionCandidatePx = PionCandidateRMCombo*CurrentCandidateDirX;
		  PionCandidatePy = PionCandidateRMCombo*CurrentCandidateDirY;
		  PionCandidatePz = PionCandidateRMCombo*CurrentCandidateDirZ;
		  }
	       TVector3 p(mc_px, mc_py, mc_pz);
	       if (EndX >= 10. && EndX <= 230. && EndY >= -105. && EndY <= 105. && EndZ >= 10. && EndZ <= 990.) {
	          CurrentCandidateContained = 1;
	       } else {CurrentCandidateContained = 0;}
	       CurrentCandidateLength = track_length;
	       CurrentCandidateTrueLength = mc_length;
	       CurrentCandidateMuonChi2 = track_chi2_muon;
	       CurrentCandidateProtonChi2 = track_chi2_proton;
	       CurrentCandidatePDG = mc_pdg;
               CurrentCandidateTOA = OpeningAngle(0, 0, 1, mc_px, mc_py, mc_pz)*180/PI;
	       CurrentCandidateROA = OpeningAngle(0, 0, 1, track_dirx, track_diry, track_dirz)*180/PI;
	       CurrentCandidateTM = p.Mag();
	       CurrentCandidateRM = track_mcs_mom;
	       CurrentCandidateRLM = track_range_mom_mu;
	       if (CurrentCandidateContained == 1) CurrentCandidateRMCombo = track_range_mom_mu;
	       if (CurrentCandidateContained == 0) CurrentCandidateRMCombo = track_mcs_mom;
	       CurrentCandidateE = pow((CurrentCandidateRMCombo*CurrentCandidateRMCombo) + (MuonMass*MuonMass), 0.5);
	       CurrentCandidatePx = CurrentCandidateRMCombo*track_dirx;
	       CurrentCandidatePy = CurrentCandidateRMCombo*track_diry;
	       CurrentCandidatePz = CurrentCandidateRMCombo*track_dirz;
	       CurrentCandidateDirX = track_dirx;
	       CurrentCandidateDirY = track_diry;
	       CurrentCandidateDirZ = track_dirz;
	    }
	    if (distanceToNuVtx < VACut && track_length > PionCandidateLength && !track_is_muon_candidate) {
	       if (EndX >= 10. && EndX <= 230. && EndY >= -105. && EndY <= 105. && EndZ >= 10. && EndZ <= 990.) {
	          PionCandidateContained = 1;
	       } else {PionCandidateContained = 0;}
	       PionCandidateLength = track_length;
	       PionCandidateTrueLength = mc_length;
	       PionCandidateMuonChi2 = track_chi2_muon;
	       PionCandidateProtonChi2 = track_chi2_proton;
               PionCandidateTOA = OpeningAngle(0, 0, 1, mc_px, mc_py, mc_pz)*180/PI;
	       PionCandidateROA = OpeningAngle(0, 0, 1, track_dirx, track_diry, track_dirz)*180/PI;
	       TVector3 q(mc_px, mc_py, mc_pz);
	       PionCandidateTM = q.Mag();
	       PionCandidateRM = track_mcs_mom;
	       PionCandidateRLM = PionMomentumEstimate(PionCandidateLength);
	       if (PionCandidateContained == 1) PionCandidateRMCombo = PionMomentumEstimate(PionCandidateLength);
	       if (PionCandidateContained == 0) PionCandidateRMCombo = track_mcs_mom;
	       PionCandidateE = pow((PionCandidateRM*PionCandidateRM) + (PionMass*PionMass), 0.5);
	       PionCandidatePx = PionCandidateRMCombo*track_dirx;
	       PionCandidatePy = PionCandidateRMCombo*track_diry;
	       PionCandidatePz = PionCandidateRMCombo*track_dirz;
	    }
	    if (distanceToNuVtx < VACut && track_length > PionCandidateLength && track_is_muon_candidate && track_length < CurrentCandidateLength) {
	       if (EndX >= 10. && EndX <= 230. && EndY >= -105. && EndY <= 105. && EndZ >= 10. && EndZ <= 990.) {
	          PionCandidateContained = 1;
	       } else {PionCandidateContained = 0;}
	       PionCandidateLength = track_length;
	       PionCandidateTrueLength = mc_length;
	       PionCandidateMuonChi2 = track_chi2_muon;
	       PionCandidateProtonChi2 = track_chi2_proton;
               PionCandidateTOA = OpeningAngle(0, 0, 1, mc_px, mc_py, mc_pz)*180/PI;
	       PionCandidateROA = OpeningAngle(0, 0, 1, track_dirx, track_diry, track_dirz)*180/PI;
	       TVector3 q(mc_px, mc_py, mc_pz);
	       PionCandidateTM = q.Mag();
	       PionCandidateRM = track_mcs_mom;
	       PionCandidateRLM = PionMomentumEstimate(PionCandidateLength);
	       if (PionCandidateContained == 1) PionCandidateRMCombo = PionMomentumEstimate(PionCandidateLength);
	       if (PionCandidateContained == 0) PionCandidateRMCombo = track_mcs_mom;
	       PionCandidateE = pow((PionCandidateRM*PionCandidateRM) + (PionMass*PionMass), 0.5);
	       PionCandidatePx = PionCandidateRMCombo*track_dirx;
	       PionCandidatePy = PionCandidateRMCombo*track_diry;
	       PionCandidatePz = PionCandidateRMCombo*track_dirz;
	    }
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


   /*for (Int_t k = 0; k < nevents; k++) {
      T[k] = abs(pow(Neutrinos[k][0] - Muons[k][0] - Pions[k][0], 2) - pow(Neutrinos[k][1] - Muons[k][1] - Pions[k][1], 2) - pow(Neutrinos[k][2] - Muons[k][2] - Pions[k][2], 2) - pow(Neutrinos[k][3] - Muons[k][3] - Pions[k][3], 2));
      //T[k] = pow(Muons[k][0] - Muons[k][3] + Pions[k][0] - Pions[k][3], 2) + pow(Muons[k][1] + Pions[k][1], 2) + pow(Muons[k][2] + Pions[k][2], 2);

      if (Muons[k][1] != 0 && Muons[k][2] != 0 && Muons[k][3] != 0 && Neutrinos[k][8] == 1) {
         hTrueConeAngle->Fill(ConeAngle(Muons[k][1], Muons[k][2], Muons[k][3], Pions[k][1], Pions[k][2], Pions[k][3])*180/PI);
         hRecoConeAngle->Fill(ConeAngle(Muons[k][9], Muons[k][10], Muons[k][11], Pions[k][9], Pions[k][10], Pions[k][11])*180/PI);
      }

      if ((Muons[k][8] == 1 || Pions[k][8] == 1)) {
         hMatchedT->Fill(T[k]);
         //if (Neutrinos[k][0] > 0.146) hMatchedNuEnergy->Fill(Neutrinos[k][0]);
      }*/

      /*if ((Muons[k][7] == 1 || Pions[k][7] == 1)*/ /*&& (Muons[k][8] == 1 || Pions[k][8] == 1)*//*) {
         hPassedT->Fill(T[k]);
	 //if (Neutrinos[k][0] > 0.146) hPassedNuEnergy->Fill(Neutrinos[k][0]);
      }
   }// <-- End k For Loop for T calculations*/


   std::cout<<"Matched an Event this many times = "<<CountMatching<<std::endl;
   std::cout<<"Number that Passed Selection = "<<nPassedSelection<<std::endl;


   // =====================================
   // === Modifying Histogram Asthetics ===
   // ===================================== 
   //hCutByCutMuonCandidate->Sumw2();
   //hCutByCutMuonCandidateDivide->Sumw2();

   //hCutByCutMuonCandidate->Divide(hCutByCutMuonCandidateDivide);

   /*
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(1, "Num. Matched Events");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(2, "Track Score > 0.85");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(3, "Vertex Distance < 4cm");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(4, "Generation == 2");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(5, "Track Length > 20cm");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(6, "p #chi^{2} > 60");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(7, "#mu #chi^{2} < 30");
   hCutByCutMuonCandidate->GetXaxis()->SetBinLabel(8, "p #chi^{2} / #mu #chi^{2} > 7");
   */
   hPionOrMuonIsCandidate->GetXaxis()->SetBinLabel(1, "Muon Selected");
   hPionOrMuonIsCandidate->GetXaxis()->SetBinLabel(2, "Pion Selected");
   hPionOrMuonIsCandidate->GetXaxis()->SetBinLabel(3, "Other Selected");
   // =====================================

   file->Close();
   //Ntuple.Write();
   //f.Close();

   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   // %%% Saving Histograms to File %%%
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
   //TFile *TDaughtersInfo = new TFile("Wouter_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("Daughter_Information_CCCoh_Testing.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("CCCoh_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("CCQE_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("CCRES_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("CCDIS_Daughter_Information.root", "RECREATE");
   TFile *TDaughtersInfo = new TFile("Other_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("CCInc_Daughter_Information.root", "RECREATE");
   //TFile *TDaughtersInfo = new TFile("NC_Daughter_Information.root", "RECREATE");

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

   hCutByCutMuonCandidate->Write();
   hCutByCutMuonCandidateDivide->Write();
   hNumMuonCandidates->Write();

   hFurtherEventSelection->Write();
   hFurtherEventSelectionDivide->Write();

   hTrueConeAngle->Write();
   hRecoConeAngle->Write();

   hTrueDoCA->Write();
   hRecoDoCA->Write();

   hRecoVA0->Write();
   hRecoVA1->Write();
   hRecoVA2->Write();
   hRecoVAAll->Write();

   hPionOrMuonIsCandidate->Write();

   hTrueOpeningAngle->Write();
   hRecoOpeningAngle->Write();

   hCutByCutMuonCandidate2->Write();
   hCutByCutMuonCandidateDivide2->Write();

   hNTracksInBubble5->Write();
   hNTracksInBubble->Write();
   hNTracksInBubble15->Write();
   hNTracksInBubbleCosmic->Write();
   hRecoVA2Tracks->Write();
   hRecoVA2Minus->Write();
   hRecoVA2Cosmic->Write();
   hRecoVA2Chosen->Write();
   hRecoConeAngleCosmic->Write();
   hRecoConeAngleCosmicBoth->Write();
   hRecoDoCACosmic->Write();
   hT->Write();
   hT2_5->Write();
   hT2->Write();
   hT2_15->Write();

   hTrueConeAngleVsOpeningAngle->Write();
   hRecoConeAngleVsOpeningAngle->Write();

   hAfterNuEnergy->Write();
   hAfterNuEnergy2->Write();

   hMuonCandidateMuonChi2After->Write();
   hPionCandidateMuonChi2After->Write();

   hMuonCandidateProtonChi2After->Write();
   hPionCandidateProtonChi2After->Write();

   hMuonCandidateTracksMuonChi2VsProtonChi2After->Write();
   hPionCandidateTracksMuonChi2VsProtonChi2After->Write();

   hMuonCandidateTrueTrackLengthAfter->Write();
   hPionCandidateTrueTrackLengthAfter->Write();

   hMuonCandidateRecoTrackLengthAfter->Write();
   hPionCandidateRecoTrackLengthAfter->Write();

   hMuonCandidateDeltaLengthAfter->Write();
   hPionCandidateDeltaLengthAfter->Write();

   hMuonCandidateRecoLengthVsMuonChi2->Write();
   hMuonCandidateRecoLengthVsProtonChi2->Write();

   hPionCandidateRecoLengthVsMuonChi2->Write();
   hPionCandidateRecoLengthVsProtonChi2->Write();

   hMuonCandidateTrueTrackLengthAfter2->Write();
   hPionCandidateTrueTrackLengthAfter2->Write();

   hMuonCandidateRecoTrackLengthAfter2->Write();
   hPionCandidateRecoTrackLengthAfter2->Write();

   hMuonCandidateDeltaLengthAfter2->Write();
   hPionCandidateDeltaLengthAfter2->Write();

   hTrueConeAngleAfter->Write();
   hRecoConeAngleAfter->Write();

   hTrueOpeningAngleAfter->Write();
   hRecoOpeningAngleAfter->Write();

   hTrueMuonOpeningAngleAfter->Write();
   hRecoMuonOpeningAngleAfter->Write();

   hTruePionOpeningAngleAfter->Write();
   hRecoPionOpeningAngleAfter->Write();

   hMuonCandidateAfterMomentumTrue->Write();
   hPionCandidateAfterMomentumTrue->Write();

   hMuonCandidateAfterMomentumReco->Write();
   hPionCandidateAfterMomentumReco->Write();

   hTAfterTrue->Write();
   hTAfterReco->Write();

   hMuonCandidateAfterLMomentumReco->Write();
   hPionCandidateAfterLMomentumReco->Write();

   hMuonCandidateAfterMomentumDelta->Write();
   hPionCandidateAfterMomentumDelta->Write();

   hMuonCandidateAfterLMomentumDelta->Write();
   hPionCandidateAfterLMomentumDelta->Write();

   hTrueConeAngleAfter2->Write();
   hRecoConeAngleAfter2->Write();

   hTrueOpeningAngleAfter2->Write();
   hRecoOpeningAngleAfter2->Write();

   hTrueMuonOpeningAngleAfter2->Write();
   hRecoMuonOpeningAngleAfter2->Write();

   hTruePionOpeningAngleAfter2->Write();
   hRecoPionOpeningAngleAfter2->Write();

   hMuonCandidateAfter2MomentumTrue->Write();
   hPionCandidateAfter2MomentumTrue->Write();

   hMuonCandidateAfter2MomentumReco->Write();
   hPionCandidateAfter2MomentumReco->Write();

   hMuonCandidateAfter2LMomentumReco->Write();
   hPionCandidateAfter2LMomentumReco->Write();

   hMuonCandidateAfter2MomentumDelta->Write();
   hPionCandidateAfter2MomentumDelta->Write();

   hMuonCandidateAfter2LMomentumDelta->Write();
   hPionCandidateAfter2LMomentumDelta->Write();

   hTAfter2True->Write();
   hTAfter2Reco->Write();

   hTAfterDelta->Write();
   hTAfter2Delta->Write();

   hMuonCandidateAfterContainedMomentumTrue->Write();
   hPionCandidateAfterContainedMomentumTrue->Write();

   hMuonCandidateAfterContainedMomentumReco->Write();
   hPionCandidateAfterContainedMomentumReco->Write();

   hMuonCandidateAfterContainedLMomentumReco->Write();
   hPionCandidateAfterContainedLMomentumReco->Write();

   hMuonCandidateAfterContainedMomentumDelta->Write();
   hPionCandidateAfterContainedMomentumDelta->Write();

   hMuonCandidateAfterContainedLMomentumDelta->Write();
   hPionCandidateAfterContainedLMomentumDelta->Write();

   hMuonCandidateAfterUnContainedMomentumTrue->Write();
   hPionCandidateAfterUnContainedMomentumTrue->Write();

   hMuonCandidateAfterUnContainedMomentumReco->Write();
   hPionCandidateAfterUnContainedMomentumReco->Write();

   hMuonCandidateAfterUnContainedLMomentumReco->Write();
   hPionCandidateAfterUnContainedLMomentumReco->Write();

   hMuonCandidateAfterUnContainedMomentumDelta->Write();
   hPionCandidateAfterUnContainedMomentumDelta->Write();

   hMuonCandidateAfterUnContainedLMomentumDelta->Write();
   hPionCandidateAfterUnContainedLMomentumDelta->Write();

   hMuonCandidateAfterComboMomentumReco->Write();
   hPionCandidateAfterComboMomentumReco->Write();

   hMuonCandidateAfterComboMomentumDelta->Write();
   hPionCandidateAfterComboMomentumDelta->Write();

   hMuonCandidateAfter2ComboMomentumReco->Write();
   hPionCandidateAfter2ComboMomentumReco->Write();

   hMuonCandidateAfter2ComboMomentumDelta->Write();
   hPionCandidateAfter2ComboMomentumDelta->Write();
   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

}
