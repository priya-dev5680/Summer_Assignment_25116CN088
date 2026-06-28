#include<iostream>
#include<string>
using namespace std;

struct books{
    int lib_sno;
    string title;
    string author;
    int pub_year;
    string genre;
    int borrowed=0;
    string status="available";
} books[100];
int num_books=0;

struct readers{
    int mem_no;
    long long ph_no;
    string first_name;
    string last_name;
    string current_book="none";
} readers[100];
int num_readers=0;

void enter_book()
{
    cout<<"enter book details: "<<endl;
    cout<<"enter library s.no.: ";
    cin>>books[num_books].lib_sno;
    cin.ignore();
    cout<<"enter book title: ";
    getline(cin,books[num_books].title);
    cout<<"enter books's author's name: ";
    getline(cin,books[num_books].author);
    cout<<"enter publishing year: ";
    cin>>books[num_books].pub_year;
    cin.ignore();
    cout<<"enter genre: ";
    getline(cin,books[num_books].genre);
    num_books++;
}

void enter_reader()
{
    cout<<"enter library member's details: "<<endl;
    cout<<"enter library membership no.: ";
    cin>>readers[num_readers].mem_no;
    cout<<"enter phone no.: ";
    cin>>readers[num_readers].ph_no;
    cout<<"enter first name: ";
    cin>>readers[num_readers].first_name;
    cout<<"enter last name: ";
    cin>>readers[num_readers].last_name;
    num_readers++;
}

void view_book()
{
    int sno;
    cout<<"enter library s.no. of the book you want to find: ";
    cin>>sno;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(sno==books[i].lib_sno)
        {
            flag=1;
            cout<<"book title: "<<books[i].title<<endl;
            cout<<"book's author: "<<books[i].author<<endl;
            cout<<"publishing year: "<<books[i].pub_year<<endl;
            cout<<"genre: "<<books[i].genre<<endl;
            cout<<"times borrowed: "<<books[i].borrowed<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"book does not exist in the library database"<<endl;
    }
}

void view_reader()
{
    int mno;
    cout<<"enter library membership no. of the member you want to find: ";
    cin>>mno;
    int flag=0;
    for(int i=0;i<num_readers;i++)
    {
        if(mno==readers[i].mem_no)
        {
            flag=1;
            cout<<"phone no.: "<<readers[i].ph_no<<endl;
            cout<<"first name: "<<readers[i].first_name<<endl;
            cout<<"last name: "<<readers[i].last_name<<endl;
            cout<<"current borrowed book: "<<readers[i].current_book<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"member does not exist in the library database"<<endl;
    } 
}

void borrow_book()
{
    int sno,mno;
    cout<<"enter library membership no. of the member: ";
    cin>>mno;
    cout<<"enter library s.no. of the book: ";
    cin>>sno;
    string book;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(sno==books[i].lib_sno)
        {
            flag=1;
            books[i].borrowed++;
            books[i].status="borrowed";
            book=books[i].title;
            break;
        }
    }
    for(int i=0;i<num_readers;i++)
    {
        if(mno==readers[i].mem_no)
        {
            flag=1;
            readers[i].current_book=book;
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid membership no. or s.no."<<endl;
    }
}

void return_book()
{
    int sno,mno;
    cout<<"enter library membership no. of the member: ";
    cin>>mno;
    cout<<"enter library s.no. of the book: ";
    cin>>sno;
    string book;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(sno==books[i].lib_sno)
        {
            flag=1;
            books[i].status="available";
            break;
        }
    }
    for(int i=0;i<num_readers;i++)
    {
        if(mno==readers[i].mem_no)
        {
            flag=1;
            readers[i].current_book="none";
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid membership no. or s.no."<<endl;
    }
}

void status()
{
    int sno;
    cout<<"enter library s.no. of the book: ";
    cin>>sno;
    int flag=0;
    for(int i=0;i<num_books;i++)
    {
        if(sno==books[i].lib_sno)
        {
            flag=1;
            cout<<"current status of the book: "<<books[i].status<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"book does not exist in the library database"<<endl;
    }
}

void total_books()
{
    cout<<"the total number of books in the system are: "<<num_books<<endl;
}

void total_readers()
{
    cout<<"the total number of members in the system are: "<<num_readers<<endl;
}

int main()
{
    cout<<"WELCOME TO THE LIBRARY SYSTEM DATABASE"<<endl;
    int choice;
    do{
        cout<<"\n1.enter new book\n2.enter new member\n3.view book details\n4.view reader details\n5.borrow a book\n6.return a book\n7.view status of  book\n8.view total books\n9.view total members\n10.exit\n\n";
        cout<<"enter your choice of action: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            enter_book();
            break;

            case 2:
            enter_reader();
            break;

            case 3:
            view_book();
            break;

            case 4:
            view_reader();
            break;

            case 5:
            borrow_book();
            break;

            case 6:
            return_book();
            break;

            case 7:
            status();
            break;

            case 8:
            total_books();
            break;

            case 9:
            total_readers();
            break;

            case 10:
            cout<<"thank you for visiting the library system database"<<endl;
            break;

            default:
            cout<<"invalid choice"<<endl;
            break;
        }
    }
    while(choice!=10);
    return 0;
}