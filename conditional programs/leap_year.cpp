//C++ program to check leap year using conditional operator


#include <iostream>
using namespace std;
int year;
int main()
{
    cout<<"\nEnter year: ";
	cin>>year;

    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        cout<<year<<" is a Leap year."<<endl;
    }
	else
		cout<<year<<" is not a Leap year."<<endl;
   
    

    return 0;
}