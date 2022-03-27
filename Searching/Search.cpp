#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],n,i,x;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value : ";
        cin>>a[i];
    }
    cout<<"Enter the value to Search :";
    cin>>x;
 
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Index at "<<i;
            return 0;
        }
    }
    cout<<"Value Not Found";
    getch();
    return 0;
}
