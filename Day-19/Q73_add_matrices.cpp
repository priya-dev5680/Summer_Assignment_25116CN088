#include<iostream>
using namespace std;

int main()
{
    const int ROWS=10,COLS=10;
    int rows,cols;
    cout<<"enter the number of rows in the matrices(upto 10): ";
    cin>>rows;
    cout<<"enter the number of columns in the matrices(upto 10): "; //taking user input for number of rows and columns
    cin>>cols;                                                      //in the matrix
    if(rows>ROWS || cols>COLS)
    {
        cout<<"limit exceeded";
        return 0;
    }

    int mat_a[ROWS][COLS];
    int mat_b[ROWS][COLS];

    cout<<"enter elements for matrix A:\n"; //taking user input for elements of the first matrix
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_a[i][j];
        }
    }
    cout<<"enter elements for matrix B:\n"; //taking user input for elements of the second matrix
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_b[i][j];
        }
    }

    cout<<"matrix A + matrix B = \n";
    int sum_mat[ROWS][COLS];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sum_mat[i][j]=mat_a[i][j]+mat_b[i][j]; //assigning the sum of respective elements to the element at same position in sum_mat
            cout<<sum_mat[i][j]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}