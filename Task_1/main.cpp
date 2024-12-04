#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout<<"Enter a number: ";
    cin>>num1;
    if(num1>0)
        cout<<"Positive";
    else if(num1==0)
        cout<<"The number is zero";
    else
        cout<<"Negative";
}
