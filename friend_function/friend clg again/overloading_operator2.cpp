#include<iostream>// using friend function
using namespace std;
class complex{
	private:
	int a,b;
	public:
		void set(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"a = "<<a<<", b = "<<b<<endl;
		}
friend	complex operator+(complex ,complex );
};
 complex operator+(complex c1,complex c2){
			complex temp;
			temp.a=c1.a+c2.a;
			temp.b=c1.b+c2.b;
			return temp;
		}
int main(){
	complex c1,c2,c3;
	c1.set(5,7);
	c2.set(2,8);
	c1.show();
	c2.show();
	c3=c1+c2;
	c3.show();
	return 0;
}
