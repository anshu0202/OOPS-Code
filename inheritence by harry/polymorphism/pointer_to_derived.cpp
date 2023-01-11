#include<iostream>
using namespace std;
class base{
	public:
		int var1=10;
		void display(){
			cout<<"displaying base class variable var1 "<<var1<<endl;
		}
};
class derived:public base{
	public:
		int var2=20;
		void display(){
			cout<<"displaying derived class variable var2 "<<var2<<endl;
		}
};
int main(){
	base *bptr;
	base b1;
	derived d1,*dptr;
	bptr=&d1;
	bptr->display();
	cout<<bptr->var1<<endl;
	dptr=&d1;
	dptr->display();
	return 0;
}
