#include<iostream>
using namespace std;
int main(){
	int a=2;
	cout<<"Welcome\n";
	try{
		if(a==1)
		throw 1;
		if(a==2)
		throw "hello";
		if(a==3)
		throw 4.5;
		cout<<"This is try block\n";
	}
	catch(...){//this is ecilpse and catch any value
		cout<<"Exception caught at "<<endl;
	}
//	catch(double e){
//		cout<<"Exception caught at "<<e<<endl;
//	}
	cout<<"Last line\n";
	return 0;
}
