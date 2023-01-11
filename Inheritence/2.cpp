#include<iostream>//inheritence always public access 
using namespace std;
class Array{
	private:
		int a[10];
	public:
	 void insert(int index,int value){
	 	a[index]=value;
	 	cout<<a[index]<<" index = "<<index<<endl;
	 }	
};
class stack: public Array{
	int top=4;
	public:
		void push(int value){ 
			insert(top,value);
		}	
};
int main(){
	stack s1;
	s1.push(25);
	s1.insert(2,5000);
}
