#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"enter the number of elements in array: ";
    cin>>len;

    int* arr1=new int[len];
    for(int i=0;i<len;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    int largest,second;
    if(arr1[0]>arr1[1])
    {
        largest=arr1[0];
        second=arr1[1];
    }
    else{
        largest=arr1[1];
        second=arr1[0];
    }
    for(int i=2;i<len;i++)
    {
        if(arr1[i]>largest)
        {
            second=largest;
            largest=arr1[i];
        }
        else if(arr1[i]>second && arr1[i]<largest)
        {
            second=arr1[i];
        }
    }
    cout<<"second largest element in the entered array is: "<<second<<endl;
    delete[] arr1;
    return 0;
}