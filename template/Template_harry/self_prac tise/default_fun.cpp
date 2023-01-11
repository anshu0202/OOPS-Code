#include<iostream>
using namespace std;
template<class t1,class t2>
t2 max(t1 a,t2 b){
	if(a>b)
	return a;
	return b;
//	return (a>b)?a:b;
}
//template<class t1,class t2>// main function never use function template
int main(){
	//int x=293;
	//float y=34.98,z;
	cout<<"Max value is "<<max(52,36.32)<<endl;
	cout<<"Max value is "<<max(152.92,136.32)<<endl;
	cout<<"Max value is "<<max(42.91,23)<<endl;// here only int value is return??
	return 0;
}
