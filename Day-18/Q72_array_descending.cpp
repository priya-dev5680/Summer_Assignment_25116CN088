#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"enter the number of elements in array: "; //taking user input for number of elements
    cin>>len;

    int* arr1=new int[len]; //allocating memory for variable length array
    for(int i=0;i<len;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    for(int i=0;i<len-1;i++) //loop to access each element of the array
    {
        for(int j=0;j<len-i-1;j++) //loop to compare elements
        {
            if(arr1[j]<arr1[j+1]) //comparing adjacent elements
            {
                int temp=arr1[j]; //swapping the elements is smaller element occurs before greater element
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    cout<<"the array sorted in descending order is: ";
    for(int i=0;i<len;i++)
    {
        cout<<arr1[i]<<"    "; //printing the array in descending order
    }
    cout<<endl;
    delete[] arr1; //freeing up the allocated memory
    return 0;
}