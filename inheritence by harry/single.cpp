#include<iostream>
using namespace std;
class A{
	private:
		int data;
	public:
		void set(){
			cout<<"Enter a number\n";
			cin>>data;
		}	
		void show(){
			cout<<"Entered number is "<<data<<endl;
		}
};
class AA: public A{
	public:
		void display(){
			show();
		}
};
int main(){
	AA a1;
	a1.set();
	a1.display();
}
