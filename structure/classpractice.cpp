#include<iostream>
using namespace std;
#include<string>
class student{
	public:
		string name;
		int roll;
};
int main(){
	student s1;
//	cout<<"Enter name of student\n";
	s1.name="john";
//	cout<<"Enter roll number of  "<<s1.name;
//	cin>>s1.roll;
s1.roll=2;
	cout<<s1.name<<" "<<s1.roll;
//	cout<<s1.roll;
	return 0;
	
}
