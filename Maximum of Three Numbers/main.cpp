#include <iostream>

using namespace std;

void max(int n1,int n2, int n3)
{
    if(n1>=n2 && n1>=n3)
        cout<<n1<<" is the largest number";
    else if(n2>=n1 && n2>=n3)
        cout<<n2<<" is the largest number";
    else
        cout<<n3<<" is the largest number";
}

int main()
{
    int n1, n2,n3;
    cout << "Enter three numbers" << endl<<"A = ";
    cin>>n1;
    cout<<"B = ";
    cin>>n2;
    cout<<"C = ";
    cin>>n3;
    max(n1,n2,n3);
    return 0;
}
