#include<iostream>
#include"namespace.cpp"// showing error
using namespace anshu1;
int main(){
    int x,y;
    fun();
    key=34;// predeclared variable
    cout<<"Enter two numbers to find sum\n";
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<sum(x,y)<<endl;
    cout<<"Difference of "<<x<<" and "<<y<<" is "<<minus1(x,y)<<endl;
    cout<<"Value of z is "<<z<<endl;
    fun();
    anshu1::a=67;// means a variable declare in anshu1 namespace
   cout<<"\na = "<<anshu1::a;
    return 0;
}