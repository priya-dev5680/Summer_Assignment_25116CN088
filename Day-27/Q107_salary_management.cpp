#include<iostream>
#include<string>
using namespace std;

struct employees{
    int emp_id;
    string first_name;
    string last_name;
    string dept;
    float salary;
    float travel;
    float health;
    float tax;
    float total;
} employees[100];
int num_employees=0;

void enter_record()
{
    cout<<"enter new employee details:"<<endl;
    cout<<"enter employee id: ";
    cin>>employees[num_employees].emp_id;
    cout<<"enter first name of the employee: ";
    cin>>employees[num_employees].first_name;
    cout<<"enter last name of the employee: ";
    cin>>employees[num_employees].last_name;
    cout<<"enter department of the employee: ";
    cin>>employees[num_employees].dept;
    cout<<"enter monthly basic salary earned by the employee: ";
    cin>>employees[num_employees].salary;
    cout<<"enter travel expense of the employee: ";
    cin>>employees[num_employees].travel;
    cout<<"enter monthly health insurance amount of the employee: ";
    cin>>employees[num_employees].health;
    employees[num_employees].total=employees[num_employees].salary+employees[num_employees].travel+employees[num_employees].health;
    num_employees++;
}

void search_employee()
{
    int id;
    cout<<"enter employee id of the employee to search: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_employees;i++)
    {
        if(id==employees[i].emp_id)
        {
            flag=1;
            cout<<"the employee's details are:\n"<<endl;
            cout<<"first name: "<<employees[i].first_name<<endl;
            cout<<"last name: "<<employees[i].last_name<<endl;
            cout<<"department: "<<employees[i].dept<<endl;
            cout<<"basic salary earned: "<<employees[i].salary<<endl;
            cout<<"monthly travel expense: "<<employees[i].travel<<endl;
            cout<<"monthly health insurance amount: "<<employees[i].health<<endl;
            cout<<"total salary of the employee(in Rs.): "<<employees[i].total<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered employee does not exist in the system"<<endl;
    }
}

void total_employees()
{
    cout<<"the total number of employees in the system are: "<<num_employees<<endl;
}

void delete_record()
{
    int id;
    cout<<"enter employee id. of the employee whose record is to be deleted: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_employees;i++)
    {
        if(id==employees[i].emp_id)
        {
            flag=1;
            for(int j=i;j<99;j++)
            {
                employees[j]=employees[j+1];
            }
            num_employees--;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered employee does not exist in the system"<<endl;
    }
}

void update_record()
{
    int id;
    cout<<"enter employee id. of employee whose record is to be updated: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_employees;i++)
    {
        if(id==employees[i].emp_id)
        {
            flag=1;
            cout<<"\nupdate:\n1.id number\n2.first name\n3.last name\n4.dept\n5.salary\n6.travel expense\n7.monthly health insurance amount\n";
            int choice;
            cout<<"enter choice: ";
            cin>>choice;
            switch(choice){
                case 1:
                cout<<"enter updated id number: ";
                cin>>employees[i].emp_id;
                break;

                case 2:
                cout<<"enter updated first name: ";
                cin>>employees[i].first_name;
                break;

                case 3:
                cout<<"enter updated last name: ";
                cin>>employees[i].last_name;
                break;

                case 4:
                cout<<"enter updated department: ";
                cin>>employees[i].dept;
                break;

                case 5:
                cout<<"enter updated salary: ";
                cin>>employees[i].salary;
                break;

                case 6:
                cout<<"enter updated travel expense: ";
                cin>>employees[i].travel;
                break;

                case 7:
                cout<<"enter updated health insurance amount: ";
                cin>>employees[i].health;
                break;

                default:
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered employee does not exist in the system"<<endl;
    }
}
int main()
{
    int choice;
    do{
        cout<<"\n1.enter new record\n2.search record by employee id\n3.view total number of employees in the system\n4.update an employee's record\n5.delete an employee's record\n6.exit\n";
        cout<<"\nenter choice of action you want to perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            enter_record();
            break;

            case 2:
            search_employee();
            break;

            case 3:
            total_employees();
            break;

            case 4:
            update_record();
            break;

            case 5:
            delete_record();
            break;

            case 6:
            cout<<"thank you for visiting the employee record management system"<<endl;
            break;

            default:
            cout<<"wrong choice";
            break;
        }
    }
    while(choice!=6);
    return 0;
}