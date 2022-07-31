
#include <iostream>
using namespace std;
int main()
{
    float celcius , farenheit;
    //(1°C × 9/5) + 32 = 33.8°F
    cout<<"Enter temprature in farenheit:";
    cin>>farenheit;


    celcius= (farenheit -32)*5/9;

    cout<<"Temprature in celcius: "<<celcius;

    return 0;
}