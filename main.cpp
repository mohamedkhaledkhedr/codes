#include <iostream>

using namespace std;

int main()
{
     //convert your birthday to roman numeral
    cout << "welcome"<< endl;
    cout<< "this application to convert the year in arabic to roman numeral "<<endl;
    int date =0 ;// input of date
    int x =0 ;//the current number
    int r=0;//to repeat program
    string roman="";

    for (int i=0 ;i<1000;++i){
    cout <<"enter the date between 1000 to 3000"<<endl;
    cin>>date;
    if (date<1000 || date>3000){
        cout <<"wrong input"<<endl;
        continue;}

    else//for thousend number
        {x=date/1000;
         date=date%1000;
         for (int y=0;y<x;y++)
            {roman=roman+"M";}
         //hundred number
         x=date/100;
         date=date%100;
         if (x==0)
         {roman=roman+"";}
         else if (x==1)
         {roman=roman+"C";}
         else if (x==2)
         {roman=roman+"CC";}
         else if (x==3)
         {roman=roman+"CCC";}
         else if (x==4)
         {roman=roman+"CD";}
         else if (x==5)
         {roman=roman+"D";}
         else if (x==6)
         {roman=roman+"DC";}
          else if (x==7)
         {roman=roman+"DCC";}
         else if (x==8)
         {roman=roman+"DCCC";}
         else if (x==9)
         {roman=roman+"CM";}
        //ten number
         x=date/10;
         date=date%10;
         if (x==0)
         {roman=roman+"";}
         else if (x==1)
         {roman=roman+"X";}
         else if (x==2)
         {roman=x+"XX";}
         else if (x==3)
         {roman=roman+"XXX";}
         else if (x==4)
         {roman=roman+"XL";}
         else if (x==5)
         {roman=roman+"L";}
         else if (x==6)
         {roman=roman+"LX";}
          else if (x==7)
         {roman=roman+"LXX";}
         else if (x==8)
         {roman=roman+"LXXX";}
         else if (x==9)
         {roman=roman+"XC";}
         //LAST NUMBER

         if (date==0)
         {roman=roman+"";}
         else if (date==1)
         {roman=roman+"I";}
         else if (date==2)
         {roman=roman+"II";}
         else if (date==3)
         {roman=roman+"III";}
         else if (date==4)
         {roman=roman+"IV";}
         else if (date==5)
         {roman=roman+"V";}
         else if (date==6)
         {roman=roman+"VI";}
          else if (date==7)
         {roman=roman+"VII";}
         else if (date==8)
         {roman=roman+"VIII";}
         else if (date==9)
         {roman=roman+"IX";}
          cout<<roman<<endl;
          cout <<"if you want to continue press 1"<<endl;
          cin>>r;
          if (r==1){
                roman="";
                continue;}

}

return 0;
}
}
