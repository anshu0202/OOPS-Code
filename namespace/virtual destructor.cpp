#include<iostream>
using namespace std;
class A{
	int *p;
	public:
		void f1(int x){
			p=new int;
			*p=x;
		}
		~A(){
		cout<<"destructor\n";
		delete p;
		cout<<"Memory is release\n";	
		}
		void show(){
			cout<<*p<<endl;
			cout<<p<<endl;
		}
};
int main(){
	A a1,a2;
	a1.f1(10);
	a1.show();
//	a1.~A();
	a2.f1(20);
	a2.show();
//	a2.~A();
}
