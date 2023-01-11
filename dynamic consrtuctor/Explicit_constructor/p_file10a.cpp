#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    string fname,lname;
    int age;
public:
    student()
    {
        cout<< "Constructor is called\n" ;
    }
    student(string n,string l ,int a)
    {
        fname = n;
        lname=l;
        age = a;
    }
    void display()
    {
        cout<<"First name: "<<fname<<endl;
        cout<<"Last name: "<<lname<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void * operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size << endl;
        void * p = ::operator new(size);     
        return p;
    }
 
    void operator delete(void * p)
    {
        cout<< "Overloading delete operator " << endl;
        free(p);
    }
};
 
int main()
{
    student * p = new student("Anshu","Verma", 19);
    p->display();
    delete p;
}
