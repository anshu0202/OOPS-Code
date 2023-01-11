#include<iostream>
using namespace std;
class average{
	public:
	int x,y,z;
	float a1;
	void avg(int a,int b,int c){
		a1=(a+b+c)/3;
	//	a1=a1/3;
	//	cout<<a1<<endl;	
	}
	void dis(){
	
		cout<<"average of "<<x<<", "<<y<<", "<<z<<" is "<<a1;
	}
};
int main(){
	average av;
	cout<<"Enter three numbers\n";
	cin>>av.x>>av.y>>av.z;
	av.avg(av.x,av.y,av.z);
	av.dis();
}
