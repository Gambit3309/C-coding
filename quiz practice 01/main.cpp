#include <iostream>

using namespace std;

void print()
{
    int i=1, n, sum=0;
    cout<<"Enter limit: ";
    cin>>n;
    do
    {


        cout<<i<<" ";
        sum+=i;
        i++;
    }
    while(i<=n);
    cout<<endl<<sum;
}
int main()
{
    print();
}
