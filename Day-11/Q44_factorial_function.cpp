#include<iostream>
using namespace std;

int factorial(int n)
{
    long long fac=1;
    for(int i=n;i>=1;i--)
    {
        fac*=i;
    }
    return fac;
}

int main()
{
    int num;
    long long fact;
    cout<<"enter a number: ";
    cin>>num;
    fact=factorial(num);
    cout<<"factorial of "<<num<<" = "<<fact<<endl;
    return 0;
}