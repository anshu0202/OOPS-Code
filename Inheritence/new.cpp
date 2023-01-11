#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr=new int;
	*ptr=50;
	cout<<*ptr<<endl;
	delete ptr;
	ptr=new int;
	*ptr=500;
	cout<<*ptr;
}
