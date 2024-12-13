#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, avg;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout<<"Sum = "<<sum<<endl<<"Avg = "<<avg;

}
