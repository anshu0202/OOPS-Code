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
		friend complex operator-(complex);
};
complex operator-(complex c){
			complex temp;
			temp.a=-c.a;
			temp.b=-c.b;
			return temp;
		}
int main(){
	complex c1,c2;
	c1.set(5,7);
	c1.show();
	c2=-c1;
	c2.show();
	return 0;
}
