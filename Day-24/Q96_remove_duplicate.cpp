#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    string temp="";
    for(int i=0;i<str.length();i++) //loop to access each character of the string
    {
        int flag=0;
        for(int j=0;j<temp.length();j++) //loop to check if a character in str exists in temp until now
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag) //if character does not exist in temp, append it to temp
        {
            temp+=str[i];
        }
    }
    str=temp; //replacing original string with string with all duplicates removed
    cout<<"the string with all duplicate characters removed is: "<<str<<endl;
    return 0;
}