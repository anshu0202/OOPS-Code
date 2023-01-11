#include<iostream>// incomplete
using namespace std;
template  <class a,class b> // a for int and b for double
a cal(a x,a y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
// cal(a x,b y){
//	if(x>y){
//		cout<<x" is greater\n";
//	}
//	else{
//		cout<<y" is greater\n";
//	}
//}
//void  cal(int z){
//	cout<<"\nHIII\n";
//}
////int cal(int x,int y){
////	if(x>y){
////		return x;
////	}
////	else{
////		return y;
////	}
////}
//double cal(double x,double y){// function overloading due to change in the 
//	if(x>y){//data type of the arguments received by the cal function
//		return x;
//	}
//	else{
//		return y;
//	}
//}
int main(){
	cout<<cal(5,8)<<endl;
	cout<<cal(45.36,4.85);
	cal(45,52.369);
	//cal(56);
	return 0;
}
