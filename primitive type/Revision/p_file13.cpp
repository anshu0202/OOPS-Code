#include<iostream>
using namespace std;
class product{
	private:
		int m,n;
		public:
		void set(int x,int y){
			m=x;
			n=y;
		}
		int getm(){
			return m;
		}
		int getn(){
			return n;
		}
};
class item{
	private:
	int a,b;
	public:
		void show(){
			cout<<"Cost of Item 1: "<<a<<endl;
			cout<<"Cost of Item 2: "<<b<<endl;
		}
      item (product &p){
      	a=p.getm();
      	b=p.getn();
	  }
	  item(){
	  }
		
};
int main(){
     item i1;
      product p1;
     int x,y;
     cout<<"Enter value of Product 1:\n";
      cin>>x;
	cout<<"Enter value of Product 2:\n";
      cin>>y;
	p1.set(x,y);
	i1=p1;
	i1.show();
}
