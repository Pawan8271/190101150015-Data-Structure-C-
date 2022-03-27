#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i,j,temp,n,min, arr[30];
	cout<<"Enter total size of element ";
	cin>>n;
	cout<<"Enter a element ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	} 
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[min])
			{
				min=j;
			}
		}
		temp = arr[i];
		arr[i]=arr[min];
		arr[min]=temp; 
	}
	cout<<"Selection Element ";
	for(i=0;i<n;i++){
		cout<<"\n"<<arr[i];
	}
	getch();
	return 0;
}
