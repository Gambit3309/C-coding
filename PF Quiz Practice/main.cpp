#include <iostream>

using namespace std;

int main()
{
    int n = 0 , ab, temp;

    int a[100];

    cout << "Enter 0 to confirm find the minimum number for the entered numbers\nEnter numbers" << endl;

    int i=0;

    while (true)
    {
        cin >> ab;
        if(ab == 0)
            break;
        else
            a[i] = ab;
        i++;
        n++;
    }

    int n1[n], n2[n];

    for(int j = 0; j < n; j++)
    {
       n1[j] = a[j];
    }

    int n3 = 0;//stores the indexes

    cout << "Enter the number you want to find: ";
    cin >> temp;

    int m = 0;

    for(int k = m; k < n; k++)
    {
        if(n1[k] == temp)
        {
            n2[n3] = k;
            n3++;
            m = k;
        }
    }
    //swap(n  1[m],n1[n-1]);
    cout << n1[m] << " Found at Index: " << endl;
    for(int j1 = 0; j1 < n3; j1++)
        cout << n2[j1] << endl;
    cout << "The number appears " << n3 << " times";
}
