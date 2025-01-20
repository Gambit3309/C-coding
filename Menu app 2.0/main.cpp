#include <iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

string items[7]={"Grilled ChickenBurger", "Double Cheeseburger",
                 "Filet-O-Fish Burger", "Beef Burger",
                "Veggie Burger", "Cheezy Wedges", "FrenchFries"};

string price[7]={"$12", "$13", "$11", "$14", "$10", "$7", "$5"};
int prices[7]={12, 13, 11, 14, 10, 7, 5};

void ASCII_ART(int);
void manager();
void stock();

void space()
{
    cout << "\t\t";
}

void menu()
{
    int e=52; //controls the end of loop
    cout << endl;
    space();
    for(int i=1; i<=e; i++)
        cout << "=";

    cout << endl;

    //First row
    space();
    cout << "|"
    << setw(6) << "Sr no."
    << "|"
    << setw(16) << ""
    << "Items"
    << setw(16) << ""
    << "|"
    << "Price"
    << "|"
    << endl;

    space();

    for(int i=1; i<=e; i++)
        cout << "-";

    cout << endl;

    for(int k=0; k<7;k++)
    {
        space();
        cout << "|"
        << setw(3) << k+1 << "."
        << setw(2) << ""
        << "|"
        << setw((37-items[k].length())/2) << ""
        << items[k]
        << setw((37-items[k].length())/2) << ""
        << "|"
        << setw(5) << right << price[k]
        << "|"
        << endl;
    }

    space();

    for(int i=1; i<=e; i++)
        cout << "-";
}

void ordersystem()
{

}

void mainmenu()
{
    string choice;
    int a = 1;
    ASCII_ART(a);
    cout << endl;
	cout <<" ----------------------------------------------------------------- "<< endl;
	space();
	cout << "\t Gambit's Restaurant" << endl;

	cout << "1. Restaurant Manager\n"
	<< "2. Customer\n"
	<< "3. Exit\n\n"
	<< "Select an option: ";

	cin >> choice;

	while(choice != "1" && choice != "2" && choice!="3")
    {
        cout << "Invalid option. Please try again!" << endl;
        cin >> choice;
    }
    if(choice == "2")
    {
        system("CLS");
        menu();
    }

}

int main()
{
    mainmenu();
    menu();
}

void ASCII_ART(int a)
{
    if(a == 1)
    {
        cout << "\t\t__          __  _" << endl;
        cout << "\t\t\\ \\        / / | |" << endl;
        cout << "\t\t \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___ " << endl;
        cout << "\t\t  \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\" << endl;
        cout << "\t\t   \\  /\\  /  __/ | (_| (_) | | | | | |  __/" << endl;
        cout << "\t\t    \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|";
    }
}

void manager()
{

}
