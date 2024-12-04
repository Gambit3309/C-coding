#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<18)
        cout<<"Not eligible to vote";
    else
        cout<<"Eligible to vote";
}
