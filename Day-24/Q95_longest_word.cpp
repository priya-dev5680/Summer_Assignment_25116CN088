#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line1;
    cout<<"enter a line: ";
    getline(cin,line1); //function to read entire line as "cin>>str" will read a single word

    int max_len=0;
    string longest="",current="";
    for(int i=0;i<line1.length();i++) //loop to iterate through the string
    {
        if(i<line1.length() && line1[i]!=' ') //if no spaces are encountered i.e we are evaluating a single word
        {
            current+=line1[i]; //appending each word in temporary string
        }
        else{ //after a word ends
            if(current.length()>max_len) //comparing length of current word with maximum length
            {
                max_len=current.length();
                longest=current;
            }
            current=""; //resetting temporary string for next word
        }
    }
    cout<<"the longest word in the entered string is: "<<longest<<endl;
    cout<<"the length of "<<longest<<" = "<<max_len<<endl;
    return 0;
}