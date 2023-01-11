#include<iostream>
#include<string>
using namespace std;
class employee{
	public:
	string name;
	int yr_of_join;
	string address;
	void display(){
		
		cout<<name<<"      "<<yr_of_join<<"          "<<address<<endl;
//		cout<<e2.name<<"  "<<e2.yr_of_join<<"  "<<e2.address<<endl;
//		cout<<e3.name<<"  "<<e3.yr_of_join<<"  "<<e3.address<<endl;
		
	}
};
int main(){
	employee e1,e2,e3;
	
	
		cout<<"\nEnter details of employee 1"<<endl;
		cin>>e1.name>>e1.yr_of_join>>e1.address;
	cout<<"\nEnter details of employee 2"<<endl;
		cin>>e2.name>>e2.yr_of_join>>e2.address;
		cout<<"\nEnter details of employee 3"<<endl;
		cin>>e3.name>>e3.yr_of_join>>e3.address;
		cout<<"*******************************************\n";
		cout<<"Name   year of joining   Address\n";
   e1.display();
   e2.display();
   e3.display();
}
