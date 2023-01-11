#include<iostream>// class to class conversion using constructor
using namespace std;
class product{
	private:
		int a,b;
	public:
		void set(int m, int n){
			a=m;
			b=n;
		}
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}	
};
class item{
	private:
		int x,y;
	public:
		item(){
		}
		item(product p){
			x=p.geta();
			y=p.getb();
		}
		void show(){
			cout<<"x: "<<x<<"\ny: "<<y<<endl;
		}	
};
int main(){
	product p1;
	item i1;
	p1.set(10,20);
	i1=p1;
	i1.show();
	return 0;
}
