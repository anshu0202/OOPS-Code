/*
default parameter
is case of object is created and angular bracket is left empty
 then this assigned valued is received
*/
#include<iostream>
using namespace std;
template <class t1=int,class t2=float>
class anshu{
	private:
	t1 a;
	t2 b;
	public:
		anshu(t1 x, t2 y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The value of a is "<<a<<"\nThe value of b is "<<b<<endl;
		}	
};
int main(){
//	anshu <> a1(4,5.63);// in case angular bracket is empty then the 
//	a1.display();// default value assigned is assumed
//	anshu<string , float> a2("Anshu ",115.63);
//	a2.display();
	anshu<int , float> a3(5,'A');// here A is converted into its ASCII value
	a3.display();
	return 0;
}
