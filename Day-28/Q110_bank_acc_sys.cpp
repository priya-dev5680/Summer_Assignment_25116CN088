#include<iostream>
#include<string>
using namespace std;

struct accounts{
    long long acc_no;
    string first_name;
    string last_name;
    float balance=0.0;
} accounts[100];
int accs=0;

void create_account()
{
    cout<<"enter new account details:"<<endl;
    cout<<"enter account no.: ";
    cin>>accounts[accs].acc_no;
    cout<<"enter account holder's first name: ";
    cin>>accounts[accs].first_name;
    cout<<"enter account holder's last name: ";
    cin>>accounts[accs].last_name;
    accs++;
}

void show_detail()
{
    long long acno;
    cout<<"enter account no.: ";
    cin>>acno;
    int flag=0;
    for(int i=0;i<accs;i++)
    {
        if(acno==accounts[i].acc_no)
        {
            cout<<"account holder's first name: "<<accounts[i].first_name<<endl;
            cout<<"account holder's last name: "<<accounts[i].last_name<<endl;
            cout<<"current balance(in Rs.):"<<accounts[i].balance<<endl; 
            break;
        }
    }
    if(!flag)
    {
        cout<<"account does not exist in the database"<<endl;
    }
}

void deposit()
{
    long long acno;
    cout<<"enter account no.: ";
    cin>>acno;
    float amount;
    int flag=0;
    for(int i=0;i<accs;i++)
    {
        if(acno==accounts[i].acc_no)
        {
            flag=1;
            cout<<"enter amount you want to deposit(in Rs.): ";
            cin>>amount;
            accounts[i].balance+=amount; 
            cout<<"deposit successful.\nnew balance: Rs."<<accounts[i].balance<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"account does not exist in the database"<<endl;
    }
}

void withdraw()
{
    long long acno;
    cout<<"enter account no.: ";
    cin>>acno;
    float amount;
    int flag=0;
    for(int i=0;i<accs;i++)
    {
        if(acno==accounts[i].acc_no)
        {
            flag=1;
            cout<<"enter amount you want to withdraw(in Rs.): ";
            cin>>amount;
            if(amount<=accounts[i].balance)
            {
                accounts[i].balance-=amount; 
                cout<<"withdrawal successful.\nnew balance: Rs."<<accounts[i].balance<<endl;
                break;
            }
            else{
                cout<<"insufficient funds"<<endl;
            }
        }
    }
    if(!flag)
    {
        cout<<"account does not exist in the database"<<endl;
    }
}

void checkbalance()
{
    long long acno;
    cout<<"enter account no.: ";
    cin>>acno;
    int flag=0;
    for(int i=0;i<accs;i++)
    {
        if(acno==accounts[i].acc_no)
        {
            flag=1;
            cout<<"current balance(in Rs.):"<<accounts[i].balance<<endl; 
            break;
        }
    }
    if(!flag)
    {
        cout<<"account does not exist in the database"<<endl;
    }
}

int main()
{
    cout<<"WELCOME TO BANK ACCOUNT MANAGEMENT SYSTEM"<<endl;
    int choice;
    do{
        cout<<"\n\n1.create new bank account\n2.show account details\n3.deposit funds\n4.withdraw funds\n5.check balance\n6.exit\n";
        cout<<"\nenter choice of action you want to perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            create_account();
            break;

            case 2:
            show_detail();
            break;

            case 3:
            deposit();
            break;

            case 4:
            withdraw();
            break;

            case 5:
            checkbalance();
            break;

            case 6:
            cout<<"thank you for visiting the bank account management system"<<endl;
            break;

            default:
            cout<<"invalid choice";
            break;
        }
    }
    while(choice!=6);
    return 0;
}