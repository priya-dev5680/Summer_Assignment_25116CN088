#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,rev_str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    for(int i=0;i<str.length();i++) //running loop upto length of entered string
    {
        rev_str+=str[str.length()-1-i]; //appending characters of entered string backwards to rev_str
    }

    if(str==rev_str) //comparing entered string with its reverse
    {
        cout<<"entered string is a palindrome"<<endl;
    }
    else{
        cout<<"entered string is NOT a palindrome"<<endl;
    }
    return 0;
}