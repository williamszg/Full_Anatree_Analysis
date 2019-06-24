void RunMeCCCoh(){
gROOT->ProcessLine(".L NewAnalysisCCCoh.C");
gROOT->ProcessLine("NewAnalysisCCCoh t");
gROOT->ProcessLine("t.Loop()");
}
