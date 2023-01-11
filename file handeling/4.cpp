#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ofstream fout;//output stream
	fout.open("myfile2.dat",ios::binary);
	fout<<"hello students";//"My name is Anshu Verma";
}
