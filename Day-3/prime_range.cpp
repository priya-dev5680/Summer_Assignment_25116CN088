#include <iostream>
using namespace std;

int main()
{
    int lower_l,upper_l,i,j;
    cout<<"Enter lower limit of range: ";
    cin>>lower_l;
    cout<<"Enter upper limit of range: ";
    cin>>upper_l;
    cout<<"prime numbers between "<<lower_l<<" and "<<upper_l<<" are: ";

    for(i=lower_l;i<=upper_l;i++)
    {
        bool flag=true;
        if(i<2)
        continue;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<"  ";
        }

    }
    return 0;

}