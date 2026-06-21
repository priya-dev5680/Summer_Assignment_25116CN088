#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); //function to read entire line as "cin>>str" will read a single word

    int vowel=0,consonant=0;
    for(int i=0;i<str.length();i++) //running loop upto length of entered string
    {
        char ch=str[i]; //checking string character by character
        ch=tolower(ch); //to avoid comparing uppercase letters separately
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') //comparing vowels
        {
            vowel++;
        }
        else if(ch>='a' && ch<='z') //condition to avoid special characters or numbers
        {
            consonant++;
        }
    }
    cout<<"number of vowels in the enetered string = "<<vowel<<endl;
    cout<<"number of consonants in the entered string = "<<consonant<<endl;
    return 0;
}