#include<iostream>
#include<string.h> 
using namespace std;
struct book{
	int id;
	char name[20];
	float price;
};
book input();  //declaration is mendatory
void display(book );
int main(){
	book b1;
	b1=input();
	display(b1);
}
book input(){
	book b1;
	cout<<"Enter book id\n";
	cin>>b1.id;
	cout<<"Enter book price\n";
	cin>>b1.price;
	cout<<"Enter book name:\n";
	cin>>b1.name;
	 
	return b1;
}
void display(book b1){
	cout<<"You are in display\n";
	cout<<b1.name;
}
