#include <iostream>

using namespace std;

void fact(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
     cout<<fact;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin>>n;
    fact(n);
}
