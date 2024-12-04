#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n=0;
    cout<<"Enter the number you are looking for: ";
    cin>>n1;
    cout<<"Enter the 5 numbers: ";
    for(int count=1;count<=5;count++)
    {
        cout<<count<<") ";
        cin>>n2;
        if(n1==n2)
        {
            n++;
        }
    }
    if(n<2)
        cout<<"The number "<<n1<<" appears "<<n<<" time";
    else
        cout<<"The number "<<n1<<" appears "<<n<<" times";
}
