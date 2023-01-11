#include<iostream>
using namespace std;
class employee{
	private:
	char name[20];
	int yoj;
	float salary;
	char address[50];
	public:
		void setdata(){
			cout<<"Enter name of employee\n";
			cin>>name;
			cout<<"Enter yead of joinning employee\n";
			cin>>yoj;
			cout<<"Enter salary\n";
			cin>>salary;
			cout<<"Enter address\n";
			cin>>address;
		}
	void dispaly(){
		cout<<name<<"     "<<yoj<<"        "<<address<<endl;
	}
};
int main(){
	employee e[3];
	e[0].setdata();
	e[1].setdata();
	e[2].setdata();
	cout<<"Name    Year of joinning   Address\n";
	e[0].dispaly();
	e[1].dispaly();
	e[2].dispaly();
}
