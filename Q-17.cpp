#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;


    if(ch >= 'A' && ch <= 'Z')
    
        cout<<"' is uppercase alphabet.";
    
    else (ch >= 'a' && ch <= 'z')
    
        cout << "is lowercase alphabet.";
    
    
    return 0;
}
