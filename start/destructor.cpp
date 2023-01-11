#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
		public:
			~complex(){
				cout<<"I m in destructor\n";
			}
};
void fun(){
	complex obj;
	cout<<"HI!\n";
}
int main(){
	fun();
}
