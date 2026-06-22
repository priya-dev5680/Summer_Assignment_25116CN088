#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a sentence: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    int word=0,flag=0;
    for(int i=0;i<str.length();i++) //running loop till the end of the sentence
    {
        if(str[i]!=' ' && str[i]!='.') 
        {
            if(!flag) //to avoid counting multiple spaces or full stops
            {
                word++;
                flag=1;
            }
        }
        else{
            flag=0;
        }
    }

    cout<<"number of words in entered sentence = "<<word<<endl;
    return 0;
}