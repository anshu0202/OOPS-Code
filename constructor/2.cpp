#include<iostream>
using namespace std;
class rectangle{
	private:
		float a,b;
	public:
	   rectangle(float x,float y){
	   	a=x;
	   	b=y;
	   }
	   float area(){
	   	return a*b;
	   }
	   float perimeter(){
	   	return 2*(a+b);
	   }	   	
};
int main(){
	  rectangle r1(4.0f,5.0f),r2(5.0,8.0);
	  cout<<"Area of triangle r1 is "<<r1.area()<<endl;
	   cout<<"Perimeter of triangle r1 is "<<r1.perimeter()<<endl;
	   cout<<"Area of triangle r2 is "<<r2.area()<<endl;
	   cout<<"Perimeter of triangle r2 is "<<r2.perimeter()<<endl;
}
