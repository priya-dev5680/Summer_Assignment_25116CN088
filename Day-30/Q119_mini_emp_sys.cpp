#include<iostream>
#include<string>
using namespace std;

int emp_id[100];
long long phone[100];
string first_name[100];
string last_name[100];
int salary[100];
string position[100];
int num_employees=0; //using arrays to store various data fields of an employee's record

void add_employee() //function to add a number to employees to the database
{
    int num;
    cout<<"enter number of employees whose data you want to add: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        emp_id[num_employees]=num_employees+1;
        cout<<"\nemployee id: "<<emp_id[num_employees]<<endl;
        cout<<"enter new employee details: "<<endl;
        cout<<"phone no.: ";
        cin>>phone[num_employees];
        cout<<"first name: ";
        cin>>first_name[num_employees];
        cout<<"last name: ";
        cin>>last_name[num_employees];
        cout<<"salary: ";
        cin>>salary[num_employees];
        cin.ignore();
        cout<<"position: ";
        getline(cin,position[num_employees]);
        num_employees++;
    }
}

void search_employee() //function to search for record of an employee
{
    int id;
    cout<<"enter employee id of the employee you want to search: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_employees;i++)
    {
        if(id==emp_id[i])
        {
            flag=1;
            cout<<"details are: "<<endl;
            cout<<"phone no.: "<<phone[i]<<endl;
            cout<<"first name: "<<first_name[i]<<endl;
            cout<<"last name: "<<last_name[i]<<endl;
            cout<<"salary: "<<salary[i]<<endl;
            cout<<"position: "<<position[i]<<endl;
        }
    }
    if(!flag)
    {
        cout<<"record not found in the database"<<endl;
    }
}

void update_employee() //function to update the record of an employee
{
    int id,choice;
    cout<<"enter employee id of employee whose record is to be updated: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_employees;i++)
    {
        if(id==emp_id[i])
        {
            cout<<"update:\n1.phone no.\n2.first name\n3.last name\n4.salary\n5.position"<<endl;
            cout<<"enter which detail you want to update(s.no.): ";
            cin>>choice;
            cin.ignore();
            switch(choice)
            {
                case 1:
                cout<<"enter new phone no.: ";
                cin>>phone[i];
                break;

                case 2:
                cout<<"enter updated first name: ";
                cin>>first_name[i];
                break;

                case 3:
                cout<<"enter updated last name: ";
                cin>>last_name[i];
                break;

                case 4:
                cout<<"enter updated salary: ";
                cin>>salary[i];
                break;

                case 5:
                cout<<"enter updated position: ";
                getline(cin,position[i]);
                break;

                default:
                cout<<"invalid choice"<<endl;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"record not found in the database"<<endl;
    }
}

int main()
{
    int choice;
    cout<<"\n\t\tEMPLOYEE RECORD SYSTEM\n"<<endl;
    cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
    do
    {
        cout<<"\n1.enter new employee record\n2.search for an employee's record\n3.update an employee's record\n4.exit\n"<<endl;
        cout<<"enter your operation of choice(s.no.): ";
        cin>>choice;

        switch(choice) //using switch case to handle operations
        {
            case 1:
            add_employee();
            break;

            case 2:
            search_employee();
            break;

            case 3:
            update_employee();
            break;

            case 4:
            cout<<"thank you for visiting the employee record management system"<<endl;
            break;

            default:
            cout<<"invalid choice, try again"<<endl;
            break;
        }
    }
    while(choice!=4);
    return 0;
}