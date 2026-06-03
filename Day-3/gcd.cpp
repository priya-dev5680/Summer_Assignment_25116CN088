#include<iostream>
using namespace std;

int main()
{
    int num1,num2,gcd=1,i;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;

    int num=(num1<num2)?num1:num2;

    for(i=num;i>=1;i--)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd=i;
            break;
        }
    }
    cout<<"the greatest common divisor of "<<num1<<" and "<<num2<<" is: "<<gcd<<"\n";
    return 0;

}