#include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
		int *ptr;
	public:
	   void setdata(int x,int y,int z){
	   	a=x;
	   	b=y;
	   	*ptr=z;
	   }
	   void show(){
	   	cout<<"a = "<<a<<" b = "<<b<<endl;
	   }	
	   dummy (dummy &d){
	   	a=d.a;
	   	b=d.b;
	   	ptr=new int;
	   	*ptr=*(d.ptr);// deep copy
	   }
	    dummy (){
	   	ptr=new int;
	   }
	   #include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
		int *ptr;
	public:
	   void setdata(int x,int y,int z){
	   	a=x;
	   	b=y;
	   	*ptr=z;
	   }
	   void show(){
	   	cout<<"a = "<<a<<" b = "<<b<<endl;
	   }	
	   dummy (dummy &d){
	   	a=d.a;
	   	b=d.b;
	   	ptr=new int;
	   	*ptr=*(d.ptr);// deep copy
	   }
	    dummy (){
	   	ptr=new int;
	   }
	   #include<iostream>
using namespace std;
class dummy{
	private:
		int a,b;
		int *ptr;
	public:
	   void setdata(int x,int y,int z){
	   	a=x;
	   	b=y;
	   	*ptr=z;
	   }
	   void show(){
	   	cout<<"a = "<<a<<" b = "<<b<<endl;
	   }	
	   dummy (dummy &d){
	   	a=d.a;
	   	b=d.b;
	   	ptr=new int;
	   	*ptr=*(d.ptr);// deep copy
	   }
	    dummy (){
	   	ptr=new int;
	   }
	   ~dummy (){
	   	delete ptr;
	   }
	  
};
int main(){
	dummy d1;
	d1.setdata(7,5,70);
	dummy d2=d1;
	d2.show();	
}
	  
};
int main(){
	dummy d1;
	d1.setdata(7,5,70);
	dummy d2=d1;
	d2.show();	
}
};
int main(){
	dummy d1;
	d1.setdata(7,5,70);
	dummy d2=d1;
	d2.show();	
}
