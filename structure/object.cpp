#include<iostream>
using namespace std;
#include<string>
class student{
	public:
		char name[20];
		int roll;
};
int main(){
	student s1,s2;
	
   cout<<"Enter name of student 1\n";
	cin>>s1.name;
	cout<<"Enter roll number of  "<<s1.name;
	cin>>s1.roll;
	cout<<"Enter name of student 2\n";
	cin>>s2.name;
	cout<<"Enter roll number of  "<<s2.name;
	cin>>s2.roll;
//s1.roll=2;
	cout<<"roll of "<<s1.name<<" is  "<<s1.roll<<"\n";
	cout<<"roll of "<<s2.name<<" is  "<<s2.roll<<"\n";
	
//	cout<<s1.roll;
	return 0;
	
}
