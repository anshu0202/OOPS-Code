#include<iostream>//que 2
using namespace std;
class student{
	private:
	char name[20];
	int roll_no;
	int marks;
	public:
	void getdata();
	void putdata();
};
void student::getdata(){
	cout<<"Enter name of student\n";
	cin>>name;
	cout<<"Enter roll no. of student\n";
	cin>>roll_no;
	cout<<"Enter marks of student\n";
	cin>>marks;
}
void student::putdata(){
	cout<<"Name of student = "<<name<<endl;
	cout<<"Roll no. = "<<roll_no<<endl;
	cout<<"Marks = "<<marks<<endl;
}

int main(){
	student s;
	s.getdata();
	s.putdata();
}
