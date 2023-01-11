#include<iostream>//que 3
using namespace std;
class A{
	private:
		int balance;
		static float roi;
	public:
		void set_balance(int b){
			balance=b;
		}		
		void display(){
			cout<<"Balance = "<<balance<<endl;
			cout<<"ROI = "<<roi<<endl;
		}	
};
float A:: roi=2.5f;
int main(){
	A a1,a2;
	a1.set_balance(4700);
	a2.set_balance(5600);
	a1.display();
	a2.display();
	return 0;
}
