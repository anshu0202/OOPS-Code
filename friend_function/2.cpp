#include<iostream>//it helps to overload operator
using namespace std;
class B;
class complex{
	private:
		int a=10,b=20;
	public:
	  void setdata(int x,int y){
	  	a=x;
	  	b=y;
	  }	
	  void showdata(){
	  	cout<<"a = "<<a<<" b = "<<b<<endl;
	  }
	  friend void fun(complex,B);
};
class B{
	private:
	int k=35;
	public:
	friend	void fun(complex,B);
};
void fun(complex c,B b1){
	cout<<c.a<<"  "<<c.b<<endl;
	cout<<b1.k<<endl;
	cout<<"hi\n";
}
int main(){
	complex c1;
	B b1;
	fun(c1,b1);
}
