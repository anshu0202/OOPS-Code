#include<iostream>
using namespace std;
 
int main(){
	int x=10;
	int &y=x;
	y=y+5;
	cout<<"y= "<<y<<"\n ";
	cout<<"hello world";
}
