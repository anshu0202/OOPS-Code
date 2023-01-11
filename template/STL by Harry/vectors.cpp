#include<iostream>//cplusplus.com website for notes
#include<vector>// Here push_back(); of vector is used
using namespace std;
/*
Array cannot be resized but 
vector manage its size automatically its size 
change according to need
*/
// vector<int> is used as a data type
void display(vector<int>);
int main(){
	vector<int> v1;
	int i,x,size;
	cout<<"Enter the size of vector\n";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter an element to add to this vector: \n";
		cin>>x;
		v1.push_back(x);
	}
	display(v1);
//	v1.pop_back();// remove last element
	vector<int>:: iterator iter= v1.begin();// iter points to the first element
//	v1.insert(iter,800);// iter is like a pointer which pointes to an element in vector
//	vector<int>:: iterator iter= v1.end();
//	v1.insert(iter+1,800);display(v1);// now points to second index
//	v1.insert(iter,800);
//		v1.insert(iter,40,800);// to insert n number of copies here n is 4
//	display(v1);
//	cout<<"\nElement at index 2 "<<v1.at(2)<<endl;// to know which element is at the index x
		
		display(v1);
	cout<<"Programs ends\n";
	return 0;
}
void display(vector<int> v){
	int i;
	cout<<"Elements of vector are:\n";
	for(i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}
	cout<<endl;
}
