#include<iostream>
using namespace std;
class integer{
	private:
	int x;
	public:
		void putdata(int a){
			x=a;
		}
		void showdata(){
			cout<<"Value of X is "<<x<<endl;
		}
		integer operator++(){
			integer i;
			i.x=++x;
			return i;
		}
};
int main(){
	integer i1,i2;
	i1.putdata(20);
	i1.showdata();
	i2=++i1;
	i1.showdata();
	i2.showdata();
}

