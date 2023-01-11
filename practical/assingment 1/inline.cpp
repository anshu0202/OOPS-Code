#include<iostream>
using namespace std;
void divide(float ,float );
void add(float ,float );
void multiply(float ,float);
void sub(float ,float);
int main(){
	float a,b;
	int choice=1;
	cout<<"Enter 1st value\n";
	cin>>a;
	cout<<"Enter 2nd value\n";
	cin>>b;
	while(choice){
		int num;
		cout<<"Enter 1 for addition\n";
		cout<<"Enter 2 for subtraction\n";
		cout<<"Enter 3 for multiplication\n";
		cout<<"Enter 4 for division\n";
		cin>>num;
		switch(num){
			case 1:add(a,b);
			       break;
			case 2:sub(a,b);
			       break;
			case 3:multiply(a,b);
			       break;
			case 4:divide(a,b);
			       break;
			default :cout<<"Enter valid operation\n";       
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;		
	}
}
inline void divide(float x,float y){
	cout<<"Division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
}
inline void add(float x,float y){
	cout<<"Sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
}
inline void sub(float x,float y){
	cout<<"Difference of "<<x<<" and "<<y<<" is "<<x-y<<endl;
}
inline void multiply(float x,float y){
	cout<<"Product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
}
