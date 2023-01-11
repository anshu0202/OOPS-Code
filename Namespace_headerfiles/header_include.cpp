//#include<iostream>// as it is already present in the sum.h headerfile
#include"sum.h"
//using namespace std;
using namespace anshu;
int main(){
    int x,y;
    key=34;// predeclared variable
    cout<<"Enter two numbers to find sum\n";
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<sum(x,y)<<endl;
    cout<<"Difference of "<<x<<" and "<<y<<" is "<<minus1(x,y)<<endl;
    cout<<"Value of z is "<<z<<endl;
    fun();
    anshu::a=67;// means a variable declare in anshu namespace
   cout<<"\na = "<<anshu::a;
    return 0;
}