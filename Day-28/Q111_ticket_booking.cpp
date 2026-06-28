#include<iostream>
#include<string>
using namespace std;

struct cinema{
    int s_no;
    string movie_name;
    string genre;
    int runtime;
    int seats=100;
    int booked=0;
} cinema[5]={{1,"spiderman:brand new day","action",120,100,0},{2,"backrooms","horror",150,100,0},{3,"obsession","horror",100,100,0},
{4,"F1","sports",140,100,0},{5,"billie eilish:hmhas","music",120,100,0}};

struct user{
    long long mob;
    string name;
    string movie;
    int book=0;
} user[100];
int user_num=0;

void movies_available()
{
    cout<<"the movies currently showing are: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"."<<cinema[i].movie_name<<endl;
    }
}

void view_detail()
{
    int sno;
    cout<<"enter s.no. of movie: ";
    cin>>sno;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(sno==cinema[i].s_no)
        {
            flag=1;
            cout<<"movie name: "<<cinema[i].movie_name<<endl;
            cout<<"genre: "<<cinema[i].genre<<endl;
            cout<<"runtime(in minutes): "<<cinema[i].runtime<<endl;
            cout<<"seats available: "<<cinema[i].seats<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid s.no."<<endl;
    }
}

void book_ticket()
{
    int sno,book;
    string mov;
    cout<<"enter s.no. of movie: ";
    cin>>sno;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(sno==cinema[i].s_no)
        {
            flag=1;
            cout<<"movie: "<<cinema[i].movie_name<<endl;
            cout<<"how many seats would you like to book: ";
            cin>>book;
            cin.ignore();
            mov=cinema[i].movie_name;
            cinema[i].seats-=book;
            cout<<"enter your name: ";
            getline(cin,user[user_num].name);
            cout<<"enter your mobile no.: ";
            cin>>user[user_num].mob;
            user[user_num].movie=mov;
            user[user_num].book=book;
            user_num++;
            cout<<"tickets booked successfully"<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid s.no."<<endl;
    }
}

void remaining()
{
    int sno;
    cout<<"enter s.no. of movie: ";
    cin>>sno;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(sno==cinema[i].s_no)
        {
            flag=1;
            cout<<"remaining seats: "<<cinema[i].seats<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid s.no."<<endl;
    }
}

void view_ticket()
{
    long long mn;
    cout<<"enter your mobile no.: ";
    cin>>mn;
    int flag=0;
    for(int i=0;i<user_num;i++)
    {
        if(mn==user[i].mob)
        {
            flag=1;
            cout<<"ticket details are: "<<endl;
            cout<<"name: "<<user[i].name<<endl;
            cout<<"movie name: "<<user[i].movie<<endl;
            cout<<"tickets booked: "<<user[i].book<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"invalid user"<<endl;
    }
}

int main()
{
    cout<<"WELCOME TO THE MOVIE THEATRE\n"<<endl;
    movies_available();
    int choice;
    do{
        cout<<"\n\n1.view details of a movie\n2.book tickets for a movie\n3.view tickets remaining for a movie\n4.view booked ticket details\n5.exit\n\n";
        cout<<"\nenter choice of action you want to perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            view_detail();
            break;

            case 2:
            book_ticket();
            break;

            case 3:
            remaining();
            break;

            case 4:
            view_ticket();
            break;

            case 5:
            cout<<"thank you for visiting the movie theatre"<<endl;
            break;

            default:
            cout<<"invalid choice";
            break;
        }
    }
    while(choice!=5);
    return 0;
}
