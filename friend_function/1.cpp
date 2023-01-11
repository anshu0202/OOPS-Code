#include<iostream>//it helps to access privatee members to class together
using namespace std;
class complex{
	private:
		int a=0,b=0;
	public:
	  void setdata(int x,int y){
	  	a=x;
	  	b=y;
	  }	
	  void showdata(){
	  	cout<<"a = "<<a<<" b = "<<b<<endl;
	  }
	  friend void fun(complex);
};
void fun(complex c){
	cout<<c.a<<"  "<<c.b<<endl;
	cout<<"hi\n";
}
int main(){
	complex c1;
	fun(c1);
}
