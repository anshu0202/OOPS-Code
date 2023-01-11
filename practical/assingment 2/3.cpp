//Program with function inside class
#include<iostream>
using namespace std;
class calculate{
	private:
	 float x,y;
	public:
		void add(){
			cout<<"Program for addition\n";
			cout<<"Enter 1st number and 2nd number\n";
			cin>>x>>y;
		}
		void subtract(){
			cout<<"Program for subtraction\n";
			cout<<"Enter 1st number and 2nd number\n";
			cin>>x>>y;
		}
		void multiply(){
			cout<<"Program for multiplication\n";
			cout<<"Enter 1st number and 2nd number\n";
			cin>>x>>y;
		}
		void divide(){
			cout<<"Program for division\n";
			cout<<"Enter 1st number and 2nd number\n";
			cin>>x>>y;
		}
		void display_add(){
			cout<<"Sum is "<<(x+y)<<endl;
		}
		void display_subtract(){
			cout<<"Difference is "<<(x-y)<<endl;
		}
		void display_multiply(){
			cout<<"Product is "<<(x*y)<<endl;
		}
		void display_divide(){
			cout<<"Division is "<<(x/y)<<endl;
		}
};
int main(){
	calculate c1,c2;
	c1.add();
	c1.display_add();
	c1.divide();
	c1.display_divide();
	c2.subtract();
	c2.display_subtract();
	c2.multiply();
	c2.display_multiply();
}
