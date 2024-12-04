#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter an alphabet"<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"The alphabet is a vowel";
    else
        cout<<"The alphabet is a consonant";
    return 0;
}
