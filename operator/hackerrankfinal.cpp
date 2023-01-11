#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        int n,q,i,j,k,flag;
        cin>>n>>q;
        int *a[n],b[100000],c[q],d[q];
        for(i=0;i<n;i++){
            cin>>k;
            a[i]=new int[k];
            b[i]=k;
            for(j=0;j<k;j++){
                cin>>*(a[i]+j);
            }
        }
        for(i=0;i<q;i++){
            cin>>c[i]>>d[i];
        }
       for(k=0;k<q;k++){
        for(i=0;i<n;i++){
            flag=0;
            for(j=*(a[i]-1);j<b[i];j++){
                  if(c[k]==i && d[k]==j){
                 cout<<*(a[i]+j)<<" ";
                 flag=1;
                 break;
                }    
            }  
            if(flag==1){
                break;
            }  
        }
         cout<<endl;
       }       
    return 0;
}
