#include<iostream>//this pointer
using namespace std;
class box{
	private:
		int l,b,h;
	public:
	    void set_dimension(int x, int y, int z){
	    	l=x;
	    	b=y;
	    	h=z;
		}	 
		void show(){
			cout<<"L = "<<l<<" B = "<<b<<" H = "<<h<<endl;
		}
};
int main(){
	box b1,*ptr;
	b1.set_dimension(2,3,5);
	b1.show();
	ptr=&b1;
	ptr->set_dimension(20,30,40);
	ptr->show();
	
}
