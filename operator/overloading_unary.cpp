#include<iostream>//unary operator overloading
using namespace std;
class complex{
	private:
		int a,b;
	public:
	   void setdata(int x,int y){
	   	a=x;
	   	b=y;
	   }
	  void showdata(){
	  	cout<<"a = "<<a<<" b = "<<b<<endl;
	  } 
//	  complex operator +(complex c){
//	  	complex temp;
//	  	temp.a=a+c.a;
//	  	temp.b=b+c.b;
//	  	return temp;
//	  }	
	  complex operator -(){
	  	complex temp;
	  	temp.a=-a;
	  	temp.b=-b;
	  	return temp;
	  }	
};
int main(){
	complex c1,c2,c3;
	c1.setdata(3,4);
//	c2=c1.operator -();
	c2=-c1;// unary operator.
	 //+ has more than one meaning so it is known as operator overloading
	c2.showdata();// it is a way to achieve compile time polymorphism
}
