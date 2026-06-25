#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"enter first string: ";
    getline(cin,str1); //function to read entire line as "cin>>str" will read a single word
    cout<<"enter second string: ";
    getline(cin,str2); //function to read entire line as "cin>>str" will read a single word

    string stored=""; //string to keep record of already processed characters
    cout<<"common character in the entered strings  are: ";
    for(int i=0;i<str1.length();i++)
    {
        if(stored.find(str1[i])!=string::npos) //to avoid duplicate characters
        {
            continue;
        }
        for(int j=0;j<str2.length();j++)
        {
            if(tolower(str1[i])==tolower(str2[j]) && str1[i]!=' ') //checking for common characters
            {
                cout<<str1[i]<<"    "; //printing common characters
                stored+=str1[i];
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}