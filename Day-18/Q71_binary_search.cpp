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

    //sorting the array as binary search can be applied on sorted arrays only
    for(int i=0;i<len-1;i++) //loop to access each element of the array
    {
        for(int j=0;j<len-i-1;j++) //loop to compare elements
        {
            if(arr1[j]>arr1[j+1]) //comparing adjacent elements
            {
                int temp=arr1[j]; //swapping the elements if greater element occurs before the smaller element
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    int target,low=0,high=len-1;
    cout<<"enter the element you want to find: "; //taking user input for the element to be searched
    cin>>target;

    int flag=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2; //finding mid point of the array
        if(arr1[mid]==target) //comparing the element at middle with the target
        {
            cout<<target<<" found in the sorted array at index "<<mid<<endl;
            flag=1;
            break;
        }
        if(arr1[mid]<target) //ignoring the left half if target is greater than the element at middle
        {
            low=mid+1;
        }
        else{ //ignoring the right half if the target is smaller than the element at middle
            high=mid-1;
        }
    }
    if(!flag)
    {
        cout<<target<<"not present in the given array"<<endl; //printing message if element not found in the array
    }
    delete[] arr1; //freeing up the allocated memory
    return 0;
}