#include<iostream>//without object
using namespace std;
class average{
	private:
		static float a,b,c;
	public:	
	  static void setvalue(){
	  	cout<<"Enter value of a\n";
	  	cin>>a;
	  	cout<<"Enter value of b\n";
	  	cin>>b;
	  	cout<<"Enter value of c\n";
	  	cin>>c;
	  }
	  static void print(){
	  	  cout<<"Average is "<<(a+b+c)/3.0f<<endl;
	  }
};
	float average::a;
	float average::b;
	float average::c;
	int main(){
		average ::setvalue();
		average::print() ;
	}
