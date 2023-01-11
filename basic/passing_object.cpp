#include<iostream>
using namespace std;
class complex{
	private: int a,b;  
	public:
	void set_data(int x,int y){ // state of any object means->collection of values of that member 
			a=x; 				// change in value of any variable means change in state
			b=y;			//according to concept of oops value of variable should change only by function of that object  
		}
		void show_data(){          
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
		complex add(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main(){
	complex c1,c2,c3;  
	c1.set_data(8,9);
	c2.set_data(3,6);
//	c1.show_data();
//	c2.show_data();
	c3=c1.add(c2);  // caller object can access member function directly 
	c3.show_data();
}
