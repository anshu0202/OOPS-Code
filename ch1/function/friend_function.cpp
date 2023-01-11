#include<iostream>
using namespace std;
class num{
	private:
		int number;
		int id;
	public:
		void getdata(int x,int y);
		void putdata();	
		friend void h(num);		
};
void num::getdata(int x,int y){	
	number=x;
	id=y;
}
void num::putdata(){	
	cout<<number<<" "<<id;
}
void h(num m){
	cout<<"\nHello your are in friend class\n";
	cout<<"value are "<<m.number<<" "<<m.id;
}
int main(){
	num n;
	int a,b;
	cout<<"Enter 2 numbers\n";
	cin>>a>>b;
	n.getdata(a,b);
	n.putdata();
	h(n);
}
