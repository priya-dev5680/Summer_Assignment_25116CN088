#include<iostream>
#include<string>
using namespace std;

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

void total_books()
{
    cout<<"current number of books in the database are: "<<num_books<<endl;
}

int main()
{
    int choice;
    cout<<"\n\t\tMINI LIBRARY\n"<<endl;
    cout<<"FOLLOWING OPERATIONS ARE AVAILABLE: "<<endl;
    do
    {
        cout<<"\n1.enter new book record\n2.search for a book's record\n3.update a book's record\n4.view total number of books in the database\n5.exit\n"<<endl;
        cout<<"enter your operation of choice(s.no.): ";
        cin>>choice;

        switch(choice) //using switch case to handle operations
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
    while(choice!=5);
    return 0;
}