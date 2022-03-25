#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char ch,ch1;
        cout<<"\nEnter any character in uppercase :: ";
        cin>>ch;

        ch1=ch;

        ch=ch+32;

        cout<<"\nCharacter [ "<<ch1<<" ] in lowercase = [ "<<ch<<" ] \n";

        return 0;
}