#include<iostream>
using namespace std;
int main()
{
	int hour;
	cout<<"enter time to check if pm or am?";
	cin>>hour;
	if(hour>=12&&hour<24)
	cout<<"Time is not AM, its PM"<<endl;
 	else
{
   cout<<"it is am"<<endl;
}
}
