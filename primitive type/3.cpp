#include<iostream>//class to primitive
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
		operator int(){//int means we have to convert into int
			return a;
		}
		
};
int main(){
complex c1;
	c1.set(3,4);
	c1.show();
	int x;
//	x=c1;//casting operator is used otherwise show error
     x=c1;//x=c1.operator int  
	cout<<"x = "<<x;
}
