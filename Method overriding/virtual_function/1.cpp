#include<iostream>
using namespace std;
class A{
	public:
	virtual	void f1(){// late binding . Now content of pointer will be used instead of its type
		cout<<"Class A\n";
	}
};
class B:public A{
	public:
		void f1(){
		cout<<"Class B\n";
	}
};
int main(){
	A *ptr,a1;
	B b1;
//	ptr=&a1;//both are correct
	ptr=&b1;
	b1.f1();
	ptr->f1();// due to compile time binding f1 of class A will run
}
