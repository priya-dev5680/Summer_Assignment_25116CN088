#include<iostream>
#include<string>
using namespace std;

struct products{
    int inv_id;
    string name;
    string company;
    int quantity;
    float price;
} products[100];
int num_products=0;

void add_product() //function to add a product in the inventory
{
    cout<<"enter new product details:"<<endl;
    cout<<"enter inventory no: ";
    cin>>products[num_products].inv_id;
    cin.ignore();
    cout<<"enter name of the product: ";
    getline(cin,products[num_products].name);
    cout<<"enter company name of the product: ";
    getline(cin,products[num_products].company);
    cout<<"enter quantity of the product in the inventory: ";
    cin>>products[num_products].quantity;
    cout<<"enter price of the product: ";
    cin>>products[num_products].price;
    num_products++;
}

void search_product() //function to search for a product by inventory no.
{
    int inventory;
    cout<<"enter inventory no. of the product to search: ";
    cin>>inventory;
    int flag=0;
    for(int i=0;i<num_products;i++)
    {
        if(inventory==products[i].inv_id)
        {
            flag=1;
            cout<<"the product's details are:\n"<<endl;
            cout<<"name: "<<products[i].name<<endl;
            cout<<"company name: "<<products[i].company<<endl;
            cout<<"quantity: "<<products[i].quantity<<endl;
            cout<<"price of product(in Rs.): "<<products[i].price<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered product does not exist in the inventory"<<endl;
    }
}

void status() //function to check status of a product
{
    int inventory;
    cout<<"enter inventory no. of product to check status of: ";
    cin>>inventory;
    int flag=0;
    for(int i=0;i<num_products;i++)
    {
        if(inventory==products[i].inv_id)
        {
            flag=1;
            if(products[i].quantity>=1)
            {
                cout<<"STATUS: IN STOCK"<<endl;
            }
            else{
                cout<<"STATUS: OUT OF STOCK"<<endl;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered product does not exist in the inventory"<<endl;
    }
}

void total_products()
{
    cout<<"the total number of products in the inventory are: "<<num_products<<endl;
}

void delete_product()
{
    int inventory;
    cout<<"enter inventory no. of the product whose record is to be deleted: ";
    cin>>inventory;
    int flag=0;
    for(int i=0;i<num_products;i++)
    {
        if(inventory==products[i].inv_id)
        {
            flag=1;
            for(int j=i;j<99;j++)
            {
                products[j]=products[j+1];
            }
            num_products--;
        }
    }
    if(!flag)
    {
        cout<<"record of the entered product does not exist in the inventory"<<endl;
    }
}

void update_product()
{
    int inventory;
    cout<<"enter inventory no. of product whose record is to be updated: ";
    cin>>inventory;
    int flag=0;
    for(int i=0;i<num_products;i++)
    {
        if(inventory==products[i].inv_id)
        {
            flag=1;
            cout<<"\nupdate:\n1.name\n2.company name\n3.quantity\n4.price\n";
            int choice;
            cin>>choice;
            cin.ignore();
            switch(choice){
                case 1:
                cout<<"enter updated  name: ";
                getline(cin,products[i].name);
                break;

                case 2:
                cout<<"enter updated company name: ";
                getline(cin,products[i].company);
                break;

                case 3:
                cout<<"enter updated quantity: ";
                cin>>products[i].quantity;
                break;

                case 4:
                cout<<"enter updated price: ";
                cin>>products[i].price;
                break;

                default:
                cout<<"wrong choice"<<endl;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"record of the entered product does not exist in the inventory"<<endl;
    }
}
int main()
{
    int choice;
    cout<<"\n\t\tINVENTORY SYSTEM"<<endl;
    cout<<"\tFOLLOWING OPERATINS ARE AVAILABLE:"<<endl;
    do{
        cout<<"\n\n1.enter new product\n2.search product by inventory number\n3.view status of product\n4.view total number of products in the inventory\n5.update a product's record\n6.delete a product's record\n7.exit\n";
        cout<<"\nenter choice of action you want to perform(s.no.): ";
        cin>>choice;
        
        switch(choice) //using switch case to handle inventory operations
        {
            case 1:
            add_product();
            break;

            case 2:
            search_product();
            break;

            case 3:
            status();
            break;

            case 4:
            total_products();
            break;

            case 5:
            update_product();
            break;

            case 6:
            delete_product();
            break;

            case 7:
            cout<<"thank you for visiting inventory management system"<<endl;
            break;

            default:
            cout<<"invalid choice, try again";
            break;
        }
    }
    while(choice!=7);
    return 0;
}