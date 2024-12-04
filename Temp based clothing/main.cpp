#include <iostream>

using namespace std;

int main()
{
    int temp;
    cout<<"Enter temperature: ";
    cin>>temp;
    if(temp<0)
        cout<<"Wear a heavy coat and gloves";
    else if(temp>=0)
    {
        if(temp<=15)
            cout<<"Wear a jacket";
    }
    else if(temp>15)
    {
        if(temp<=25)
            cout<<"Wear a light sweater";
        else
        cout<<"Wear a t-shirt and shorts";
    }

}
