#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
           int n,q,i,j,x,k;
           cin >> n >> q;
           cout<<"n = "<<n<<" q = "<<q<<endl;
          int c[q];
           int a[n];
           int b[n][n];
           for(i=0;i<n;i++){
               cin >> a[i];
               for(k=0;k<a[i];k++){
                   cin >> b[i][k];
                   cout<<b[i][k]<<endl;
               }
              // cout<<"\n";
           }
           for(i=0;i<q;i++){
             // cin>>m;
               cin >> c[i];
           }
           for(i=0;i<q;i++){
               x=c[i];
			   cout<<"x = ";            
                cout<<b[i][x]<<endl;
                   }
    return 0;
}
