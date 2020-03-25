{
   gStyle->SetMarkerStyle(33);
   gStyle->SetLabelFont(22,"XYZ");
   gStyle->SetTitleFont(22,"XYZ");
   gStyle->SetLabelSize(0.05,"XYZ");
   gStyle->SetTitleSize(0.05,"XYZ");

   TGraph g1("lnjsvssqrtvar02100.txt");
  // TGraph g2("relcap.txt", "%lg %*lg %lg");
   //TGraph g3("relcap.txt", "%lg %*lg %*lg %lg");

   g1.SetLineColor(9);
  // g2.SetLineColor(8);
   //g3.SetLineColor(2);

   g1.SetMarkerColor(9);
   //g2.SetMarkerColor(8);
   //g3.SetMarkerColor(2);

   g1.SetMarkerStyle(21);
   //g2.SetMarkerStyle(22);
  // g3.SetMarkerStyle(23);

   g1.SetTitle(";1/2KT [eV.T]; Zero Bias Barrier Height [eV]");
   g1.Draw("alp");

   gPad->SetTopMargin(0.01);
   gPad->SetRightMargin(0.01);
   gPad->SetLeftMargin(0.12);
   gPad->SetGridy(); gPad->SetGridx();

   //   g1.GetYaxis()->SetRangeUser(-15.5,-15.0);
   // g1.GetXaxis()->SetRangeUser(0,8);
   g1.GetXaxis()->CenterTitle();
   g1.GetYaxis()->CenterTitle();
   g1.GetYaxis()->SetTitleOffset(1.2);

   //g2.Draw("lp");
   //g3.Draw("lp");

   //TMarker dRL(400,2970.5,4);
   //dRL.SetMarkerSize(2);
   //dRL.SetMarkerColor(2);
   //dRL.Draw();

   //TMarker dR02(700,2270.5,4);
   //dR02.SetMarkerSize(2);
   //dR02.SetMarkerColor(8);
   //dR02.Draw();

   //TMarker dMark(400,2740.5,4);
   //dMark.SetMarkerSize(2);
   //dMark.SetMarkerColor(9);
   //dMark.Draw();

   //TLegend leg(0.5,0.7,0.95,0.96);
   //leg.SetBorderSize(1);
   //leg.SetTextFont(22); leg.SetTextSize(0.05);
   //leg.SetNColumns(2);
   //leg.AddEntry(&g1,"USD-8-4-15","lp");
   //leg.AddEntry(&dMark,"V_{fd}=400V","p");
  // leg.AddEntry(&g2,"USD-R02","lp");
  // leg.AddEntry(&dR02,"V_{fd}=700V","p");
   //leg.AddEntry(&g3,"USD-RL","lp");
   //leg.AddEntry(&dRL,"V_{fd}=400V","p");
   //leg.Draw();

   //gPad->Print("CV.pdf");
}
