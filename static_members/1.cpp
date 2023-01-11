#include<iostream>
using namespace std;
class account{
	private:
		int balance;//instance member variable
		static float roi;//static member variable also called class variable
	public:
		void setroi(float r){
			roi=r;
		}
	static void setbalance(int b){
			balance=b;
		}
};
	float account::roi=3.5f;//default 0 it is definition of class
int main(){
	account a1;
	a1.setroi(9.0f);
	acocunt :: setroi(4.5f);
}

