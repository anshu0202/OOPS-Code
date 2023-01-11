// intro
#include<iostream>
#include<fstream>  // It is a header file which include declaration of fstream, ifstream, ofstream
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    char ch;
    // fout.open("myfile.dat",ios::app);
    // fout<<"nobody";
    // fout.open("myfile2.mp3");
    // fout.open("myfile.jpg");
     fout.open("add.cpp",ios::app);
      fout<<"k\ni\n ng"; // in binary mode \n is read 
    //  fout.close();  
}