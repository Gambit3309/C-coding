#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n1, n2, res, temp;
    cout<<"Enter 2 numbers "<<endl;
    cin>>n1>>n2;

    do
    {
        cout<<"1. Add two numbers"<<endl<<"2. Subtract two numbers"<<endl<<"3. Multiply two numbers"<<endl<<"4. Exit"<<endl;
        cin>>temp;
        if(temp==1)
        {
            cout<<setw(12)<<"SUM"<<endl;
            for(int i=1;i<=24;i++)
            cout<<"*";
            cout<<endl<<setw(10)<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
        }

        else if(temp==2)
        {
            cout<<setw(17)<<"SUBTRACT"<<endl;
            for(int i=1;i<=24;i++)
            cout<<"*";
            cout<<endl<<setw(10)<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        }
        else if(temp==3)
        {
            cout<<setw(17)<<"Multiply"<<endl;
            for(int i=1;i<=24;i++)
            cout<<"*";
            cout<<endl<<setw(10)<<n1<<"x"<<n2<<"="<<n1*n2<<endl;
        }
        else if(temp==4)
            break;
        else
            cout<<"Invalid option"<<endl;
    }
    while(true);
}
