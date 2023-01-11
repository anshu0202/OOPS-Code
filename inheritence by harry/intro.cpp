#include<iostream>
using namespace std;
class employee{// base class
			public:
		int id;
		float salary;
	employee(int idin){
		id =idin;
		salary=334.0;
	}
	employee(){
	}	
	void display(){
		cout<<"Id is "<<id<<endl;
		cout<<"Salary is "<<salary<<endl;
	}
};
// derive class
//class derived - class name : visibility-mode  base class name
class programmer : public employee{
	public:
	int langcode=9;
	 	programmer(int idin){
		id =idin;
	}	
};
int main(){
	employee e1(5),e2(7);
	e1.display();
	e2.display();
	programmer p1(10);
	p1.display();
	return 0;
}
