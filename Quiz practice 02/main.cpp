#include <iostream>

using namespace std;


int main()
{
    int i=1, n, u=1, sum=0;
    cout<<"Enter: ";
    cin>>n;
    while(i<=n)
    {
        while(u<=n)
        {
            if(u<i)
            {
                if(i%u==0)
                sum+=u;

            }
            u++;
        }
        if(sum==i)
            cout<<sum<<endl;
        i++;
        u=1;
        sum=0;
    }
}
