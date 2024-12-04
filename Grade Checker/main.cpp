#include <iostream>

using namespace std;

int main()
{
    int phy, bio, chem, comp, math, res1;
    float res, perc;
    cout<<"Enter obtained marks in Physics: ";
    cin>>phy;
    cout<<"Enter obtained marks in Biology: ";
    cin>>bio;
    cout<<"Enter obtained marks in Chemistry: ";
    cin>>chem;
    cout<<"Enter obtained marks in Computer: ";
    cin>>comp;
    cout<<"Enter obtained marks in Mathematics: ";
    cin>>math;
    res=phy+bio+chem+math+comp;
    cout<<res<<endl;
    perc=res/5;
    cout<<perc;
    if(res<501)
    {
        if(perc>=90)
        cout<<"Percentage = "<<perc<<"%\nGrade = A";
        else if(perc>=80)
        cout<<"Percentage = "<<perc<<"%\nGrade = B";
        else if(perc>=70)
        cout<<"Percentage = "<<perc<<"%\nGrade = C";
        else if(perc>=60)
        cout<<"Percentage = "<<perc<<"%\nGrade = D";
        else if(perc>=40)
        cout<<"Percentage = "<<perc<<"%\nGrade = E";
        else if(perc<40)
        cout<<"Percentage = "<<perc<<"%\nGrade = F";
    }
    else
        cout<<"Max marks obtained per subjct cannot be greater than 100";
}
