#include<iostream>
using namespace std;

void view_aray(int arr[],int size) //function to print entire array
{
    cout<<"current array: [";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
}

void insert_elem(int arr[],int &size) //function to insert an element at desired index in the array
{
    int index,elem;
    cout<<"enter element which you wnat to insert: ";
    cin>>elem;
    cout<<"enter index at which you want to insert the element: ";
    cin>>index;
    if(index>size)
    {
        cout<<"out of bounds index entered"<<endl;
    }
    else{
        for(int i=size;i>index;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=elem;
        size++;
        cout<<"element entered successfully"<<endl;
    }
}

void delete_elem(int arr[],int &size) //function to delete an element at an index in the array
{
    int index;
    cout<<"enter index of element you want to delete: ";
    cin>>index;
    if(index>size-1)
    {
        cout<<"out of bounds index entered"<<endl;
    }
    else{
        for(int i=index;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"element deleted successfully"<<endl;
    }
}

void search_elem(int arr[],int size) //funtion to linear search an element in the array
{
    int target,flag=0;
    cout<<"enter element to be searched: ";
    cin>>target;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            cout<<target<<" found in the array at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"element does not exist in the array"<<endl;
    }
}

int main()
{
    int arr[100],size,index,choice;
    cout<<"enter number of elements in the array(<100): ";
    cin>>size;
    if(size<=0 || size>100)
    {
        cout<<"invalid size"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<size;i++) //creating the array by user input
        {
            cout<<"enter element "<<i+1<<": ";
            cin>>arr[i];
        }
        cout<<"\narray created successfully"<<endl;
    }

    cout<<"\n\t\tMENU DRIVEN ARRAY"<<endl;
    cout<<"\tFOLLOWING OPERATINS ARE AVAILABLE:"<<endl;
    do
    {
        cout<<"\n1.display current array\n2.insert an element in the array\n3.delete an element from the array\n4.search for an element\n5.exit\n"<<endl;
        cout<<"enter your choice of operation(s.no.): ";
        cin>>choice;

        switch(choice) //using switch case to handle array operations
        {
            case 1:
            view_aray(arr,size);
            break;

            case 2:
            insert_elem(arr,size);
            break;

            case 3:
            delete_elem(arr,size);
            break;

            case 4:
            search_elem(arr,size);
            break;

            case 5:
            cout<<"thank you for using the program"<<endl;
            break;

            default:
            cout<<"invalid choice, try again"<<endl;
            break;
        }
    }
    while (choice!=5);
    return 0;
}

