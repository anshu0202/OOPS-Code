#include<iostream>
using namespace std;
class A{//this is a keyword which is a pointer which points to the object which
	private:// invokes the member function
		int a;
	public:
		A & set(int a){
			this->a=a;
			return *this;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}	
};
int main(){	
	A a;
	a.set(78).display();// need not to call display here it is called implicitily
//	a.display();
	return 0;
}
