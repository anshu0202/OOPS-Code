#include<iostream>
using namespace std;
class complex{
	private:
	int a;
	int b;
	public:
		complex add(complex c1,complex c2){
			complex temp;
			temp.a= c1.a+c2.a;
			temp.b=c1.b+c2.b;
			return temp;
		}
		void getdata(){
			cout<<"Enter real part\n";
			cin>>a;
			cout<<"Enter imaginary part\n";
			cin>>b;
		}
		void putdata(){
			cout<<"a = "<<a<<" b =  "<<b<<endl;
		}
		complex product(complex c1,complex c2){
			complex temp;
			int x,y;
			x=(c1.a*c2.a)+(c1.b*c2.b);
			y=(c1.a*c2.b)+(c2.a*c1.b);
			temp.a=x;
			temp.b=y;
			return temp;
		}
		complex subtract(complex c1,complex c2){
			complex temp;
			temp.a= c1.a-c2.a;
			temp.b=c1.b-c2.b;
			return temp;
		}
};
int main(){
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=c3.add(c1,c2);
	c3.putdata();
	c3=c3.product(c1,c2);
	c3.putdata();
	c3=c3.subtract(c1,c2);
	c3.putdata();
}
