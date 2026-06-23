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
        if(freq==1) //if the character occurs only once in the string, it is non-repeating
        {
            cout<<"first non-repeating character in the entered string is: '"<<str[i]<<"'"<<endl;
            return 0;
        }
    }
    cout<<"no non-repeating characters found in the entered string"<<endl; //if all charcters occur more than once, print statement
    return 0;
}