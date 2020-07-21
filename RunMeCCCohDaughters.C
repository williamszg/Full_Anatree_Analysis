void RunMeCCCohDaughters(){
gROOT->ProcessLine(".L SignalDaughters.C");
gROOT->ProcessLine("SignalDaughters t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
