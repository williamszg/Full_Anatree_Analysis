void RunMeCCCohDaughters(){
gROOT->ProcessLine(".L OneCCCohDaughters.C");
gROOT->ProcessLine("OneCCCohDaughters t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
