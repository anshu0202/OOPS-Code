#include<iostream>
using namespace std;
int a =100;
int main(){
	int a=20;
	{
		int a=20;
		cout<<"I am in inner block\n";
		cout<<" m = "<<a<<endl;
	}
	cout<<"I am in outer block\n";
	cout<<" m = "<<::a;
}
