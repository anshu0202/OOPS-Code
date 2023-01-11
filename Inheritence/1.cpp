#include<iostream>//protected can be access by only member of the class
using namespace std;
class A{
	private:
		int a;
	protected:
		void setvalue(int y){
			a=y;
			cout<<"hi\n";
		}
	public:
	void set(int k){
		setvalue(k);
	}	
};
class B:public A{
	public:
	  void setdata(int x){
	  	setvalue(x);
	  }
};
int main(){
	B b1;
	b1.setdata(78);
	A a1;
	a1.set(50);
	//b1.setvalue(45);
}
