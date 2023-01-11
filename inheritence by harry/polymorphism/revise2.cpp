#include<iostream>
using namespace std;
class school{
    public:
    void display(){
        cout<<"Hello world\n";
    }
};
class Test: virtual public school{
    public:
    //  void set(){
    //     cout<<"hiii from base class \n";
    // }
    //  Test(){
    //     cout<<"Test constructor\n";
    // }
    //   ~Test(){
    //     cout<<"Test destructor\n";
    // }
};
class exam: virtual public school{
    public:
  //  void set(){
    //     cout<<"hiii from derived class \n";
    // }
    //  void play(){
    //     cout<<"Play cricket in derived class\n";
    // }
    //  exam(){
    //     cout<<"Exam constructor\n";
    // }
    // ~ exam(){
    //     cout<<"Exam destructor\n";
    // }
};
class viva:public exam,public Test, virtual public school{
    public:
    // viva(){
    //     cout<<"viva constructor\n";
    // }
    //  ~viva(){
    //     cout<<"viva destructor\n";
    // }
};
int main(){
   viva v1;
   v1.display();
    return 0;
}
