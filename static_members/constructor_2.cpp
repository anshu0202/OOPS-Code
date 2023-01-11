#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(int x, int y){
		cout<<"Hello\n";
			// it is use to solve problem of initialization
			a=x;
			b=y;
		}
		complex(int k){ //constructor overloading
		cout<<"Hello\n";
			// it is use to solve problem of initialization
			a=k;
		}
			complex(){ //constructor overloading
		cout<<"Hello\n";
		}
		
};
int main(){
	complex c1=complex(3,7),c2=5,c3;// two type of writing  c2(5)
}
