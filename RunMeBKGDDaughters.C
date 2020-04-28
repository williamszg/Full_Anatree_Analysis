void RunMeBKGDDaughters(){
gROOT->ProcessLine(".L TwoBKGDDaughters.C");
gROOT->ProcessLine("TwoBKGDDaughters t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
