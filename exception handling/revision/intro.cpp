#include<iostream>
using namespace std;
int main(){
	int a=2;
	cout<<"Welcome\n";
	try{
		if(a==1)
		throw 1;
		if(a==2)
		throw 2;
		if(a==3)
		throw 3;
		cout<<"This is try block\n";
	}
	catch(int e){
		cout<<"Exception caught at "<<e<<endl;
	}
	catch(double e){
		cout<<"Exception caught at "<<e<<endl;
	}
	cout<<"Last line\n";
	return 0;
}
