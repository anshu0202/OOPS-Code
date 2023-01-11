#include<iostream>// class to class conversion using casting operator
using namespace std;
class item{
	private:
		int x,y;
	public:
		item(){
		}
		void show(){
			cout<<"x: "<<x<<"\ny: "<<y<<endl;
		}
		void set(int a, int b){
			x=a;
			y=b;
		}	
};
class product{
	private:
		int a,b;
	public:
		void set(int m, int n){
			a=m;
			b=n;
		}	
		operator item(){
			item i;
			i.set(a,b);
			return i;
		}
};
int main(){
	product p1;
	item i1;
	p1.set(10,20);
	i1=p1;// using casting operator
	i1.show();
	return 0;
}
