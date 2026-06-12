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

    int largest=arr1[0],smallest=arr1[0];
    for(int i=1;i<len;i++)
    {
        if(arr1[i]>largest)
        {
            largest=arr1[i];
        }
        if(arr1[i]<smallest)
        {
            smallest=arr1[i];
        }
    }
    cout<<"the largest element of entered array is: "<<largest<<"\n";
    cout<<"the smallest element of entered array is: "<<smallest<<endl;
    delete[] arr1;
    return 0;
}