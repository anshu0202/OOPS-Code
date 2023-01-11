#include<iostream>
#include<conio.h>
#include <ctime>
using namespace std;
int main(){
    int i,n,key,lock=-1 ;
    cout<<"Enter the no. of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Enter the element to be delelted : ";
    cin>>key;
    long t = clock();
   for(i=0;i<n-1;i++) {
       if(arr[i]==key){
       lock=i;
      break;  
       }
   }
   if(lock!=-1){
      for(i=lock;i<n-1;i++){
        arr[i]=arr[i+1];
          } 
   }   
   else{
       cout<<"The element is not found";
   }
   cout<<"after deletion the array will be :";
    for(i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    long t2 = clock();
    long t3 = t2 - t;
     cout <<endl<< " it took " << (float)t3/CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
