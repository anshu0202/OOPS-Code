#include<iostream>//Exact match function has highest priority
using namespace std;
//template <class T>
//class anshu{
//	private:
//		
//	public:
//		T data;
//		anshu(T x){
//			data=x;
//		}
//		anshu(){
//			cout<<"Default constructor\n";
//		}
////		void display(){
////			cout<<data<<endl;
////		}	
//        void display();
//};
void fun(){
	cout<<"I am first function\n";
}
void fun(int a){
	cout<<"I am second function "<<a<<endl;
}
template <class T>
void fun(T a){
	cout<<"I am templatise function "<<a<<endl;
}
//template <class T>
//void anshu< T>:: display(){// using scope resolution we can define the function outside
//			cout<<data<<endl;
//		}
int main(){
//	anshu<char > a1(65);
//	anshu<float > a2(69.0987);
//	cout<<a1.data<<endl;
//	a1.display();
//	a2.display();
	fun();
		fun(50);
		fun(56.325);
	return 0;
}
