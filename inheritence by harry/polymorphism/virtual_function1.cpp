#include<iostream>
using namespace std;
class base{
	public:
	int var1=10;
	virtual	void display(){
			cout<<"displaying base class variable var1 "<<var1<<endl;
		}
//		void display(){
//			cout<<"displaying base class variable var1 "<<var1<<endl;
//		}
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
	derived *dptr,d1;
	bptr=&d1;
	bptr->display();
	return 0;
}
