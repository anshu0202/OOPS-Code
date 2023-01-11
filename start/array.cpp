#include<iostream>
using namespace std;
int main(){
	int a[5],i;
	cout<<"Enter elements of array\n";
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"\n the elements entered are with increasing each elements are:\n";
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nthank you!";
}
