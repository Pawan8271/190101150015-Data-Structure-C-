#include<iostream>
using namespace std;

int main()
{

    int i;
    char a[30];
    cout<<"\nEnter any string :: ";
    gets(a);
    cout<<"\n";

     if(islower(a[0]))
     a[0]=toupper(a[0]);

     for(i=0;a[i]!='\0';++i)
     {
            if(a[i]==' ')
                if(islower(a[i+1]))
                    a[i+1]=toupper(a[i+1]);
     }

        cout<<"\nUpdated New String is :: "<<a<<"\n";

        return 0;
    }
