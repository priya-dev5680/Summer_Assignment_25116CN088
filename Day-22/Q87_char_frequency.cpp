#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    char target;
    cout<<"enter the character you want to find frequency of: ";
    cin>>target;

    int count=0;
    for(int i=0;i<str.length();i++)
    {
        target=tolower(target);
        if(tolower(str[i])==target) //converting both target character and character being checked to lowercase
        {                           //to handle case insensitivity
            count++;
        }
    }

    cout<<"the frequency of character '"<<target<<"' = "<<count<<endl;
    return 0;
}