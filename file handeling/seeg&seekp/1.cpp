#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin;
	int pos;
	fin.open("myfile2.dat");
	cout<<fin.tellg();
	//cout<<"\n"<<fin.get();// print ASCII code of first character
	cout<<"\n"<<(char)fin.get();
	cout<<"\n"<<(char)fin.get();
	cout<<endl<<fin.tellg();
	fin.seekg(0);
		cout<<"\n"<<(char)fin.get();
			fin.seekg(6);
		cout<<"\n"<<(char)fin.get();
		cout<<endl<<fin.tellg();
		cout<<"\n"<<(char)fin.get();
		cout<<endl<<fin.tellg();
		fin.seekg(2,ios_base::cur);// move to character from current position
			cout<<endl<<fin.tellg();		
		cout<<"\n"<<(char)fin.get();
			fin.seekg(4,ios_base::beg);// move to character from current position
			cout<<endl<<fin.tellg();		
		cout<<"\n"<<(char)fin.get();
		fin.seekg(-1,ios_base::end);// move to character from current position
			cout<<endl<<fin.tellg();		
		cout<<"\n"<<(char)fin.get();
}
