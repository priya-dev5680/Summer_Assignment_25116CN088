#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,i;
    cout<<"Enter a number: ";
    cin>>num;

    for(i=1;i<num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    if(sum==num && num>0)
    {
        cout<<num<<" is a perfect number";
    }
    else{
        cout<<num<<" is not a perfect number";
    }
    cout<<endl;
    return 0;
}