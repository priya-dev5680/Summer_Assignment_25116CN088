#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"enter first string: ";
    cin>>str1;
    cout<<"enter second string: ";
    cin>>str2;
    if(str1.length() != str2.length()) //anagram strings can only be of same length 
    {
        cout<<"strings of different lengths cannot be checked for anagram";
        return 0;
    }

    for(int i=0;i<str1.length()-1;i++) //nested loop to alphabetically sort the first string
    {
        for(int j=0;j<str1.length()-1;j++)
        {
            if(str1[j]>str1[j+1])
            {
                char temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<str2.length()-1;i++) //nested loop to alphabetically sort the second string
    {
        for(int j=0;j<str2.length()-1;j++)
        {
            if(str2[j]>str2[j+1])
            {
                char temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;
            }
        }
    }

    if(str1==str2) //if all charaters in both strings are same, the are anagram strings
    {
        cout<<"entered string is an anagram"<<endl;
    }
    else{
        cout<<"entered string is NOT an anagram"<<endl;
    }
    
    return 0;
}