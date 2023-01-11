#include<iostream>
using namespace std;
int main(){
	int a=2;
	cout<<"Welcome\n";
	try{
		if(a==2){
		throw 2;
		cout<<"This is try block\n";
	}
	}
	catch(int x){
		cout<<"Exception caught at x = "<<x<<endl;
	}
	cout<<"Last line\n";
	return 0;
}

