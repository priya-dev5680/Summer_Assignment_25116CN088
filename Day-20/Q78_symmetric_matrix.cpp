#include<iostream>
using namespace std;

int main()
{
    const int ORDER=10;
    int order;
    cout<<"enter the order of the square matrix(upto 10): "; //only square matrices can be symmetric
    cin>>order;
    if(order>ORDER)
    {
        cout<<"limit exceeded";
        return 0;
    }

    int mat_a[ORDER][ORDER];

    cout<<"enter elements for matrix A:\n"; //taking user input for elements of the matrix
    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_a[i][j];
        }
    }

    int flag=0;
    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            if(mat_a[i][j]!=mat_a[j][i]) // checking condition for matrix to be symmetric
            {
                flag=1;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"entered matrix is symmetric"; //if all mat_a[i][j]==mat_a[j][i], print message
    }
    else{
        cout<<"entered matrix is NOT symmetric";
    }
    cout<<endl;
    return 0;
}