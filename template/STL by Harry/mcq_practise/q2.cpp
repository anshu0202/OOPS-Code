#include <iostream>
using namespace std;
 /*
 Compiler creates a new instance of a template function for every data type.
  So compiler creates two functions in the above example, one for int and 
  other for double. Every instance has its own copy of static variable. 
  The int instance of function is called twice, so count is 
  incremented for the second call.
 */
template <typename T>
void fun(const T&x)
{
    static int count = 0;
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}
 
int main()
{
    fun<int> (1); 
    cout << endl;
    fun<int>(1); 
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}
