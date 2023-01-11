#include<iostream>
using namespace std;
class student{
	private:
	int roll;
	char name[10];
	public:
		void set1(){
			cout<<"Enter name\n";
			cin>>name;
			cout<<"Enter roll number \n";
			cin>>roll;
		}
		void display1(){
			cout<<"Name = "<<name<<endl;
			cout<<"Roll number = "<<name<<endl;
		}
};
class  exam: public student{
	protected:
			int phy,maths;	
	public:
			void set2(){
			cout<<"Enter marks in physics\n";
			cin>>phy;
			cout<<"Enter marks in maths\n";
			cin>>maths;
		}
		void display2(){
			cout<<"Marks in physics is "<<phy<<endl;
			cout<<"Marks in maths is "<<maths<<endl;
		}
};
class  result: public exam{
	private:
float percentage;
	public:
		void display3(){
//			display1();
//			display2();
			cout<<"Your percentage is "<<(maths+phy)/2<<"%"<<endl;
		}
};
int main(){
	result r1;
	r1.set1();
	r1.set2();
	r1.display1();
	r1.display2();
	r1.display3();
}

