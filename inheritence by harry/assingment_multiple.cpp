#include<iostream>
using namespace std;
class base1{
	protected:
		int a;
	public:
		void set1(){
			cout<<"Enter value of a:\n";
			cin>>a;
		}	
		void display1(){
			cout<<"This is base class 1\n";
			cout<<"Value of a is "<<a<<endl;
		}
};
class base2{
	protected :
		int b;
	public:
		void set2(){
			cout<<"Enter value of b\n";
			cin>>b;
		}	
		void display2(){
			cout<<"This is base class 2\n";
			cout<<"Value of b is "<<b<<endl;
		}		
};
class derived: public base1, public base2{
	public:
	void  show(){
		cout<<"Sum of a and b is "<<(a+b)<<endl;
	}	
};
int main(){
	derived d1;
	d1.set1();
	d1.set2();
	d1.show();
}
