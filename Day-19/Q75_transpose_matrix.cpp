#include<iostream>
using namespace std;

int main()
{
    const int ROWS=10,COLS=10;
    int rows,cols;
    cout<<"enter the number of rows in the matrix(upto 10): ";
    cin>>rows;
    cout<<"enter the number of columns in the matrix(upto 10): "; //taking user input for number of rows and columns
    cin>>cols;                                                    //in the matrix
    if(rows>ROWS || cols>COLS)
    {
        cout<<"limit exceeded";
        return 0;
    }

    int mat_a[ROWS][COLS];

    cout<<"enter elements for matrix A:\n"; //taking user input for elements of the matrix
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_a[i][j];
        }
    }

    cout<<"transpose of the entered matrix is: \n";
    int mat_transpose[COLS][ROWS]; //swapping the dimensions in transpose matrix
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            mat_transpose[j][i]=mat_a[i][j]; //performing the transpose operation
        }
    }
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<mat_transpose[i][j]<<"    "; //displaying the matrix transpose
        }
        cout<<endl;
    }
    return 0;
}