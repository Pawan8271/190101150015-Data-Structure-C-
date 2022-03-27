#include<iostream>
#include<conio.h>
using namespace std;
#define size 5

class stack{
	
	private:
	int top;
	int arr[5];
	
	public:
		stack(){
			top = -1;
			for(int i=0; i<5; i++){
				arr[i] = 0;
			}
		}
	void push(int val){
		if(top == 4){
			cout<<"stack overflow"<<endl;
		}
		else{
			top++;
			arr[top] = val;
		}
	}
	int pop(){
		if(top == -1){
			cout<<"underflow condition"<<endl;
		}
		int popval = arr[top];
		arr[top] = 0;
		top--;
		return popval;
	}
	void display(){
		for(int i = 4; i>=0; i--){
			cout<<arr[i]<<endl;
		}
	}
};

int main(){
	
	stack s;
	cout<<"Display : "<<endl;
	s.display();
	
	cout<<"Push : "<<endl;
	s.push(10);
	s.push(20);
	
	cout<<"Display : "<<endl;
	s.display();
	
	cout<<"Pop "<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<"Display "<<endl;
	s.display();
	
	getch();
	return 0;
}
