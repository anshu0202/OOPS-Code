#include<iostream>
using namespace std;
int main(){
	cout<<"Welcome\n";
	int i=2;
	try{
		if(i==1)
		throw 10;
		cout<<"U r in try\n";
		if(i==2)
		throw "hello";
		cout<<"U r in try\n";
		if(i==3)
		throw 4.5;
		cout<<"U r in try\n";
	}
	catch(...){
		cout<<"Exception no "<<endl;
	}
	cout<<"last line\n";
}
