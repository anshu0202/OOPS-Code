#include<iostream>
using namespace std;
/*
template<class t1, class t2>
class nameofclass{
// code of body
};
*/
template<class t1,class t2>// template help us to specify the data type later 
class myclass{
	private:
		t1 data1;
		t2 data2;
	public:
		myclass(t1 a, t2 b){
			data1=a;
			data2=b;
		}
		void display(){
			cout<<"data1 = "<<this->data1<<"\ndata2 =  "<<this->data2<<endl;
		}	
};
int main(){
//	myclass<int , char> obj(10,'A');
	myclass<char, float> obj('C',45.23);
	obj.display();
	return 0;
}
