#include<iostream>
using namespace std;    

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int num,i;
    cout<<"enter number of elements to print: ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<fibonacci(i)<<"   ";
    }
    cout<<endl;
    return 0;
}