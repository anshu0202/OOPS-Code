#include<iostream>
using namespace std;
class B;
class A{
	private:
		int x;
	public:
	    void set(int a){
	    	x=a;
		}
	friend void fun(A,B);		
};
class B{
	private:
		int y;
	public:
	    void set(int b){
	    	y=b;
		}
	friend void fun(A,B);		
};
void fun(A a1,B b1){
	cout<<"Sum is "<<a1.x+b1.y<<endl;
}
int main(){
	A a1;
	B b1;
	a1.set(5);
	b1.set(50);
	fun(a1,b1);
}
