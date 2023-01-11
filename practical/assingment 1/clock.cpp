#include<iostream>
#include<time.h>
using namespace std;
int main(){
	int i;
	long t1 =clock();
	cout<<t1<<endl;
	for(i=0;i<500;i++){
		cout<<"*";
	}
	cout<<"\n";
	long t2=clock();
	long t3=t2-t1;
	double t=(double)t3/CLOCKS_PER_SEC;
	cout<<t;
}
