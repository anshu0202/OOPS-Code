/*
          Template
Template of object is class
Template of class is Template.
Template is also called paramaterised classes.
1)Template help us to implement do not repeat ypurself principle of oops.
2)Helps to implement generic programming
Generic programming means it is not applicable to only one type of data type
syntax of template-> template <class T>
*/
#include<iostream>
using namespace std;
template <class T>
// T can be int, char, float etc....
class vector{
	T *arr;
	public:
		vector(T *ar){
			// code 	
		}
		// & many other method
};
int main(){
	vector<int> myvec(*ptr);
	vector<float> myvecfloat(*ptr2);
	return 0;
}
