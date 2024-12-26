#include <iostream>
#include<conio.h>

using namespace std;

void sum(int n1, int n2)
{
    cout<<n1+n2;
}

void multiply(int n1, int n2)
{
    cout<<n1*n2;
}

float division(int n1, int n2)
{
    if(n2!=0)
    {
        float a=n1, b=n2, res;
        res=a/b;
        cout<<res;
    }
    else
    cout<<"Mathematical Error"<<endl<<"Cannot divide by zero";
}

void subtract(int n1, int n2)
{
    cout<< n1-n2;
}
int main()
{
    int n1, n2;
    char op;
    cout<<"A = ";
    cin>>n1;
    cout<<"B = ";
    cin>>n2;
    cout<<"Press \n1 for addition\n2 for subtraction\n";
    cout<<"3 for multiplication\n4 for division"<<endl;
    op=getche();
    if(op=='1')
    {
        cout<<endl<<n1<<"+"<<n2<<"=";
        sum(n1,n2);
    }
    else if(op=='2')
    {
        cout<<endl<<n1<<"-"<<n2<<"=";
        subtract(n1,n2);
    }
    else if(op=='3')
    {
        cout<<endl<<n1<<"*"<<n2<<"=";
        multiply(n1,n2);
    }
    else if(op=='4')
    {
        cout<<endl<<n1<<"/"<<n2<<"=";
        division(n1,n2);
    }
    else
        cout<<"Error";
}
