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
		}
		complex(int k){ //parametrize constructor
		cout<<"Hello\n";//constructor overloading
			// it is use to solve problem of initialization
			a=k;
		}
			complex(){ //constructor overloading
		cout<<"Hello\n";//this is default constructor
		}
		complex(complex &c){ //reference is used
			a=c.a;
			b=c.b;
		}				
};
int main(){
	complex c1(9,8),c2,c3(5);//default constructor will run in case there is no constructor
	complex c4(c1);//compiler make default as well as copy constructor when there is no constructor in class
}
