#include<iostream>
using namespace std;
int main(){
	cout<<"Welcome\n";
	try{
		throw 10;
		cout<<"U r in try\n";
	}
	catch(int e){
		cout<<"Exception no "<<e<<endl;
	}
	cout<<"last line\n";
}
