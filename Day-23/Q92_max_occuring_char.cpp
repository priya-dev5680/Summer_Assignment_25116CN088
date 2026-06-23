#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    char max_freq=str[0];
    int max=0;
    for(int i=0;i<str.length();i++) //loop to access each character of the string
    {
        int freq=0;
        for(int j=0;j<str.length();j++) //loop to compare each character with every character of the string
        {
            if(str[i]==str[j])
            {
                freq++; //obtaining frequency of each character
            }
        }
        if(freq>max) //comparing with highest frequency
        {
            max=freq;
            max_freq=str[i];
        }
    }
    cout<<"the maximum occuring character in the entered string is: '"<<max_freq<<"'"<<endl;
    cout<<"the frequency of '"<<max_freq<<"' is: "<<max<<endl;
    return 0;
}