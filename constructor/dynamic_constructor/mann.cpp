#include<iostream>// que 1
using namespace std;
class A{
	private:
	float balance;
	int acc_no;
	public:
		void set(){
			cout<<"Enter account number\n";
			cin>>acc_no;
			cout<<"Enter balance\n";
			cin>>balance;
		}
		void display(){
			cout<<"Account = "<<acc_no<<endl;
			cout<<"Balance = "<<balance<<endl;
		}
};
int main(){
	A a1,a2,a3;
	a1.set();
	a2.set();
	a3.set();
	a1.display();	
	a2.display();	
	a3.display();
	return 0;
}
