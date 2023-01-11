#include<iostream>
using namespace std;
class A{//this is a keyword which is a pointer which points to the object which
	private:// invokes the member function
		int a;
	public:
		void set(int a){
			this->a=a;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}	
};
int main(){	
	A a;
	a.set(78);
	a.display();
	return 0;
}
