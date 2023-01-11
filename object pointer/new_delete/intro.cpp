#include<iostream>
using namespace std;
//class {
//	private:
//			
//	public:
//			
//};
int main(){
//	int *ptr=new int(50);
//	cout<<"Value of pointer is "<<*(ptr)<<endl;
//	cout<<"Address of pointer is "<<&ptr<<endl;
	// new operator     
	// note: new and delete are operator as well as keyword
	int *arr = new int[3];
	arr[0]=10;
	*(arr+1)=20;
	arr[2]=30;
//	delete arr;
//		delete [] arr;//to delete complete array
//		cout<<"Value of arr[0] is "<<arr[0]<<endl;
//	cout<<"Address of pointer is "<<&arr[0]<<endl;
//		cout<<"Value of arr[1] is "<<arr[1]<<endl;
//	cout<<"Address of pointer is "<<&arr[1]<<endl;
//		cout<<"Value of arr[2] is "<<arr[2]<<endl;
//	cout<<"Address of pointer is "<<&arr[2]<<endl;
	// delete
		cout<<"Value of arr[0] is "<<arr[0]<<endl;
		cout<<"Value of arr[1] is "<<arr[1]<<endl;
		cout<<"Value of arr[2] is "<<arr[2]<<endl;
	return 0;	
}
