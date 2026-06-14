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

    int target,count=0;
    cout<<"enter element you want to find frequency of: ";
    cin>>target;

    for(int i=0;i<len;i++)
    {
        if(arr1[i]==target)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"element NOT found in the array";
    }
    else{
        cout<<"element "<<target<<" has a frequency of: "<<count;
    }
    cout<<endl;
    delete[] arr1;
    return 0;
}