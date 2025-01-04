#include <iostream>

using namespace std;

void findGCD(int &a, int &b)
{
    int res=min(a,b);
    while (res>1)
    {
        if(a % res == 0 && b % res == 0)
            break;
        res--;
    }
    cout<<res;
}
int main()
{
    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    findGCD(n1,n2);

}
