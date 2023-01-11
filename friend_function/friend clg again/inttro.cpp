#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
	void setnumber(int n1,int n2){
		a=n1;
		b=n2;	
		}	
	void printnum(){
		cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
	}
	friend complex add(complex o1,complex o2);	
};
complex add(complex o1, complex o2){
	complex temp;
		temp.setnumber((o1.a +o2.a),(o1.b +o2.b));
//	temp.setnumber((o1.a +o2.a),(o1.b +o2.b));
	return temp;
}
int main(){
	complex c1,c2,c3;
	c1.setnumber(4,5);
	c2.setnumber(6,8);
	c1.printnum();
	c2.printnum();
	c3=add(c1,c2);
	c3.printnum();
		return 0;
}
