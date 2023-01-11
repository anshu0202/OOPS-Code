#include<iostream>
using namespace std;
class customer{
	char name[20];
	float acc_no;
	float balance;
	public:
		customer(){
			cout<<"Enter name of customer\n";
			cin>>name;
			cout<<"Enter Account number\n";
			cin>>acc_no;
			cout<<"Enter starting amount\n";
			cin>>balance;
		}
	void deposit(){
		float amt;
			cout<<"Enter amount to deposit\n";
			cin>>amt;
			balance=balance+amt;
		}
	void withdrawl(){
		float amt;
			cout<<"Enter amount to withdraw\n";
			cin>>amt;
			if(balance>amt)
			balance=balance+amt;
			else{
				cout<<"Your balance is only "<<balance<<endl;
			}
		}		
	void putdata(){
			cout<<"Name : "<<name<<endl;
			cout<<"Account number : "<<acc_no<<endl;
			cout<<"Balance : "<<balance<<endl;			
		}
};
int main(){
	customer c1,c2;
	int x;
	cout<<"Enter 1 for deposit\n";
	cout<<"Enter 2 for withdrawl\n";
	cin>>x;
	switch(x){
		case 1:c1.deposit();break;
		case 2:c1.withdrawl();break;
		default :cout<<"Enter valid operation\n";
	}
	c1.putdata();
	cout<<"******************************\n";
	cout<<"Enter 1 for deposit\n";
	cout<<"Enter 2 for withdrawl\n";
	cin>>x;
	switch(x){
		case 1:c2.deposit();break;
		case 2:c2.withdrawl();break;
		default :cout<<"Enter valid operation\n";
	}
	c2.putdata();
	cout<<"******************************\n";
}
