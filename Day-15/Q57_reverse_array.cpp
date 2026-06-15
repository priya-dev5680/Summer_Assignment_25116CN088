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

    int* rev_arr1=new int[len];
    for(int i=0;i<len;i++)
    {
        rev_arr1[i]=arr1[len-1-i];
    }
    cout<<"the reversed array is: ";
    for(int i=0;i<len;i++)
    {
        arr1[i]=rev_arr1[i];
        cout<<arr1[i]<<"    ";
    }
    cout<<endl;
    delete[] arr1;
    delete[] rev_arr1;
    return 0;
}