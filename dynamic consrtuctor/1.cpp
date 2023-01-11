#include<iostream>//object k dwara access hone wale memory block ko bnata h
using namespace std;
class A{
	private:
		int a,b;
		int *p;
	public:
	   A(){
	   	a=0;
	   	b=0;
	   	p=new int;
	   }	
	   A(int x,int y,int z){
	   	a=x;
	   	b=y;
	   	p=new int;
	   	*p=z;
	   }
};
int main(){
	A o1,o2,o3(3,5);
	
}
