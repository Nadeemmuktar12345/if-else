#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Input The Character You want to Check : ";
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<ch<<" is Alphabet ";
	}
	else 
	if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is Alphabet ";
	}
	else
	{
		cout<<ch<<" is Not Alphabet ";
	}
	return 0;
}

