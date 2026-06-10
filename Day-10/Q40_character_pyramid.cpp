#include<iostream>
using namespace std;

int main()
{
    int i,j,val;
    char ch;

    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=9;j++)
        {
            if(j+i<=5 || j-i>=5)
            {
                cout<<" ";
            }
            else{
                cout<<ch;
                if(j<5)
                {
                    ch++;
                }
                else{
                    ch--;
                }
            }
            
        }
        cout<<"\n";
    }
    return 0;
}