#include<iostream>
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
		complex operator+(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};
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
