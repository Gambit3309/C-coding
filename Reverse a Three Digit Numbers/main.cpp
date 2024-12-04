#include <iostream>

using namespace std;

int main()
{
    int num1, d1, d2, d3, num2;
    cout<<"Enter a three digit number";
    cin>> num1;
    d1=num1%10;
    num2=num1/10;
    d2=num2%10;
    num2=num2/10;
    d3=num2;
    cout<<"The three digit number in reverse order is "<<d1<<d2<<d3;
}
