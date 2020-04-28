void RunMeBKGD(){
gROOT->ProcessLine(".L NewAnalysisBKGD.C");
gROOT->ProcessLine("NewAnalysisBKGD t");
gROOT->ProcessLine("t.Loop()");
gROOT->ProcessLine(".q");
}
