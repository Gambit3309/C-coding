#include <iostream>

using namespace std;

int main()
{
    int num, remainder, sum=0;
    cout<<"Enter a number";
    cin>>num;
    while(num!=0)
    {
        remainder=num%10;
        num=num/10;
        if(remainder>5)
            sum=sum+remainder;
    }
    cout<<sum;
}
