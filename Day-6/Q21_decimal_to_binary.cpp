#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long dec_num;
    string bin_num="";
    cout<<"enter a decimal number: ";
    cin>>dec_num;
    cout<<"decimal form: "<<dec_num<<"\n";

    if(dec_num==0)
    {
        bin_num="0";
    }

    while(dec_num!=0)
    {
        char bit=(dec_num%2==0)?'0':'1';
        bin_num=bit+bin_num;
        dec_num/=2;
    }
    cout<<"binary form: "<<bin_num<<endl;
    return 0;
}