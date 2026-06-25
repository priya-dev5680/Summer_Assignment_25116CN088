#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number of words you want to sort: "; //getting number of words from user
    cin>>num;
    cin.ignore();

    string words[100]; //using string array to store words
    for(int i=0;i<num;i++)
    {
        cout<<"enter word "<<i+1<<": ";
        getline(cin,words[i]);
    }

    for(int i=0;i<num-1;i++) //loop to access each word
    {
        for(int j=0;j<num-i-1;j++) //loop to compare lengths of words
        {
            if(words[j].length()>words[j+1].length()) //sorting words according to length
            {
                string temp=words[j];
                words[j]=words[j+1];
                words[j+1]=temp;
            }
        }
    }
    cout<<"the words sorted by length are: "<<endl; 
    for(int i=0;i<num;i++)
    {
        cout<<words[i]<<endl; //printing sorted words
    }
    return 0;
}