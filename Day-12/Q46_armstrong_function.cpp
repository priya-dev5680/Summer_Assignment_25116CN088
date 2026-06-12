#include<iostream>
#include<cmath>
using namespace std;

void check_armstrong(int n)
{
    int dig=0,arm=0,cpy=n;

    while(cpy!=0)
    {
        cpy/=10;
        dig+=1;
    }

    int temp=n,rem;
    for(int i=1;i<=dig;i++)
    {
        rem=temp%10;
        arm+=round(pow(rem,dig));
        temp/=10;
    }

    if(arm==n)
    {
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" is NOT an armstrong number";
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    check_armstrong(num);
    return 0;
}