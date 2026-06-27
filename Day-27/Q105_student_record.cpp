#include<iostream>
#include<string>
using namespace std;

struct students{
    int roll_no;
    string first_name;
    string last_name;
    string course;
    float cgpa;
} students[100];
int num_students=0;

void enter_record()
{
    cout<<"enter new student details:"<<endl;
    cout<<"enter roll no: ";
    cin>>students[num_students].roll_no;
    cout<<"enter first name of the student: ";
    cin>>students[num_students].first_name;
    cout<<"enter last name of the student: ";
    cin>>students[num_students].last_name;
    cout<<"enter course of the student: ";
    cin>>students[num_students].course;
    cout<<"enter cgpa obtained by the student: ";
    cin>>students[num_students].cgpa;
    num_students++;
}

void search_student()
{
    int roll;
    cout<<"enter roll no. of the student to search: ";
    cin>>roll;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(roll==students[i].roll_no)
        {
            flag=1;
            cout<<"the student's details are:\n"<<endl;
            cout<<"first name: "<<students[i].first_name<<endl;
            cout<<"last name: "<<students[i].last_name<<endl;
            cout<<"course: "<<students[i].course<<endl;
            cout<<"cgpa obtained: "<<students[i].cgpa<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered student does not exist in the system"<<endl;
    }
}

void status()
{
    int roll;
    cout<<"enter roll no. of student to check status of: ";
    cin>>roll;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(roll==students[i].roll_no)
        {
            flag=1;
            if(students[i].cgpa>=3.3)
            {
                cout<<"STATUS: PASS"<<endl;
            }
            else{
                cout<<"STATUS: FAIL"<<endl;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered student does not exist in the system"<<endl;
    }
}

void total_students()
{
    cout<<"the total number of students in the system are: "<<num_students<<endl;
}

void delete_record()
{
    int roll;
    cout<<"enter roll no. of the student whose record is to be deleted: ";
    cin>>roll;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(roll==students[i].roll_no)
        {
            flag=1;
            for(int j=i;j<99;j++)
            {
                students[j]=students[j+1];
            }
            num_students--;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered student does not exist in the system"<<endl;
    }
}

void update_record()
{
    int roll;
    cout<<"enter roll no. of student whose record is to be updated: ";
    cin>>roll;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(roll==students[i].roll_no)
        {
            flag=1;
            cout<<"\nupdate:\n1.roll number\n2.first name\n3.last name\n4.course\n5.cgpa\n";
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                cout<<"enter updated roll number: ";
                cin>>students[i].roll_no;
                break;

                case 2:
                cout<<"enter updated first name: ";
                cin>>students[i].first_name;
                break;

                case 3:
                cout<<"enter updated last name: ";
                cin>>students[i].last_name;
                break;

                case 4:
                cout<<"enter updated course: ";
                cin>>students[i].course;
                break;

                case 5:
                cout<<"enter updated cgpa: ";
                cin>>students[i].cgpa;
                break;

                default:
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered student does not exist in the system"<<endl;
    }
}
int main()
{
    int choice;
    do{
        cout<<"\n\n1.enter new record\n2.search record by roll number\n3.view status of student\n4.view total number of students in the system\n5.update a student's record\n6.delete a student's record\n7.exit\n";
        cout<<"\nenter choice of action you want to perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            enter_record();
            break;

            case 2:
            search_student();
            break;

            case 3:
            status();
            break;

            case 4:
            total_students();
            break;

            case 5:
            update_record();
            break;

            case 6:
            delete_record();
            break;

            case 7:
            cout<<"thank you for visiting the student record management system"<<endl;
            break;

            default:
            cout<<"wrong choice";
            break;
        }
    }
    while(choice!=7);
    return 0;
}