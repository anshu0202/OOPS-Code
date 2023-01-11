#include<iostream>
using namespace std;
class array{
	private:
	int a[5];
	public:
		void set(int index,int value){
			a[index]=value;
		}
//	void display(){
//		cout<<<<endl;
//	}
};
class stack:private array{
	private:
	    int top;
	public:
		void push(int val){
			set(top,val);
		}	
};
int main(){
	stack s1,s2;
	s1.push(10);
	s2.push(20);
//	s1.display();
//	s2.display();
	return 0;
}
