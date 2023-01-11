#include<iostream>
using namespace std;
/*
diamond of death,diamond prblm,virtual base class,virtual inheritence, disinheritence all are same
*/
class A{
public:
	int a;	
	void f1(){
		cout<<"Class A\n";
	}
	A(){
		cout<<"Class A constructor\n";
	}
};
class B1:virtual public A{
	public:
	int b1;	
	void f2(){
		cout<<"Class B1\n";
	}
		B1(){
		cout<<"Class B1 constructor\n";
	}	
};
class B2:virtual public A{
	public:
	int b1;	
	void f3(){
		cout<<"Class B2\n";
	}
		B2(){
		cout<<"Class B2 constructor\n";
	}	
};
class C:public B1,public B2{
	public:
	int c;
		void f4(){
		cout<<"Class C\n";
	}	
		C(){
		cout<<"Class A constructor\n";
	}
};
int main(){
	C obj;
//	obj.a=90;
//	cout<<" a = "<<obj.a;
	obj.f4();
	obj.f3();
	obj.f2();
	obj.f1();
	return 0;
}
