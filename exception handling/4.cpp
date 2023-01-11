#include<iostream>
using namespace std;
int main(){
	cout<<"Welcome\n";
	int i=2;
	try{
		if(i==2)
		throw ;
		cout<<"U r in try\n";	
	}
	catch(int){
		cout<<"Exception no "<<endl;
	}
	cout<<"last line\n";
}
