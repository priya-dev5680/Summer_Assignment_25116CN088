#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age in years: ";
    cin>>age; //taking user input for age

    if(age>=18) //checking for voting eligibility
    {
        cout<<"you are eligible for voting"<<endl;
    }
    else{
        cout<<"you are not eligible for voting\nyou must be atleast 18 years of age to vote"<<endl;
    }
    return 0;
}