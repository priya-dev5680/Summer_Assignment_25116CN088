#include<iostream>
using namespace std;

int main()
{
    int len1;
    cout<<"enter the number of elements in first array: "; //taking user input for first array
    cin>>len1;

    int* arr1=new int[len1];
    for(int i=0;i<len1;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr1[i];
    }

    int len2;
    cout<<"enter the number of elements in second array: "; //taking user input for second array
    cin>>len2;

    int* arr2=new int[len2];
    for(int i=0;i<len2;i++)
    {
        cout<<"enter element "<<i+1<<": ";
        cin>>arr2[i];
    }

    int len=(len1<len2)?len1:len2,k=0; //maximium length of intersection_array can the the length of smaller array
    int* common_array=new int[len]; //initialising array to store common elements of the two arrays
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++) //using nested loop to check each element of first array against every element of second array
        {
            if(arr1[i]==arr2[j])
            {
                int flag=0;
                for(int m=0;m<k;m++)
                {
                    if(common_array[m]==arr1[i]) //checking to avoid duplicate elements within the first array itself
                    {
                        flag=1;
                        break;
                    }
                } 
                if(!flag)
                {
                    common_array[k++]=arr1[i];
                    break;
                }  
            }
        }
    }
    cout<<"the common elements in the two arrays are: ";
    for(int i=0;i<k;i++)
    {
        cout<<common_array[i]<<"    "; //printing the common elements of the two arrays
    }
    cout<<endl;
    delete[] arr1;
    delete[] arr2;
    delete[] common_array; //freeing up the allocated memory
    return 0;
}