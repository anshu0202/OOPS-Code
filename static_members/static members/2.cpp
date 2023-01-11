#include<iostream>
using namespace std;
class A{
	public:
		void f1(){
	cout<<"F1 of class A\n";
		}
		void f2(){
		cout<<"F1 of class A\n";
		}
};
class B:public A{
	public:
	void f1(){//method overriding
	cout<<"F1 of class B\n";
	}	
	void f2(int x){// method hidding , different in number of arguments
	cout<<"F2 of class B\n";
	}
};
int main(){
B obj;
obj.f1();
//obj.f2();//error
obj.f2(9);	
}
