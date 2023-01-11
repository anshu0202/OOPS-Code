#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> arr;
   arr.push_back(7);
   arr.push_back(10);
   arr.push_back(4);
   arr.push_back(3);
   arr.push_back(20);
   arr.push_back(15);
   sort(arr.begin(),arr.end());
   int k=3;
   cout<<"ans is "<<arr[k-1];

    return 0;
}