#include <iostream>

using namespace std;

void res(int base,int exponent)
{
    int res=1;
    for(int i=1;i<=exponent;i++)
        res=res*base;
    cout<<res;
}
int main()
{
    int base, exponent;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>exponent;
    res(base, exponent);
}
