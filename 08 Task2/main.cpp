#include <iostream>

using namespace std;

int main()
{
    int i=0;
    string p="ichigo321", n1;
    while(i<3)
    {
        cout<<"Try to guess the password: ";
        cin>>n1;
        i++;
        if(n1==p)
        {
            cout<<"Correct Password";
            return 0;
        }
        else
            cout<<"Wrong password"<<endl;
    }
    cout<<"Exiting Program";
}
