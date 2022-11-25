#include<iostream>
using namespace std;
int main()
{
	int salary=34000;
	float bonus;
	 int grade=7;
	if (grade>15)
	bonus=salary*50.0/100.0;
	else
	bonus=salary*25.0/100.0;
	cout<<"Your salary is Rs:";
	cout<<salary;
	return 0;
}
