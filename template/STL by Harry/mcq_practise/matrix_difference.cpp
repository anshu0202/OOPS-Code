#include<iostream>
#include<vector>
using namespace std;
class Matrix{
	public:
		vector<vector<int > > arr;
		Matrix operator-(Matrix m)
		{
		 Matrix temp;
		 int i,j;
		  for(i=0;i<m.arr.size();i++){
		  	vector<int > b;
		  	for(j=0;j<m.arr[i].size();j++){
		  		int res=arr[i][j]-m.arr[i][j];
		  		b.push_back(res);
			  }
			  temp.arr.push_back(b);
		  }
		  return temp;
	}
};
int main(){
	Matrix x,y,result;
	int i,j,r,c;
	cout<<"Enter row and column\n";
	cin>>r>>c;
	cout<<"Enter elements of Matrix A:\n";
	for(i=0;i<r;i++){
		vector <int > b;
		for(j=0;j<c;j++){
			int z;
			cin>>z;
			b.push_back(z);
		}
		x.arr.push_back(b);
	}
		cout<<"Enter elements of Matrix B:\n";
	for(i=0;i<r;i++){
		vector <int > b;
		for(j=0;j<c;j++){
			int z;
			cin>>z;
			b.push_back(z);
		}
		y.arr.push_back(b);
	}
	result=x-y;
	cout<<"difference of Matrix A and B is:\n";
	for(i=0;i<result.arr.size();i++){
		for(j=0;j<result.arr[i].size();j++){
			cout<<result.arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
