#include <iostream>

using namespace std;

void swap(int n1, int n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
    cout<<"After swaping\nA = "<<n1<<"\tB = "<<n2;
}

int main()
{
    int n1, n2;
    cout << "Enter 2 numbers\nA = ";
    cin>>n1;
    cout<<"B = ";
    cin>>n2;
    swap(n1,n2);
}
