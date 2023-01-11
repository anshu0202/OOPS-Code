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
		
		
	}
};
int main(){
	employee e[2];
	
	int i;
	for(i=0;i<2;i++){
	
		cout<<"\nEnter details of employee "<<i+1<<endl;
		cin>>e[i].name>>e[i].yr_of_join>>e[i].address;
//	cout<<"\nEnter details of employee 2"<<endl;
//		cin>>e2.name>>e2.yr_of_join>>e2.address;
//		cout<<"\nEnter details of employee 3"<<endl;
//		cin>>e3.name>>e3.yr_of_join>>e3.address;
	}
		cout<<"*******************************************\n";
		cout<<"Name   year of joining   Address\n";
		for(i=0;i<2;i++){
		
   e[i].display();
//   e2.display();
//   e3.display();
}
}
