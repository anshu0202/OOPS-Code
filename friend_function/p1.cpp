#include<iostream>
using namespace std;
class time;
class day{
	private:
	int date;
	char month[20];
	int year;
	public:
		void get();
		void show();
		friend void display(time ,day);
};
void day::get(){
	cout<<"Enter date\n";
	cin>>date;
	cout<<"Enter month\n";
	cin>>month;
	cout<<"Enter year\n";
	cin>>year;	
}
void day::show(){
	cout<<"Date : "<<date<<" "<<month<<" "<<year<<endl;
}
class time{
	private:
	int hr;
	int sec,min;
	public:
	void get();
		void show();
		friend void display(time,day);
};
void time::get(){
	cout<<"Enter hour\n";
	cin>>hr;
		cout<<"Enter minutes\n";
	cin>>min;
	cout<<"Enter seconds\n";
	cin>>sec;
	
}
void display(time t,day d){
	cout<<"Displaying together\n";
	cout<<"Time : "<<t.hr<<" "<<t.min<<" "<<t.sec<<" AM"<<endl;
	cout<<"Date : "<<d.date<<" "<<d.month<<" "<<d.year<<endl;
}
void time::show(){
	cout<<"Time : "<<hr<<" "<<min<<" "<<sec<<endl;
}
int main(){
	day d1;
	time t1;
	d1.get();
	d1.show();
	t1.get();
	t1.show();
	display(t1,d1);
	
}
