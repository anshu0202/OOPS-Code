#include<iostream>
using namespace std;
class complex{
	private: int a,b;  // by default they are private and cant access directly
	public:
		void set_data(int x,int y){
			a=x;
			b=y;
		}
		void show_data(){
			cout<<"a = "<<a<<" b = "<<b;
		}
};
int main(){
	complex c1;  // c1 is object
	c1.set_data(8,9);
	c1.show_data();
	
}
