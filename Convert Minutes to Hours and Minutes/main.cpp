#include <iostream>

using namespace std;

int main()
{
    int t_min, t_hrs, temp;
    cout<<"Enter minutes :";
    cin>>t_min;
    temp=t_min%60;
    t_hrs=t_min/60;
    cout<<"Time in hours = "<<t_hrs<<" hrs "<<temp<<" min";
}
