#include <iostream>

using namespace std;

int main()
{
    int age;
    bool citi=false;
    cout<< "Enter your age: ";
    cin>>age;
    if(citi==true)
    {
        if(age>18)
            cout<<"Eligible to vote";
        else
            cout<<"You need to wait until you're 18 to vote";
    }
    else
        cout<<"Not Eligible to vote";
}
