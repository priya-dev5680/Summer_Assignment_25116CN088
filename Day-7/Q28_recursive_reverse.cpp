#include<iostream>
using namespace std;

int reverse(int n)
{
    int rem;
    static int rev=0;
    if(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        reverse(n/10);
    }
    return rev;
}

int main()
{
    int num,reve;
    cout<<"enter a number: ";
    cin>>num;
    reve=reverse(num);
    cout<<"the reverse of "<<num<<" is: "<<reve<<endl;
    return 0;
}