#include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
		const int x;
		int &y;
	public:
//	   dummy(){
//	   	a=5;
//	   }
    dummy():a(5),b(7){//intialisers list use to intialise const data member
	}	// also for reference variable
	// not use for static data members
      dummy(int &n):x(5),y(n){
	  }
};
int main(){
	int m;
	dummy d1(m);
}
