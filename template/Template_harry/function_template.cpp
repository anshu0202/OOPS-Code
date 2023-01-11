#include<iostream>
using namespace std;// instead of function overloading function template is used
template<class t1,class t2>
t2 average(t1 x,t2 y){
	t2 z;
	z=(x+y)/2.0;
	return z;
}
int main(){	
	float z;
	z=average(45.5,55.3);
	cout<<"Final value is "<<z<<endl;
	return 0;
}
