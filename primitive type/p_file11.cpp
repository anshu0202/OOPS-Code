#include<iostream>
using namespace std;
class time{
	private:
	int hrs,mins;
	public:
		time(int m){
			hrs=m/60;
			mins=m%60;
		}
		void display(){
			cout<<"Hours: "<<hrs<<" minutes: "<<mins<<endl;
		}
}; 
int main(){
	int x;
	cout<<"Enter time in minutes\n";
	cin>>x;
	time t=x;
	t.display();
	return 0;
}

