#include<iostream>
#include<string.h> 
using namespace std;
struct book{
	int id;
	char name[20];
	float price;
};
int main(){
	book b1;
	cout<<"Enter book id\n";
	cin>>b1.id;
	cout<<"Enter book price\n";
	cin>>b1.price;
	cout<<"Enter book name:\n";
	cin>>b1.name;
	cout<<b1.name;
	
}
