#include <iostream>

using namespace std;

int main()
{
    int sum=0, prev;
    for(int i=1; i<=500; i++)
    {
       if(i%3==0 || i%5==0)
           {
               prev=sum;
               sum=sum+i;
               cout<<prev<<"+"<<i<<"="<<sum<<endl;

            }
    }
    cout<<sum;
}

