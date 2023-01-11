#include<iostream>
using namespace std;
class class_name{
	private:
		string name;
		int roll_no;
	public:
	  void setdata();
	  void showdata();	
};
void class_name::setdata(){
	cout<<"Input name :\n";
	cin>>name;
	cout<<"Enter Roll No. :\n";
	cin>>roll_no;
}
void class_name::showdata(){
	cout<<name;
	cout<<"   "<<roll_no<<endl;
}
int main(){
	class_name n[3];
	int i;
	for(i=0;i<3;i++){
		n[i].setdata();
	}
	cout<<"Name    Roll No.\n";
	for(i=0;i<3;i++){
		n[i].showdata();
	}
}
