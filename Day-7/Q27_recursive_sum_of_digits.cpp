#include<iostream>
using namespace std;

int sum_of_dig(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)+sum_of_dig(n/10);
}

int main()
{
    int num,digsum;
    cout<<"enter a number: ";
    cin>>num;
    digsum=sum_of_dig(num);
    cout<<"sum of digits of "<<num<<" = "<<digsum<<endl;
    return 0;
}