#include<iostream>//grp of declarations
//using namespace std;
namespace myspace{//globlly scope
	int a,b;
	int f1();
	class A{
		public:
			void f1();
	};
}
int myspace::f1(){
	std::cout<<"F1\n";
}
void myspace::A::f1(){
	std::cout<<"Hello class\n";
}
using namespace myspace;
int main(){
	a=5;
      f1();
      A a1;
      a1.f1();
}
