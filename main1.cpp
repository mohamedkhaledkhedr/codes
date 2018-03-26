#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //input of high ,wight and age of the user
    float kg=0; //weight
    float h=0; //high
    float age=0; //age
    float pound;//convert of weight
    float inch ;//convert of high
    float bmr ;// result of calories you need
    float c=0 ;//end result for the number of chocolate
    string x="";//male or female
    //the input
    cout <<"enter your wight in kg"<<endl ;
    cin>>kg;
    pound=kg*2.2;
    cout<<"enter your hight in cm" <<endl ;
    cin>> h ;
    inch =h/2.54;
    cout<<"enter your age " <<endl ;
    cin >> age ;
    //male or female
    cout <<"if you a male press m or M" <<endl;
    cout <<"if you female press f or F"<<endl ;
    cin>>x ;
    // result of calories you need
    if (x=="m"||x=="M"){bmr=66 +(6.3*pound) + (12.9* inch)-(6.8 * age );    }
    if (x=="f"||x=="F"){bmr=655 +(4.3*pound) + (4.7* inch)-(4.7 * age );    }
    cout <<"the calories you need"<<endl;
    cout <<bmr<<endl;
    c=bmr/230;
    //number of chocolate you need
    cout <<"the number of chocolate bars that should be consumed "<<endl;
    cout<<c<<endl;
}
