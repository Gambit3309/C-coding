#include <iostream>

using namespace std;

int sumofsquares(int &n)
{
    int i=1, temp, sum=0;
    while(i<=n)
    {
        temp=i;
        sum+=temp*temp;
        i++;
    }
    return sum;
}

int main()
{
    int n1, sum;
    while(n1!=0)
    {
    cout << "\nEnter 0 to exit" << endl << "Enter a number: ";
    cin>>n1;
    sum=sumofsquares(n1);
    cout<<sum;
    }
}
