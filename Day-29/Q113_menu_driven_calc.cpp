#include<iostream>
using namespace std;

int main()
{
    int choice;
    float num1,num2,result;
    cout<<"\t\tMENU DRIVEN CALCULATOR"<<endl;
    cout<<"\tFOLLOWING OPERATIONS ARE AVAILABLE:"<<endl;
    do
    {
        cout<<"\n1.addition(+)\n2.subtraction(-)\n3.multiplication\n4.division\n5.exit"<<endl; //displaying operations available
        cout<<"choose the operation of your choice(s.no.): ";
        cin>>choice;
        if(choice>=1 && choice<=4) //if choice entered matches an operation
        {
            cout<<"enter first number: ";
            cin>>num1;
            cout<<"enter second number: ";
            cin>>num2;
        }

        switch(choice) //using switch case to handle operations
        {
            case 1:
            result=num1+num2;
            cout<<num1<<" + "<<num2<<" = "<<result<<endl;
            break;

            case 2:
            result=num1-num2;
            cout<<num1<<" - "<<num2<<" = "<<result<<endl;
            break;

            case 3:
            result=num1*num2;
            cout<<num1<<" * "<<num2<<" = "<<result<<endl;
            break;

            case 4:
            if(num2!=0) //bypassing is division by 0 case arises
            {
                result=num1/num2;
                cout<<num1<<" / "<<num2<<" = "<<result<<endl;
            }
            else{
                cout<<"division by 0 not possible"<<endl;
            }
            break;

            case 5:
            cout<<"thank you for using the calculator"<<endl;
            break;

            default:
            cout<<"invalid choice, try again"<<endl;
            break;
        }
    } 
    while (choice!=5);
    return 0;
}