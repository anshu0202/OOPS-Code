#include<iostream>
using namespace std;
class shop{
	private:
		int id;
		float price;
	public:
		void set(int x,int y){
			id=x;
			price=y;
		}	
		void get(){
			cout<<"Code of this item is "<<id<<endl;
			cout<<"Price of this item is "<<price<<endl;
		}
};
int main(){
	shop  *ptr=new shop[3];
	shop *temp;
	temp=ptr;
	int i,p,id;
	for(i=0;i<3;i++){
		cout<<"Enter Id and price of item "<<i+1<<endl;
		cin>>id>>p;
	//	*(ptr).set(id,p);
	ptr->set(id,p);
	ptr++;
	}
	for(i=0;i<3;i++){
		temp->get();
		temp++;
	}
	delete [] ptr;
	return 0;
}
