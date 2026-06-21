#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    for(int i=0;i<str.length();i++) //running loop upto length of entered string
    {
        if(str[i]>='a' && str[i]<='z') //checking lowercase letters
        {
            str[i]-=32; //assigning ascii value of uppercase letters to lowercase letters
        }
    }
    cout<<"entered string in uppercase is: "<<str<<endl;
    return 0;
}