#include <iostream>
using namespace std;

int num1;
int num2;

int main()
{
  int add , sub, multiply , mod;
  float divide;

  
   

   cout<<"Enter the value of First number:";
   cin>>num1;
   
   cout<<"Enter the value of Second number:";
   cin>>num2;

  add=num1+ num2;
  sub=num1 - num2;
  mod=num1 % num2;
  divide=(float)num1/num2;
  multiply=num1*num2;


  cout<<"All Arthmetic Operations:"<<endl<<endl;
  cout<<"Addition of num1 and num2 "<<add<<endl;
  cout<<"Substraction of num1 and num2 "<<sub<<endl;
  cout<<"division of num1 and num2 "<<divide<<endl;
  cout<<"Modulus of num1 and num2 "<<mod<<endl;
  cout<<"Product of num1 and num2 "<<multiply<<endl;

  return 0;

  
}