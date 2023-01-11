#include<iostream>
using namespace std;// destructor of child class run first and constructor of parent class runs first
class A{
	int a;
		public:
		//A(){cout<<"Class A\n";}
		A(int k){
		cout<<"Class A\n";
		    a=k;
		}
		~A(){
			cout<<"class A\n";
		}
};
class B:public A{//construtor of child class call constructor of parent class
	int b;
	public:
	//	B():A(){cout<<"Class B\n";} //this is the way of calling constructor of class A
		//B(){cout<<"Class B\n";}
		//	B():A(10){cout<<"Class B\n";}
			B(int x,int y):A(x){
			cout<<"Class B\n";
			b=y;
			}
			~B(){
		cout<<"class B\n";
		}
};
int main(){
	B b1(9,7);
}
