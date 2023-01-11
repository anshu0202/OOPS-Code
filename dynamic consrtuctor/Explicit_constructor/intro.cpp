#include<iostream>
using namespace std;
class A{
	private:
		int x;
	public:
//		A(int a){
//			x=a;
//		}
		explicit A(int a){
			x=a;
		}
		void show(){
			cout<<"x: "<<x<<endl;
		}	
};
void display(A a){
	a.show();
}
/*
In case of constructor is taking only one argument
and the value assigned is same as that of parameter passed then it is called
implicitily and to avoid implicit call we use explicit keyword
*/
int main(){
	A a1(10);//normal call to the constructor
	// 20 which is int is equated to class object
//	A a2=20;//implicit call to the constructor
	display(a1); //normal call to the constructor
	// here 30 is int but is treated as a object
	//display(30);//implicit call to the constructor
	return 0;
}
