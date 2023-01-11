#include<iostream>
using namespace std;// reference variable is also called internal pointer
int main(){
	int x=7;
	int &ptr=x; // ptr is reference variable and has to be initial when created
	cout<<ptr<<endl; // ptr is also resembling the same x
	cout<<++ptr;
//	cout<<endl<<*ptr; 
}  
