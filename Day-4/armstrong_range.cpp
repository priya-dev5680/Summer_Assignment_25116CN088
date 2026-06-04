#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int lower_l,upper_l,j;
    cout<<"enter lower limit of range: ";
    cin>>lower_l;
    cout<<"enter upper limit of range: ";
    cin>>upper_l;

    cout<<"the armstrong numbers between "<<lower_l<<" and "<<upper_l<<" are: ";
    
    for(j=lower_l;j<=upper_l;j++)
    {
        int n,rem,i,cpy,dig=0,arm=0;
        n=j;
        cpy=j;

        while(n>0)
        {
            n=n/10;
            dig+=1;
        }

        for(i=1;i<=dig;i++)
        {
            rem=cpy%10;
            arm+=round(pow(rem,dig));
            cpy/=10;
        }

        if(arm==j)
        {
            cout<<arm<<"    ";
        }

    }
    cout<<endl;
    return 0;
}