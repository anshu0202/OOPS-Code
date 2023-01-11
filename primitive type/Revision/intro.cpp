#include<iostream>
using namespace std;
/*
Primitive to primitive data type is converted automatically
*/
int main(){
	int x=97;
	float y;
	y=x;
	cout<<"y: "<<y<<endl;
	int a;
	float b=98.87;
	a=b;
	cout<<"a: "<<a<<endl;
	char c='D';
	cout<<c<<endl;
	b=c;
	cout<<"b: "<<b<<endl;
	return 0;
}
