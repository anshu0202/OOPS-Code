#include<iostream>
using namespace std;
class A{
	int a;
		public:
		//A(){cout<<"Class A\n";}
		A(int k){
		cout<<"Class A\n";
		    a=k;
		}
};
class B:public A{//construtor of child class call constructor of parent class
	public:
	//	B():A(){cout<<"Class B\n";} //this is the way of calling constructor of class A
		//B(){cout<<"Class B\n";}
			B():A(10){cout<<"Class B\n";}
};
int main(){
	B b1;
}
