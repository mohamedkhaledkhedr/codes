#include <iostream>

using namespace std;

int main()
{
        int exercises;
    float score,total,sum=0,sum_total=0;
    cout<<"how many exercises to be input ?";
    cin>>exercises;
    for(int i=1;i<=exercises;i++){

    cout<<"score received for exercise "<<i<<":";
    cin>>score;
    cout<<"total points for exercise "<<i<<":";
    cin>>total;
    sum+=score;
    sum_total+=total;

    }


    cout<<" your total is  "<<sum<<" out of "<<sum_total<<" or "<<((sum/sum_total)*100)<<"%\n";

    return 0;
}
