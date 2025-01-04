#include <iostream>

using namespace std;

void sort()
{
    int b[6];
    string b1;
    cout<<"Enter the height(in m) of "<<endl;
    for(int i=1;i<=6;i++)
    {
        cout<<"Building "<<i<<": ";
        cin>>b[i-1];
    }
    if(b[0]>=b[1])
        swap(b[0],b[1]);
    if(b[1]>=b[2])
        swap(b[1],b[2]);
    if(b[2]>=b[3])
        swap(b[2],b[3]);
    if(b[3]>=b[4])
        swap(b[4],b[3]);
    if(b[4]>=b[5])
        swap(b[5],b[4]);

    for(int i=5;i>=0;i--)
        cout<<i+1<<". "<<b[i]<<endl;
}
int main()
{

    sort();
}
