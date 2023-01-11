#include<iostream>
using namespace std;
/*
casting opeartor is used to convert from class type to primitive type
syntax:
operator int(){       here int is the return type of data

  return data(of int type);
}

*/
class time{
	private:
	int min,hrs;
	public:
		time(){
			cout<<"Default constructor\n";
		}
	  time(int m){
			hrs=m/60;
			min=m%60;
			cout<<"Parametrised constructor\n";
		}
		void  show(){
			cout<<"HOURS: "<<hrs<<" min "<<min<<endl;
		        }
};
int main(){
	time t1;// two constructor would run 
	t1=150;// implicitly call to avoid this explicit keyword is used
	t1.show();
	return 0;
}
