#include<iostream>
using namespace std;
class A{
	private:
    	int a;
	public:
		void set(int x){
			a=x;
		}
		void  display(){
			cout<<"This is class A\n";
			cout<<"Value of a is "<<a<<endl;
		}
};
class B:public A{
	private:
    	int b;
	public:
		void set(){//method hiding also known as  method shadowing as there is difference in number 
			b=500;//of argument set fun is taking in derived as well as in the base class
		}
		void  display(){// method overriding as display fun is exactly same in the 
			cout<<"This is class B\n";// base and the derived class
			cout<<"Value of b is "<<b<<endl;
		}
};
int main(){
//	A a1;
	B b1;
//	a1.set(100);
	//a1.display();
	b1.set();
	b1.display();
	return 0;
}
