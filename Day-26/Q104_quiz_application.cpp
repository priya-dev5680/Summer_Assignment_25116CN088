#include<iostream>
#include<string>
using namespace std;

int guess;
int total;

class questions{
    private:
    string ques;
    string option_1;
    string option_2;
    string option_3;
    string option_4;
    int correct;
    int score;

    public:
    void setval(string,string,string,string,string,int,int);

    void ask_ques();
};

int main()
{
    cout<<"WELCOME TO THE DAILY QUIZ!!!"<<endl;
    questions q1;
    questions q2;
    questions q3;
    questions q4;
    questions q5;

    q1.setval("1.Which of the following is a logical operator?","&&","+=","cout","%",1,10);
    q2.setval("2.Which data type is used to store text values?","int","float","string","double",3,10);
    q3.setval("3.What value does indexing in an array start from?","1","0","-1","2",2,10);
    q4.setval("4.What brackets are used to contain function definition?","{}","[]","()","<>",1,10);
    q5.setval("5.what are reserved words in a programming language called?","identifiers","keywords","string","operators",2,10);

    q1.ask_ques();
    q2.ask_ques();
    q3.ask_ques();
    q4.ask_ques();
    q5.ask_ques();
    cout<<"total score = "<<total<<"/50"<<endl;
    return 0;
}
void questions::setval(string q,string a1,string a2,string a3,string a4,int ca,int sc)
{
    ques=q;
    option_1=a1;
    option_2=a2;
    option_3=a3;
    option_4=a4;
    correct=ca;
    score=sc;
}
void questions::ask_ques()
{
    cout<<endl;
    cout<<ques<<endl;
    cout<<"1."<<option_1<<endl;
    cout<<"2."<<option_2<<endl;
    cout<<"3."<<option_3<<endl;
    cout<<"4."<<option_4<<endl;
    cout<<endl;
    cout<<"what is your answer? Enter option number."<<endl;
    cin>>guess;
    if(guess==correct)
    {
        cout<<"correct answer!"<<endl;
        total+=score;
    }
    else{
        cout<<"wrong answer :("<<endl;
    }
}