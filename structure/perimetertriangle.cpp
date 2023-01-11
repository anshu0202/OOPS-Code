#include<iostream>
#include<cmath>
using namespace std;
class triangle{
	public:
		int s1,s2,s3,p;
		double s;
	void peri(int x,int y,int z){
		
			p=x+y+z;
			s=p/2.0;
		}
	void display(){
			cout<<"perimeter = "<<p<<endl;
				cout<<"area = "<<s;
		}
};
int main(){
	triangle t;
	cout<<"Enter dimensions of triangle\n";
	cin>>t.s1>>t.s2>>t.s3;
	t.peri(t.s1,t.s2,t.s3);
	t.display();
	
}
