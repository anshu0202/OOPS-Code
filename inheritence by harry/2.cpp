#include<iostream>
using namespace std;
class base{
	private:
		int data1;//private members are not inherited
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
class derive: public base{
	int data3;
	public:
		void process();
		void display();
};
void base::setdata(){
	data1=10;
	data2=20;
}
int base::getdata1(){
	cout<<"Data 1 is "<<data1<<endl;
	return data1;
}
int base::getdata2(){
	cout<<"Data 2 is "<<data2<<endl;
	return data2;
}
void derive::process(){
	data3=data2*getdata1();
}
void derive::display(){
	cout<<"data 3 is "<<data3<<endl;
}
int main(){
	derive d1;
	d1.setdata();
	d1.process();
	d1.display();
	return 0;
}
