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

    int even=0,odd=0;
    for(int i=0;i<len;i++)
    {
        if(arr1[i]%2==0)
        {
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    cout<<"the number of even elements in the entered array is = "<<even<<"\n";
    cout<<"the number of odd elements in the entered array is = "<<odd<<endl;
    delete[] arr1;
    return 0;
}