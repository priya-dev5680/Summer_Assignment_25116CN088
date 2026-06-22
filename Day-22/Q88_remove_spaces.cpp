#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, space_rem="";
    cout<<"enter a sentence: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ') //skipping if a space is encountered
        {
            continue;
        }
        else{
            space_rem+=str[i]; //appending characters to resultant string otherwise
        }
    }

    cout<<"the entered string after removing spaces is: "<<space_rem<<endl;
    return 0;
}