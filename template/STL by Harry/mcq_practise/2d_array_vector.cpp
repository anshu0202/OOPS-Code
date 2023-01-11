#include<iostream>
#include<vector>
using namespace std;
int main(){
	int r,c;
	vector<vector<int> > arr;
	cout<<"Enter row and column of matrix\n";
	cin>>r>>c;
	int  i,j,x;
	cout<<"Enter value of matrix\n";
	for(i=0;i<r;i++){
		vector<int > b;
		for(j=0;j<c;j++){
			cin>>x;
			b.push_back(x);
		}
		arr.push_back(b);
	}
	cout<<"Elements of Matrix are:\n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
