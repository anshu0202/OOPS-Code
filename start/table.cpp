#include<iostream>
using namespace std;
void tab(int);
int main(){
	int x;
	cout<<"enter a number whose table is required\n";
	cin>>x;
	tab(x);
}
void tab(int a){
	int i;
	for(i=1;i<=10;i++){
		cout<<a<<" x "<<i<<"= "<<a*i<<"\n";
	}
	
}
