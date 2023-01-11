#include<iostream>
#include<vector>
using namespace std;
class Matrix{		
	public:
		vector<vector<int> > a;
	Matrix operator+(Matrix m){
		Matrix temp;
		int i,j,r,c;
		r=m.a.size();
		c=m.a[0].size();
		for(i=0;i<r;i++){
			vector<int > x;
			for(j=0;j<c;j++){
				int res=m.a[i][j]+a[i][j];
				x.push_back(res);
			}
			temp.a.push_back(x);
		}
		return temp;
	}	
		void display(){
			int i,j,r,c;
			r=a.size();
			c=a[0].size();
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
};
int main(){
	int rows,columns;
	cout<<"Enter rows of matrix A:\n";
	cin>>rows;
	cout<<"Enter columns of matrix A:\n";
	cin>>columns;
	int i,j,x;
	Matrix p,q,r;
	cout<<"Enter elements of Matrix A:\n";
	for(i=0;i<rows;i++){
		vector<int > b;
		for(j=0;j<columns;j++){
			cin>>x;
			b.push_back(x);
		}
		p.a.push_back(b);
	}
	cout<<"Enter rows of matrix B:\n";
	cin>>rows;
	cout<<"Enter columns of matrix B:\n";
	cin>>columns;
	cout<<"Enter elements of Matrix B:\n";
	for(i=0;i<rows;i++){
		vector<int > b;
		for(j=0;j<columns;j++){
			cin>>x;
			b.push_back(x);
		}
		q.a.push_back(b);
	}
	cout<<"Elements of Matrix A is \n";
	p.display();
	cout<<"Elements of Matrix B is \n";
	q.display();
	r=p+q;
	cout<<"\nSum of Matrix A and B is:\n";
	r.display();
	return 0;
}
