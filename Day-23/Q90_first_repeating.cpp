#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    for(int i=0;i<str.length();i++) //loop to access each character of the string
    {
        int freq=0;
        for(int j=0;j<str.length();j++) //loop to compare each character with every character of the string
        {
            if(str[i]==str[j])
            {
                freq++;
            }
        }
        if(freq>1) //if character occurs more than once, it is a repeating character
        {
            cout<<"first repeating character in the entered string is: '"<<str[i]<<"'"<<endl;
            return 0;
        }
    }
    cout<<"no repeating characters found in the entered string"<<endl; //if all characters occur only once, print statement
    return 0;
}