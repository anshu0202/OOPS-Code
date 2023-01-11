#include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
	public:
	   void setdata(int x,int y){
	   	a=x;
	   	b=y;
	   }
	   void show(){
	   	cout<<"a = "<<a<<" b = "<<b<<endl;
	   }	
	   dummy (dummy &d){//sawllow copy
	   	a=d.a;
	   	b=d.b;
	   }
};
int main(){
	dummy d1;
	d1.setdata(7,5);
	dummy d2=d1;
	d2.show();
	
}
