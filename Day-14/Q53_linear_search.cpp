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

    int to_find,flag=0;
    cout<<"enter the elemnt you want to find: ";
    cin>>to_find;
    for(int i=0;i<len;i++)
    {
        if(arr1[i]==to_find)
        {
            cout<<"element "<<to_find<<" found at index: "<<i<<endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"element "<<to_find<<" does NOT exist in the enterred array"<<endl;
    }
    delete[] arr1;
    return 0;
}