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
};
int main(){
	integer i1,i2,c3;
	i1.setdata(3);
	i2=++i1;//pre-increment//i2=i1.operator++();
	i1.showdata();
	i2.showdata();
	return 0;
}
