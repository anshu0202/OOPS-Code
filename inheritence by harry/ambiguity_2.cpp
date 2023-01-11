#include<iostream>
using namespace std;
class student{
	protected :
		int roll;
	public:
	 void set(int x){
	 	roll=x;
	 }	
	 void print(){
	 	cout<<"Your roll number is "<<roll<<endl;
	 }
};
class test:virtual public student{
	protected:
		int maths, phy;
	public:
		void set_marks(float a, float b){
			maths=a;
			phy=b;
		}
		void marks(){
			cout<<"Your marks is \n";
			cout<<"Marks in physics = "<<phy<<endl;
			cout<<"Marks in maths = "<<maths<<endl;
		}
};
class sports:virtual public student{
	protected:
		float score1;
		public:
			void score(float s){
				score1=s;
			}
			void print_sco(){
				cout<<"Your PT Score is "<<score1<<endl;
			}
};
class result:public sports,public test{
	private:
		float total;
	public:
		void print_all(){
			total=maths+phy+score1;
			print();
			marks();
			print_sco();
			cout<<"Total marks is "<<total;
		}	
};
int main(){
	result r1;
	r1.set_marks(90,80);
	r1.set(15);
	r1.score(10);
	r1.print_all();
	return 0;
}
