#include<iostream>
using namespace std;
class test{
	private:
		int code;
		static int count;
	public:
	   void set_code(){
	   	code=++count;
	   }
	   void show_code(){//  non static can access static but static cannot access non static
	   	cout<<"Object number = "<<code<<endl;
	   }	
	   static void show_count(){
	   	cout<<"Count = "<<count<<endl;
	   	cout<<code<<endl;
	   }
};
int test:: count;
int main(){
	test t1,t2,t3;
	t1.set_code();
	test::show_count();
	t2.set_code();
	test::show_count();
	test::show_count();
	t3.set_code();
	test::show_count();
	t1.show_code();
	t2.show_code();
	t3.show_code();
	return 0;
}
