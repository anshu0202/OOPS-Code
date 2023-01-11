#include<iostream>
using namespace std;
template<class T>
class vector1{
	private:
		 int index=0;
		T vec[10];//incomplete type showing
	public:
	   void push(T data){
	   	vec[index]=data;
	   	index++;
	   }
	   void display(){
	   		int i=0;
	   		while(i<index){
	   			cout<<vec[i]<<endl;
	   			i++;
			   }
	   }	
};
//int vector1<class T >::index=0;
//template<class T>// main se pehle template use nhi hota h
int main(){
	vector1<string> a1;
	a1.push("Anshu");
	a1.push("Laxmikant");
	a1.push("Ram");
	a1.push("Asteek");
	a1.push("Sid");
	a1.display();
	return 0;
}
