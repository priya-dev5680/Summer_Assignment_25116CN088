#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,i,cpy,rem,fact;
    cout<<"enter a number: ";
    cin>>num;
    cpy=num;

    while(num!=0)
    {
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact*=i;
        }
        sum+=fact;
        num/=10;
    }

    if(sum==cpy && cpy>0)
    {
        cout<<cpy<<" is a strong number";
    }
    else{
        cout<<cpy<<" is NOT a strong number";
    }
    cout<<endl;
    return 0;
}