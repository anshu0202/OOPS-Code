#include<iostream>
using namespace std;
const int  r=3;
const int c=3;
void input(int [][c]);
void display(int [][c]);
void input(int [][c],int );
void display(int [][c],int );
int main(){
	int a[r][c],x;
	input(a);
	display(a);
	cout<<"\nEnter number of rows\n";
	cin>>x;
	input(a,x);
	display(a,x);
}
void input(int a[][c]){
	int i,j;
	cout<<"Enter elements of Matrix\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"\nElement ["<<i<<j<<"] ";
			cin>>a[i][j];
		}
	}
}
void display(int a[][c]){
	int i,j;
	cout<<"Elements of matrix are :\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void input(int a[][c],int x){
	int i,j;
	cout<<"Enter elements of Matrix\n";
	for(i=0;i<x;i++){
		for(j=0;j<c;j++){
			cout<<"\nElement ["<<i<<j<<"] ";
			cin>>a[i][j];
		}
	}
}
void display(int a[][c],int x){
	int i,j;
	cout<<"Elements of matrix are :\n";
	for(i=0;i<x;i++){
		for(j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

