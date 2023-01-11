#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ifstream fin;
	char ch;
	fin.open("myfile.dat");
	fin>>ch;
	while(!fin.eof()){
		cout<<ch;//space is not read here
		fin>>ch;
	}
	fin.close();
}

