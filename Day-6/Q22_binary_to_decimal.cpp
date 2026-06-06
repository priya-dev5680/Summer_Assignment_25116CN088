#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long dec_num=0,bin_num,i=1;
    cout<<"enter a binary number: ";
    cin>>bin_num;
    cout<<"binary form: "<<bin_num<<"\n";

    while(bin_num!=0)
    {
        dec_num+=i*(bin_num%10);
        bin_num/=10;
        i*=2;
    }
    cout<<"decimal form: "<<dec_num<<endl;
    return 0;
}