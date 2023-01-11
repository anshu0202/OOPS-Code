#include<iostream>
#include<map>
#include<string>
using namespace std;
/*
Map is use to store key value pair
eg name with phone number
Map is an associative array
*/
int main(){
	map<string,int>  marksMap;
	marksMap["Anshu"]=98;
	marksMap["Laxmikant"]=92;
	marksMap["Asteek"]=93;
	marksMap.insert({"Sundram", 95});
	marksMap.insert({"Animesh", 91});
	map<string,int> :: iterator iter;
	for(iter=marksMap.begin();iter!=marksMap.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	}
	//Insertion in map
//		marksMap.insert({"Sundram", 95});
//	map<string,int> :: iterator iter;
//	for(iter=marksMap.begin();iter!=marksMap.end();iter++){
//		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
//	}
		cout<<"The size is: "<<marksMap.size()<<endl;
		cout<<"The max size is: "<<marksMap.max_size()<<endl;
		cout<<"The return value is: "<<marksMap.empty()<<endl;
	return 0; 
}
