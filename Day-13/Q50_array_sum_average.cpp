#include<iostream>
using namespace std;

int main()
{
    int len;
    float avg,sum=0;
    cout<<"enter the number of elements in array: ";
    cin>>len;

    int* arr1=new int[len];
    for(int i=0;i<len;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
        sum+=arr1[i];
    }
    avg=sum/len;

    cout<<"the sum of elements of entered array = "<<sum<<"\n";
    cout<<"the average of elements of entered array = "<<avg<<endl;
    delete[] arr1;
    return 0;
}