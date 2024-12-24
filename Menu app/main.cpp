#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(18)<<"Menu"<<endl;
    for(int i=1;i<=36;i++)
        cout<<"*";
        cout<<endl;
    string item;
    cout<<"Sr no."<<setw(7)<<right<<"Item"<<setw(23)<<right<<"Price"<<endl;
    int p[5], c=0;
    for(int i=1;i<=5;i++)
    {
        if(i==1)
        {
            item="Pizza";
            p[0]=5;
        }

        else if(i==2)
        {
            item="Curry";
            p[1]=7;
        }

        else if(i==3)
        {
            p[2]=5;
            item="Burger";
        }

        else if(i==4)
        {
            p[3]=3;
            item="Salad";
        }

        else if(i==5)
        {
            p[4]=5;
            item="Chocolate Cake";
        }

        int b=item.length();
        b=b+7;
        int a=28;
        a-=b-5;
        cout<<i<<"."<<setw(b)<<right<<item<<setw(a)<<right<<"$"<<p[c]<<endl;
        c++;
    }
    int n=0, a=0;
    c=0;
    int item_no[100],amount[100];
    string order[100];
    while(true)
    {
    cout<<endl<<"Please enter the item number you would like to order: ";
    cin>>item_no[n];

        if(item_no[n]==1)
        order[a]="Pizza";
        else if(item_no[n]==2)
        order[a]="Curry";
        else if(item_no[n]==3)
        order[a]="Burger";
        else if(item_no[n]==4)
        order[a]="Salad";
        else if(item_no[n]==5)
        order[a]="Chocolate Cake";


    cout<<"Please enter number of orders: ";
    cin>>amount[c];
    n++;
    a++;
    c++;
    int temp;
    cout<<"Enter 1 to order more items and 0 to exit"<<endl;
    cin>>temp;
    if(temp==0)
    {
        cout<<endl;
        break;
    }

    }
    a=0;
    c=0;
    int temp, bill=0;
    for(int i=0;i<n;i++)
    {
        if(order[a]=="Pizza")
        temp=0;
        else if(order[a]=="Curry")
        temp=1;
        else if(order[a]=="Burger")
        temp=2;
        else if(order[a]=="Salad")
        temp=3;
        else if(order[a]=="Chocolate Cake")
        temp=4;

        cout<<"Order: "<<order[a]<<endl;
        cout<<"Number of orders: "<<amount[c]<<endl;
        cout<<"Price: $"<<p[temp]<<endl;
        cout<<endl;

        bill+=p[temp]*amount[c];
        a++;
        c++;
    }
    cout<<"Bill: $"<<bill<<endl;

        for(int i=1;i<=36;i++)
        cout<<"*";
        cout<<endl<<setw(28)<<"THANK YOU FOR COMING";

}
