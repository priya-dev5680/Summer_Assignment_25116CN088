#include<iostream>
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

    int len=len1+len2,k=0;
    int* union_array=new int[len]; //initialising an array to store the union(all unique elements from both arrays)
    cout<<"union of arrays is: ";
    for(int i=0;i<len1;i++) //running nested loop to enter unique elements of arr1 to union_array
    {
        int flag=0;
        for(int m=0;m<k;m++)
        {
            if(arr1[i]==union_array[m])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            union_array[k++]=arr1[i]; //adding unique elements of first array to union_array
        }
    }
    for(int j=0;j<len2;j++) //running nested loop to enter unique elements of second array to union_array 
    {                       //while also avoiding elements same as those in the first array
        int flag=0;
        for(int n=0;n<k;n++)
        {
            if(arr2[j]==union_array[n])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            union_array[k++]=arr2[j]; //adding unique elements of second array to union_array
        }
        
    }
 
    for(int i=0;i<k;i++)
    {
        cout<<union_array[i]<<"    "; //printing union of the two arrays
    }
    cout<<endl;
    delete[] arr1;
    delete[] arr2;
    delete[] union_array; //freeing up the allocated memory
    return 0;
}