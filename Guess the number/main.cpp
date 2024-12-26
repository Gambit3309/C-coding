#include <iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
    srand(time(0));
    int n1, random=1+rand()%100;
    cout<<random;
    cout<<"Guess the random number: ";
    cin>>n1;

    while(n1!=random)
    {
        if(random>=n1+10)
        {
            cout<<"Too Low"<<endl<<"Try again"<<endl;
        cin>>n1;
        }
        else if(random<=n1-10)
        {
            cout<<"Too High"<<endl<<"Try again"<<endl;
            cin>>n1;
        }
        else //if(random<=n1+10)
        {
            cout<<"Close"<<endl<<"Try again"<<endl;
            cin>>n1;
        }

    }
    for(int i=1;i<=40;i++)
        cout<<"_";
        cout<<endl<<setw(28)<<right<<"CONGRATULATIONS"<<endl<<"Correct guess\nThe random number was "<<random;

}
