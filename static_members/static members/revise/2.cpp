#include<iostream>
using namespace std;
class A{
	private:
		int x;//instance variable
		static float roi;// class variable
	public:
		void set_balance(int b){
			x=b;
		}	
	static void set_roi(float r){
			roi=r;
		}	
	static void display(){
			cout<<"ROI = "<<roi<<endl;
		}	
};
	float A:: roi;
int main(){
//	A a1,a2;
//	a1.set_roi(40.2f);//here roi is set with the help of the object but 
//	a1.display();//by using static member function we can set roi without object 
//	a2.display();
	// we can now set roi without making any object
	A::set_roi(6.9);
//	A::display();
	return 0;
}
