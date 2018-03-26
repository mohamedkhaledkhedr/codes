#include <iostream>

using namespace std;

int main()
{ int fahrenheit;
    int celsius;
    celsius = 100;
    while (celsius >= 0)
    {
          fahrenheit = ((celsius - 32) * 5 / 9);
    cout<<celsius<<" degrees C= "<<fahrenheit <<" degrees F\n";
          celsius--;
    }
    return 0;
}
