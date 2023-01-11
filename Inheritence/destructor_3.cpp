#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
	~	A(){
			cout<<"class A\n";
		}
};
class B:public A{
	public:
	~	B(){ // calls only default constructor
			cout<<"class B\n";
		}
};
int main(){
	B obj;
}
