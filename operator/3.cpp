#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(){
			a=0;
			b=0;
		}
	  complex(int x,int y){
	   	a=x;
	   	b=y;
	   }
	  void shownumbers();
	  void get_numbers();
	  complex operator+(complex);
	  void sum(complex,complex);
	  
};
void complex::sum(complex c1, complex c2){
	a=c1.a+c2.a;
	b=c1.b+c2.b;
}
void complex::shownumbers(){
	  	cout<<a<<" + i"<<b<<endl;
	  } 
complex complex:: operator +(complex c){
	  	complex temp;
	  	temp.a=a+c.a;
	  	temp.b=b+c.b;
	  	return temp;
	  }	
 void complex :: get_numbers(){
 	cout<<"Enter real part\n";
 	cin>>a;
 	cout<<"Enter imaginary part\n";
 	cin>>b;
 }
 
int main(){
	complex c1,c2,c3,c4(2,5),c5(5,6),c6;
	cout<<"Enter first number\n";
	c1.get_numbers();
	cout<<"Enter second number\n";
	c2.get_numbers();
	c1.shownumbers();
	c2.shownumbers();
	cout<<"Sum of two numbers is\n";
	c3.sum(c1,c2);
	c3.shownumbers();
	c3=c1+c2;  
	c4.shownumbers();
	c5.shownumbers();
	c6=c4+c5;
		cout<<"Sum of two numbers is\n";
	c6.shownumbers();	
}
