#include <iostream>

using namespace std;

int main()
{
    int age;
    bool hasDrivingLicense;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Press 1 if you have a driving license else press 0"<<endl;
    cin>>hasDrivingLicense;
    if(age>=18&&hasDrivingLicense==1)
        cout<<"Eligible to drive";
    else if (age>=18&&hasDrivingLicense==0)
        cout<<"License Required";
    else
        cout<<"Not old enough";
}
