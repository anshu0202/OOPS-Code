#include<iostream>//primitive to class
using namespace std;
class complex{
	private:
	int a,b;
	public:
		void set(int x, int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
		complex(int k){
			a=k;
			b=0;
		}
		complex(){
		}
}; 
int main(){
	complex c1;
	int x=52;
	c1=x;//show error
	c1.show();
}

