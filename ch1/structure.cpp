#include<iostream>
#include<string.h> // header file for strcpy function
using namespace std;
struct book{
	int id;
	char name[20];//="HC Verma";
	float price;
};
int main(){
	book b1,b2;// it is optional to write struct keyword here
	b1.id=90;
	strcpy(b1.name,"saraswatii"); //  name is address and poits to index 0 so assingment operator cannot be used
	cout<<b1.name;
	b1.price=897;
	cout<<endl<<b1.id<<endl;
	cout<<b1.price<<" $";
//	b2.id=b1.id;  // only id is copied
	b2=b1;// here all data of b1 is copied to b2;
}
