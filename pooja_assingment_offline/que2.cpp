#include<iostream>
using namespace std;
class IMS{
	protected:
		string product_name;
		int quantity,code;
		float price;
	public:
		static float tprice;
		void set();
		void display();	
};
float IMS::tprice=0;
void IMS::set(){
	cout<<"Enter product name\n";
	cin>>product_name;
	cout<<"Enter code of product\n";
	cin>>code;
	cout<<"Enter quantity\n";
	cin>>quantity;
	cout<<"Enter price\n";
	cin>>price;
	tprice=tprice+(price*quantity);
}
void IMS::display(){
	cout<<product_name<<"         "<<code<<"         "<<price<<"         "<<quantity<<"       "<<price*quantity<<endl;
}
int main(){
	IMS p[2];
	int i;
	long long int mob;
	string name;
	cout<<"Enter customer name\n";
	cin>>name;
	cout<<"Enter mobile number\n";
	cin>>mob;
	for(i=0;i<2;i++){
		p[i].set();
	}
	cout<<"Customer name: "<<name<<"             mobile no.:"<<mob<<endl;
	cout<<"************************************************************\n";
	cout<<"Product name     code     Price    Quantity     Total\n";
	for(i=0;i<2;i++){
		p[i].display();
	}
	cout<<"*****************************************************\n";
	cout<<"                              Total price:  "<<p[2].tprice<<endl;
	return 0;
}
