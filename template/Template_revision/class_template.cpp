/*
class template is known as generic class.
*/
#include<iostream>
using namespace std;
class Base{
	private:
		int x;
	public:
	 void set(int a){
	 	x=a;
	 }	
	 void get(){
	 	cout<<"Value of x is "<<x<<endl;
	 }		
};
int main(){
	Base b1;
	b1.set(500);
	b1.get();
	return 0;
}
