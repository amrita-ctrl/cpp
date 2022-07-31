
#include <iostream>
using namespace std;
int main()
{
    float celcius , farenheit;
    //(1°C × 9/5) + 32 = 33.8°F
    cout<<"Enter temprature in celcius:";
    cin>>celcius;


    farenheit= (celcius * 9/5) + 32;

    cout<<"Temprature in Farenheit: "<<farenheit;

    return 0;
}