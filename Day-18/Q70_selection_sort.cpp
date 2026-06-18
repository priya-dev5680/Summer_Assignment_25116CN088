#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"enter the number of elements in array: "; //taking user input for number of elements in the array
    cin>>len;

    int* arr1=new int[len]; //allocating memory for variable length array
    for(int i=0;i<len;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    for(int i=0;i<len-1;i++) //loop to access each element of the array
    {
        int min_id=i;
        for(int j=i+1;j<len;j++) //loop the compare every element with the minimum element
        {
            if(arr1[j]<arr1[min_id])
            {
                min_id=j;
            }
        }
        int temp=arr1[min_id]; //swapping the particular element with minimum element if its value is smaller
        arr1[min_id]=arr1[i];  //than that of the minimum element
        arr1[i]=temp;
    }

    cout<<"the array sorted by selection sort is: ";
    for(int i=0;i<len;i++)
    {
        cout<<arr1[i]<<"    "; //printing the array sorted by selection sort
    }
    cout<<endl;
    delete[] arr1; //freeing up the allocated memory
    return 0;
}