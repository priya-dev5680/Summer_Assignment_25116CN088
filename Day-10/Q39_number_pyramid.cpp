#include<iostream>
using namespace std;

int main()
{
    int i,j,num;

    for(i=1;i<=5;i++)
    {
        num=1;
        for(j=1;j<=9;j++)
        {
            if(j+i<=5 || j-i>=5)
            {
                cout<<" ";
            }
            else{
                cout<<num;
                if(j<5)
                {
                    num++;
                }
                else{
                    num--;
                }
            }
            
        }
        cout<<"\n";
    }
    return 0;
}