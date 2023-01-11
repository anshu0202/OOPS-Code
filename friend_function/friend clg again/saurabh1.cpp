#include<iostream>//helpful in accessing private member of two class together
using namespace std;
class B;
class A{
	private:
		int a;
	public:
		void set(int x){
			a=x;
		}
	 friend void fun(A,B);	
};
class B{
	private:
		int b;
	public:
		void set(int x){
			b=x;
		}
	 friend void fun(A,B);	
};
void fun(A a1,B b1){
	cout<<"Sum is "<<(a1.a+b1.b);
}
int main(){
	A o1;
	B o2;
	o1.set(45);
	o2.set(55);
	fun(o1,o2);
	return 0;
}
