#include<iostream>
using namespace std;
class A{
	public:
	void f1(){//when parent class and child class has same function and same argument but different code.
		cout<<"Class A\n";
	}
	void f2(){
		cout<<"Class A\n";
	}
	void f3(){
		cout<<"Class A\n";
	}	
};
class B: public A{
	public:
	void f1(){
		cout<<"Class B\n";
	}
	void f2(int x){//when there is difference in argument it is called method hidding
		cout<<"Class B\n";
	}
};
int main(){
	B b1;  // here early binding is required
	b1.f1();//it can access function of both class
	//b1.f2();// compiler will only match name of function and will not go in class A called method hidding
	b1.f2(210);
	b1.f3();
}
