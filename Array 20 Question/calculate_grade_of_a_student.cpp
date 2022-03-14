#include<iostream>
using namespace std;
int main()
{
        int marks[5], i;
        float sum=0,avg;

        cout<<"\n Enter Marks of Student \n";
        cout<<"------------------------------------";
        cout<<"\n Machine Learning : ";
        cin>>marks[0];
        cout<<"\n Data Structure : ";
        cin>>marks[1];
        cout<<"\n Polyhouse Automation : ";
        cin>>marks[2];
        cout<<"\n Industrial Power Electronics : ";
        cin>>marks[3];
        cout<<"\n Embeded System : ";
        cin>>marks[4];

        for(i=0;i<5;i++)
        {
                sum=sum+marks[i];
        }
        cout<<"------------------------------------";
        cout<<"\n Total Marks of Student = "<<sum;
        avg=sum/5;
        cout<<"\n Average = "<<avg;
        cout<<"\n Grade   = ";

        if(avg>80)
        {
                cout<<"A";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"B";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"C";
        }
        else
        {
                cout<<"D";
        }
        return 0;
}