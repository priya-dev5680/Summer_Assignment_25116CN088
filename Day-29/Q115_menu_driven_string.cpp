#include<iostream>
#include<string>
using namespace std;

void string_len() //function to find out length of an entered string
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str); 

    int len=0;
    while(str[len]!='\0') //run loop until null terminator is encountered
    {
        len++; 
    }
    cout<<"the length of entered string is: "<<len<<endl;
}

void reverse_str() //function to reverse a string
{
    string str,rev_str;
    cout<<"enter a string: ";
    getline(cin,str); 

    for(int i=0;i<str.length();i++) //running loop upto length of entered string
    {
        rev_str+=str[str.length()-1-i]; //appending characters of entered string backwards to rev_str
    }
    cout<<"the reversed string is: "<<rev_str<<endl;
}

void count_words() //funtion to count words in a sentence
{
    string str;
    cout<<"enter a sentence: ";
    getline(cin,str); 

    int word=0,flag=0;
    for(int i=0;i<str.length();i++) //running loop till the end of the sentence
    {
        if(str[i]!=' ' && str[i]!='.') 
        {
            if(!flag) //to avoid counting multiple spaces or full stops
            {
                word++;
                flag=1;
            }
        }
        else{
            flag=0;
        }
    }

    cout<<"number of words in entered sentence = "<<word<<endl;
}

void concatenate() //function to add two strings
{
    string str1,str2,res_str;
    cout<<"enter first string: ";
    getline(cin,str1);
    cout<<"enter second string: ";
    getline(cin,str2);
    res_str=str1+str2;
    cout<<"concatenated string is: "<<res_str<<endl;
}

void compare_strs() //function to compare two strings
{
    string str1,str2,res_str;
    cout<<"enter first string: ";
    getline(cin,str1);
    cout<<"enter second string: ";
    getline(cin,str2);
    if(str1==str2)
    {
        cout<<"both strings are exactly the same"<<endl;
    }
    else{
        cout<<"entered string are different from each other"<<endl;
    }
}

int main()
{
    int choice;
    cout<<"\n\t\tMENU DRIVEN STRING"<<endl;
    cout<<"\tFOLLOWING OPERATINS ARE AVAILABLE:"<<endl;
    do
    {
        cout<<"\n1.find out length of a string\n2.reverse a string\n3.count words in a sentence\n4.concatenate two strings\n5.compare two strings\n6.exit\n"<<endl;
        cout<<"enter your choice of operation(s.no.): ";
        cin>>choice;
        cin.ignore();

        switch(choice) //using switch case to handle string operations
        {
            case 1:
            string_len();
            break;

            case 2:
            reverse_str();
            break;

            case 3:
            count_words();
            break;

            case 4:
            concatenate();
            break;

            case 5:
            compare_strs();
            break;

            case 6:
            cout<<"thank you for using the program"<<endl;
            break;

            default:
            cout<<"invalid choice, try again"<<endl;
            break;
        }
    }
    while (choice!=6);
    return 0;
}