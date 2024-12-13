#include <iostream>

using namespace std;

int main()
{
    int n1, n2, r;
    cout<<"Enter n1 and n2"<<endl;
    cin>>n1>>n2;
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    cout<<"GCD = "<<n1;
}
