#include<iostream>
using namespace std;
void bubble(int *,int);
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
	cout<<"\nElements of array after sorting\n";
	bubble(arr,size);
	for(i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
void bubble(int *arr,int size){
	int i,round,temp;
	for(round=1;round<=size;round++){
		for(i=0;i<=size-round;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
