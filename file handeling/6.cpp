#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	ofstream fout;
	int pos;
	char ch;
	fout.open("myfile2.dat",ios::app);
	pos=fout.tellp();
	cout<<pos<<endl;
	fout<<"my name is khan\n";
	pos=fout.tellp();
	cout<<pos;
	fout.close();
}
