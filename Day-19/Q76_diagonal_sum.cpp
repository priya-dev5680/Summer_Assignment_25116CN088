#include<iostream>
using namespace std;

int main()
{
    const int ORDER=10;
    int order;
    cout<<"enter the order of the square matrix(upto 10): "; //diagonals exist for square matrices only
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

    int sum=0;
    for(int i=0;i<order;i++)
    {
        sum+=mat_a[i][i]; //condition for diagonal elements(identical row and column indices)
    }
    
    cout<<"the sum of the diagonal elements of the entered matrix = "<<sum<<endl;
    return 0;
}