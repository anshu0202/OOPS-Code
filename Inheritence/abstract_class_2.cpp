#include<iostream>//why abstract class
using namespace std;//for generalisation purpose
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
	person p1;
}
