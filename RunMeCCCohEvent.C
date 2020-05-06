void RunMeCCCohEvent(){
gROOT->ProcessLine(".L OneCCCohEvent.C");
gROOT->ProcessLine("OneCCCohEvent t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
