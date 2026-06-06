#include<iostream>
using namespace std;

int main()
{
    int x,n,i=0;
    long long res=1;
    cout<<"enter base(x): ";
    cin>>x;
    cout<<"enter power(n): ";
    cin>>n;

    while(i<n)
    {
        res*=x;
        i++;
    }
    cout<<x<<"^"<<n<<"="<<res<<endl;
    return 0;
}