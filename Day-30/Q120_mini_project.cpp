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

int emp_id[100];
long long phone[100];
string empfirst_name[100];
string emplast_name[100];
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
        cin>>empfirst_name[num_employees];
        cout<<"last name: ";
        cin>>emplast_name[num_employees];
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
            cout<<"first name: "<<empfirst_name[i]<<endl;
            cout<<"last name: "<<emplast_name[i]<<endl;
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
                cin>>empfirst_name[i];
                break;

                case 3:
                cout<<"enter updated last name: ";
                cin>>emplast_name[i];
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

int lib_id[100];
string book_name[100];
string author[100];
int pub_year[100];
string genre[100];
int num_books=0; //using arrays to store various data fields of a book's record

void add_book() //function to add a number to books to the database
{
    int num;
    cout<<"enter number of books whose data you want to add: ";
    cin>>num;
    cin.ignore();
    for(int i=0;i<num;i++)
    {
        lib_id[num_books]=num_books+1;
        cout<<"\nlibrary id: "<<lib_id[num_books]<<endl;
        cout<<"enter new book details: "<<endl;
        cout<<"book name: ";
        getline(cin,book_name[num_books]);
        cout<<"author: ";
        getline(cin,author[num_books]);
        cout<<"publishing year: ";
        cin>>pub_year[num_books];
        cin.ignore();
        cout<<"genre: ";
        getline(cin,genre[num_books]);
        num_books++;
    }
}

void search_book() //function to search for record of a book
{
    int id;
    cout<<"enter library id of the book you want to search: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(id==lib_id[i])
        {
            flag=1;
            cout<<"details are: "<<endl;
            cout<<"book name: "<<book_name[i]<<endl;
            cout<<"author: "<<author[i]<<endl;
            cout<<"publishing year: "<<pub_year[i]<<endl;
            cout<<"genre: "<<genre[i]<<endl;
        }
    }
    if(!flag)
    {
        cout<<"record not found in the database"<<endl;
    }
}

void update_book() //function to update the record of a book
{
    int id,choice;
    cout<<"enter library id of book whose record is to be updated: ";
    cin>>id;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(id==lib_id[i])
        {
            cout<<"update:\n1.book name\n2.author\n3.publishing year\n4.genre"<<endl;
            cout<<"enter which detail you want to update(s.no.): ";
            cin>>choice;
            cin.ignore();
            switch(choice)
            {
                case 1:
                cout<<"enter updated book name: ";
                getline(cin,book_name[i]);
                break;

                case 2:
                cout<<"enter updated author: ";
                getline(cin,author[i]);
                break;

                case 3:
                cout<<"enter updated publishing year: ";
                cin>>pub_year[i];
                break;

                case 4:
                cout<<"enter updated genre: ";
                getline(cin,genre[i]);
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

void total_books() //function to count total books in the library database
{
    cout<<"current number of books in the database are: "<<num_books<<endl;
}

int main()
{
    cout<<"\t\tMINI PROJECT GENERATOR"<<endl;
    cout<<"FOLLOWING PROJECTS ARE AVAILABLE: "<<endl;
    int choose;
    cout<<"\n1.student record management project\n2.employee record management project\n3.mini library project"<<endl;
    cout<<"enter your choice of project: ";
    cin>>choose;
    switch(choose)
    {
        case 1:
        int choice1;
        cout<<"\n\t\tSTUDENT RECORD\n"<<endl;
        cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
        do
        {
            cout<<"\n1.enter new student record\n2.search for a student's record\n3.update a student's record\n4.exit\n"<<endl;
            cout<<"enter your operation of choice(s.no.): ";
            cin>>choice1;

            switch(choice1) //using switch case to handle operations
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
        while(choice1!=4);
        break;

        case 2:
        int choice2;
        cout<<"\n\t\tEMPLOYEE RECORD SYSTEM\n"<<endl;
        cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
        do
        {
            cout<<"\n1.enter new employee record\n2.search for an employee's record\n3.update an employee's record\n4.exit\n"<<endl;
            cout<<"enter your operation of choice(s.no.): ";
            cin>>choice2;

            switch(choice2) //using switch case to handle operations
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
        while(choice2!=4);
        break;

        case 3:
        int choice3;
        cout<<"\n\t\tMINI LIBRARY\n"<<endl;
        cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
        do
        {
            cout<<"\n1.enter new book record\n2.search for a book's record\n3.update a book's record\n4.view total number of books in the database\n5.exit\n"<<endl;
            cout<<"enter your operation of choice(s.no.): ";
            cin>>choice3;

            switch(choice3) //using switch case to handle operations
            {
                case 1:
                add_book();
                break;

                case 2:
                search_book();
                break;

                case 3:
                update_book();
                break;

                case 4:
                total_books();
                break;

                case 5:
                cout<<"thank you for visiting our mini library ;)"<<endl;
                break;

                default:
                cout<<"invalid choice, try again"<<endl;
                break;
            }
        }
        while(choice3!=5);
        break;

        default:
        cout<<"invalid choice"<<endl;
    }
    return 0;
}