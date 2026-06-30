#include<iostream>
#include<string>
using namespace std;

int scl_id[100];
int roll[100];
string first_name[100];
string last_name[100];
int clas[100];
string section[100];
int num_students=0; //using arrays to store various data fields of a student's record

void add_student() //function to add a number to students to the database
{
    int num;
    cout<<"enter number of students whose data you want to add: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        scl_id[num_students]=num_students+1;
        cout<<"\nschool id: "<<scl_id[num_students]<<endl;
        cout<<"enter new student details: "<<endl;
        cout<<"roll no.: ";
        cin>>roll[num_students];
        cout<<"first name: ";
        cin>>first_name[num_students];
        cout<<"last name: ";
        cin>>last_name[num_students];
        cout<<"class: ";
        cin>>clas[num_students];
        cout<<"section: ";
        cin>>section[num_students];
        num_students++;
    }
}

void search_student() //function to search for record of a student
{
    int id;
    cout<<"enter school id of the student you want to search: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(id==scl_id[i])
        {
            flag=1;
            cout<<"details are: "<<endl;
            cout<<"roll no.: "<<roll[i]<<endl;
            cout<<"first name: "<<first_name[i]<<endl;
            cout<<"last name: "<<last_name[i]<<endl;
            cout<<"class: "<<clas[i]<<endl;
            cout<<"section: "<<section[i]<<endl;
        }
    }
    if(!flag)
    {
        cout<<"record not found in the database"<<endl;
    }
}

void update_student() //function to update the record of a student
{
    int id,choice;
    cout<<"enter school id of student whose record is to be updated: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_students;i++)
    {
        if(id==scl_id[i])
        {
            cout<<"update:\n1.roll no.\n2.first name\n3.last name\n4.class\n5.section"<<endl;
            cout<<"enter which detail you want to update(s.no.): ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                cout<<"enter new roll no.: ";
                cin>>roll[i];
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
                cout<<"enter updated class: ";
                cin>>clas[i];
                break;

                case 5:
                cout<<"enter updated section: ";
                cin>>section[i];
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
    cout<<"\n\t\tSTUDENT RECORD\n"<<endl;
    cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
    do
    {
        cout<<"\n1.enter new student record\n2.search for a student's record\n3.update a student's record\n4.exit\n"<<endl;
        cout<<"enter your operation of choice(s.no.): ";
        cin>>choice;

        switch(choice) //using switch case to handle operations
        {
            case 1:
            add_student();
            break;

            case 2:
            search_student();
            break;

            case 3:
            update_student();
            break;

            case 4:
            cout<<"thank you for visiting the student record management system"<<endl;
            break;

            default:
            cout<<"invalid choice, try again"<<endl;
            break;
        }
    }
    while(choice!=4);
    return 0;
}