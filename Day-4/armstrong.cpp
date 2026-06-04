#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,n,rem,i,cpy,dig=0,arm=0;
    cout<<"enter a number: ";
    cin>>num;
    n=num;
    cpy=num;

    while(num>0)
    {
        num=num/10;
        dig+=1;
    }

    for(i=1;i<=dig;i++)
    {
        rem=cpy%10;
        arm+=round(pow(rem,dig));
        cpy/=10;
    }

    if(arm==n)
    {
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" is not an armstrong number";
    }
    cout<<endl;
    return 0;
}