#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int a=0,b=1,c;
    if(n<=0)
        {
            cout<<"invalid input!!!"<<endl;
            return;
        }
    cout<<"fibonacci series upto "<<n<<" terms is:"<<"\n";

    for(int i=1;i<=n;i++)
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
}

int main()
{
    int num;
    cout<<"enter number of terms you want to print: ";
    cin>>num;
    fibonacci(num);
    return 0;
}