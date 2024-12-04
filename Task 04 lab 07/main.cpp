#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n=0, p=0;
    cout<<"Enter 5 numbers: "<<endl;
    for(int count=1;count<=5;count++)
    {
        cout<<count<<") ";
        cin>>n1;
        if(n1>0)
        {
            p++;
        }
        if(n1<0)
        {
            n--;
        }`
    }

        cout<<"Positive numbers: "<<p<<" Negative numbers: "<<n;
}
