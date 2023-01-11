#include<iostream>//it helps to access privatee members to class together
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
	c1.setdata(5,6);
	c1.showdata();
	c2=-c1;
	c2.showdata();
}
