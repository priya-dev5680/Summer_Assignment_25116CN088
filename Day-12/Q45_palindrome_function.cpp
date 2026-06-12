#include<iostream>
using namespace std;

void check_palindrome(int n)
{
    int rem,rev=0,cpy=n;
    if(n<0)
    {
        cout<<n<<" is not a plaindrome"<<endl;
        return;
    }

    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    if(rev==cpy)
    {
        cout<<cpy<<" is a palindrome";
    }
    else{
        cout<<cpy<<" is NOT a palindrome";
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    check_palindrome(num);
    return 0;
}