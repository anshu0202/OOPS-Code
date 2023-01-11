#include<iostream>//individially declaring function as friend
using namespace std;
class complex;
class calculator{
	public:
	int sumreal(complex,complex);
		int sumimz(complex,complex);
};
class complex{
	private:
		int a,b;
		friend int calculator ::sumreal(complex o1,complex o2);
			friend int calculator ::sumimz(complex o1,complex o2);
	public:
	void setnumber(int n1,int n2){
		a=n1;
		b=n2;	
		}	
	void printnum(){
		cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
	}

};
int calculator :: sumreal(complex o1,complex o2){
		return (o1.a+ o2.a);
	}
	int calculator :: sumimz(complex o1,complex o2){
		return (o1.b+ o2.b);
	}
int main(){
	complex c1,c2;
	calculator c3;
	int k;
	c1.setnumber(4,5);
	c2.setnumber(6,8);
	c1.printnum();
	c2.printnum();
	k=c3.sumreal(c1,c2);
	int l=c3.sumimz(c1,c2);
	cout<<"Sum of real part of complex number is "<<k<<endl;
		cout<<"Sum of imaginary part of complex number is "<<l<<endl;
		return 0;
}
