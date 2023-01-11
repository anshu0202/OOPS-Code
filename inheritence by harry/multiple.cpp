#include<iostream>
using namespace std;
class num1{
	protected:
		int a;
		public:
	void set1(int x){
		a=x;
	}	
};
class num2{
	protected:
		int b;
	public:
	void set2(int y){
		b=y;
	}	
};
class sum: public num1,public num2{
	protected :
		int c;
	public:
	void set3(){
		c=a+b;
	}
	void display(){
		cout<<"Num 1 is "<<a<<endl;
		cout<<"Num 2 is "<<b<<endl;
		cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	}	
};
int main(){
	sum a1;
	a1.set1(50);
	a1.set2(12);
	a1.display();
}
