#include<iostream>
using namespace std;
class account{
	private:
		int balance; //instance memeber variable
		static float roi;//class variable
	public:
	  void setbal(int b){
	  	balance=b;
	  }	
	 static void setroi(float r){//static member function
	  	roi=r;
	  }
};
float account:: roi=3.5f;
int main(){
	account a1,a2;
//	account::roi=4.5f;//when roi is public
	//a1.setroi(4.5f);//call with the help of object
	 account ::setroi(4.5f);// no object require
}
