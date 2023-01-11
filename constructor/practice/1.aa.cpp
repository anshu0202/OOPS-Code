#include<iostream>
using namespace std;
class distance{
	int a,b;
	public:
	void getdata(int x, int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"Centimeter = "<<b<<endl;
			cout<<"Meter = "<<a<<endl;
		}
		distance operator+(distance d){
			distance temp;
			temp.a=a+d.a;
			temp.b=b+d.b;
			if(temp.b>100){
				temp.a=temp.a+(temp.b/100);
				temp.b=temp.b%100;
				return temp;
			}
			else{
				return temp;
			}
		}		
};
int main(){
	class distance d1,d2,d3;
	d1.getdata(3,70);
	d2.getdata(4,80);
	d3=d1+d2;
	d1.show();
	d2.show();
	cout<<"Sum of d1 and d2 is \n";
	d3.show();
	return 0;
}

