//#include <iostream>
//using namespace std;
// 
//template <class T=int>
//T max(T &x, T &y)
//{
//    return (x > y)? x : y;
//}
////max <class T=int>
//int main()
//{
//    cout << max(3, 7) << std::endl;
//    cout << max(3.0, 7.0) << std::endl;
//   // cout << max(3, 7.0) << std::endl;
//    return 0;
#include <iostream>
using namespace std;
 
//template <typename T>// ambigious issue arises when there are two funtion define 
template <class T>
T Max(T x, T y)
{
    return (x > y)? x : y;
}
int main()
{
    cout << Max(3, 7) << std::endl;// max is already define in the standard library
    cout << max(3.0, 7.0) << std::endl;// why small here the call is also made for the STL
  //  cout << max(3, 7.0) << std::endl;
    return 0;
}
