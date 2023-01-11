#include<iostream>
using namespace std;
const int c=3;
const int r=3;
void input(int [][c],int );
void display(int [][c],int );
int main(){
	//int r,c;
	cout<<"Enter number of rows\n";
//	cin>>r;
	cout<<"Enter number of column\n";
//	cin>>c;
	int a[r][c];
	input(a,3);
	display(a,r);
}
void input(int a[][c],int r){
	int i,j;
	cout<<"Enter elements of array\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"\nElement ["<<i<<j<<"] : ";
			cin>>a[i][j];
		}
	}
}
void display(int a[][c],int r){
	int i,j;
	cout<<"\nElements of matrix are\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
