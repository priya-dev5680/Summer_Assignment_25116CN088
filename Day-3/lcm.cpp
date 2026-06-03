#include <iostream>
using namespace std;

int main()
{
    int num1,num2,lcm,i;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;

    lcm=num1*num2;
    int num=(num1>num2)?num1:num2;

    for(i=num;i<=lcm;i+=num)
    {
        if(i%num1==0&&i%num2==0)
        {
            lcm=i;
            break;
        }
    }
    cout<<"the lowest common multiple of "<<num1<<" and "<<num2<<" is: "<<lcm<<"\n";
    return 0;
}