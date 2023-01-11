#include<iostream>
using namespace std;
const int  r=3;
const int c=3;
void input(int [][c]);
void display(int [][c]);
int main(){
	int a[r][c];
	input(a);
	display(a);
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

