#include <iostream>

using namespace std;

int main()
{
    string word;
    cout<<"Enter exit to leave the program"<<endl;
    while(true)
        {

            if(word=="exit")
            {
                cout<<"Exiting program";
                break;
            }
            cout<<"Enter a word: ";
            cin>>word;
            cout<<"You entered "<<word<<endl;
        }
}
