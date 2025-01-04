#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    char op='a';
    do
    {
    op='a';
    start:
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;
        do
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
            i++;
        }
        while(i<=10);
            while(op!='1' && op!='2')
            {
                cout<<"Press\n1. To continue\n2. To quit"<<endl;
                op=getche();
            }
    }while(op!='2');

}
