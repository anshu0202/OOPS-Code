#include<iostream>
using namespace std;
class counter{
	private:
	int count;
	public:
		void set(int x){
			count=x;
		}
		void show(){
			cout<<"Count is "<<count<<endl;
		}
		friend counter operator++(counter);
};
counter operator++(counter c){
	counter temp;
	temp.count=++c.count;
	return temp; 
}
int main(){
	counter c1,c2;
	c1.set(50);
	c1.show();
	c2=++c1;
	c2.show();
}
