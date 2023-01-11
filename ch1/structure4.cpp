#include<iostream>// structure can also have function in c++;
#include<string.h> // it hels to achieve encapsulation
using namespace std;
struct book{
	int id;
	char name[20];
	float price;
	void input(){
	cout<<"Enter book id\n";
	cin>>id;
	cout<<"Enter book price\n";
	cin>>price;
	cout<<"Enter book name:\n";
	cin>>name;
}
void display(){
	cout<<"You are in display\n";
	cout<<name;
}
};
book input();  //declaration is mendatory
void display(book );
int main(){
	book b1;
	b1.input();
	b1.display();
}
//book input(){
//	book b1;
//	cout<<"Enter book id\n";
//	cin>>b1.id;
//	cout<<"Enter book price\n";
//	cin>>b1.price;
//	cout<<"Enter book name:\n";
//	cin>>b1.name;
//	 
//	return b1;
//}
//void display(book b1){
//	cout<<"You are in display\n";
//	cout<<b1.name;
//}
