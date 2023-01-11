#include<iostream>//class to class
using namespace std;
//class product;
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
//		void set(int x, int y){
//			a=x;
//			b=y;
//		}
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
//		operator int(){//int means we have to convert into int
//			return a;
//		}
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
p1.set(3,4);
i1=p1;
i1.show();
}
