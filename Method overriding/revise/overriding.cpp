#include<iostream>
using namespace std;
class car{
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
class sport_car:public car{
	private:
    	int b;
	public:
		void set(){//method hiding as there is difference in number 
			b=500;//of argument set fun is taking in derived as well as in the base class
		}
		void  display(){// method overriding as display fun is exactly same in the 
			cout<<"This is class B\n";// base and the derived class
			cout<<"Value of b is "<<b<<endl;
		}
};
int main(){
//	A a1;
	sport_car b1;
//	a1.set(100);
	//a1.display();
	sport_car.set(500);
	sport_car.display();
	return 0;
}
