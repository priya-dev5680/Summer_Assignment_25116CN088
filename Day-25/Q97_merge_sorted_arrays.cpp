#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int len1;
    cout<<"enter the number of elements in first array: "; //taking user input for first array
    cin>>len1;

    int* arr1=new int[len1];
    for(int i=0;i<len1;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    int len2;
    cout<<"enter the number of elements in second array: "; //taking user input for second array
    cin>>len2;

    int* arr2=new int[len2];
    for(int i=0;i<len2;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr2[i];
    }
    sort(arr1,arr1+len1); //sorting first array
    sort(arr2,arr2+len2); //sorting second array

    int len=len1+len2,k=0;
    int* merged_array=new int[len]; //declaring an array to contain merged arrays
    cout<<"merged sorted array is: ";
    for(int i=0;i<len1;i++)
    {
        merged_array[k++]=arr1[i]; //adding elements of first array to merged_array
    }
    for(int j=0;j<len2;j++)
    {
        merged_array[k++]=arr2[j]; //adding elements of second array followed by elements of first array in merged_array
    }
    sort(merged_array,merged_array+len); //sorting resultant array
    for(int i=0;i<len;i++)
    {
        cout<<merged_array[i]<<"    "; //printing the merged array
    }
    cout<<endl;
    delete[] arr1;
    delete[] arr2;
    delete[] merged_array; //freeing up allocated memory
    return 0;
}