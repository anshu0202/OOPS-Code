#include <iostream>
using namespace std;
class memory{
	private:
		int x;
	public:
		memory(){
		cout<<"Constructor is called"<<endl;
		}
		memory(int a){
			x = a;
		}
		void* operator new (size_t size){
			void *p =:: operator new(size);
			return p;
		}
		void operator delete (void *p){
			delete (p);
		}
		void print(){
		cout<<x<<endl;
		}
};

int main () {
	memory *m = new memory(10);
	m->print();
	delete m;
	return 0;
}
