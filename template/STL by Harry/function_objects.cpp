#include<iostream>
#include<functional>// header file require for function object
#include<algorithm>//header file require for sorting
using namespace std;
/*
Function objects:  also called functor Function wrapped in a class
so  that it is available like an object
or we can say it is a function which works as a object
*/
int main(){
	int arr[]={5,26,41,36,28};
	int i;
	cout<<"Before sorting\n";
	for(i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}
	sort(arr,arr+5);
	sort(arr,arr+5,greater<int >());  // greater<int >() is a function object use to sort in descending order
		cout<<"After sorting\n";
	for(i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
