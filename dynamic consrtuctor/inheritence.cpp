#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Base class constructor\n";
		}
			~Base(){
			cout<<"Base class destructor\n";
		}
};
class derived :public Base{
	public:
		derived(){
			cout<<"Derived class constructor\n";
		}
			~derived(){
			cout<<"Derived class destructor\n";
		}
};
int main(){
	int x=2;
	derived d1;
	try{
		x++;
		if(x==3){
			throw d1;	
		}
	}
	catch(Base b){
		cout<<"Exception caught by base class\n";
	}
	catch(derived b){
		cout<<"Exception caught by derived class\n";
	}
	cout<<"Program ends\n";
}
