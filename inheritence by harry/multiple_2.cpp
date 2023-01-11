#include<iostream>
using namespace std;
class base1{
	protected:
		int a;
	public:
		void set(){
			cout<<"Enter a number a\n";
			cin>>a;
		}	
		void display(){
			cout<<"Value of a is "<<a<<endl;
		}
};
class base2{
	protected :
		int b;
	public:
		void set(){
			cout<<"Enter a number b\n";
			cin>>b;
		}	
		void display(){
			cout<<"Value of b is "<<b<<endl;
		}		
};
class derived: public base1, public base2{
	public:
		void display(){
			base2::display();// using the scope resolution operator we can resolve the ambiguity prblm
		}
	void  show(){
		cout<<"a = "<<a<<endl;
		cout<<"Sum of a and b is "<<(a+b)<<endl;
	}	
};
int main(){
	derived d1;
	d1.display();
}
