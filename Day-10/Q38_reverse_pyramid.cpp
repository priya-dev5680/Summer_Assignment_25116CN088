#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i-j>=1 || i+j>=11)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}