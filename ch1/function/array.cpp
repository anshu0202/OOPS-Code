#include<iostream>
using namespace std;
void display(int [int][int],int ,int);
int input(int [int][int],int ,int );
int main(){
	int m,n;
	cout<<"Enter number of rows and column\n";
	cin>>m>>n;	
	int a[m][n];
	input(a,m,n);
	display(a,m,n);
}
int input(int a[][],int m,int n){
	int i,j;
	cout<<"Enter elements of array\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Element "<<a[i][j];
			cin>>a[i][j];
		}
	}
	return 0;
}
void display(int a[][],int m,int n){
	int i,j;
	cout<<"Elements of array are:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}	
}



