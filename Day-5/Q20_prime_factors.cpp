#include<iostream>
using namespace std;

int main()
{
    int num,i,j,count;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"prime factors of "<<num<<" are: ";

    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count=0;
            for(j=2;j*j<=i;j++)
            {
                if (i%j==0)
                {
                    count+=1;
                    break;
                }
            }
            if(count==0)
            {
                cout<<i<<"  ";
            }
        }
    }
    cout<<endl;
    return 0;
}