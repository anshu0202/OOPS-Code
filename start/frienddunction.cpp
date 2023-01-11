#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
		public:
			void setdata(int x,int y){
				a=x;
				b=y;
			}
			void showdata(){
				cout<<"a= "<<a<<" b= "<<b<<endl;
			}
			friend complex operator +(complex,complex);			
};
complex operator +(complex d,complex c){
				complex temp;
				temp.a=d.a+c.a;
				temp.b=d.b+c.b;
				return temp;
			}
int main(){
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	c3=c1+c2;// or c3=operator+(c1,c2); here two arguments are passed.
	c3.showdata();
	return 0;
}
