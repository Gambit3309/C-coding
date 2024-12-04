#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number\nnum1 = ";
    cin>>num1;
    cout << "Enter second number\nnum2 = ";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After swapping: \nnum1 = "<<num1<<"\tnum2 = "<<num2;
}
