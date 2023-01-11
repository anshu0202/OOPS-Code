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
		// ways to create a vector
		vector<int > v1;// zero lenght vector
			vector<char > v2(5);// 5-element char vector
			vector<char > v3(v2);//4-element character vector from vec2
			vector<int > v4(4,10);// 6 element vector of 3s
//		v2.push_back('A');
//		display(v2);
//		display(v3);
			display(v4);
			cout<<v4.size();
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
