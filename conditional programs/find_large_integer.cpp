//C++ Program to Find the Largest Number using Conditional Operator.

#include <iostream>
using namespace std;
int num1, num2 , num3;
int main()
{
    
    cout<<"Enter first number:";
    cin>>num1;

    cout<<"Enter second number:";
    cin>>num2;

    cout<<"Enter third number:";
    cin>>num3;

  int largest;
  largest=num1>num2 ? (num1>num3 ? num1 : num3) : (num2>num3 ? num2 : num3);


  cout<<"largest number is "<<largest;

    return 0;
}