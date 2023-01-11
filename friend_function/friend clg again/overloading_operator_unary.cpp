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
		complex operator-(){
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};
int main(){
	complex c1,c2,c3,c4;
	c1.set(5,7);
	c2.set(2,8);
	c1.show();
	c2.show();
	c3=-c1;
	c4=-c2;
	c3.show();
	c4.show();
	return 0;
}
