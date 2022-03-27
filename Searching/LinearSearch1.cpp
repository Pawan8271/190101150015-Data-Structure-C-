#include<iostream>
using namespace std;
int main(){
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int n, loc = -1;
	cout<<"Enter value to find: ";
	cin>>n;
	for(int i=0; i<10; i++){
		if(arr[i] == n)
		loc = i;
	}
	if(loc == -1)
	   cout<<"Value not found in the array. ";
	else
	   cout<<"Value found at index "<<loc;   
	return 0;
}
