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

    int* temp=new int[len];
    int new_size=0;
    cout<<"the array with removed duplicates is: ";
    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr1[i]==arr1[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            temp[new_size]=arr1[i];
            new_size++;
        }

    }
    for(int i=0;i<new_size;i++)
    {
        arr1[i]=temp[i];
        cout<<arr1[i]<<"    ";
    }
    cout<<endl;
    delete[] arr1;
    delete[] temp;
    return 0;
}