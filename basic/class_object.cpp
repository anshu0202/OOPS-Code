#include<iostream>
using namespace std;
class complex{
	private: int a,b;  // by default they are private and cant access directly
	public:
		void set_data(int ,int );  // function define inside class is inline bydefault
		void show_data(){           //if define outside the class we have to use inline keyword 
			cout<<"a = "<<a<<" b = "<<b;// during declaration
		}
};
void complex :: set_data(int x,int y){  //its is member function only when its is declare inside class and it should use membership level
			a=x;
			b=y;
		}
int main(){
	complex c1;  // c1 is object
	c1.set_data(8,9);
	c1.show_data();
}
