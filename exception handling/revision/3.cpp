#include<iostream>
using namespace std;
int main(){
	int a=2;
	cout<<"Welcome\n";
	try{
		if(a==2)
		throw;
		cout<<"This is try block\n";
	}
	catch(int){
		cout<<"Exception caught at "<<endl;
	}
	cout<<"Last line\n";
	return 0;
}
