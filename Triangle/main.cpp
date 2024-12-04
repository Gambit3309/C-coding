#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3;
    cout<<"Enter the first angle: ";
    cin>>num1;
    cout<<"Enter the second angle: ";
    cin>>num2;
    cout<<"Enter the third angle: ";
    cin>>num3;
    if(num1+num2+num3==180)
        cout<<"The triangle is valid.";
    else
        cout<<"The triangle is not valid.";
}
