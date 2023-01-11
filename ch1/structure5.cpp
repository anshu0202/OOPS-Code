#include<iostream>
using namespace std;
struct book{
	private:int id;  //help from data corrupting
	char name[20];
	float price;
	public:
	void input(){
	cout<<"Enter book id\n";
	cin>>id;
	if(id<0){
		id=-id;
	}
	cout<<"Enter book price\n";
	cin>>price;
	cout<<"Enter book name:\n";
	cin>>name;
}
void display(){
	cout<<"You are in display\n";
	cout<<name;
	cout<<endl<<id;
}
};
int main(){
	book b1;
	//b1.id=98;
	b1.input();
	b1.display();
}

