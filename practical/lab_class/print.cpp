#include<iostream>
using namespace std;
int print(int);
int main(){
	int x;
	cout<<"Enter last number  to print\n";
	cin>>x;
	print(x);
	return 0;
}
int print(int x){
	if(x>=1){
		print(x-1);
		cout<<x<<" ";	
		return 0;
	}	 
}
