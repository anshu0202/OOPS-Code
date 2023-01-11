#include<iostream>//dynamic constructor
using namespace std;
class A{
	int a,b,*p;
	public:
		A(){
			a=20;
			b=30;
			p=new int;
			*p=50;
		}
			A(int x,int y,int z){
				a=x;
			b=y;
			p=new int;
			*p=z;
				}
			void display(){
				cout<<"a = "<<a<<endl;
				cout<<"b = "<<b<<endl;
				cout<<"value in pointer ptr = "<<*p<<endl;
			}
};
int main(){
	A a1,a2(100,200,300);
	a1.display();
	a2.display();
	return 0;
}
