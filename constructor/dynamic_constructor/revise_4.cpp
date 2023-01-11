#include<iostream>
using namespace std;
class A{
	private:
	float balance;
	 const float roi=7.8f;
	public:
		void set(float x){
			balance=x;
		}
		void display(){
			cout<<"Balance = "<<balance<<endl;
			cout<<"Rate of interest = "<<roi<<endl;
		}
};
int main(){
	A a1,a2,a3;
	a1.set(4500);
	a1.display();
	a2.set(5000);
	a2.display();
	a3.set(5500);
	a3.display();
	return 0;
}
