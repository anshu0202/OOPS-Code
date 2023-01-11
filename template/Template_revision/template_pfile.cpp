#include<iostream>
using namespace std;
template <class T>
class Base{
	private:
		T x;
	public:
	 void set(T a){
	 	x=a;
	 }	
	 void get(){
	 	cout<<"Value of x is "<<x<<endl;
	 }		
};
int main(){
	Base<int> b1;
	b1.set(500);
	b1.get();
	Base<char> b2;
	b2.set('A');
	b2.get();
	Base<float> b3;
	b3.set(489.325);
	b3.get();
	return 0;
}
