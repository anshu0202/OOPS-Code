#include<iostream>// using initialisation list
using namespace std;
class volume{
	private:
	float a,b,c;
	public:
	  volume(int x,int y,int z):a(x),b(y),c(z){
	 	display();
	 }	
	 void display(){
	 	cout<<"Volume is "<<a*b*c<<endl;
	 }
};
int main(){
	volume v1(4,5,6);
}
