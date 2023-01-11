#include<iostream>
using namespace std;
class A{
	protected:
	int a;	// when we make it virtual then it is inherited only once to the class where it is inhereting twice 
};
class B:virtual public A{
	
};
class C:virtual public A{
	
};
class D:public B,public C{
	public:
		void set(){
			cout<<"Enter a \n";
			cin>>a;
			cout<<"entered value is "<<a<<endl;
		}
};
int main(){
	D	d1;
	d1.set();	
}
