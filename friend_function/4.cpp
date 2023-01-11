#include<iostream>//it helps to overload operator
using namespace std;
class complex{
	private:
		int a=0,b=0;
	public:
	  void setdata(int x,int y){
	  	a=x;
	  	b=y;
	  }	
	  void showdata(){
	  	cout<<"a = "<<a<<" b = "<<b<<endl;
	  }
	  friend complex operator+(complex,complex);
};
complex operator+(complex c1, complex c2){
	complex temp;
	temp.a=c1.a+c2.a;
	temp.b=c1.b+c2.b;
	return temp;
}
int main(){
	complex c1,c2,c3;
	c1.setdata(5,8);
	c2.setdata(6,4);
	c3=c1+c2;
	c3.showdata();
}
