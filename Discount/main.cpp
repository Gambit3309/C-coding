#include <iostream>

using namespace std;

int main()
{
    float dis=0, tot, sp;
    cout<<"Enter total amount spent: ";
    cin>>sp;
    tot=sp;
    if(sp>100)
    {
        dis=sp*20/100;
    }
    else if(sp>=50&&sp<=100)
    {
        dis=sp*10/100;
    }
    else
        cout<<"Not eligible for discount";
        tot=sp-dis;
        //cout<<dis<<endl;
        //cout<<sp<<endl;
        //cout<<tot<<endl;
    cout<<"\nTotal amount to pay after discount= "<<tot;
}
