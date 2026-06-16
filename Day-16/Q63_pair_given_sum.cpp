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

    int target,flag=0;
    cout<<"enter the target sum: ";
    cin>>target;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr1[i]+arr1[j]==target)
            {
                flag=1;
                cout<<"pair found: "<<arr1[i]<<" + "<<arr1[j]<<" = "<<target<<"\n";
            }
        }
    }
    if(!flag)
    {
        cout<<"no pair found that equals the target when added";
    }
    cout<<endl;
    delete[] arr1;
    return 0;
}