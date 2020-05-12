#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int can[28], voter=0, vote=0, cand1=0, cand2=0, cand3=0, cand4=0, cand5=0, cand6=0, cand7=0, cand8=0, cand9=0, cand10=0, cand11=0, cand12=0, cand13=0, cand14=0, cand15=0, cand16=0, cand17=0, cand18=0, cand19=0, cand20=0, cand21=0, cand22=0, cand23=0, cand24=0, cand25=0, cand26=0,cand27=0, cand28=0;
char name[30][30];
cout<<"List of Candidates:-"<<endl;
    cout<<"01. Agarwal Ravi Shankar Mr."<<endl;
    cout<<"02. Banerjee Arindam Mr."<<endl;
    cout<<"03. Basu Korak Mrs."<<endl;
    cout<<"04. Bhaduri Debasish Mr."<<endl;
    cout<<"05. Bhattacharjea Roma Dr."<<endl;
    cout<<"06. Bhunia Dines Chandra Mr."<<endl;
    cout<<"07. Biswas Surojit Deepak Mr."<<endl;
    cout<<"08. Chakrabarti Priyalal Mr."<<endl;
    cout<<"09. Chatterjee Anuradha Mrs."<<endl;
    cout<<"10. Chaturvedi Brij Kishore Mr."<<endl;
    cout<<"11. Chaudhuri Biswajit Mr."<<endl;
    cout<<"12. Daspal Sibsankar Mr."<<endl;
    cout<<"13. Datta Sadhan Dr."<<endl;
    cout<<"14. Ghosal Twisha Mrs."<<endl;
    cout<<"15. Ghosh Falguni Mr."<<endl;
    cout<<"16. Jhunjhunwala Pooja Mrs."<<endl;
    cout<<"17. Kar Debnarayan Mr."<<endl;
    cout<<"18. Kohli Satish Kumar Mr."<<endl;
    cout<<"19. Magotra Rashmi Ms."<<endl;
    cout<<"20. Mehta Naveen Mr."<<endl;
    cout<<"21. Mitra Papiya Mrs."<<endl;
    cout<<"22. Pal Gurudas Mr."<<endl;
    cout<<"23. Patel Pritesh Manubhai Mr."<<endl;
    cout<<"24. Patodia Ramesh Kumar Mr."<<endl;
    cout<<"25. Saha Dhiman Mr."<<endl;
    cout<<"26. Sengupta Shamindra Nath Mr."<<endl;
    cout<<"27. Sinha Chandra Mrs. "<<endl;
    cout<<"28. Venkatesh N R Mr."<<endl;
cout<<"Enter the number of voters: ";
cin>>voter;
for(int t=0; t<voter; t++)
{
cout<<endl<<"Enter your votes please (Enter zero after you complete your voting):"<<endl;
for(int v=0; v<24; v++)
{
cin>>vote;
switch(vote)
{
case 1:  cout<<"Voted for Agarwal Ravi Shankar Mr."<<endl; cand1++;
break;
case 2:  cout<<"Voted for Banerjee Arindam Mr."<<endl; cand2++;
break;
case 3:  cout<<"Voted for Basu Korak Mrs."<<endl; cand3++;
break;
case 4:  cout<<"Voted for Bhaduri Debasish Mr."<<endl; cand4++;
break;
case 5:  cout<<"Voted for Bhattacharjea Roma Dr."<<endl; cand5++;
break;
case 6:  cout<<"Voted for Bhunia Dines Chandra Mr."<<endl; cand6++;
break;
case 7:  cout<<"Voted for Biswas Surojit Deepak Mr."<<endl; cand7++;
break;
case 8:  cout<<"Voted for Chakrabarti Priyalal Mr."<<endl; cand8++;
break;
case 9:  cout<<"Voted for Chatterjee Anuradha Mrs."<<endl; cand9++;
break;
case 10: cout<<"Voted for Chaturvedi Brij Kishore Mr."<<endl; cand10++;
break;
case 11: cout<<"Voted for Chaudhuri Biswajit Mr."<<endl; cand11++;
break;
case 12: cout<<"Voted for Daspal Sibsankar Mr."<<endl; cand12++;
break;
case 13: cout<<"Voted for Datta Sadhan Dr."<<endl; cand13++;
break;
case 14: cout<<"Voted for Ghosal Twisha Mrs."<<endl; cand14++;
break;
case 15: cout<<"Voted for Ghosh Falguni Mr."<<endl; cand15++;
break;
case 16: cout<<"Voted for Jhunjhunwala Pooja Mrs."<<endl; cand16++;
break;
case 17: cout<<"Voted for Kar Debnarayan Mr."<<endl; cand17++;
break;
case 18: cout<<"Voted for Kohli Satish Kumar Mr."<<endl; cand18++;
break;
case 19: cout<<"Voted for Magotra Rashmi Ms."<<endl; cand19++;
break;
case 20: cout<<"Voted for Mehta Naveen Mr."<<endl; cand20++;
break;
case 21: cout<<"Voted for Mitra Papiya Mrs."<<endl; cand21++;
break;
case 22: cout<<"Voted for Pal Gurudas Mr."<<endl; cand22++;
break;
case 23: cout<<"Voted for Patel Pritesh Manubhai Mr."<<endl; cand23++;
break;
case 24: cout<<"Voted for Patodia Ramesh Kumar Mr."<<endl; cand24++;
break;
case 25: cout<<"Voted for Saha Dhiman Mr."<<endl; cand25++;
break;
case 26: cout<<"Voted for Sengupta Shamindra Nath Mr."<<endl; cand26++;
break;
case 27: cout<<"Voted for Sinha Chandra Mrs."<<endl; cand27++;
break;
case 28: cout<<"Voted for Venkatesh N R Mr."<<endl; cand28++;
break;
default :cout<<"You have completed voting, THANK YOU!"<<endl;
}
}
}
cout<<endl<<endl;
cout<<"Agarwal Ravi Shankar Mr.:      "<<cand1<<"    ";
cout<<"Banerjee Arindam Mr.:          "<<cand2<<endl;
cout<<"Basu Korak Mrs.:               "<<cand3<<"    ";
cout<<"Bhaduri Debasish Mr.:          "<<cand4<<endl;
cout<<"Bhattacharjea Roma Dr.:        "<<cand5<<"    ";
cout<<"Bhunia Dinesh Chandra Mr.:     "<<cand6<<endl;
cout<<"Biswas Surojit Deepak Mr.:     "<<cand7<<"    ";
cout<<"Chakrabarti Priyalal Mr.:      "<<cand8<<endl;
cout<<"Chatterjee Anuradha Mrs.:      "<<cand9<<"    ";
cout<<"Chaturvedi Brij Kishore Mr.:   "<<cand10<<endl;
cout<<"Chaudhuri Biswajit Mr.:        "<<cand11<<"    ";
cout<<"Daspal Sibsankar Mr.:          "<<cand12<<endl;
cout<<"Datta Sadhan Dr. :             "<<cand13<<"    ";
cout<<"Ghosal Twisha Mrs.:            "<<cand14<<endl;
cout<<"Ghosh Falguni Mr.:             "<<cand15<<"    ";
cout<<"Jhunjhunwala Pooja Mrs.:       "<<cand16<<endl;
cout<<"Kar Debnarayan Mr.:            "<<cand17<<"    ";
cout<<"Kohli Satish Kumar Mr.:        "<<cand18<<endl;
cout<<"Magotra Rashmi Ms.:            "<<cand19<<"    ";
cout<<"Mehta Naveen Mr.:              "<<cand20<<endl;
cout<<"Mitra Papiya Mrs. :            "<<cand21<<"    ";
cout<<"Pal Gurudas Mr.:               "<<cand22<<endl;
cout<<"Patel Pritesh Manubhai Mr.:    "<<cand23<<"    ";
cout<<"Patodia Ramesh Kumar Mr.:      "<<cand24<<endl;
cout<<"Saha Dhiman Mr.:               "<<cand25<<"    ";
cout<<"Sengupta Shamindra Nath Mr.:   "<<cand26<<endl;
cout<<"Sinha Chandra Mrs.:            "<<cand27<<"    ";
cout<<"Venkatesh N R Mr.:             "<<cand28<<endl;
getch();
}