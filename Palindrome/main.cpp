#include <iostream>

using namespace std;

int main()
{
    int n1, rem, rev, temp;
        cout<<"Enter a number"<<endl;
        cin>>n1;
    A:
    rev=0;
    temp=n1;
    while(temp!=0)
    {


        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
        if(n1==rev)
        cout<<n1<<" is a Palindrome"<<endl;
        else
        cout<<n1<<" is not a Palindrome"<<endl;
        cout<<"Enter another number or enter 0 to exit"<<endl;
        cin>>n1;
    if(n1==0)
    {
        cout<<"Exiting";
        return 0;
    }
    else
        goto A;

}
