#include <iostream>

using namespace std;

void series(int &c)
{
    int a=0, b=1, nextterm=0;
    for(int i=1;i<=c;i++)
    {
        if(i == 1) {
            cout << a << ", ";
            continue;
        }
        if(i == 2) {
            cout << b << ", ";
            continue;
        }
        nextterm = a + b;
        a = b;
        b = nextterm;
        cout << nextterm << ", ";
    }
}
int main()
{
    int n1;
    cout<<"Enter number of terms: ";
    cin>>n1;
    series(n1);
}
