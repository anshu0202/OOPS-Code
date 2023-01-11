#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>);
void print(vector<int> v){
	int i;
	for(i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}
}
int main(){
	vector<int> v1;
	int size,i,x;
	cout<<"Enter size\n";
	cin>>size;
	cout<<"Enter elements of vector\n";
	for(i=0;i<size;i++){
		cin>>x;
		v1.push_back(x);
	}
	print(v1);
	return 0;
}
