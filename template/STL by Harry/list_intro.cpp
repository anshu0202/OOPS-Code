#include<iostream>//list
#include<list>
using namespace std;
/*
It is bidirectional linear list use effecient in  
insertion and deletion
*/
void display(list<int >  &l){
	list<int> ::iterator it;
	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<"   ";
	}
}
void set(list<int>  &l){
	list<int > ::iterator it;
	for(it=l.begin();it!=l.end();it++){
		cout<<"Enter value\n";
		cin>>*it;
	}
}
int main(){
	list<int> l1;//list of 0 lenght
	list <int> l2(4);//empty list of size 10
	l1.push_back(10);
	l1.push_back(80);
	l1.push_back(30);
	l1.push_back(20);
	l1.push_back(25);
	list<int> :: iterator iter;
	iter=l1.begin();
//	cout<<*(iter);
//	iter++;
     display(l1);
	cout<<endl;
	set(l2);
	display(l2);
//	//*************************************************
//	// how to delete
//	iter=l1.begin();
////	l1.pop_back();
////	cout<<"\nAfter deleting\n";
////	display(l1);
////	l1.pop_front();//delete first element
////	cout<<endl;
//l1.remove(30);// if there are two 30 then both would be removed
//	display(l1);
	//for deleting from middle we have remove function
	//for sorting 
//	l1.sort();
//	display(l1);
	// for merging but second list would come first
	l1.merge(l2);
	display(l1);
//	l1.sort();
	cout<<"\n After reversing\n";
	l1.reverse();
	display(l1);
	return 0;
}
