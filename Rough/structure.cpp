#include<iostream>
using namespace std;
struct node{
	static string display(){
		cout<<"hii\n";
		return "anshu";
	}
};
int main(){
	cout<<node::display()<<" byee";
}
https://leetcode.com/problems/find-k-pairs-with-smallest-sums/submissions/