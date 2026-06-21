#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    int len=0;
    while(str[len]!='\0') //run loop until null terminator is encountered
    {
        len++; 
    }
    cout<<"the length of entered string is: "<<len<<endl;
    return 0;
}