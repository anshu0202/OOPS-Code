#include<iostream>
using namespace std;
struct book{
	char name[20];
	int bookid;
	float price;
	void input(){
		cout<<"enter book details\n";
		cout<<"name, bookid, price\n";
		cin>>name>>bookid>>price;
	}
	void display(){
		cout<<" name= "<<name<<" \nbookid= "<<bookid<<"\n price= "<<price;
	}
};
int main(){
	book b1;
	b1.input();
	b1.display();
	return 0;
}
