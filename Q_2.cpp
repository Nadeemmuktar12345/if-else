#include<iostream>
#include<stdio.h>
using namespace std;
 main()
{
int number;
cout<<" Enter a number : ";
cin>>number;

if(number<0)
{
cout<<"Number is negative"<<endl;
}
if(number>0)
{
cout<<"Number is positive"<<endl;
}
if(number==0)
{
cout<<"0 is not positive and not negative"<<endl;
}
else
{
cout<<"Invalid Number"<<endl;
}
return 0;
}
