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
    
    for(int i=0;i<cols;i++) //loop to access each column
    {
        int sum=0; //initialising variable sum to 0 before every column sum calculation
        for(int j=0;j<rows;j++) //loop to access every element in the column
        {
            sum+=mat_a[j][i]; //performing column wise sum calculation
        }
        cout<<"sum of column "<<i+1<<" = "<<sum<<endl; //printing column wise sum
    }
    return 0;
}