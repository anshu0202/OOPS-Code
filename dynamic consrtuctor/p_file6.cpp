#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		int *p;
	public:
	   A(){
	   	a=0;
	   	b=0;
	   }	
	   A(int x,int y,int z){
	   	a=x;
	   	b=y;
	   	p=new int;
	   	*p=z;
	   }
	   void show(){
	   	cout<<"a = "<<a<<endl;
	   	cout<<"b = "<<b<<endl;
	   	cout<<"Value at address of P is = "<<*p<<endl;
	   }
};
int main(){
	A o1,o2,o3(3,5,10);
	o3.show();
}
