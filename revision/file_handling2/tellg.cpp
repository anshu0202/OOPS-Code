// intro
#include<iostream>
#include<fstream>  // It is a header file which include declaration of fstream, ifstream, ofstream
using namespace std;
int main(){
    // ofstream fout;
    char ch;
    ifstream fin;
    fin.open("myfile.dat");
    int pos;
    pos=fin.tellg();
    cout<<pos;
      while(!fin.eof()){  
            cout<<ch<<"\n"<<pos;
           ch=fin.get();
           pos=fin.tellg();
     }
    // fin>>ch;
    //  pos=fin.tellg();
    cout<<pos;
}