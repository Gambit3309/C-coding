#include <iostream>

using namespace std;

int main()
{
int m;
    cout<<"Enter obtained marks: ";
    cin>>m;
    if(m<=100)
    {
        if(m>=95)
        cout<<"Grade = A";
        else if(m>=85)
        cout<<"Grade = B";
        else if(m>=65)
        cout<<"Grade = C";
        else if(m>=50)
        cout<<"Grade = D";
        else
        cout<<"Grade = F";
    }
    else
        cout<<"Marks obtained cannot be greater than 100";
}
