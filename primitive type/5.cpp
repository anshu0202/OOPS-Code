#include<iostream>//class to class using casting operator
using namespace std;
class product;
class product{
	private:
		int m,n;
	public:
	  void setdata(int x,int y){
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
	    	cout<<"a = "<<a<<" b = "<<b<<endl;
		}
		void operator =(product p){
	  	   a=p.getm();
	  	   b=p.getn();
	  }		
};
int main(){
	item i1;
	product p1;
	p1.setdata(5,7);
	i1=p1;
	i1.show();
}
