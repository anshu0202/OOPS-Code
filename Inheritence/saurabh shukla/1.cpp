#include<iostream>
using namespace std;
class A {
	private:
		int a;
	protected:
		void setvalue(int k){
			a=k;
		}
		public:
		void setdata(int x){
			setvalue(x);
		}	
};
class B:public A{
//	public:
//		void setdata(int x){
//			setvalue(x);
//		}
};
int main(){
	A obj;
	obj.setdata(45);
	return 0;
}
