#include <iostream>

using namespace std;

int main()
{
    int n1, f=1;
    cout<<"Enter number to calculate factorial: ";
    cin>>n1;
    for(int i=n1; i>=1;i--)
        f=f*i;
    cout<<f;
}
