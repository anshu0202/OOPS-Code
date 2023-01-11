#include<iostream>
#include<cmath>
using namespace std;
class simple{
	protected :
		int a,b,c;
	public:
		void set();
		void display();
};
void simple::set(){
	cout<<"Enter the first number\n";
	cin>>a;
	cout<<"Enter the second number\n";
	cin>>b;
	char sel;
	cout<<"Enter '+' for addition\n";
	cout<<"Enter '-' for subtraction\n";
	cout<<"Enter '/' for division\n";
	cout<<"Enter '+' for multiplication\n";
	cin>>sel;
	switch(sel){
		case '+':c=a+b; break;
		case '-':c=a-b; break;
		case '/':c=a/b; break;
		case '*':c=a*b; break;
		default :cout<<"Select valid option\n";
	}
}
void simple::display(){
	cout<<"Value of c is "<<c<<endl;
}
class scientific:virtual public simple{
	protected:
	float a1,b1;
	public:
	 void set1();
	 void display1();	
};
void scientific:: set1(){
	cout<<"Enter value of a\n";
	cin>>a1;
	cout<<"Enter 1 for sin \n";
	cout<<"Enter 2 for cos \n";
	cout<<"Enter 3 for tan \n";
	cout<<"Enter 4 for log \n";
	int sel;
	cin>>sel;
	switch(sel){
		case 1:	a1=(a1*3.14)/180;b1=sin(a1);break;
		case 2:	a1=(a1*3.14)/180;b1=cos(a1);break;
		case 3:	a1=(a1*3.14)/180;b1=tan(a1);break;
		case 4:b1=log(a1);break;
		default:cout<<"Select valid option\n";
	}
}
void scientific::display1(){
	cout<<"value of c is "<<b1<<endl;
}
class hybrid:virtual public scientific,virtual public simple{
public:
//	void set2(int x){
//		if(x==1){
//			set();
//		}
//		else{
//			set1();
//		}
//	}		
};
int main(){
	hybrid h1;
	h1.set();
//	h1.set2(2);
	h1.display();
}
