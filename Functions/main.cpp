#include <iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int Task_01(int a, int b)
{
   return a+b;
}

float a(float r)
{
    const float PI=3.142;
    float a=PI*r*r;
    return a;
}

int power(int a, int b)
{
    return pow(a,b);
}

int main()
{
    char t;
    cout<<"Choose a task to perform\n\n1. Addition\n2. Area of Circle\n3. Calculate exponenet"<<endl;
    t=getche();
    if(t=='1')
        {
            int n1, n2;
            cout<<"\nEnter 2 numbers\nNumber 1 = ";
            cin>>n1;
            cout<<"Number 2 = ";
            cin>>n2;
            int sum=Task_01(n1, n2);
            cout<<sum;
        }
    if(t=='2')
    {
        float area, r;
        cout<<"\nEnter radius of circle: "<<endl;
        cin>>r;
        area = a(r);
        cout<<area;
    }
    if(t=='3')
    {
        int base, exponent;
        cout<<"\nEnter base number: ";
        cin>>base;
        cout<<"Enter exponent: ";
        cin>>exponent;
        int res=power(base,exponent);
        cout<<res;
    }

}
