#include <iostream>
#include<iomanip>

using namespace std;

void area(float r)
{
    cout<<"Area = "<<setprecision(4)<<3.142*r*r<<endl;
}

void circumference(float r)
{
    cout<<"Circumference = "<<setprecision(4)<<2*3.142*r;
}
int main()
{
    float r;
    cout <<"Enter the radius of the circle: ";
    cin>>r;
    area(r);
    circumference(r);
}
