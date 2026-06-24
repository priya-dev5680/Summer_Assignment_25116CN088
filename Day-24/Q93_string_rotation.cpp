#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"enter a string: ";
    cin>>str1;
    cout<<"enter the string to be checked: ";
    cin>>str2;
    if(str1.length()!=str2.length()) //rotation can be checked only for strings of same length
    {
        cout<<"comparision not possible due to different lengths";
        return 0;
    }

    string temp=str1+str1; //making a concatenated string
    for(int i=0;i<str1.length();i++) //loop to access characters of concatenated string
    {
        int flag=1;
        for(int j=0;j<str2.length();j++) //loop to check if second string exists in the concatenated string
        {
            if(str2[j]!=temp[i+j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"given strings are rotations of each other"<<endl;
            return 0;
        }
    }
    cout<<"given strings are NOT rotations of each other"<<endl; //if str2 does not exist in temp, print statement
    return 0;
}