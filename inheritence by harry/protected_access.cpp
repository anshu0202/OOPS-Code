#include<iostream>
using namespace std;
class A{
	protected:
		int data1=90;
	public:
	    void display(){
	    	cout<<"Data is "<<data1<<endl;
		}	
};
class AA: protected A{
	
};
int main(){
	AA a1;// not allow
	a1.display();
}
