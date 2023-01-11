#include<iostream>//generic class
using namespace std;// array can store only int values 
class arraylist{// but by making template we can manage it so thst it can store 
 	private:// value of any data type
 		struct controlblock{
 			int capacity;
 			int *arr;
		 };
		 controlblock *s;
		 public:
		 	 arraylist(int capacity){
		 	 	s=new controlblock;
				  s->capacity=capacity;
				  s->arr=new int[s->capacity]; 
			  }
			 void add_element(int index,int data){
			 	if(index>=0 && index<=s->capacity-1){
			 		s->arr[index]=data;
				 }
				 else{
				 	cout<<"Array index is not valid\n";
				 }
			 } 
			 void view(int index,int &data){
			 	if(index>=0 && index<=s->capacity-1)
			 	data= s->arr[index];
			 	else
			 	cout<<"\n Array index is not valid\n";
			}
			  void display(){
			  	int i;
			 	for(i=0;i<=s->capacity-1;i++)
			 	cout<<" "<<s->arr[i];	 	
			 }
	};
int main(){
 	arraylist list1(3);
 	list1.add_element(0,100);
 	list1.add_element(1,200);
 //	list1.add_element(2,300);
 	int data;
 	list1.view(0,data);
 	cout<<"Value in the array is "<<data<<endl;
	list1.display();
 }

