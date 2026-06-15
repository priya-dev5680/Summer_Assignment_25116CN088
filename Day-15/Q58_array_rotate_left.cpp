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

    int step;
    cout<<"enter number by which you want to rotate the array left: ";
    cin>>step;
    cout<<"the array rotated by "<<step<<" is: ";
    step=step%len;
    int* temp=new int[len];
    for(int i=0;i<len-step;i++)
    {
        temp[i]=arr1[step+i];
    }
    for(int i=0;i<step;i++)
    {
        temp[len-step+i]=arr1[i];
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