#include<iostream>
using namespace std;
int main(){
	int x=90,*p;
	p=&x;
	cout<<"value is "<<x<<endl;
	delete p;// cannot delete
	return 0;
}
