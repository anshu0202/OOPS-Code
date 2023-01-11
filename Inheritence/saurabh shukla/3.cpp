#include<iostream>
using namespace std;
class A{
	int x,k;
	public:
		A(){
			cout<<"Constructor of parent class\n";
		}
			A(int y){
				x=y;
			cout<<"parametrized constructor of parent class\n";
		}
			A(int y,int z) {
				x=y;
				k=z;
			cout<<"2 parametrized constructor of parent class\n";
		}
};
class B:public A{
	int m,n;
	public:
		B(){
			cout<<"Constructor of child class\n";
		}
			B(int y){
				m=y;
			cout<<"parametrized constructor of child class\n";
		}
			B(int y,int z): A(y,z){
				m=y;
				n=z;
			cout<<" 2 parametrized constructor of child class\n";
		}
};
int main(){
	//A a1;
	B b1(7,3);
	return 0;
}
