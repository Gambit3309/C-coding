#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
float p[40], qp[40], tot_qp=0, tot_cr=0, gpa;
int n=0, cr[40];
string g;

void points();
void calc();

int main()
{
    char temp=0;
    do
    {
        Error:
        cout<<"\nEnter grade: ";
        cin>>g;
        points();
        if(p[n]==123)
        {
            cout<<"Invalid grade"<<endl;
            goto Error;
        }

        cout<<"Enter credit hours: ";
        cin>>cr[n];
        qp[n]=p[n]*cr[n];
        tot_qp+=qp[n];
        tot_cr+=cr[n];
        cout<<"Enter 1 to add subject or 0 to calculate GPA: "<<endl;
        temp=getche();
        n++;
    }
    while(temp=='1');
    gpa=tot_qp/tot_cr;
    cout<<"\nGPA = "<<setprecision(3)<<gpa;


}
void points()
{
        if(g=="A+" || g=="A")
            p[n]=4.0;
        else if(g=="A-")
            p[n]=3.7;
        else if(g=="B+")
            p[n]=3.3;
        else if(g=="B")
            p[n]=3.0;
        else if(g=="B-")
            p[n]=2.7;
        else if(g=="C+")
            p[n]=2.3;
        else if(g=="C")
            p[n]=2.0;
        else if(g=="C-")
            p[n]=1.7;
        else if(g=="D+")
            p[n]=1.3;
        else if(g=="D")
            p[n]=1.0;
        else if(g=="D-")
            p[n]=0.7;
        else if(g=="F")
            p[n]=0;
        else
            p[n]=123;

}
