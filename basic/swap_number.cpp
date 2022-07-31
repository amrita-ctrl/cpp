#include<iostream>
using namespace std;

int num1;
int num2;
int temp;


int main()
{
 cout<<"Enter value of first number:";
 cin>>num1;

 cout<<"Enter value of second number:";
 cin>>num2;

 temp=num1;  //store value of num 1 in temp
 num1=num2;
 num2=temp;

 cout<<"Swap Numbers are:";
 cout<<endl;
 cout<<num1<<" and "<<num2;

 return 0; 
}