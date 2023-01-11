#include<iostream>
using namespace std;
int main(){
	int sum(int x,int y,int z=8);// default argument
	int sum(int x,int y,int z);
	int a,b,d,e;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	int c=sum(a,b);
	cout<<"Sum is "<<c<<endl;
	cout<<"Enter third value\n";
	cin>>d;	
	e=sum(a,b,d);
	cout<<"Sum is "<<e<<endl;
}
int sum(int x,int y,int z){
	return (x+y+z);
}
