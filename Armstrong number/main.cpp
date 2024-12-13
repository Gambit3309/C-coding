#include <iostream>

using namespace std;

int main()
{
    int n1, n2, og, rem, sum ;
    cout<<"Enter starting position"<<endl;
    cin>>n1;
    cout<<"Enter ending position";
    cin>>n2;
    for(int i=n1;i<=n2;i++)
    {
        sum=0;
        og=i;
        while(og>0)
        {
            rem=og%10;
            sum=sum+(rem*rem*rem);
            og=og/10;
        }
        if(sum==i)
            cout<<i<<endl;

    }
}
