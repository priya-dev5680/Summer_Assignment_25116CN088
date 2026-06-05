#include<iostream>
using namespace std;

int main()
{
    int num,fac,i;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"factors of "<<num<<" are: ";

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<"  ";
        }
    }
    cout<<endl;
    return 0;
}