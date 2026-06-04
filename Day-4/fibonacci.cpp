#include<iostream>
using namespace std;

int main()
{
    int num,a=1,b=1,i,c;
    cout<<"enter term(greter than 0) upto which you want fibonacci series:";
    cin>>num;
    cout<<"fibonacci series upto "<<num<<" is:";

    for(i=1;i<=num;i++)
    {
        if(i==1)
        {
            cout<<a<<"  ";
        }
        else if(i==2)
        {
            cout<<b<<"  ";
        }
        else{
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"  ";
        }
    }
    cout<<endl;
    return 0;
}