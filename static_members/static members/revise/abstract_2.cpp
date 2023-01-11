#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
class Derived : public Base {
public:
	void show(){
		cout<<"hii\n";
	}
 }; 
int main(void)
{
  Derived d;
  d.show();
  return 0;
}
