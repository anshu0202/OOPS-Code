#include<iostream>
using namespace std;
class area{
	private:
		float a,b;
	public:
	   void setdim(){
	   	  cout<<"Enter length of rectangle\n";
	   	  cin>>a;
	   	  cout<<"Enter breadth of rectangle\n";
	   	  cin>>b;
	   }	
	   float getarea(){
	   	return a*b;
	   }
};
int main(){
	area a1;
	a1.setdim();
	cout<<"Area of rectangle is "<<a1.getarea()<<endl;
}
