#include<iostream>
using namespace std;
class A{
	public:
	A(){
		cout<<"Constructor of A\n";
	}
//	~A(){
//		cout<<"destructor of A\n";
//	}	
};
class B{
	public:
	B(){
		cout<<"Constructor of B\n";
	}
//		~B(){
//		cout<<"destructor of B\n";
//	}   
};
class C:public A,virtual public B{// virtual ka pehle run hogaa constructor
	public:
	C(){
		cout<<"Constructor of C\n";
	}
//	~C(){
//		cout<<"Destructor of C\n";
//	}	
};
int main(){
	C c1;
	return 0;
}
