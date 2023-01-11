/* Template helps to achieve the generalization feature of oops
function template is called generic function
Template is use in two places 
1)class template
2)function template
*/
#include<iostream>
using namespace std;
template  <class a>// no semicolon;
a cal(a x,a y){// now we don't require to make cal funtion twice for int and  
	if(x>y){//double value separately
		return x;
	}
	else{
		return y;
	}
}
void  cal(int z){
	cout<<"\nHIII\n";
}
//int cal(int x,int y){
//	if(x>y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//double cal(double x,double y){// function overloading due to change in the 
//	if(x>y){//data type of the arguments received by the cal function
//		return x;
//	}
//	else{
//		return y;
//	}
//}
int main(){
	cout<<cal(5,8)<<endl;
	cout<<cal(45.36,4.85);
	cal(56);
	return 0;
}
