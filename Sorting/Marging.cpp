#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int size1, size2, size3;
	
	cout<<"Size of first array ";
	cin>>size1;
	cout<<"Size of second array ";
	cin>>size2;
	
	size3 = size1 + size2;
	
	int arr1[size1], arr2[size2], arr3[size3];
	
	for(int i=0; i<size1; i++){
		cout<<"Enter element at inde "<<i<<" : ";
		cin>>arr1[i];
	}
	for(int i=0; i<size2; i++){
		cout<<"Enter element at inde "<<i<<" : ";
		cin>>arr2[i];
	}
	
	for(int i=0; i<size1; i++){
		arr3[i] = arr1[i];
	}
	for(int i=0; i<size2; i++){
		arr3[size1] = arr2[i];
		size1++;
	}
	
	cout<<"after merging array is : "<<endl;
		for(int i=0; i<size3; i++){
		cout<<arr3[i]<<endl;
	}
	getch();
	return 0;
}
