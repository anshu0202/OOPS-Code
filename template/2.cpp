#include<iostream>
using namespace std;
int big(int x, int y){// we can generalise function instead of overloading it 
	if(x>y)
	return x;
	else 
	return y;
}
//double big(double x, double y){//function overloading
//	if(x>y)
//	return x;
//	else 
//	return y;
//}
int main(){
cout<<big(5,3)<<endl;
cout<<big(77.12,56.36);	
}
