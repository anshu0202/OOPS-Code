#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
		explicit A(int a){
			cout<<"Constructor is called explicitly\n";
			x=a;
		}
//		A(int a){
//			x=a;
//		}
		void show(){
			cout<<"x: "<<x<<endl;
		}	
};
int main(){
	A a1(10);
	a1.show();
/*	
	A a2=30;  here constructor would not call implicitly
		so 30 would not assign to a2 and hence would show error
		*/
		return 0;
}
