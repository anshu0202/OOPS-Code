#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	int pos;
	fout.open("myfile2.dat",ios::ate);
	cout<<fout.tellp();
	//cout<<"\n"<<fin.get();// print ASCII code of first character
   fout<<"my name is Anshu\n";
   cout<<endl<<fout.tellp();
   fout.seekp(2,ios_base::beg);
      cout<<endl<<fout.tellp();
     // cout<<fout.seekp();
   fout.close();
}
