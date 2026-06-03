#include <iostream>
using namespace std;

int main()
{
    int num,count=0,i;
    cout<<"Enter a number greater than 1:";
    cin>>num;

    for(i=2;i*i<num;i++)
    {
        if (num%i==0)
        {
            count+=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<num<<"is a prime number";
    }
    else{
        cout<<num<<"is not a prime number";
    }
    return 0;

}