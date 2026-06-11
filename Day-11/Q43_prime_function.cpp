#include<iostream>
using namespace std;

void check_prime(int n)
{
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is NOT a prime number";
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    check_prime(num);
    return 0;
}