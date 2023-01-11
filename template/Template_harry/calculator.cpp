#include<iostream>
using namespace std;
template<class t1,class t2>
class calculator{
	private:
		t1 x;
		t2 y;
	public:
		void set(){
			cout<<"Enter value of first parameter\n";
			cin>>x;
			cout<<"Enter value of second parameter\n";
			cin>>y;
		}	
		void display(){
			cout<<"First parameter = "<<x<<"\nSecond parameter = "<<y<<endl;
		}
};
int main(){
	calculator<char ,float> c1;
	c1.set();
	c1.display();
	return 0;
}
