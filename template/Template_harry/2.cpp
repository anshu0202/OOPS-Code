#include<iostream>
using namespace std;
//class vector{	// it is applicable for int type values only
//	public:// to run it for all type of data type template is used
//		int *arr;
//	int size;
//		vector(int m){
//			size=m;
//			arr= new int[size];
//		}
//		int dotproduct(vector &v){
//			int i,d=0;
//			for(i=0;i<size;i++){
//				d+=this->arr[i]*v.arr[i];
//			}
//			return d;
//		}
//};
//int main(){
//	vector v1(3);
//	v1.arr[0]=4;
//	v1.arr[1]=3;
//	v1.arr[2]=1;
//	vector v2(3);
//	v2.arr[0]=1;
//	v2.arr[1]=0;
//	v2.arr[2]=1;
//	int a=v1.dotproduct(v2);
//	cout<<"Dot product is "<<a<<endl;
//	return 0;
//}
template <class T>
class vector{	
	public:
		T *arr;
	int size;
		vector(int m){
			size=m;
			arr= new T[size];
		}
		T dotproduct(vector &v){
			int i=0;
			T d=0;
			for(i=0;i<size;i++){
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main(){
	vector <char>v1(3);
	v1.arr[0]=4.1;
	v1.arr[1]=3.3;
	v1.arr[2]=1.5;
	vector <char> v2(3);
	v2.arr[0]=1.8;
	v2.arr[1]=0.5;
	v2.arr[2]=1.6;
	char a=v1.dotproduct(v2);
	cout<<"Dot product is "<<a<<endl;
	return 0;
}
