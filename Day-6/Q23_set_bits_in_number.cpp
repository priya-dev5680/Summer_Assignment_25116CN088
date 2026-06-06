#include<iostream>
using namespace std;

int main()
{
    long long dec_num,set_bit=0,cpy;
    cout<<"enter a number: ";
    cin>>dec_num;
    cpy=dec_num;

    while(dec_num!=0)
    {
        if(dec_num%2==1)
        {
            set_bit+=1;
        }
        dec_num/=2;
    }
    cout<<"the number of set bits in "<<cpy<<" are: "<<set_bit<<endl;
    return 0;
}