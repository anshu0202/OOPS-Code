#include<iostream>// insertion and extraction operator using friend function
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void getdata(int x,int y);
		void putdata();		 		
	friend ostream& operator<<(ostream &,complex );
	friend istream& operator>>(istream &,complex& );
};
ostream& operator<<(ostream &out,complex c){
	out<<"\na= "<<c.a<<" b = "<<c.b;
	return out;
}
istream& operator>>(istream &in,complex& c){
	in>>c.a>>c.b;
	return in;
}
void complex::getdata(int x,int y){	
	a=x;
	b=y;
}
void complex::putdata(){	
	cout<<"a = "<<a<<" b = "<<b<<endl;
}
int main(){
	complex c1,c2,c3;
	int a,b;
	cout<<"Enter a complex numbers\n";
	cin>>c1;// operator<<(cout,c1);
	cout<<"You entered\n";
	cout<<c1;	  
}
