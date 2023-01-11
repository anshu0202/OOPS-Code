#include<iostream>//overloading of operator as a friend function
using namespace std;
class B;// forward declaration
class complex{// when binary operator is overloaded only one object is passed
	private:
		int a,b;
	public:
		void getdata(int x,int y);
		void putdata();	
	  friend complex operator+(complex ,complex);		
};
void complex::getdata(int x,int y){	
	a=x;
	b=y;
}
void complex::putdata(){	
	cout<<"a = "<<a<<" b = "<<b<<endl;
}
complex operator+(complex x,complex y){
			complex temp;
			temp.a=x.a+y.a;
			temp.b=x.b+y.b;
			return temp;
		}
int main(){
	complex c1,c2,c3;
	cout<<"Enter 2 numbers\n";
	c1.getdata(3,4);
	c2.getdata(5,6);	
	c3=c1+c2;//c3=opertor+(c1,c2)
	c3.putdata();
	c3=c1-c2;
	c3.putdata();
}
