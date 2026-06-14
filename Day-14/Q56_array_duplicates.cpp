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
    bool flag=false;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr1[i]==arr1[j])
            {
                flag=true;
                cout<<arr1[j]<<"    ";
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"are the elements having duplicates in the array";
    }
    else{
        cout<<"the array does NOT contain duplicate elements";
    }
    cout<<endl;
    delete[] arr1;
    return 0;
}