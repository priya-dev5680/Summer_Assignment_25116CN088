#include<iostream>
using namespace std;

int main()
{
    const int ROWS=10,COLS=10;
    int rows1,cols1,rows2,cols2;
    cout<<"the number of columns in matrix A and rows in matrix B should be equal\n";
    cout<<"enter the number of rows in matrix A (upto 10): ";
    cin>>rows1;
    cout<<"enter the number of columns in matrix A(upto 10): "; //taking user input for number of rows and columns
    cin>>cols1;                                                 //in the first matrix
    cout<<"enter the number of rows in matrix B (upto 10): ";
    cin>>rows2;
    cout<<"enter the number of columns in matrix B (upto 10): "; //taking user input for number of rows and columns
    cin>>cols2;                                                  //in the second matrix
    if(rows1>ROWS || cols1>COLS || rows2>ROWS || cols2>COLS)
    {
        cout<<"limit exceeded";
        return 0;
    }
    if(cols1!=rows2) //condition required for matrix multiplicaton
    {
        cout<<"invalid dimensions, matrix multiplication not possible!!!";
        return 0;
    }

    int mat_a[ROWS][COLS];
    int mat_b[ROWS][COLS];

    cout<<"enter elements for matrix A:\n"; //taking user input for elements of the first matrix
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_a[i][j];
        }
    }
    cout<<"enter elements for matrix B:\n"; //taking user input for elements of the second matrix
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            cout<<"element["<<i<<"]["<<j<<"]: ";
            cin>>mat_b[i][j];
        }
    }

    cout<<"matrix A x matrix B = \n";
    int multi_mat[ROWS][COLS]={0}; //initialising resultant matrix to 0 
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            for(int k=0;k<cols1;k++)
            {
                multi_mat[i][j]+= mat_a[i][k]*mat_b[k][j]; //multiplying and adding elements of mat_a and mat_b
            }                                              //and assigning respective values to resultant matrix
        }
    }
    for(int i=0;i<rows1;i++) 
    {
        for(int j=0;j<cols2;j++) //the dimensions of resultant matrix will be rows1 x cols2
        {
            cout<<multi_mat[i][j]<<"    "; //printing resultant matrix
        }
        cout<<endl;
    }
    return 0;
}