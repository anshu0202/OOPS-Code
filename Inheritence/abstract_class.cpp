#include<iostream>
using namespace std;
class person{
	public:
		virtual void fun()=0;// do nothing function// it is also called pure natural function
};
class student:public person{
	public :
		void fun(){// method overriding;
		}
};
int main(){
	person p1;//no object will be created as it has do nothing function
	//p1.fun(); // so we have to make a child class of it and over ride the do nothing function
//	however fun can still be called using pointer of person class so we make it virtual.
	
}
