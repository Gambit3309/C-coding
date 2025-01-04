#include <iostream>

using namespace std;

void prime(int &n, int &upper)
{
    int last_prime;
    while(n<=upper)
    {
        int u=2, c=0;
        while(u<=n)
        {
            if(n%u==0)
                c++;
            u++;
        }
        if(c==1)
            last_prime=n;
            n++;
    }
    cout<<last_prime<<endl;


}

int main()
{
    int n1, n2;
    cout<<"Enter lower limt: ";
    cin>>n1;
    cout<<"Enter upper limt: ";
    cin>>n2;
    prime(n1,n2);
}
