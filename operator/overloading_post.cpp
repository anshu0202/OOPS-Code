#include<iostream>// postincrement;
using namespace std;
class integer{
	private:
		int x;
	public:
	  void setdata(int a){
	  	x=a;
	  }	
	  void showdata(){
	  	cout<<"\nValue of x is "<<x;
	  }
	  integer operator++(){ // for preincrement
	  	integer i;
	  	i.x=++x;
	  	return i;
	  }
	  integer operator++(int){ // just we have to mention int type of argument
	  	integer i;// postincrement
	  	i.x=x++;
	  	return i;
	  }
};
int main(){
	integer i1,i2;
	i1.setdata(8);
	i1.showdata();
	i2=i1++;
	i1.showdata();
	i2.showdata();	
}
