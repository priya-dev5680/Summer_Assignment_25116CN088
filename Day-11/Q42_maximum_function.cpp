#include<iostream>
using namespace std;

int maximum(int len, int arr[])
{
    int i,max=arr[0];

    for(i=0;i<len;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int length;
    cout<<"Enter number of elements you want to check: ";
    cin>>length;

    if(length<=0) 
    {
        cout<<"invalid input!!!"<<endl;
        return 0;
    }

    int* max_array= new int[length];
    int i,num,maxim;

    for(i=0;i<length;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>num;
        max_array[i]=num;
    }

    maxim=maximum(length,max_array);
    cout<<"The maximum number among the entered numbers is: "<<maxim<<endl;
    delete[] max_array;
    return 0;
}