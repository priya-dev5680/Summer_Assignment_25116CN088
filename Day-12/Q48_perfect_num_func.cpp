#include<iostream>
using namespace std;

void perfect_num(int n)
{
    int sum=0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n && n>0)
    {
        cout<<n<<" is a perfect number";
    }
    else{
        cout<<n<<" is NOT a perfect number";
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    perfect_num(num);
    return 0;
}