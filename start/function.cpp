#include<iostream>
using namespace std;
int tab(int , int);
int main(){
	int x,k,i;
	cout<<"enter a number whose table is required\n";
	cin>>x;
	for(i=1;i<=10;i++){
	k=tab(x,i);
	cout<<k<<"\n";
}
}
int tab(int a,int j){
	int i;
	i=j;
	return a*i;
	
}
