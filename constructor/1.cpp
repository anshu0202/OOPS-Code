#include<iostream>
using namespace std;
class triangle{
	private:
		int a,b,c;
	public:
		triangle(int x,int y,int z){
			a=x;
			b=y;
			c=z;
			area();
			perimeter();
		}
		void area(){
			cout<<"Area of triangle is "<<(a*b)/2;
		}
		void perimeter(){
			cout<<"\nPerimeter of triangle is "<<(a+b+c);
		}
};
int main(){
	triangle t1(3,4,5);
}
