#include<iostream>//cplusplus.com website for notes
#include<vector>// Here push_back(); of vector is used
using namespace std;
/*
Array cannot be resized but 
vector manage its size automatically its size 
change according to need
*/
// vector<int> is used as a data type
template <class T>
void display(vector<T>);
int main(){
	vector<float> v1;
	int i,x,size;
	cout<<"Enter the size of vector\n";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter an element to add to this vector: \n";
		cin>>x;
		v1.push_back(x);
	}
	display(v1);
	
	cout<<"Programs ends\n";
	return 0;
}
template <class T>
void display(vector<T> v){
	int i;
	cout<<"Elements of vector are:\n";
	for(i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}
	cout<<endl;
}
