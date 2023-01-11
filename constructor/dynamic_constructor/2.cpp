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
			cout<<"Constructor of class A with argument\n";
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
	A a1,a2(100,200,300);// new k help se object k bne pr jo consrtructor run krta h wo dynamic constructor nhii hota h
//	a1.display();
//	a2.display();
	cout<<"Size of class A is "<<sizeof(A)<<endl;
	
	return 0;
}
