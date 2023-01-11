#include<iostream>
using namespace std;
class integer{
	private:
		int x;
		public:
			void setdata(int a){
				x=a;
			}
			void showdata(){
				cout<<"x= "<<x<<endl;
			}
			integer operator ++(){
				integer temp;
				temp.x=++x;
				
				return temp;
			}
			integer operator++(int){//int has no meaning only to differentiate btwn pre nd post
				integer i;
				i.x=x++;
				return i;
			}
};
int main(){
	integer i1,i2,c3;
	i1.setdata(3);
	i2=i1++;//post-increment//i2=i1.operator++();
	//i2=i1.operator++();//not work in case of post increment
	i1.showdata();
	i2.showdata();
	return 0;
}
