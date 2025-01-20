#include <iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
int item_no[7], qty[7];

string items[7]={"Grilled ChickenBurger", "Double Cheeseburger",
                 "Filet-O-Fish Burger", "Beef Burger",
                "Veggie Burger", "Cheezy Wedges", "FrenchFries"};

string price[7]={"$12", "$13", "$11", "$14", "$10", "$7", "$5"};
int prices[7]={12, 13, 11, 14, 10, 7, 5};
int Grilled_chicken_patty=100;
int Beef_patty=100;
int Fish_fillet=100;
int Veggie_patty=100;
int Hamburger_bun=100;
int Lettuce=100;
int Tomato=100;
int Pickles=100;
int Onions=100;
int Cheese=100;
int Potatoes=100;

/*
Grilled Chicken Burger:

    Grilled chicken patty
    Hamburger bun (usually sesame)
    Lettuce
    Tomato
    Pickles
    Cheese (optional)

Double Cheeseburger:

    Beef patties (2)
    Hamburger bun (usually sesame)
    Cheddar cheese (2 slices)
    Lettuce (optional)
    Tomato (optional)
    Onions (optional)
    Pickles

Filet-O-Fish Burger:

    Fish fillet
    Hamburger bun
    Lettuce
    Cheese (optional, usually a slice of cheddar)

Beef Burger:

    Beef patty
    Hamburger bun (usually sesame)
    Lettuce
    Tomato
    Pickles
    Onions
    Cheese (optional)

Veggie Burger:

    Veggie patty (can be made from beans, lentils, chickpeas, vegetables, or soy)
    Hamburger bun (usually sesame)
    Lettuce
    Tomato
    Pickles
    Cheese (optional, can use dairy-free options)

Cheezy Wedges:

    Potato wedges
    Cheese (usually cheddar)

French Fries:

    Potatoes
*/

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
    cout << endl;
}

void ordersystem()
{
    int i=0;
    char ch;
    while(true)
    {

        cout << "Enter item no.: ";
        cin >> item_no[i];
        cout << "Enter quantity: ";
        cin >> qty[i];
        cout << "Press\n1. To continue\n0. Exit" << endl;
        ch = getch();
        cout << endl;
        if( ch == '0' )
        {
            break;
        }
        else if( ch == '1' )
        {
            i++;
        }
        else
        {
            cout << "Invalid Input. Try again" << endl;
            cin >> ch;
        }


    }
}

void mainmenu()
{
    string choice;
    ASCII_ART(1);
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
        ordersystem();
    }

}

int main()
{
    mainmenu();

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
