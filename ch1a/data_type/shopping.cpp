#include<iostream>
using namespace std;
const  int m=50;
class item{
	private:
	int code[m];
	float price[m];
	int count;
	public:
		void cnt(){
			count=0;
		}
		void getitem();
		void display_sum();
		void remove();
		void display_item();
};
void item::getitem(){
	cout<<"Enter item code\n";
	cin>>code[count];
	cout<<"Enter price of item\n";
	cin>>price[count];
	count++;
}
void item::display_sum(){
	float sum=0;
	int i;
	for(i=0;i<count;i++){
		sum=sum+price[i];
	}
	cout<<"Total price is : "<<sum<<endl;
}
void item::remove(){
	int a,i;
	cout<<"Enter item code\n";
	cin>>a;
	for(i=0;i<count;i++){
		if(code[i]==a){
			price[i]=0;
			code[i]=0;
		}
	}
}
void item::display_item(){
	int i;
	cout<<"List of items is:\n";
	cout<<"Code    Price\n";
	for(i=0;i<count;i++){
		cout<<code[i]<<"       "<<price[i]<<"$"<<endl;
	}
}
int main(){
	item order;
	order.cnt();
	int choice=1;
	while(choice){
		int x;
		cout<<"Enter 1 to buy\n";
		cout<<"Enter 2 to dislpay item\n";
		cout<<"Enter 3 to display sum\n";
		cout<<"Enter 4 to remove item\n";
		cin>>x;
		switch(x){
			case 1:order.getitem();
			       break;
			case 2:order.display_item();
			       break;
			case 3:order.display_sum();
			       break;
			case 4:order.remove();
			       break;
		    default : cout<<"Enter valid option\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
