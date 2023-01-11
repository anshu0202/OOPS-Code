#include<iostream>
using namespace std;
class player{
	private:
		int runs,fifty,century,wicket;
		string name;
		string country;
	public:
	     void getdata();
	     void putdata();		
};
void player::getdata(){
	cout<<"Enter player name\n";
	cin>>name;
	cout<<"Enter player country\n";
	cin>>country;
	cout<<"Enter player runs\n";
	cin>>runs;
	cout<<"Enter player fifty\n";
	cin>>fifty;
	cout<<"Enter player century\n";
	cin>>century;
	cout<<"Enter player wickets\n";
	cin>>wicket;
}
void player:: putdata(){
	cout<<"Name : "<<name<<endl;
	cout<<"Country : "<<country<<endl;
	cout<<"Runs : "<<runs<<endl;
	cout<<"Fifty : "<<fifty<<endl;
	cout<<"Century : "<<century<<endl;
	cout<<"Wickets : "<<wicket<<endl;
}
int main(){
	player p1,p2;
	p1.getdata();
	cout<<"*************************\n";
	p2.getdata();
	cout<<"*************************\n";
	p1.putdata();
	cout<<"*************************\n";
	p2.putdata();
	cout<<"*************************\n";
}
