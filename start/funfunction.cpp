#include<iostream>
using namespace std;

class A{
	private:
		int a;
		public:
			void setdata(int x){
				a=x;
			}
		 void fun();
};
class B{
//	private:
//		int b;
//		public:
//			void setdata(int y){
//				b=y;
//			}
			friend class A;//now all  function of class A is friend of B.
};
void fun(A o1,B o2){
//..............	//
}
int main(){
	A obj1;
	B obj2;
	obj1.setdata(3);
	obj2.setdata(60);
	fun(obj1,obj2);
	return 0;
}
