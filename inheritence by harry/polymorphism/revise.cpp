#include<iostream>
using namespace std;
class Test{
    public:
     void set(){
        cout<<"hiii from base class \n";
    }
};
class exam:public Test{
    public:
    void set(){
        cout<<"hiii from derived class \n";
    }
     void play(){
        cout<<"Play cricket in derived class\n";
    }
};
int main(){
    Test *ptr,t1;
    exam *ptr2,m1;
    ptr=&m1;
    ptr->set();
  ptr->play();// cannot call
    ptr=&t1;
    ptr->set();
    return 0;
}
