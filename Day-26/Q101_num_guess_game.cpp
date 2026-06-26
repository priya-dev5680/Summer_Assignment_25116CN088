#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"!!WELCOME TO NUMBER GUESSING GAME!!\nYOU HAVE TO CHOOSE A NUMBER BETWEEN 1-10\nYOU WILL GET 3 CHANCES\n\n";
    srand(time(0));
    int random_num=1+(rand()%10); //generating a random number between 1-10
    int num;
    int chances_left=3;
    for(int i=1;i<=3;i++)
    {
        cout<<"enter your guess: ";
        cin>>num; //taking user input for guess
        if(num==random_num)
        {
            cout<<"CONGRATULATIONS!!!\nyou guessed the correct number ;)"<<endl;
            break;
        }
        else{
            cout<<"WRONG GUESS!!\n";
            chances_left--;
            cout<<"you have "<<chances_left<<" chances remaining\n";
        }
        if(chances_left==0)
        {
            cout<<"YOU LOST!!!\nYOU COULDN'T GUESS THE CORRECT NUMBER IN THE CHANCES GIVEN :(\nTHE CORRECT NUMBER WAS: "<<random_num<<endl;
        }

    }
    return 0;
}