#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	public:
		A(int x, int y):a(x),b(y)
		{
			
		}
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};
int main(){
	A a1(10,20);
	cout<<"Value of data members after using initializer list\n";
	a1.show();
	return 0;
}
