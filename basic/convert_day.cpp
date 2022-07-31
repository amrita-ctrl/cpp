#include<iostream>

using namespace std;

int main()
{
    int year,day,week;

    cout<<"Enter No. of days :: ";
    cin>>day;

    year=day/365;
    day=day%365;
    week=day/7;
    day=day%7;

    cout<<"\nNo. of Years: : "<<year<<"\nNo. of Weeks :: "<<week<<"\nNo. of Days :: "<<day<<"\n";

    return 0;
}