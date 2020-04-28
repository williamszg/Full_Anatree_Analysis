void RunMeBKGDEvent(){
gROOT->ProcessLine(".L TwoBKGDEvent.C");
gROOT->ProcessLine("TwoBKGDEvent t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
