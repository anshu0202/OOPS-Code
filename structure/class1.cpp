#include<iostream>
using namespace std;
struct complex{
	private:
	
	int a,b;
	
	public:
	void set_data(int x, int y){
	//	cout<<"enter book details\n";
		a=x;
		b=y;
		
	}
	void display(){
		cout<<" a=  "<<a<<" b= "<<b;
	}
};
int main(){
	complex c1; 
	c1.set_data(3,5);
	c1.display();
	return 0;
}
