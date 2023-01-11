#include<iostream>
using namespace std;
class complex{
	private:
	int a,b;
	public:
	void set_data(int, int);
	void display(){
		cout<<" a=  "<<a<<" b= "<<b;
	}
};
void complex:: set_data(int x, int y){
		a=x;
		b=y;
	}
int main(){
	complex c1,c2,c3; 
	c1.set_data(3,5);
	c1.set_data(3,5);
	c1.display();
	return 0; 
}
