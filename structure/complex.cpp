#include<iostream>
using namespace std;
class complex{
	public:
	int a,b;
//	complex c;
	complex add( complex m){
	complex	c;
	c.a=a+m.a;
	c.b=b+m.b;
	return c;
	}
	void display(){
		cout<<"the sum is \n";
		cout<<c.a<<" "<<c.b;
	}
	
};
int main(){
	complex c1,c2,c3;
	cout<<"Enter first complex no.\n";
	cin>>c1.a>>c1.b;
	cout<<"Enter second complex no.\n";
	cin>>c2.a>>c2.b;
	c3=c1.c2(c2.a,c2.b);
	c3.display();
}
