#include<iostream>//overloading of unary operator as a friend function
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void getdata(int x,int y);
		void putdata();	
//	 	complex operator-(){
//			complex temp;
//			temp.a=-a;     overloading unaray operator without using friend function 
//			temp.b=-b;  // a aur b caller object ka h
//			return temp;
//		}	
	friend complex operator-(complex);
};
complex operator-(complex x){
			complex temp;
			temp.a=-x.a;     //overloading unaray operator using friend function 
			temp.b=-x.b;
			return temp;
		}
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
	c1.getdata(30,40);
//	c2=-c1;//c2=c1.operator-() //  here no argument is passed
	c2=-c1;//c2=c1.operator-() minus call hua c1 as argument pass hua
	c2.putdata();
}
