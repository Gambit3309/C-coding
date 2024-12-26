#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int temp, withdraw, balance=4678, amount;

    do
    {
        cout<<endl<<"1. View their balance"<<endl<<"2. Deposit money"<<endl<<"3. Withdraw money"<<endl<<"4. Exit"<<endl;
        cin>>temp;
        if(temp==1)
        {
            cout<<"Your current account balance is: $"<<balance<<endl;
        }

        else if(temp==2)
        {
            cout<<"Enter amount you want to deposit:"<<endl<<"Amount = ";
            cin>>amount;
            balance+=amount;
        }
        else if(temp==3)
        {
            cout<<"Enter amount you want to withdraw:"<<endl<<"Amount = ";
            cin>>withdraw;
            balance-=withdraw;
        }
        else if(temp==4)
            break;
        else
            cout<<"Invalid option"<<endl;
    }
    while(true);
}
