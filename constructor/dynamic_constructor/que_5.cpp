#include<iostream>
using namespace std;
 class Area{
 	int x;
 	public:
 		Area(){
 			cout<<"Enter side of square\n";
 			cin>>x;
 			cout<<"Area of Square is "<<x*x<<endl;
		 }
		 Area(float x, float y){
		 	cout<<"Area of rectangle is "<<x*y<<endl;
		 }
 };
 int main(){
 	Area a1,a2(4,5);
 	return 0;
 }
