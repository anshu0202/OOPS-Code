#include<iostream>
using namespace std;
class complex{
	private:
		int  a,b;
		public:
			complex(int x, int y){//paramaterized constructor
				a=x;
				b=y;
				cout<<a+b<<"\n";
			}
			complex(){//default constructor
				cout<<"hello\n";
			}
			complex(int k){
				a=k;
				cout<<"hello !\n";
			}
			complex(complex &c){//reference variable
				a=c.a;
				b=c.b;
			cout<<"hi \n";
			}
};
int  main(){
	complex c1(3,4),c3(5);
	complex c4(c1),c2;
}
