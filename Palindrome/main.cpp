#include <iostream>

using namespace std;

int main()
{
    int original_num,n1, rem, rev=0;
    cout<<"Enter a number: ";
    cin>>original_num;
    n1=original_num;
    while (n1!=0)
    {
        rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    if(original_num==rev)
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";
}
