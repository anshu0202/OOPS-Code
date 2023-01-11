#include<iostream>
using namespace std;
class distance1{
	private:
	int inch,feet;
	public:
		void set(int x,int y){
		feet=x;	
		inch=y;
		}
		void display(){
			feet=feet+(inch/12);
			inch=inch%12;
			cout<<"Feet = "<<feet<<" inch "<<inch<<endl;			
		}
		distance1 operator+(distance1 d){
			distance1 temp;
			temp.feet=feet+d.feet;
			temp.inch=inch+d.inch;
			if(temp.inch>=12){
				temp.feet=temp.feet+(temp.inch/12);
				temp.inch=temp.inch%12;
				return temp;
			}
		}
};
int main(){
	distance1 d1,d2,d3;
	d1.set(5,30);
	d2.set(12,20);
	d1.display();
	d2.display();
	d3=d1+d2;
	d3.display();
	return 0;
}
