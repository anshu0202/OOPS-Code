#include<iostream>//question 1
using namespace std;
class EMS{
	protected:
		int empid;
		static int count;
		string name,designation;
		float bpay;
	public:
	    virtual void salary()=0;	
};
int EMS::count=1;
class pay:public EMS{
	protected:
		float DA,HRA,MA,total;
	public:
		void set();
		void salary();
		void display();
};
void pay::salary(){
			DA=bpay*130/100.0;
			HRA=bpay*20/100.0;
			MA=bpay*5/100.0;
			total=(DA+HRA+bpay+MA+500.0);	
		}
void pay::set(){
			cout<<"Enter name of employee "<<count<<endl;
			cin>>name;
			cout<<"Enter employee Id\n";
			cin>>empid;
			cout<<"Enter designation\n";
			cin>>designation;	
			cout<<"Enter basic pay\n";
			cin>>bpay;
			count++;
		}
void pay:: display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Employee id: "<<empid<<endl;
			cout<<"Designation: "<<designation<<endl;
			cout<<"Basic pay: "<<bpay<<endl;
			cout<<"DA: "<<DA<<endl;
			cout<<"HRA: "<<HRA<<endl;
			cout<<"MA: "<<MA<<endl;
			cout<<"Phone allowance: 500"<<endl;
			cout<<"Toatal salary: "<<total<<endl;
		}
int main(){
	pay obj[3];
	int i;
	for(i=0;i<3;i++){
		obj[i].set();
		obj[i].salary();
	}
	cout<<"**************************************\n";
	for(i=0;i<3;i++){
		obj[i].display();
		cout<<"**************************************\n";
	}
	return 0;
}
