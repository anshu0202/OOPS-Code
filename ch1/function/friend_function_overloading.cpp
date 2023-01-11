#include<iostream>//overloading of operator 
using namespace std;
class B;// forward declaration
class complex{
	private:
		int a,b;
	public:
		void getdata(int x,int y);
		void putdata();	
		complex operator+(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
		complex operator-(complex c){
			complex temp;
			temp.a=a-c.a;
			temp.b=b-c.b;
			return temp;
		}
		
};
void complex::getdata(int x,int y){	
	a=x;
	b=y;
}
void complex::putdata(){	
	cout<<"a = "<<a<<" b = "<<b<<endl;
}
int main(){
	complex c1,c2,c3;
	cout<<"Enter 2 numbers\n";
	c1.getdata(3,4);
	c2.getdata(5,6);	
	c3=c1+c2;//c3=c1.opertor+(c2)
	c3.putdata();
	c3=c1-c2;
	c3.putdata();
}
