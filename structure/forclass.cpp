#include<iostream>
using namespace std;
#include<string>
class student{
	public:
		char name[20];
		int roll;
		string address;
};
int main(){
	student s[2];
	int i;
	for(i=0;i<2;i++){
	
   cout<<"Enter name of student "<<i+1<<"\n";
	cin>>s[i].name;
	cout<<"Enter roll number of  "<<s[i].name<<"\n";
	cin>>s[i].roll;
	cout<<"Enter address of "<<s[i].name<<endl;
	cin>>s[i].address;
}
 	for(i=0;i<2;i++){
 		cout<<"Roll no. of "<<s[i].name<<" is "<<s[i].roll<<" and his address is "<<s[i].address<<"\n";
	 }
	

	return 0;
	
}
