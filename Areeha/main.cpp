#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter number ";
   cin>>n;
   for(int  i=1; i<=n; i=i+1){
       int num;
       cin>>num;
       if(num>0)
       {
       cout<<"number  "<<num<<" is positive  "<<endl;}
     else if(num<0)
       { cout<<"number  "<<num<< " is negative  "<<endl;}
       else
       { cout<<"number  "<<num<<" is zero"<<endl;}
   }
   return 0;
}
