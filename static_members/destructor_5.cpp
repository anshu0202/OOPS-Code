#include<iostream> // program for destructor
using namespace std;
class complex{
	private:
		int a,b;
	public:		
		~complex(){ // no parameter is passed hence cannot be overloaded
		cout<<"Hello I am destructor\n";  		
		
 // it is called when object is destroyed.it is the last function which run before object is destroyed
		}
		
				
};
void fun(){
	complex obj;
}
int main(){
//	complex c1;
	fun();
	
		
	
	
}
