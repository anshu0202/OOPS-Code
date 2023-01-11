#include<iostream>
using namespace std;
class Person{
	public:
	virtual void fun()=0;
	 void show(){
		cout<<"Show function of Base class\n";
	}
};
class derived:public Person{
	public:
		void fun(){
			cout<<"This is derived class\n";
		}
		void show(){
		cout<<"Show function of Derived class\n";
	}
};
int main(){
	Person *ptr;
	derived p1;
	ptr=&p1;
	ptr->fun();
	ptr->show();
	return 0;
}
