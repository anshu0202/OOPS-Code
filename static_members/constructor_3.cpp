#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(int x, int y){ // paramaterised constructor
		cout<<"Hello\n";
			// it is use to solve problem of initialization
			a=x;
			b=y;
		}/*
		complex(int k){ //constructor overloading
		cout<<"Hello\n";
			// it is use to solve problem of initialization
			a=k;
		}*/
			complex(){ //constructor overloading
		cout<<"Hello\n";//this is default constructor
		}
				
};
int main(){
	complex c1,c2(9,8);// default constructor will run in case there is no constructor	
}
