#include<iostream>
#include<TRandom3.h>
#include<TH1F.h>
#include<TCanvas.h>
using namespace std;
int main()
{
TRandom3 generator(0);
TCanvas* can = new TCanvas();
TH1F* Histogram  = new TH1F("Histogram", ";;", 25, 0., 250.);
for(int i=0;i<1000;i++)
{Histogram->Fill(generator.Exp(12.));
}
Histogram->Draw();
Histogram->Fit("expo");
can->Print("decay.jpg");

}

