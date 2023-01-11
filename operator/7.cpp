#include<iostream>//it helps to access privatee members to class together
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
	  	cout<<"a = "<<a<<" b = "<<b<<endl;
	  }
	 friend ostream& operator<<(ostream&, complex); 
	 friend istream& operator>>(istream&, complex&); 
};
ostream& operator<<(ostream &out,complex c){
	cout<<"a = "<<c.a<<" b = "<<c.b<<endl;
	return out;
}
istream& operator>>(istream &in,complex &c){
	cin>>c.a>>c.b;
	return in;
}
int main(){
	complex c1;
	cout<<"Enter a complex number\n";
//	cin.operator>>(c1); it is also correct
	cin>>c1;
	cout<<c1;//operator<<(cout, c1);
	
}
