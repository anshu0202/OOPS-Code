#include<iostream>
using namespace std;
class distance{
	private:
	int a,b;
	public:
		distance(int x,int y){
			a=x;
			b=y;
		}
		distance(){
		}
			distance add (distance &d1,distance &d2){
			distance temp;
			temp.a=d1.a+d2.a;
			temp.b=d1.b+d2.b;
			if(temp.b>100){
				temp.a=temp.a+(temp.b/100);
				temp.b=temp.b%100;
				return temp;
			}
			else{
				return temp;
			}
		}
		void show(){
			cout<<"METER = "<<a<<endl;
			cout<<"CENTIMETER = "<<b<<endl;
		}
};
int main(){
	distance d1(3,70),d2(4,80),d3;
	d3.add(d1,d2);
	d1.show();
	d2.show();
	cout<<"Sum of distance d1 and d2 is\n";
	d3.show();
}
