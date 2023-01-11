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
			friend ostream& operator <<(ostream&,complex);
				friend istream& operator >>(istream&,complex&);			
};
ostream& operator <<(ostream &d,complex c){
	cout<<"\n a= "<<c.a<<" b = "<<c.b;
	return d;
}
istream& operator >>(istream &din,complex &c){
	cin>>c.a>>c.b;
	return din;
}
int main(){
	complex c1,c2,c3;
//insertion and extraction overloading.
	cin>>c1;
	cout<<"you entered\n";
	cout<<c1;
//	c2.showdata();
	return 0;
}

