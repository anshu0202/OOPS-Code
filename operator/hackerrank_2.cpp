#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,i,j;
    cin>>n>>q;
    int a[n],b[100][100],c[q];
    for(i=0;i<n;i++){
     cin>>a[i];
     for(j=0;j<a[i];j++){
         cin>>b[i][j];
     }   
    }
    for(i=0;i<q;i++){
        cin>>c[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            if(c[i]==j){
                cout<<b[i][j]<<"\n";
            }
        }
    }
    return 0;
}
