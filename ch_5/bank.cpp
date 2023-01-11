#include<iostream>
using namespace std;
class bank{
	private:
		char name[20]="Raman kumar";
		int acc_no=547328;
		char acc_type[20]="saving";
		float balance=6738.52;
	public:
	    void intial_val();
		void deposit_val(float x);
		void withdraw_val(float y);
		void display();
};
void bank:: intial_val(){
	cout<<"Current amount is "<<balance<<endl;
}
void bank:: deposit_val(float a){
	cout<<"Deposit amount is "<<a<<endl;
	cout<<"Current amount after deposition "<<a+balance<<endl;
	balance=balance+a;
}
void bank:: withdraw_val(float b){
	if(b>balance){
		cout<<"You cannot withdraw "<<b<<" your current balance is only "<<balance<<endl;
	}
	else{
	cout<<"Amount withdraw is "<<b<<endl;
	cout<<"Current amount after withdrawl is "<<balance-b<<endl;
	balance=balance-b;
}
}
void bank:: display(){
	cout<<"Account holder name: "<<name<<endl;
	cout<<"Current balance "<<balance;
}
int main(){
	bank b1;
	float x,y;
	b1.intial_val();
	cout<<"Enter amount to deposit"<<endl;
	cin>>x;
	cout<<"Enter amount to withdraw"<<endl;
	cin>>y;
	b1.deposit_val(x);
	b1.withdraw_val(y);
	b1.display();
	
}
