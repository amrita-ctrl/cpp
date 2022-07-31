//C++ Program to check whether an integer entered by the user is odd or even

#include <iostream>
using namespace std;
int num;
int main()
{
    
    cout<<"Enter a number:";
    cin>>num;

    if(num%2==0)
    {
       cout<<"Integer entered by user is even";
    }

    else{
        cout<<"Integer entered by user is odd";
    }
    return 0;
}