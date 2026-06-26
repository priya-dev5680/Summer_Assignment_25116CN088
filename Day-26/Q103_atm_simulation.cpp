#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class ATM
{
    private:
    string acc_holder_name;
    int acc_number;
    int pin;
    float balance;

    public:
    ATM(string name, int accnum, int pinval){
        acc_holder_name=name;
        acc_number=accnum;
        pin=pinval;
        balance=0.0;
    }

    void show_detail()
    {
        cout<<"Account holder's name: "<<acc_holder_name<<endl;
        cout<<"Account number: "<<acc_number<<endl;
    }

    void deposit(float amount)
    {
        balance+=amount;
        cout<<"deposit successful.\nnew balance: Rs."<<balance<<endl;
    }

    void withdraw(float amount)
    {
        if(amount<=balance)
        {
            balance-=amount;
            cout<<"whitdrawal successful.\nnew balance : Rs."<<balance<<endl;
        }
        else{
            cout<<"insufficient balance.\nwithdrawal failed."<<endl;
        }
    }

    float checkbalance()
    {
        return balance;
    }
};

int main()
{
    string name;
    int accnum;
    int pinval;
    float amount;
    int choice;

    cout<<"WELCOME TO THE ATM MACHINE\n";
    cout<<"Please enter your name: ";
    getline(cin,name);
    cout<<"Please enter your account number: ";
    cin>>accnum;
    cout<<"Please enter your pin: ";
    cin>>pinval;

    ATM atm(name,accnum,pinval);

    do{
        cout<<"\nATM menu:\n1.Deposit\n2.Withdraw\n3.Check balance\n4.Display details\n5.Exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"enter amount to deposit in rupees: ";
            cin>>amount;
            atm.deposit(amount);
            break;

            case 2:
            cout<<"enter amount to withdraw in rupees: ";
            cin>>amount;
            atm.withdraw(amount);
            break;

            case 3:
            cout<<"your current balance is: Rs."<<atm.checkbalance()<<endl;
            break;

            case 4:
            cout<<"The user details are:\n";
            atm.show_detail();
            break;

            case 5:
            cout<<"Thank you for using the ATM"<<endl;
            break;

            default:
            cout<<"Invalid choice. Please try again.";
        }
    }
    while(choice!=5);
    return 0;
}