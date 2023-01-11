#include <iostream>
using namespace std;
 
template <int i>
void fun()
{
  // int i = 20;// non- type parameter should be const its value can't be changed
   cout << i;
}
 
int main()
{
	int i=30;
	i++;
   fun<10>();
 //  int i=30;
   return 0;
}
