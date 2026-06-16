#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the total range of array (1 to n): "; //taking user input of range
    cin>>n;
    int len=n-1; 

    int* arr1=new int[len]; //allocating memory to variable length array
    for(int i=0;i<len;i++) //running loop upto len=n-1 to leave missing number
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    long long sum=0,expsum=(n*(n+1))/2; //using formula of sum of n terms to get expected sum of terms upto range n
    for(int i=0;i<len;i++)
    {
        sum+=arr1[i];
    }
    int term=expsum-sum; //subtracting actual sum from expected sum to get the missing term
    cout<<"the missing term in the given array is: "<<term<<endl;
    delete[] arr1; //freeing up the allocated memory
    return 0;
}