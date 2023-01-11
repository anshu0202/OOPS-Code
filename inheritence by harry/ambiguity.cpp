#include<iostream>//ambiguity is resolved implicitly
using namespace std;
class A{
	public:
	void say(){
			cout<<"hi from A\n";
		}
};
class B: public A{
	public:
		void say(int x){
			cout<<"hi from B\n";
		}
};
int main(){
	

}
