{
TFile *f = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_7_5_cm.root"); //<--File for Backgrounds
TFile *f2 = new TFile("./Histograms_NewAnalysis_CCCoh_Vertex_7_5_cm.root"); //<--File for CCCoh
TFile *f3 = new TFile("./Histograms_NewAnalysis_BKGD_Vertex_7_5_cm.root"); //<--File for Cosmics

TH1D *hCCCohConeAngle = (TH1D*)f2->Get("hCCCohConeAngle");
TH1D *hCCQEConeAngle = (TH1D*)f->Get("hCCQEConeAngle");
TH1D *hCCResConeAngle = (TH1D*)f->Get("hCCResConeAngle");
TH1D *hCCDISConeAngle = (TH1D*)f->Get("hCCDISConeAngle");
TH1D *hNCResConeAngle = (TH1D*)f->Get("hNCResConeAngle");
TH1D *hNCDISConeAngle = (TH1D*)f->Get("hNCDISConeAngle");
TH1D *hCosmicConeAngle = (TH1D*)f3->Get("hCosmicConeAngle");
TH1D *hOtherConeAngle = (TH1D*)f->Get("hOtherConeAngle");

// -----------------------------
// --- TGraph for Cone Angle ---
// -----------------------------
int n = 180;
double x[180] = {0};
double ConeAngleEff[180] = {0};
double ConeAnglePurity[180] = {0};
double CCCohConeAngle[180] = {0};
double CCCohConeAngleRejection[180] = {0};
double CCQEConeAngle[180] = {0};
double CCResConeAngle[180] = {0};
double CCDISConeAngle[180] = {0};
double NCResConeAngle[180] = {0};
double NCDISConeAngle[180] = {0};
double CosmicConeAngle[180] = {0};
double OtherConeAngle[180] = {0};

CosmicConeAngle[0] = 1;
CCQEConeAngle[0] = 1;

for (int i = 0; i < n; i++)
   {
   x[i] = i*180/n;
   for (int g = 1; g < i+1; g++)
      {
      CCCohConeAngle[i] += hCCCohConeAngle->GetBinContent(g);
      CCQEConeAngle[i] += hCCQEConeAngle->GetBinContent(g);
      CCResConeAngle[i] += hCCResConeAngle->GetBinContent(g);
      CCDISConeAngle[i] += hCCDISConeAngle->GetBinContent(g);
      NCResConeAngle[i] += hNCResConeAngle->GetBinContent(g);
      NCDISConeAngle[i] += hNCDISConeAngle->GetBinContent(g);
      CosmicConeAngle[i] += hCosmicConeAngle->GetBinContent(g);
      OtherConeAngle[i] += hOtherConeAngle->GetBinContent(g);
      } // End g-Loop


   CCCohConeAngleRejection[i] = hCCCohConeAngle->GetEntries() - CCCohConeAngle[i];

   //ConeAngleEff[i] = 100*(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + OtherConeAngle[i])/(hCCCohConeAngle->GetEntries() + hCCQEConeAngle->GetEntries() + hCCResConeAngle->GetEntries() + hCCDISConeAngle->GetEntries() + hNCResConeAngle->GetEntries() + hNCDISConeAngle->GetEntries() + hOtherConeAngle->GetEntries());
   //ConeAnglePurity[i] = 100*CCCohConeAngle[i]/(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + OtherConeAngle[i]);
   ConeAngleEff[i] = 100*(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + CosmicConeAngle[i] + OtherConeAngle[i])/(hCCCohConeAngle->GetEntries() + hCCQEConeAngle->GetEntries() + hCCResConeAngle->GetEntries() + hCCDISConeAngle->GetEntries() + hNCResConeAngle->GetEntries() + hNCDISConeAngle->GetEntries() + hCosmicConeAngle->GetEntries() + hOtherConeAngle->GetEntries());
   ConeAnglePurity[i] = 100*CCCohConeAngle[i]/(CCCohConeAngle[i] + CCQEConeAngle[i] + CCResConeAngle[i] + CCDISConeAngle[i] + NCResConeAngle[i] + NCDISConeAngle[i] + CosmicConeAngle[i] + OtherConeAngle[i]);

   if (i == 0) {CCQEConeAngle[i] = CCQEConeAngle[i] - 1;}

   CCCohConeAngle[i] = CCCohConeAngle[i]*100/hCCCohConeAngle->GetEntries();
   CCCohConeAngleRejection[i] = CCCohConeAngleRejection[i]*100/hCCCohConeAngle->GetEntries();
   CCQEConeAngle[i] = 100 - CCQEConeAngle[i]*100/hCCQEConeAngle->GetEntries();
   CCResConeAngle[i] = 100 - CCResConeAngle[i]*100/hCCResConeAngle->GetEntries();
   CCDISConeAngle[i] = 100 - CCDISConeAngle[i]*100/hCCDISConeAngle->GetEntries();
   NCResConeAngle[i] = 100 - NCResConeAngle[i]*100/hNCResConeAngle->GetEntries();
   NCDISConeAngle[i] = 100 - NCDISConeAngle[i]*100/hNCDISConeAngle->GetEntries();
   CosmicConeAngle[i] = 100 - CosmicConeAngle[i]*100/hCosmicConeAngle->GetEntries();
   OtherConeAngle[i] = 100 - OtherConeAngle[i]*100/hOtherConeAngle->GetEntries();
   } // End i-Loop

TGraph* gConeAngleEff = new TGraph(n, x, ConeAngleEff);
gConeAngleEff->SetTitle("ConeAngleEff");
gConeAngleEff->SetName("ConeAngleEff");
gConeAngleEff->SetFillColor(kWhite);
gConeAngleEff->SetLineColor(kBlue);
gConeAngleEff->SetLineWidth(2);
TGraph* gConeAnglePurity = new TGraph(n, x, ConeAnglePurity);
gConeAnglePurity->SetTitle("ConeAnglePurity");
gConeAnglePurity->SetName("ConeAnglePurity");
gConeAnglePurity->SetFillColor(kWhite);
gConeAnglePurity->SetLineColor(kRed);
gConeAnglePurity->SetLineWidth(2);
TGraph* gCCCohConeAngle = new TGraph(n, x, CCCohConeAngle);
gCCCohConeAngle->SetTitle("gCCCohConeAngle");
gCCCohConeAngle->SetName("gCCCohConeAngle");
gCCCohConeAngle->SetFillColor(kWhite);
gCCCohConeAngle->SetLineColor(kBlue);
gCCCohConeAngle->SetLineWidth(2);
TGraph* gCCQEConeAngle = new TGraph(n, x, CCQEConeAngle);
gCCQEConeAngle->SetTitle("gCCQEConeAngle");
gCCQEConeAngle->SetName("gCCQEConeAngle");
gCCQEConeAngle->SetFillColor(kWhite);
gCCQEConeAngle->SetLineColor(kRed);
gCCQEConeAngle->SetLineWidth(2);
TGraph* gCCResConeAngle = new TGraph(n, x, CCResConeAngle);
gCCResConeAngle->SetTitle("gCCResConeAngle");
gCCResConeAngle->SetName("gCCResConeAngle");
gCCResConeAngle->SetFillColor(kWhite);
gCCResConeAngle->SetLineColor(kGreen);
gCCResConeAngle->SetLineWidth(2);
TGraph* gCCDISConeAngle = new TGraph(n, x, CCDISConeAngle);
gCCDISConeAngle->SetTitle("gCCDISConeAngle");
gCCDISConeAngle->SetName("gNCDISConeAngle");
gCCDISConeAngle->SetFillColor(kWhite);
gCCDISConeAngle->SetLineColor(kOrange);
gCCDISConeAngle->SetLineWidth(2);
TGraph* gNCResConeAngle = new TGraph(n, x, NCResConeAngle);
gNCResConeAngle->SetTitle("gNCResConeAngle");
gNCResConeAngle->SetName("gNCResConeAngle");
gNCResConeAngle->SetFillColor(kWhite);
gNCResConeAngle->SetLineColor(kCyan);
gNCResConeAngle->SetLineWidth(2);
TGraph* gNCDISConeAngle = new TGraph(n, x, NCDISConeAngle);
gNCDISConeAngle->SetTitle("gNCDISConeAngle");
gNCDISConeAngle->SetName("gNCDISConeAngle");
gNCDISConeAngle->SetFillColor(kWhite);
gNCDISConeAngle->SetLineColor(kMagenta);
gNCDISConeAngle->SetLineWidth(2);
TGraph* gCosmicConeAngle = new TGraph(n, x, CosmicConeAngle);
gCosmicConeAngle->SetTitle("gCosmicConeAngle");
gCosmicConeAngle->SetName("gCosmicConeAngle");
gCosmicConeAngle->SetFillColor(kWhite);
gCosmicConeAngle->SetLineColor(kBlack);
gCosmicConeAngle->SetLineWidth(2);
TGraph* gOtherConeAngle = new TGraph(n, x, OtherConeAngle);
gOtherConeAngle->SetTitle("gOtherConeAngle");
gOtherConeAngle->SetName("gOtherConeAngle");
gOtherConeAngle->SetFillColor(kWhite);
gOtherConeAngle->SetLineColor(14);
gOtherConeAngle->SetLineWidth(2);

TCanvas *c4 = new TCanvas("c4", "Cone Angle TGraphs");
c4->SetTicks();
c4->SetFillColor(kWhite);

gCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gCCCohConeAngle->GetXaxis()->CenterTitle();

gCCCohConeAngle->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohConeAngle->GetYaxis()->CenterTitle();

gCCCohConeAngle->Draw();
gCCQEConeAngle->Draw("same");
gCCResConeAngle->Draw("same");
gCCDISConeAngle->Draw("same");
gNCResConeAngle->Draw("same");
gNCDISConeAngle->Draw("same");
gCosmicConeAngle->Draw("same");
gOtherConeAngle->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg4 = new TLegend();
leg4 = new TLegend(0.58,0.65,0.88,0.88);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Channel");
leg4->AddEntry(gCCCohConeAngle,"CC-COH");
leg4->AddEntry(gCCQEConeAngle,"CC-QE");
leg4->AddEntry(gCCResConeAngle,"CC-Res");
leg4->AddEntry(gCCDISConeAngle,"CC-DIS");
leg4->AddEntry(gNCResConeAngle,"NC-Res");
leg4->AddEntry(gNCDISConeAngle,"NC-DIS");
leg4->AddEntry(gOtherConeAngle,"Other");
leg4->AddEntry(gCosmicConeAngle,"Cosmic");
leg4->Draw();
// -----------------------------

TH1D *hCCCohDoCA = (TH1D*)f2->Get("hCCCohDoCA2");
TH1D *hCCQEDoCA = (TH1D*)f->Get("hCCQEDoCA2");
TH1D *hCCResDoCA = (TH1D*)f->Get("hCCResDoCA2");
TH1D *hCCDISDoCA = (TH1D*)f->Get("hCCDISDoCA2");
TH1D *hNCResDoCA = (TH1D*)f->Get("hNCResDoCA2");
TH1D *hNCDISDoCA = (TH1D*)f->Get("hNCDISDoCA2");
TH1D *hCosmicDoCA = (TH1D*)f3->Get("hCosmicDoCA2");
TH1D *hOtherDoCA = (TH1D*)f->Get("hOtherDoCA2");

// -----------------------
// --- TGraph for DoCA ---
// -----------------------
int m = 1000;
double y[1000] = {0};
double DoCAEff[1000] = {0};
double DoCAPurity[1000] = {0};
double CCCohDoCA[1000] = {0};
double CCCohDoCARejection[1000] = {0};
double CCQEDoCA[1000] = {0};
double CCResDoCA[1000] = {0};
double CCDISDoCA[1000] = {0};
double NCResDoCA[1000] = {0};
double NCDISDoCA[1000] = {0};
double CosmicDoCA[1000] = {0};
double OtherDoCA[1000] = {0};

CosmicDoCA[0] = 1;
CCQEDoCA[0] = 1;

for (int i = 0; i < m; i++)
   {
   y[i] = i*100/m;
   for (int g = 1; g < i+1; g++)
      {
      CCCohDoCA[i] += hCCCohDoCA->GetBinContent(g);
      CCQEDoCA[i] += hCCQEDoCA->GetBinContent(g);
      CCResDoCA[i] += hCCResDoCA->GetBinContent(g);
      CCDISDoCA[i] += hCCDISDoCA->GetBinContent(g);
      NCResDoCA[i] += hNCResDoCA->GetBinContent(g);
      NCDISDoCA[i] += hNCDISDoCA->GetBinContent(g);
      CosmicDoCA[i] += hCosmicDoCA->GetBinContent(g);
      OtherDoCA[i] += hOtherDoCA->GetBinContent(g);
      } // End g-Loop


   CCCohDoCARejection[i] = hCCCohDoCA->GetEntries() - CCCohDoCA[i];

   //DoCAEff[i] = 100*(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + OtherDoCA[i])/(hCCCohDoCA->GetEntries() + hCCQEDoCA->GetEntries() + hCCResDoCA->GetEntries() + hCCDISDoCA->GetEntries() + hNCResDoCA->GetEntries() + hNCDISDoCA->GetEntries() + hOtherDoCA->GetEntries());
   //DoCAPurity[i] = 100*CCCohDoCA[i]/(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + OtherDoCA[i]);
   DoCAEff[i] = 100*(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + CosmicDoCA[i] + OtherDoCA[i])/(hCCCohDoCA->GetEntries() + hCCQEDoCA->GetEntries() + hCCResDoCA->GetEntries() + hCCDISDoCA->GetEntries() + hNCResDoCA->GetEntries() + hNCDISDoCA->GetEntries() + hCosmicDoCA->GetEntries() + hOtherDoCA->GetEntries());
   DoCAPurity[i] = 100*CCCohDoCA[i]/(CCCohDoCA[i] + CCQEDoCA[i] + CCResDoCA[i] + CCDISDoCA[i] + NCResDoCA[i] + NCDISDoCA[i] + CosmicDoCA[i] + OtherDoCA[i]);

   if (i == 0) {CCQEDoCA[i] = CCQEDoCA[i] - 1;}

   CCCohDoCA[i] = CCCohDoCA[i]*100/hCCCohDoCA->GetEntries();
   CCCohDoCARejection[i] = CCCohDoCARejection[i]*100/hCCCohDoCA->GetEntries();
   CCQEDoCA[i] = 100 - CCQEDoCA[i]*100/hCCQEDoCA->GetEntries();
   CCResDoCA[i] = 100 - CCResDoCA[i]*100/hCCResDoCA->GetEntries();
   CCDISDoCA[i] = 100 - CCDISDoCA[i]*100/hCCDISDoCA->GetEntries();
   NCResDoCA[i] = 100 - NCResDoCA[i]*100/hNCResDoCA->GetEntries();
   NCDISDoCA[i] = 100 - NCDISDoCA[i]*100/hNCDISDoCA->GetEntries();
   CosmicDoCA[i] = 100 - CosmicDoCA[i]*100/hCosmicDoCA->GetEntries();
   OtherDoCA[i] = 100 - OtherDoCA[i]*100/hOtherDoCA->GetEntries();
   } // End i-Loop

TGraph* gDoCAEff = new TGraph(m, y, DoCAEff);
gDoCAEff->SetTitle("gDoCAEff");
gDoCAEff->SetName("gDoCAEff");
gDoCAEff->SetFillColor(kWhite);
gDoCAEff->SetLineColor(kBlue);
gDoCAEff->SetLineWidth(2);
TGraph* gDoCAPurity = new TGraph(m, y, DoCAPurity);
gDoCAPurity->SetTitle("gDoCAPurity");
gDoCAPurity->SetName("gDoCAPurity");
gDoCAPurity->SetFillColor(kWhite);
gDoCAPurity->SetLineColor(kRed);
gDoCAPurity->SetLineWidth(2);
TGraph* gCCCohDoCA = new TGraph(m, y, CCCohDoCA);
gCCCohDoCA->SetTitle("gCCCohDoCA");
gCCCohDoCA->SetName("gCCCohDoCA");
gCCCohDoCA->SetFillColor(kWhite);
gCCCohDoCA->SetLineColor(kBlue);
gCCCohDoCA->SetLineWidth(2);
TGraph* gCCQEDoCA = new TGraph(m, y, CCQEDoCA);
gCCQEDoCA->SetTitle("gCCQEDoCA");
gCCQEDoCA->SetName("gCCQEDoCA");
gCCQEDoCA->SetFillColor(kWhite);
gCCQEDoCA->SetLineColor(kRed);
gCCQEDoCA->SetLineWidth(2);
TGraph* gCCResDoCA = new TGraph(m, y, CCResDoCA);
gCCResDoCA->SetTitle("gCCResDoCA");
gCCResDoCA->SetName("gCCResDoCA");
gCCResDoCA->SetFillColor(kWhite);
gCCResDoCA->SetLineColor(kGreen);
gCCResDoCA->SetLineWidth(2);
TGraph* gCCDISDoCA = new TGraph(m, y, CCDISDoCA);
gCCDISDoCA->SetTitle("gCCDISDoCA");
gCCDISDoCA->SetName("gCCDISDoCA");
gCCDISDoCA->SetFillColor(kWhite);
gCCDISDoCA->SetLineColor(kOrange);
gCCDISDoCA->SetLineWidth(2);
TGraph* gNCResDoCA = new TGraph(m, y, NCResDoCA);
gNCResDoCA->SetTitle("gNCResDoCA");
gNCResDoCA->SetName("gNCResDoCA");
gNCResDoCA->SetFillColor(kWhite);
gNCResDoCA->SetLineColor(kCyan);
gNCResDoCA->SetLineWidth(2);
TGraph* gNCDISDoCA = new TGraph(m, y, NCDISDoCA);
gNCDISDoCA->SetTitle("gNCDISDoCA");
gNCDISDoCA->SetName("gNCDISDoCA");
gNCDISDoCA->SetFillColor(kWhite);
gNCDISDoCA->SetLineColor(kMagenta);
gNCDISDoCA->SetLineWidth(2);
TGraph* gCosmicDoCA = new TGraph(m, y, CosmicDoCA);
gCosmicDoCA->SetTitle("gCosmicDoCA");
gCosmicDoCA->SetName("gCosmicDoCA");
gCosmicDoCA->SetFillColor(kWhite);
gCosmicDoCA->SetLineColor(kBlack);
gCosmicDoCA->SetLineWidth(2);
TGraph* gOtherDoCA = new TGraph(m, y, OtherDoCA);
gOtherDoCA->SetTitle("gOtherDoCA");
gOtherDoCA->SetName("gOtherDoCA");
gOtherDoCA->SetFillColor(kWhite);
gOtherDoCA->SetLineColor(14);
gOtherDoCA->SetLineWidth(2);

TCanvas *c5 = new TCanvas("c5", "DoCA TGraphs");
c5->SetTicks();
c5->SetFillColor(kWhite);

gCCCohDoCA->GetXaxis()->SetTitle("DoCA [cm]");
gCCCohDoCA->GetXaxis()->CenterTitle();

gCCCohDoCA->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohDoCA->GetYaxis()->CenterTitle();

gCCCohDoCA->Draw();
gCCQEDoCA->Draw("same");
gCCResDoCA->Draw("same");
gCCDISDoCA->Draw("same");
gNCResDoCA->Draw("same");
gNCDISDoCA->Draw("same");
gCosmicDoCA->Draw("same");
gOtherDoCA->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg5 = new TLegend();
leg5 = new TLegend(0.58,0.65,0.88,0.88);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Channel");
leg5->AddEntry(gCCCohDoCA,"CC-COH");
leg5->AddEntry(gCCQEDoCA,"CC-QE");
leg5->AddEntry(gCCResDoCA,"CC-Res");
leg5->AddEntry(gCCDISDoCA,"CC-DIS");
leg5->AddEntry(gNCResDoCA,"NC-Res");
leg5->AddEntry(gNCDISDoCA,"NC-DIS");
leg5->AddEntry(gOtherDoCA,"Other");
leg5->AddEntry(gCosmicDoCA,"Cosmic");
leg5->Draw();
// -----------------------

TH1D *hCCCohVA = (TH1D*)f2->Get("hCCCohVA");
TH1D *hCCQEVA = (TH1D*)f->Get("hCCQEVA");
TH1D *hCCResVA = (TH1D*)f->Get("hCCResVA");
TH1D *hCCDISVA = (TH1D*)f->Get("hCCDISVA");
TH1D *hNCResVA = (TH1D*)f->Get("hNCResVA");
TH1D *hNCDISVA = (TH1D*)f->Get("hNCDISVA");
TH1D *hCosmicVA = (TH1D*)f3->Get("hCosmicVA");
TH1D *hOtherVA = (TH1D*)f->Get("hOtherVA");

// ---------------------
// --- TGraph for VA ---
// ---------------------
int j = 100;
double z[100] = {0};
double VAEff[100] = {0};
double VAPurity[100] = {0};
double CCCohVA[100] = {0};
double CCCohVARejection[100] = {0};
double CCQEVA[100] = {0};
double CCResVA[100] = {0};
double CCDISVA[100] = {0};
double NCResVA[100] = {0};
double NCDISVA[100] = {0};
double CosmicVA[100] = {0};
double OtherVA[100] = {0};

CosmicVA[0] = 1;
CCQEVA[0] = 1;

for (int i = 0; i < j; i++)
   {
   z[i] = i*500/j;
   for (int g = 1; g < i+1; g++)
      {
      CCCohVA[i] += hCCCohVA->GetBinContent(g);
      CCQEVA[i] += hCCQEVA->GetBinContent(g);
      CCResVA[i] += hCCResVA->GetBinContent(g);
      CCDISVA[i] += hCCDISVA->GetBinContent(g);
      NCResVA[i] += hNCResVA->GetBinContent(g);
      NCDISVA[i] += hNCDISVA->GetBinContent(g);
      CosmicVA[i] += hCosmicVA->GetBinContent(g);
      OtherVA[i] += hOtherVA->GetBinContent(g);
      } // End g-Loop


   CCCohVARejection[i] = hCCCohVA->GetEntries() - CCCohVA[i];

   //VAEff[i] = 100*(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + OtherVA[i])/(hCCCohVA->GetEntries() + hCCQEVA->GetEntries() + hCCResVA->GetEntries() + hCCDISVA->GetEntries() + hNCResVA->GetEntries() + hNCDISVA->GetEntries() + hOtherVA->GetEntries());
   //VAPurity[i] = 100*CCCohVA[i]/(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + OtherVA[i]);
   VAEff[i] = 100*(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + CosmicVA[i] + OtherVA[i])/(hCCCohVA->GetEntries() + hCCQEVA->GetEntries() + hCCResVA->GetEntries() + hCCDISVA->GetEntries() + hNCResVA->GetEntries() + hNCDISVA->GetEntries() + hCosmicVA->GetEntries() + hOtherVA->GetEntries());
   VAPurity[i] = 100*CCCohVA[i]/(CCCohVA[i] + CCQEVA[i] + CCResVA[i] + CCDISVA[i] + NCResVA[i] + NCDISVA[i] + CosmicVA[i] + OtherVA[i]);

   if (i == 0) {CCQEVA[i] = CCQEVA[i] - 1;}

   CCCohVA[i] = CCCohVA[i]*100/hCCCohVA->GetEntries();
   CCCohVARejection[i] = CCCohVARejection[i]*100/hCCCohVA->GetEntries();
   CCQEVA[i] = 100 - CCQEVA[i]*100/hCCQEVA->GetEntries();
   CCResVA[i] = 100 - CCResVA[i]*100/hCCResVA->GetEntries();
   CCDISVA[i] = 100 - CCDISVA[i]*100/hCCDISVA->GetEntries();
   NCResVA[i] = 100 - NCResVA[i]*100/hNCResVA->GetEntries();
   NCDISVA[i] = 100 - NCDISVA[i]*100/hNCDISVA->GetEntries();
   CosmicVA[i] = 100 - CosmicVA[i]*100/hCosmicVA->GetEntries();
   OtherVA[i] = 100 - OtherVA[i]*100/hOtherVA->GetEntries();
   } // End i-Loop

TGraph* gVAEff = new TGraph(j, z, VAEff);
gVAEff->SetTitle("gVAEff");
gVAEff->SetName("gVAEff");
gVAEff->SetFillColor(kWhite);
gVAEff->SetLineColor(kBlue);
gVAEff->SetLineWidth(2);
TGraph* gVAPurity = new TGraph(j, z, VAPurity);
gVAPurity->SetTitle("gVAPurity");
gVAPurity->SetName("gVAPurity");
gVAPurity->SetFillColor(kWhite);
gVAPurity->SetLineColor(kRed);
gVAPurity->SetLineWidth(2);
TGraph* gCCCohVA = new TGraph(j, z, CCCohVA);
gCCCohVA->SetTitle("gCCCohVA");
gCCCohVA->SetName("gCCCohVA");
gCCCohVA->SetFillColor(kWhite);
gCCCohVA->SetLineColor(kBlue);
gCCCohVA->SetLineWidth(2);
TGraph* gCCQEVA = new TGraph(j, z, CCQEVA);
gCCQEVA->SetTitle("gCCQEVA");
gCCQEVA->SetName("gCCQEVA");
gCCQEVA->SetFillColor(kWhite);
gCCQEVA->SetLineColor(kRed);
gCCQEVA->SetLineWidth(2);
TGraph* gCCResVA = new TGraph(j, z, CCResVA);
gCCResVA->SetTitle("gCCResVA");
gCCResVA->SetName("gCCResVA");
gCCResVA->SetFillColor(kWhite);
gCCResVA->SetLineColor(kGreen);
gCCResVA->SetLineWidth(2);
TGraph* gCCDISVA = new TGraph(j, z, CCDISVA);
gCCDISVA->SetTitle("gCCDISVA");
gCCDISVA->SetName("gCCDISVA");
gCCDISVA->SetFillColor(kWhite);
gCCDISVA->SetLineColor(kOrange);
gCCDISVA->SetLineWidth(2);
TGraph* gNCResVA = new TGraph(j, z, NCResVA);
gNCResVA->SetTitle("gNCResVA");
gNCResVA->SetName("gNCResVA");
gNCResVA->SetFillColor(kWhite);
gNCResVA->SetLineColor(kCyan);
gNCResVA->SetLineWidth(2);
TGraph* gNCDISVA = new TGraph(j, z, NCDISVA);
gNCDISVA->SetTitle("gNCDISVA");
gNCDISVA->SetName("gNCDISVA");
gNCDISVA->SetFillColor(kWhite);
gNCDISVA->SetLineColor(kMagenta);
gNCDISVA->SetLineWidth(2);
TGraph* gCosmicVA = new TGraph(j, z, CosmicVA);
gCosmicVA->SetTitle("gCosmicVA");
gCosmicVA->SetName("gCosmicVA");
gCosmicVA->SetFillColor(kWhite);
gCosmicVA->SetLineColor(kBlack);
gCosmicVA->SetLineWidth(2);
TGraph* gOtherVA = new TGraph(j, z, OtherVA);
gOtherVA->SetTitle("gOtherVA");
gOtherVA->SetName("gOtherVA");
gOtherVA->SetFillColor(kWhite);
gOtherVA->SetLineColor(14);
gOtherVA->SetLineWidth(2);

TCanvas *c6 = new TCanvas("c6", "Vertex Activity TGraphs");
c6->SetTicks();
c6->SetFillColor(kWhite);

gCCCohVA->GetXaxis()->SetTitle("Vertex Activity within 10cm of Vertex [MeV]");
gCCCohVA->GetXaxis()->CenterTitle();

gCCCohVA->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohVA->GetYaxis()->CenterTitle();

gCCCohVA->Draw();
gCCQEVA->Draw("same");
gCCResVA->Draw("same");
gCCDISVA->Draw("same");
gNCResVA->Draw("same");
gNCDISVA->Draw("same");
gCosmicVA->Draw("same");
gOtherVA->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg6 = new TLegend();
leg6 = new TLegend(0.58,0.65,0.88,0.88);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("Channel");
leg6->AddEntry(gCCCohVA,"CC-COH");
leg6->AddEntry(gCCQEVA,"CC-QE");
leg6->AddEntry(gCCResVA,"CC-Res");
leg6->AddEntry(gCCDISVA,"CC-DIS");
leg6->AddEntry(gNCResVA,"NC-Res");
leg6->AddEntry(gNCDISVA,"NC-DIS");
leg6->AddEntry(gOtherVA,"Other");
leg6->AddEntry(gCosmicVA,"Cosmic");
leg6->Draw();
// ---------------------

TH1D *hCCCohOp = (TH1D*)f2->Get("hOpFlashPECCCoh");
TH1D *hCosmicOp = (TH1D*)f3->Get("hOpFlashPECosmic");
TH1D *hCCQEOp = (TH1D*)f->Get("hOpFlashPECCQE");
TH1D *hCCResOp = (TH1D*)f->Get("hOpFlashPECCRes");
TH1D *hCCDISOp = (TH1D*)f->Get("hOpFlashPECCDIS");
TH1D *hNCResOp = (TH1D*)f->Get("hOpFlashPENCRes");
TH1D *hNCDISOp = (TH1D*)f->Get("hOpFlashPENCDIS");
TH1D *hOtherOp = (TH1D*)f->Get("hOpFlashPEOther");

// --------------------------
// --- TGraph for OpFlash ---
// --------------------------
int k = 2000;
double t[2000] = {0};
double OpEff[2000] = {0};
double OpPurity[2000] = {0};
double CCCohOp[2000] = {0};
double CCQEOp[2000] = {0};
double CCResOp[2000] = {0};
double CCDISOp[2000] = {0};
double NCResOp[2000] = {0};
double NCDISOp[2000] = {0};
double OtherOp[2000] = {0};
double CosmicOp[2000] = {0};

for (int i = 0; i < k; i++)
   {
   t[i] = i*20000/k;
   for (int g = 1; g < i+1; g++)
      {
      CCCohOp[i] += hCCCohOp->GetBinContent(g);
      CCQEOp[i] += hCCQEOp->GetBinContent(g);
      CCResOp[i] += hCCResOp->GetBinContent(g);
      CCDISOp[i] += hCCDISOp->GetBinContent(g);
      NCResOp[i] += hNCResOp->GetBinContent(g);
      NCDISOp[i] += hNCDISOp->GetBinContent(g);
      OtherOp[i] += hOtherOp->GetBinContent(g);
      CosmicOp[i] += hCosmicOp->GetBinContent(g);
      } // End g-Loop

   //OpEff[i] = 100*(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + OtherOp[i])/(hCCCohOp->GetEntries() + hCCQEOp->GetEntries() + hCCResOp->GetEntries() + hCCDISOp->GetEntries() + hNCResOp->GetEntries() + hNCDISOp->GetEntries() + hOtherOp->GetEntries());
   //OpPurity[i] = 100*CCCohOp[i]/(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + OtherOp[i]);
   OpEff[i] = 100*(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + CosmicOp[i] + OtherOp[i])/(hCCCohOp->GetEntries() + hCCQEOp->GetEntries() + hCCResOp->GetEntries() + hCCDISOp->GetEntries() + hNCResOp->GetEntries() + hNCDISOp->GetEntries() + hCosmicOp->GetEntries() + hOtherOp->GetEntries());
   OpPurity[i] = 100*CCCohOp[i]/(CCCohOp[i] + CCQEOp[i] + CCResOp[i] + CCDISOp[i] + NCResOp[i] + NCDISOp[i] + CosmicOp[i] + OtherOp[i]);

   CCCohOp[i] = CCCohOp[i]*100/hCCCohOp->GetEntries();
   CCQEOp[i] = 100 - CCQEOp[i]*100/hCCQEOp->GetEntries();
   CCResOp[i] = 100 - CCResOp[i]*100/hCCResOp->GetEntries();
   CCDISOp[i] = 100 - CCDISOp[i]*100/hCCDISOp->GetEntries();
   NCResOp[i] = 100 - NCResOp[i]*100/hNCResOp->GetEntries();
   NCDISOp[i] = 100 - NCDISOp[i]*100/hNCDISOp->GetEntries();
   OtherOp[i] = 100 - OtherOp[i]*100/hOtherOp->GetEntries();
   CosmicOp[i] = 100 - CosmicOp[i]*100/hCosmicOp->GetEntries();
   } // End i-Loop

TGraph* gOpEff = new TGraph(k, t, OpEff);
gOpEff->SetTitle("gOpEff");
gOpEff->SetName("gOpEff");
gOpEff->SetFillColor(kWhite);
gOpEff->SetLineColor(kBlue);
gOpEff->SetLineWidth(2);
TGraph* gOpPurity = new TGraph(k, t, OpPurity);
gOpPurity->SetTitle("gOpPurity");
gOpPurity->SetName("gOpPurity");
gOpPurity->SetFillColor(kWhite);
gOpPurity->SetLineColor(kRed);
gOpPurity->SetLineWidth(2);
TGraph* gCCCohOp = new TGraph(k, t, CCCohOp);
gCCCohOp->SetTitle("gCCCohOp");
gCCCohOp->SetName("gCCCohOp");
gCCCohOp->SetFillColor(kWhite);
gCCCohOp->SetLineColor(kBlue);
gCCCohOp->SetLineWidth(2);
TGraph* gCCQEOp = new TGraph(k, t, CCQEOp);
gCCQEOp->SetTitle("gCCQEOp");
gCCQEOp->SetName("gCCQEOp");
gCCQEOp->SetFillColor(kWhite);
gCCQEOp->SetLineColor(kRed);
gCCQEOp->SetLineWidth(2);
TGraph* gCCResOp = new TGraph(k, t, CCResOp);
gCCResOp->SetTitle("gCCResOp");
gCCResOp->SetName("gCCResOp");
gCCResOp->SetFillColor(kWhite);
gCCResOp->SetLineColor(kGreen);
gCCResOp->SetLineWidth(2);
TGraph* gCCDISOp = new TGraph(k, t, CCDISOp);
gCCDISOp->SetTitle("gCCDISOp");
gCCDISOp->SetName("gCCDISOp");
gCCDISOp->SetFillColor(kWhite);
gCCDISOp->SetLineColor(kOrange);
gCCDISOp->SetLineWidth(2);
TGraph* gNCResOp = new TGraph(k, t, NCResOp);
gNCResOp->SetTitle("gNCResOp");
gNCResOp->SetName("gNCResOp");
gNCResOp->SetFillColor(kWhite);
gNCResOp->SetLineColor(kCyan);
gNCResOp->SetLineWidth(2);
TGraph* gNCDISOp = new TGraph(k, t, NCDISOp);
gNCDISOp->SetTitle("gNCDISOp");
gNCDISOp->SetName("gNCDISOp");
gNCDISOp->SetFillColor(kWhite);
gNCDISOp->SetLineColor(kMagenta);
gNCDISOp->SetLineWidth(2);
TGraph* gOtherOp = new TGraph(k, t, OtherOp);
gOtherOp->SetTitle("gOtherOp");
gOtherOp->SetName("gOtherOp");
gOtherOp->SetFillColor(kWhite);
gOtherOp->SetLineColor(14);
gOtherOp->SetLineWidth(2);
TGraph* gCosmicOp = new TGraph(k, t, CosmicOp);
gCosmicOp->SetTitle("gCosmicOp");
gCosmicOp->SetName("gCosmicOp");
gCosmicOp->SetFillColor(kWhite);
gCosmicOp->SetLineColor(kBlack);
gCosmicOp->SetLineWidth(2);

TCanvas *c7 = new TCanvas("c7", "OpFlash TGraphs");
c7->SetTicks();
c7->SetFillColor(kWhite);

gCCCohOp->GetXaxis()->SetTitle("Number of PE [PE]");
gCCCohOp->GetXaxis()->CenterTitle();

gCCCohOp->GetYaxis()->SetTitle("Rejection (Background) Passed (Signal) [%]");
gCCCohOp->GetYaxis()->CenterTitle();

gCCCohOp->Draw();
gCCQEOp->Draw("same");
gCCResOp->Draw("same");
gCCDISOp->Draw("same");
gNCResOp->Draw("same");
gNCDISOp->Draw("same");
gOtherOp->Draw("same");
gCosmicOp->Draw("same");

// ### Defining the legend for the plot ###
TLegend *leg7 = new TLegend();
leg7 = new TLegend(0.58,0.65,0.88,0.88);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Channel");
leg7->AddEntry(gCCCohOp,"CC-COH");
leg7->AddEntry(gCCQEOp,"CC-QE");
leg7->AddEntry(gCCResOp,"CC-Res");
leg7->AddEntry(gCCDISOp,"CC-DIS");
leg7->AddEntry(gNCResOp,"NC-Res");
leg7->AddEntry(gNCDISOp,"NC-DIS");
leg7->AddEntry(gOtherOp,"Other");
leg7->AddEntry(gCosmicOp,"Cosmic");
leg7->Draw();
// --------------------------


hCCCohConeAngle->Sumw2();
hCCQEConeAngle->Sumw2();
hCCResConeAngle->Sumw2();
hCCDISConeAngle->Sumw2();
hNCResConeAngle->Sumw2();
hNCDISConeAngle->Sumw2();
hCosmicConeAngle->Sumw2();
hOtherConeAngle->Sumw2();

hCCCohDoCA->Sumw2();
hCCQEDoCA->Sumw2();
hCCResDoCA->Sumw2();
hCCDISDoCA->Sumw2();
hNCResDoCA->Sumw2();
hNCDISDoCA->Sumw2();
hCosmicDoCA->Sumw2();
hOtherDoCA->Sumw2();

hCCCohVA->Sumw2();
hCCQEVA->Sumw2();
hCCResVA->Sumw2();
hCCDISVA->Sumw2();
hNCResVA->Sumw2();
hNCDISVA->Sumw2();
hCosmicVA->Sumw2();
hOtherVA->Sumw2();

hCCCohOp->Sumw2();
hCosmicOp->Sumw2();
hCCQEOp->Sumw2();
hCCResOp->Sumw2();
hCCDISOp->Sumw2();
hNCResOp->Sumw2();
hNCDISOp->Sumw2();
hOtherOp->Sumw2();


TCanvas *c0 = new TCanvas("c0", "Cone Angles");
c0->SetTicks();
c0->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohConeAngle->Scale(1/hCCCohConeAngle->Integral());
hCCQEConeAngle->Scale(1/hCCQEConeAngle->Integral());
hCCResConeAngle->Scale(1/hCCResConeAngle->Integral());
hCCDISConeAngle->Scale(1/hCCDISConeAngle->Integral());
hNCResConeAngle->Scale(1/hNCResConeAngle->Integral());
hNCDISConeAngle->Scale(1/hNCDISConeAngle->Integral());
hCosmicConeAngle->Scale(1/hCosmicConeAngle->Integral());
hOtherConeAngle->Scale(1/hOtherConeAngle->Integral());

hCCCohConeAngle->SetLineColor(kBlue);
hCCCohConeAngle->SetLineWidth(2);

hCCQEConeAngle->SetLineColor(kRed);
hCCQEConeAngle->SetLineWidth(2);

hCCResConeAngle->SetLineColor(kGreen);
hCCResConeAngle->SetLineWidth(2);

hCCDISConeAngle->SetLineColor(kOrange);
hCCDISConeAngle->SetLineWidth(2);

hNCResConeAngle->SetLineColor(kCyan);
hNCResConeAngle->SetLineWidth(2);

hNCDISConeAngle->SetLineColor(kMagenta);
hNCDISConeAngle->SetLineWidth(2);

hCosmicConeAngle->SetLineColor(kBlack);
hCosmicConeAngle->SetLineWidth(2);

hOtherConeAngle->SetLineColor(14);
hOtherConeAngle->SetLineWidth(2);

hCCCohConeAngle->GetXaxis()->SetTitle("Cone Angle [Degrees]");
hCCCohConeAngle->GetXaxis()->CenterTitle();

hCCCohConeAngle->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohConeAngle->GetYaxis()->CenterTitle();

hCCCohConeAngle->Draw("histo");
hCCQEConeAngle->Draw("histosame");
hCCResConeAngle->Draw("histosame");
hCCDISConeAngle->Draw("histosame");
hNCResConeAngle->Draw("histosame");
hNCDISConeAngle->Draw("histosame");
hCosmicConeAngle->Draw("histosame");
hOtherConeAngle->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg0 = new TLegend();
leg0 = new TLegend(0.58,0.65,0.88,0.88);
leg0->SetTextSize(0.04);
leg0->SetTextAlign(12);
leg0->SetFillColor(kWhite);
leg0->SetLineColor(kWhite);
leg0->SetShadowColor(kWhite);
leg0->SetHeader("Channel");
leg0->AddEntry(hCCCohConeAngle,"CC-COH");
leg0->AddEntry(hCCQEConeAngle,"CC-QE");
leg0->AddEntry(hCCResConeAngle,"CC-Res");
leg0->AddEntry(hCCDISConeAngle,"CC-DIS");
leg0->AddEntry(hNCResConeAngle,"NC-Res");
leg0->AddEntry(hNCDISConeAngle,"NC-DIS");
leg0->AddEntry(hOtherConeAngle,"Other");
leg0->AddEntry(hCosmicConeAngle,"Cosmic");
leg0->Draw();


TCanvas *c1 = new TCanvas("c1", "Distance of Closest Approach");
c1->SetTicks();
c1->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohDoCA->Scale(1/hCCCohDoCA->Integral());
hCCQEDoCA->Scale(1/hCCQEDoCA->Integral());
hCCResDoCA->Scale(1/hCCResDoCA->Integral());
hCCDISDoCA->Scale(1/hCCDISDoCA->Integral());
hNCResDoCA->Scale(1/hNCResDoCA->Integral());
hNCDISDoCA->Scale(1/hNCDISDoCA->Integral());
hCosmicDoCA->Scale(1/hCosmicDoCA->Integral());
hOtherDoCA->Scale(1/hOtherDoCA->Integral());

hCCCohDoCA->SetLineColor(kBlue);
hCCCohDoCA->SetLineWidth(2);

hCCQEDoCA->SetLineColor(kRed);
hCCQEDoCA->SetLineWidth(2);

hCCResDoCA->SetLineColor(kGreen);
hCCResDoCA->SetLineWidth(2);

hCCDISDoCA->SetLineColor(kOrange);
hCCDISDoCA->SetLineWidth(2);

hNCResDoCA->SetLineColor(kCyan);
hNCResDoCA->SetLineWidth(2);

hNCDISDoCA->SetLineColor(kMagenta);
hNCDISDoCA->SetLineWidth(2);

hCosmicDoCA->SetLineColor(kBlack);
hCosmicDoCA->SetLineWidth(2);

hOtherDoCA->SetLineColor(14);
hOtherDoCA->SetLineWidth(2);

hCCCohDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hCCCohDoCA->GetXaxis()->CenterTitle();

hCCCohDoCA->GetYaxis()->SetTitle("Normalized Events");
hCCCohDoCA->GetYaxis()->CenterTitle();

hCCCohDoCA->Draw("histo");
hCCQEDoCA->Draw("histosame");
hCCResDoCA->Draw("histosame");
hCCDISDoCA->Draw("histosame");
hNCResDoCA->Draw("histosame");
hNCDISDoCA->Draw("histosame");
hCosmicDoCA->Draw("histosame");
hOtherDoCA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg1 = new TLegend();
leg1 = new TLegend(0.58,0.65,0.88,0.88);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Channel");
leg1->AddEntry(hCCCohDoCA,"CC-COH");
leg1->AddEntry(hCCQEDoCA,"CC-QE");
leg1->AddEntry(hCCResDoCA,"CC-Res");
leg1->AddEntry(hCCDISDoCA,"CC-DIS");
leg1->AddEntry(hNCResDoCA,"NC-Res");
leg1->AddEntry(hNCDISDoCA,"NC-DIS");
leg1->AddEntry(hOtherDoCA,"Other");
leg1->AddEntry(hCosmicDoCA,"Cosmic");
leg1->Draw();


TCanvas *c2 = new TCanvas("c2", "Vertex Activity");
c2->SetTicks();
c2->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohVA->Scale(1/hCCCohVA->Integral());
hCCQEVA->Scale(1/hCCQEVA->Integral());
hCCResVA->Scale(1/hCCResVA->Integral());
hCCDISVA->Scale(1/hCCDISVA->Integral());
hNCResVA->Scale(1/hNCResVA->Integral());
hNCDISVA->Scale(1/hNCDISVA->Integral());
hCosmicVA->Scale(1/hCosmicVA->Integral());
hOtherVA->Scale(1/hOtherVA->Integral());

hCCCohVA->SetLineColor(kBlue);
hCCCohVA->SetLineWidth(2);

hCCQEVA->SetLineColor(kRed);
hCCQEVA->SetLineWidth(2);

hCCResVA->SetLineColor(kGreen);
hCCResVA->SetLineWidth(2);

hCCDISVA->SetLineColor(kOrange);
hCCDISVA->SetLineWidth(2);

hNCResVA->SetLineColor(kCyan);
hNCResVA->SetLineWidth(2);

hNCDISVA->SetLineColor(kMagenta);
hNCDISVA->SetLineWidth(2);

hCosmicVA->SetLineColor(kBlack);
hCosmicVA->SetLineWidth(2);

hOtherVA->SetLineColor(14);
hOtherVA->SetLineWidth(2);

hCCCohVA->GetXaxis()->SetTitle("Vertex Activity [MeV]");
hCCCohVA->GetXaxis()->CenterTitle();

hCCCohVA->GetYaxis()->SetTitle("Normalized Events [Number/Degree]");
hCCCohVA->GetYaxis()->CenterTitle();

hCCCohVA->Draw("histo");
hCCQEVA->Draw("histosame");
hCCResVA->Draw("histosame");
hCCDISVA->Draw("histosame");
hNCResVA->Draw("histosame");
hNCDISVA->Draw("histosame");
hCosmicVA->Draw("histosame");
hOtherVA->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg2 = new TLegend();
leg2 = new TLegend(0.58,0.65,0.88,0.88);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Channel");
leg2->AddEntry(hCCCohVA,"CC-COH");
leg2->AddEntry(hCCQEVA,"CC-QE");
leg2->AddEntry(hCCResVA,"CC-Res");
leg2->AddEntry(hCCDISVA,"CC-DIS");
leg2->AddEntry(hNCResVA,"NC-Res");
leg2->AddEntry(hNCDISVA,"NC-DIS");
leg2->AddEntry(hOtherVA,"Other");
leg2->AddEntry(hCosmicVA,"Cosmic");
leg2->Draw();


TCanvas *c3 = new TCanvas("c3", "OpFlash PE");
c3->SetTicks();
c3->SetFillColor(kWhite);

// Area normalzing the plot 
hCCCohOp->Scale(1/hCCCohOp->Integral());
hCosmicOp->Scale(1/hCosmicOp->Integral());
hCCQEOp->Scale(1/hCCQEOp->Integral());
hCCResOp->Scale(1/hCCResOp->Integral());
hCCDISOp->Scale(1/hCCDISOp->Integral());
hNCResOp->Scale(1/hNCResOp->Integral());
hNCDISOp->Scale(1/hNCDISOp->Integral());
hOtherOp->Scale(1/hOtherOp->Integral());

hCCCohOp->SetLineColor(kBlue);
hCCCohOp->SetLineWidth(2);

hCosmicOp->SetLineColor(kBlack);
hCosmicOp->SetLineWidth(2);

hCCQEOp->SetLineColor(kRed);
hCCQEOp->SetLineWidth(2);

hCCResOp->SetLineColor(kGreen);
hCCResOp->SetLineWidth(2);

hCCDISOp->SetLineColor(kOrange);
hCCDISOp->SetLineWidth(2);

hNCResOp->SetLineColor(kCyan);
hNCResOp->SetLineWidth(2);

hNCDISOp->SetLineColor(kMagenta);
hNCDISOp->SetLineWidth(2);

hOtherOp->SetLineColor(14);
hOtherOp->SetLineWidth(2);

hCosmicOp->GetXaxis()->SetTitle("Number of PE [Number]");
hCosmicOp->GetXaxis()->CenterTitle();

hCosmicOp->GetYaxis()->SetTitle("Normalized Events [Number]");
hCosmicOp->GetYaxis()->CenterTitle();

hCosmicOp->Draw("histo");
hOtherOp->Draw("histosame");
hCCQEOp->Draw("histosame");
hCCResOp->Draw("histosame");
hCCDISOp->Draw("histosame");
hNCResOp->Draw("histosame");
hNCDISOp->Draw("histosame");
hCCCohOp->Draw("histosame");


// ### Defining the legend for the plot ###
TLegend *leg3 = new TLegend();
leg3 = new TLegend(0.58,0.65,0.88,0.88);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Channel");
leg3->AddEntry(hCCCohOp,"CC-COH");
leg3->AddEntry(hCCQEOp,"CC-QE");
leg3->AddEntry(hCCResOp,"CC-Res");
leg3->AddEntry(hCCDISOp,"CC-DIS");
leg3->AddEntry(hNCResOp,"NC-Res");
leg3->AddEntry(hNCDISOp,"NC-DIS");
leg3->AddEntry(hOtherOp,"Other");
leg3->AddEntry(hCosmicOp,"Cosmic");
leg3->Draw();



TCanvas *c8 = new TCanvas("c8", "Cone Angle Purity and Efficiency");
c8->SetTicks();
c8->SetFillColor(kWhite);

gConeAngleEff->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gConeAngleEff->GetXaxis()->CenterTitle();

gConeAngleEff->GetYaxis()->SetTitle("Purity and Efficiency");
gConeAngleEff->GetYaxis()->CenterTitle();

gConeAngleEff->Draw();
gConeAnglePurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg8 = new TLegend();
leg8 = new TLegend(0.58,0.65,0.88,0.88);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Cone Angle");
leg8->AddEntry(gConeAngleEff,"Efficiency");
leg8->AddEntry(gConeAnglePurity,"Purity");
leg8->Draw();



TCanvas *c9 = new TCanvas("c9", "DoCA Purity and Efficiency");
c9->SetTicks();
c9->SetFillColor(kWhite);

gDoCAEff->GetXaxis()->SetTitle("DoCA [cm]");
gDoCAEff->GetXaxis()->CenterTitle();

gDoCAEff->GetYaxis()->SetTitle("Purity and Efficiency");
gDoCAEff->GetYaxis()->CenterTitle();

gDoCAEff->Draw();
gDoCAPurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg9 = new TLegend();
leg9 = new TLegend(0.58,0.65,0.88,0.88);
leg9->SetTextSize(0.04);
leg9->SetTextAlign(12);
leg9->SetFillColor(kWhite);
leg9->SetLineColor(kWhite);
leg9->SetShadowColor(kWhite);
leg9->SetHeader("DoCA");
leg9->AddEntry(gDoCAEff,"Efficiency");
leg9->AddEntry(gDoCAPurity,"Purity");
leg9->Draw();



TCanvas *c10 = new TCanvas("c10", "Vertex Activity Purity and Efficiency");
c10->SetTicks();
c10->SetFillColor(kWhite);

gVAEff->GetXaxis()->SetTitle("Vertex Activity [MeV]");
gVAEff->GetXaxis()->CenterTitle();

gVAEff->GetYaxis()->SetTitle("Purity and Efficiency");
gVAEff->GetYaxis()->CenterTitle();

gVAEff->Draw();
gVAPurity->Draw("same");


// ### Defining the legend for the plot ###
TLegend *leg10 = new TLegend();
leg10 = new TLegend(0.58,0.65,0.88,0.88);
leg10->SetTextSize(0.04);
leg10->SetTextAlign(12);
leg10->SetFillColor(kWhite);
leg10->SetLineColor(kWhite);
leg10->SetShadowColor(kWhite);
leg10->SetHeader("Vertex Activity");
leg10->AddEntry(gVAEff,"Efficiency");
leg10->AddEntry(gVAPurity,"Purity");
leg10->Draw();



TCanvas *c11 = new TCanvas("c11", "Cosmic Distance of Closest Approach");
c11->SetTicks();
c11->SetFillColor(kWhite);

hCosmicDoCA->GetXaxis()->SetTitle("Distance of Closest Approach [cm]");
hCosmicDoCA->GetXaxis()->CenterTitle();

hCosmicDoCA->GetYaxis()->SetTitle("Normalized Events");
hCosmicDoCA->GetYaxis()->CenterTitle();

hCosmicDoCA->Draw("histo");



TCanvas *c12 = new TCanvas("c12", "Cone Angle Purity");
c12->SetTicks();
c12->SetFillColor(kWhite);

gConeAnglePurity->GetXaxis()->SetTitle("Cone Angle [Degrees]");
gConeAnglePurity->GetXaxis()->CenterTitle();

gConeAnglePurity->GetYaxis()->SetTitle("Purity");
gConeAnglePurity->GetYaxis()->CenterTitle();

gConeAnglePurity->Draw();



TCanvas *c13 = new TCanvas("c13", "DoCA Purity");
c13->SetTicks();
c13->SetFillColor(kWhite);

gDoCAPurity->GetXaxis()->SetTitle("DoCA [cm]");
gDoCAPurity->GetXaxis()->CenterTitle();

gDoCAPurity->GetYaxis()->SetTitle("Purity");
gDoCAPurity->GetYaxis()->CenterTitle();

gDoCAPurity->Draw();



TCanvas *c14 = new TCanvas("c14", "Vertex Activity Purity");
c14->SetTicks();
c14->SetFillColor(kWhite);

gVAPurity->GetXaxis()->SetTitle("Vertex Activity [MeV]");
gVAPurity->GetXaxis()->CenterTitle();

gVAPurity->GetYaxis()->SetTitle("Purity");
gVAPurity->GetYaxis()->CenterTitle();

gVAPurity->Draw();
}
