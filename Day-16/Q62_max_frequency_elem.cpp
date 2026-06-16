#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"enter the number of elements in array: "; //taking user input for number of elements
    cin>>len;

    int* arr1=new int[len]; //allocating memory to variable length array
    for(int i=0;i<len;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    int max_freq=arr1[0],max=0;
    for(int i=0;i<len;i++)
    {
        int freq=0;
        for(int j=0;j<len;j++) //using nested loops to compare all the elements with each element one by one
        {
            if(arr1[j]==arr1[i])
            {
                freq++; //obtaining frequency of each element
            }
        }
        if(freq>=max) //comparing frequency of current element with highest frequency
        {
            max=freq;
            max_freq=arr1[i];
        }
    }

    cout<<"element with maximum frequency is: "<<max_freq<<"\n"; //prints element with highest frequecy or last element encountered in case of same frequency
    cout<<max_freq<<" has a frequency of: "<<max<<endl;
    delete[] arr1; //freeing up the allocated memory
    return 0;
}