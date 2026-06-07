#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int num,factorial;
    cout<<"enter a positive integer: ";
    cin>>num;
    factorial=fact(num);
    cout<<"the factorial of "<<num<<" is "<<factorial<<endl;
}   