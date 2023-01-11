#include<iostream>// incomplete
// doubt in return type of function
using namespace std;
template <class a, class b>//  a is place holder
b big(a x, b y){// we can generalise function instead of overloading it 
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
cout<<big(5,3.99)<<endl;
cout<<big(77,156.36);	
}
