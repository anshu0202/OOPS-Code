#include<iostream>
using namespace std;
class account{
	private:
		int balance;   //instance member variable
			static float roi;  //ststic member variable /class variable
			public:
				void setbalance(int b){
					balance=b;
				}
				static void setroi(float r){
					roi=r;
					cout<<roi<<endl;
				}
};
float account :: roi=3.5f;//membership level
int main(){
	account a1,a2;
	a1.setroi(4.5f);
}
