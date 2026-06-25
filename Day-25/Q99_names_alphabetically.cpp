#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number of names you want to sort: "; //getting number of names from user
    cin>>num;
    cin.ignore();

    string names[100]; //using string array to store names
    for(int i=0;i<num;i++)
    {
        cout<<"enter name "<<i+1<<": ";
        getline(cin,names[i]);
    }

    sort(names,names+num); //sorting names alphabetically
    cout<<"names sorted alphabetically are: "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<names[i]<<endl;
    }
    return 0;

}