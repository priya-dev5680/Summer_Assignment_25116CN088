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
    
    cout<<"the entered array is: "<<"\n";
    for(int i=0;i<len;i++)
    {
        cout<<arr1[i]<<"    ";
    }
    cout<<endl;
    delete[] arr1;
    return 0;
}