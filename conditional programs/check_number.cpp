//C++ program to check number is positive, negative or zero

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter value of integer: ";
    cin>> num;

    if(num>0)
    {
        cout << " The entered number is positive.";
    }

    else if(num<0)
    {
        cout << " The entered number is negative.";
    }

    else{
        cout << " The entered number is zero.";
    }
    return 0;
}
 