// intro
#include<iostream>
#include<fstream>  // It is a header file which include declaration of fstream, ifstream, ofstream
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    char ch;
    // fout.open("myfile.dat");
    // fout.open("myfile2.mp3");
    // fout.open("myfile.jpg");
    //  fout.open("add.cpp");
    //  fout.close();
    fin.open("myschool.dat");
    // fin>>ch;
    // cout<<ch;
    ch=fin.get();  // get function also read space
     while(!fin.eof()){  // eof return 0 when end of file has not come  
     // here space is not print because extraction operator consider space as no character
            cout<<ch;
           ch=fin.get();
     }
    fin.close();
}