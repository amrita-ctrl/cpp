#include<iostream>
#define PI 3.141
using namespace std;

int main()
{
    float  area,radius;

    cout << "Enter radius of circle: ";
    cin >> radius;
     
    area=PI*radius*radius;

    cout<<"Area is:"<<area;
    return 0;
}

