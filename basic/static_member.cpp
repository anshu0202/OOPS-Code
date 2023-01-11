#include<iostream>
using namespace std;
class Account{
	private:
		int balance;   //instant member variable 
		static float roi; // static member variable also called class variable
		public:
			void set_balance(int b){
				balance=b;
			}
//			void set_roi(float r){
//				roi=r;
//			}
		static	void set_roi(float r){  // to call without object
				roi=r;
			}
};
float Account :: roi=3.5f; // static member has to be define outside the class. Now roi variable would get memory
int main(){
	Account a1,a2;
	a1.set_balance(10000);
	a2.set_balance(20252);
//	Account :: roi=4.5; // when roi is public then this could be done
//	a1.set_roi(4.5f);// when set_roi is not static
	Account::set_roi(4.5f);
}
