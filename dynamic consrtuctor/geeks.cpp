#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Base class constructor\n";
		}
			~A(){
			cout<<"Base class destructor\n";
		}
};
int main(){
	int x=2;
	//A a[3];
	try{
		A a[3];
		x++;
		if(x==3){
			throw x;	
		}
	}
	catch(...){
		cout<<"Exception caught\n";
	}
	cout<<"Program ends\n";
}
