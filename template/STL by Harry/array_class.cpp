#include<iostream>
using namespace std;
class array{
	private:
		static int index;
		int arr[10];
	public:
	   void push(int data){
	   	arr[index]=data;
	   	index++;
	   }
	   void display(){
	   		int i=0;
	   		while(i<index){
	   			cout<<arr[i]<<" ";
	   			i++;
			   }
	   }	
};
int array::index=0;
int main(){
	array a1;
	a1.push(10);
	a1.push(20);
	a1.push(30);
	a1.push(40);
	a1.push(50);
	a1.display();
	return 0;
}
