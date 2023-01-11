#include<iostream>
using namespace std;
template <class a>//  a is place holder
a big(a x, a y){// we can generalise function instead of overloading it 
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
cout<<big(77.12,156.36);	
}
