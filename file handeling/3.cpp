#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ifstream fin;
	char ch;
	fin.open("myfile.dat");
	ch=fin.get();
	while(!fin.eof()){
		cout<<ch;//space is read here
		ch=fin.get();
	//	fin>>ch;
	}
	fin.close();
}

