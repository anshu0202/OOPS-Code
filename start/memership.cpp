#include<iostream>
using namespace std;
class student{
	public:
		char name[20];
		int age;
		int roll;
};
void dis(student []);
int main(){
	student s[2];
	int i;
	for(i=0;i<2;i++){
	cout<<"Enter name of student "<<i+1<<endl;
	cin>>s[i].name;
	cout<<"Enter age of "<<s[i].name<<endl;
	cin>>s[i].age;
	cout<<"Enter roll number of "<<s[i].name<<endl;
	cin>>s[i].roll;
}
for(i=0;i<2;i++){
	cout<<s[i].name<<endl<<s[i].age<<endl<<s[i].roll<<endl;
}
	dis(s);
	return 0;
}
void dis(class student s[]){
	int i;
	cout<<"details of student with age 14 yrs\n";
	for(i=0;i<2;i++){
		if(s[i].age==14){
			cout<<s[i].name<<endl<<s[i].roll<<endl;
		}
	}
}
