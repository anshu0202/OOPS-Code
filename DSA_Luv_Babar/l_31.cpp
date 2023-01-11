#include<iostream>
using namespace std;
int main(){
    int x=5,y=5;
    int *ptr=&x;
    // creating reference variable
    // same memory different name of variable
    // when a program is executed it is assigned two types of memory stack and heap . stack is small while heap is large and comiler should know at the run time about the amount of memory to be assigned
    // new keyword is used to assign memory from the heap
    int &ref=x;
    cout<<"address of x is "<<ptr<<endl;
    cout<<"reference of x is "<<&ref<<endl;
    ref+=10;
    cout<<"new value of x is "<<x<<endl;
    ptr=&y;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"address of y is "<<ptr<<endl;
    return 0;
}