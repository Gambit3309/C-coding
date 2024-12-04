#include <iostream>

using namespace std;

int main()
{
    int acc_bal, withdrawal;
    cout<<"Enter your account balance: ";
    cin>>acc_bal;
    cout<<"Enter withdrawal amount: ";
    cin>>withdrawal;
    if(acc_bal>=withdrawal)
    {
        if(withdrawal%5==0)
            cout<<"Withdrawal successful";
        else
            cout<<"withdrawal muse be a multiple of 5";
    }
    else
        cout<<"Insufficient account balance";

}
