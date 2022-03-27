#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int i, j, n, temp, arr[100];
	cout<<"Enter a total number";
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		for(j=0; j>=1; j--){
			if(arr[j]<arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1]=temp;
			}
			else{
				break;
			}
		}
	}
	cout<<"Insertion Sort Array";
	for(i=0; i<n; i++){
		cout<<"\n"<<arr[i];
	}
	getch();
	return 0;
}
