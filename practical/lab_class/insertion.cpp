#include<iostream>
using namespace std;
void insertion(int *,int);
int main(){
	int size,i;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter elements of array\n";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Elements of array before sorting\n";
	for(i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<"\nElements of array after insertion sort\n";
	bubble(arr,size);
	for(i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
void insertion(int *arr,int size){
	int i,j,temp;
	j=1;
	while(j)
}
