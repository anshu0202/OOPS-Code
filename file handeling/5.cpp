#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ifstream fin;
	int pos;
	char ch;
	fin.open("myfile2.dat");
	pos=fin.tellg();
	cout<<pos;
	fin>>ch;
	pos=fin.tellg();
	cout<<pos;
	fin>>ch;
	pos=fin.tellg();
	cout<<pos;
}
