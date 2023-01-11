#include<iostream>
using namespace std;
const int c=3;
const int r=3;
void input(int a[r][c]);
void display(int a[r][c]);
int main(){
	int r,c;
	cout<<"Enter number of rows\n";
	cin>>r;
	cout<<"Enter number of column\n";
	cin>>c;
	int a[r][c];
	input(a[r][c]);
	display(a);
}
void input(int a[r][c]){
	int i,j;
	cout<<"Enter elements of array\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"\nElement ["<<i<<j<<"] : ";
			cin>>a[i][j];
		}
	}
}
void display(int a[r][c]){
	cout<<"\nElements of matrix are\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
