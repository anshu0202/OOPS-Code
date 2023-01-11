#include<iostream>
using namespace std;
class account{
	private:
		int balance;   //instance member variable
		  //ststic member variable /class variable
			public:
					static float roi;
				void setbalance(int b){
					balance=b;
				}
//				static void setroi(float r){
//					roi=r;
//					cout<<roi<<endl;
//				}
				static void setroi(){	
					cout<<roi<<endl;
				}
};
float account :: roi;//=3.5f;//membership level
int main(){
	account a1,a2;
//	account ::roi=4.5f;
a1.setroi();
}
