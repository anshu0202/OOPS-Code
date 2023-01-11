#include<iostream>
using namespace std;
class rectangle{
	public:
	int l,b,ar,p;
void peri(int x,int y){
		p=2*(x+y);
	} 
void area(int a,int b){
		ar=a*b;
	}
	void display(){
		cout<<"The perimeter of reactangle with length "<<l<<" and breadth "<<b<<" is "<<p<<endl;
		cout<<"The area of reactangle with length "<<l<<" and breadth "<<b<<" is "<<ar;
	}
	
};
int main(){
	rectangle r;
	cout<<"Enter length and breadth of rectangle\n";
	cin>>r.l>>r.b;
	r.peri(r.l,r.b);
	r.area(r.l,r.b);
	
	r.display();
	return 0;
}
