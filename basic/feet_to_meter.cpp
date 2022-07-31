#include<iostream>
using namespace std;

int main()
{
    float num;
    float meter;

    cout<<"Enter the value in feet:";
    cin>>num;

     
     //1 feet = 0.3048 meter  (divide by 3.281)

     meter=num/3.281;

     cout<<"The value of num in meter is:"<<meter<<" meter";
}