#include<iostream>
#include<string>
using namespace std;

struct contacts{
    int ph_no;
    string first_name;
    string last_name;
    string email;
} contacts[100];
int num_contacts=0;

void add_ccontact()
{
    cout<<"enter new contact details:"<<endl;
    cout<<"enter contact no.: ";
    cin>>contacts[num_contacts].ph_no;
    cout<<"enter first name of the contact: ";
    cin>>contacts[num_contacts].first_name;
    cout<<"enter last name of the contact: ";
    cin>>contacts[num_contacts].last_name;
    cout<<"enter email of the contact: ";
    cin>>contacts[num_contacts].email;
    num_contacts++;
}

void search_contact()
{
    int no;
    cout<<"enter contact no. of the contact to search: ";
    cin>>no;
    int flag=0;
    for(int i=0;i<num_contacts;i++)
    {
        if(no==contacts[i].ph_no)
        {
            flag=1;
            cout<<"the contact's details are:\n"<<endl;
            cout<<"first name: "<<contacts[i].first_name<<endl;
            cout<<"last name: "<<contacts[i].last_name<<endl;
            cout<<"email: "<<contacts[i].email<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered contact does not exist in the system"<<endl;
    }
}

void total_contacts()
{
    cout<<"the total number of contacts in the system are: "<<num_contacts<<endl;
}

void delete_contact()
{
    int no;
    cout<<"enter contact no. of the contact to be deleted: ";
    cin>>no;
    int flag=0;
    for(int i=0;i<num_contacts;i++)
    {
        if(no==contacts[i].ph_no)
        {
            flag=1;
            for(int j=i;j<99;j++)
            {
                contacts[j]=contacts[j+1];
            }
            num_contacts--;
        }
    }
    if(!flag)
    {
        cout<<"entered contact does not exist in the system"<<endl;
    }
}

void update_record()
{
    int no;
    cout<<"enter contact no. of contact to be updated: ";
    cin>>no;
    int flag=0;
    for(int i=0;i<num_contacts;i++)
    {
        if(no==contacts[i].ph_no)
        {
            flag=1;
            cout<<"\nupdate:\n1.no number\n2.first name\n3.last name\n4.email\n";
            int choice;
            cin>>choice;
            switch(choice){
                case 1:
                cout<<"enter updated no number: ";
                cin>>contacts[i].ph_no;
                break;

                case 2:
                cout<<"enter updated first name: ";
                cin>>contacts[i].first_name;
                break;

                case 3:
                cout<<"enter updated last name: ";
                cin>>contacts[i].last_name;
                break;

                case 4:
                cout<<"enter updated email: ";
                cin>>contacts[i].email;
                break;
                
                default:
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered contact does not exist in the system"<<endl;
    }
}
int main()
{
    int choice;
    do{
        cout<<"\n1.add new contact\n2.search contact by contact no\n3.view total number of contacts in the system\n4.update a contact\n5.delete a contact\n6.exit\n";
        cout<<"\nenter choice of action you want to perform: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            add_ccontact();
            break;

            case 2:
            search_contact();
            break;

            case 3:
            total_contacts();
            break;

            case 4:
            update_record();
            break;

            case 5:
            delete_contact();
            break;

            case 6:
            cout<<"thank you for visiting the contact management system"<<endl;
            break;

            default:
            cout<<"wrong choice";
            break;
        }
    }
    while(choice!=6);
    return 0;
}