#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=3,k;
    vector<vector<int>> q(3,vector<int> (n));
    int i,j;
    cout<<"Enter elements of array\n";
   for(i=0;i<n;i++){
       vector<int > n1;
       for(j=0;j<n;j++){
           cin>>k;
          n1.push_back(k);
       }
        q.push_back(n1);
   }
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           k=q[i][j];
           cout<<k<<" ";
       }
       cout<<"\n";
   }
    return 0;
}