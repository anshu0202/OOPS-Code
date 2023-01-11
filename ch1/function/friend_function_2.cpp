#include<iostream>// benifit of friend function
using namespace std;
class B;// forward declaration
class A{
	private:
		int a=9;
	public:
		friend void h(A,B);		
};
class B{
	private:
		int b=90;
	public:
		friend void h(A,B);		
};
void h(A o1,B o2){
	cout<<"\nHello your are in friend class\n";
	cout<<"value is "<<o1.a+o2.b;
}
int main(){
	A o1;
	B o2;
	int a,b;
	cout<<"Enter 2 numbers\n";
	h(o1,o2);
}
