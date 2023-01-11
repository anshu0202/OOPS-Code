#include<iostream>//dynamic constructor
using namespace std;
class A{
	int a;
	public:
		A(){
			cout<<"Constructor of class A\n";
		}
			A(int x){
				a=x;
			cout<<"Constructor of class A with argument\n";
			cout<<"a = "<<a<<endl;
		}
};
int main(){
	A *a1;// new k help se object k bne pr jo consrtructor run krta h wo dynamic constructor nhii hota h
	a1=new A;
//	A a1,a2,a3(10);
	return 0;
}
