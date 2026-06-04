#include<iostream>
using namespace std;

int main()
{
    int n_num,a=1,b=1,c,i;
    cout<<"enter the term you want to find: ";
    cin>>n_num;

    for(i=1;i<=n_num;i++)
    {
        if(i==1||i==2)
        {
            c=1;
        }
        else{
            c=a+b;
            a=b;
            b=c;
        }
    }
    cout<<"the "<<n_num<<"th term of fibonacci series is: "<<c<<endl;
    return 0;
}