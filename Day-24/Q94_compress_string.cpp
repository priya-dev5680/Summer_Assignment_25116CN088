#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    cout<<"enter a string: ";
    getline(cin,str1); //function to read entire line as "cin>>str" will read a single word

    string temp="";
    for(int i=0;i<str1.length();i++) //loop to access each character of the string
    {
        int freq=1;
        while(i+1<str1.length() && str1[i]==str1[i+1]) //while consecutive characters are same
        {
            freq++;
            i++; //incrementing value of i so the outer loop skips duplicate characters
        }
        temp+=str1[i]; //appending characters to temporary string
        if(freq>1)
        {
            temp+=to_string(freq); //appending frequency of each character occuring more than once as string
        }
    }
    str1=temp; //replacing original string with compressed string
    cout<<"the compressed string is: "<<str1<<endl;
    return 0;
}