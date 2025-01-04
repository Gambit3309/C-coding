#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of semesters: ";
    cin>>n;
    float sem[n], sum=0, CGPA;
    for (int i=0;i<=n-1;i++)
    {
        cout<<"Enter GPA for semester "<<i+1<<": ";
        cin>>sem[i];
        sum+=sem[i];
    }
    CGPA=sum/n;
    cout<<"CGPA = "<<CGPA;
}
