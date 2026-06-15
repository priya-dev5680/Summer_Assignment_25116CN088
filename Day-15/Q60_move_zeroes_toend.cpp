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

    int count=0;
    int* temp=new int[len];
    cout<<"the array with all zeroes moved to end is: ";
    for(int i=0;i<len;i++)
    {
        if(arr1[i]!=0)
        {
            temp[count++]=arr1[i];   
        }
    }
    while(count<len)
    {
        temp[count++]=0;
    }
    for(int i=0;i<len;i++)
    {
        arr1[i]=temp[i];
        cout<<arr1[i]<<"    ";
    }
    cout<<endl;
    delete[] arr1;
    delete[] temp;
    return 0;
}