#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
		A(int k){
			x=k;
			cout<<"class A\n";
		}
};
class B:public A{
	public:
		B():A(500){ // calls only default constructor
			cout<<"class B\n";
		}
};
int main(){
	B obj;
}
