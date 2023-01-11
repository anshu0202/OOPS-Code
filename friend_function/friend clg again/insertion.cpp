#include<iostream>// using friend function
using namespace std;
class complex{
	private:
	int a,b;
	public:
		void set(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<"a = "<<a<<", b = "<<b<<endl;
		}	
		friend ostream& operator<<(ostream&, complex);
		friend istream& operator>>(istream&, complex&);// actual argument me change krte h isliye complex ka reference lete h
};
ostream& operator<<(ostream &print,complex c){
	cout<<"a = "<<c.a<<" b = "<<c.b<<endl;
	return print;
}
istream& operator>>(istream &input,complex& c){
	cin>>c.a>>c.b;
	return input;
}
int main(){
	complex c1,c2;
	cout<<"Enter a complex number\n";
	cin>>c1;
//	c1.show();
	cout<<c1;
	return 0;
}
