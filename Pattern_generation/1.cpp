#include<iostream>
using namespace std;
int main(){
   int r,c;
   cout<<"Enter no. of rows\n";
   cin>>r;
   int i,j;
   // for(i=1;i<=r;i++){
   //  for(j=1;j<=i;j++){
   //      cout<<"* ";
   //  }
   //  cout<<endl;
   // }

   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(k<r-i){
   //      cout<<" ";
   //      k++;
   //     }
   //     else{
   //      cout<<"* ";
   //     }  
   //  }
   //  cout<<endl;
   // }



   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(k<r-i){
   //      cout<<"  ";
   //      k++;
   //     }
   //     else{
   //      cout<<"* ";
   //     }
        
   //  }
   //  cout<<endl;
   // }

   //   cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(k<i-1){
   //      cout<<"  ";
   //      k++;
   //     }
   //     else{
   //      cout<<" *";
   //     }
        
   //  }
   //  cout<<endl;
   // }
    
   //  cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(k<=r-i){
   //      cout<<"* ";
   //      k++;
   //     }
   //     else{
   //      cout<<"  ";
   //     }
        
   //  }
   //  cout<<endl;
   // }

   //  cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(j>=r+1-i){
   //      cout<<" *";
   //      k++;
   //     }
   //     else{
   //      cout<<"  ";
   //     }     
   //  }
   //   for(j=1;j<i;j++){
   //     if(j<i){
   //      cout<<" *";
   //     }    
   //  }
   //  cout<<endl;
   // }


   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  int k=0;
   //  for(j=1;j<=r;j++){
   //     if(j>=r+1-i){
   //      cout<<"* ";
   //      k++;
   //     }
   //     else{
   //      cout<<" ";
   //     }     
   //  }
     
   //  cout<<endl;
   // }



   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //  for(j=1;j<=2*r-1;j++){
   //     if(j<=r+1-i||j>=r-1+i){
   //      cout<<" * ";
   //     }
   //     else{
   //      cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }

   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //    int k=1;
   //  for(j=1;j<=2*r-1;j++){
   //     if(j>=r-i+1 && j<=r){
   //      cout<<" "<<k<<" ";
   //      k++;
   //      if(j==r){
   //       k--;
   //      }
   //     }

   //     else if(j>r && j<=r+i-1){
   //       k--;
   //      cout<<" "<<k<<" ";
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }



   //     cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){
   //    char ch='A';
   //  for(j=1;j<=2*r-1;j++){
   //     if(j<=r-i+1 || j>=r+i-1){       
   //       cout<<" "<<ch<<" ";        
   //        j<r?ch++:ch--;
   //       // if(j<r){
   //       //    ch++;
   //       // }
   //       // else{
   //       //    ch--;
   //       // }
   //     }
   //     else if(j==r){
   //       ch--;
   //        cout<<"   ";
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }
   


   // cout<<"\n __________________________\n";
   // int k=0;
   // for(i=1;i<=2*r-1;i++){
   //    i<=r?k++:k--;
   //  for(j=1;j<=2*r-1;j++){
   //     if(j>=r+1-k && j<=r-1+k){
   //         cout<<" * ";
   //     }
   //    //  else if(j>=i-r+1 && j<=2*r+3-i && i>r){
   //    //      cout<<" * ";
   //    //  }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }
    
   // cout<<"\n __________________________\n";
   // int k=0,flag=0;
   // for(i=1;i<=2*r-1;i++){
   //    // if(flag==1){
   //    //    k--;
   //    // }
   //    // else if(k<r){
   //    //    k++;
   //    // }
   //    // else {
   //    //    flag=1;
   //    //    k--;
   //    // }
   //    i<=r?k++:k--;
   //  for(j=1;j<=r;j++){
   //     if(j<=k){
   //         cout<<" * ";
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }



   // cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){   
   //  for(j=1;j<=2*r-1;j++){
   //     if(j>=i&&j<=2*r-i ){
   //         cout<<" * ";
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }
    

   //  cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){  
   //    int k=i; 
   //  for(j=1;j<=2*r-1;j++){
   //     if( j<=r-1+i && j>=r-i+1 ){
   //         cout<<" "<<k<<" ";
   //        j<r?k++:k--;         
  
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }

   

   //  cout<<"\n __________________________\n";
   // for(i=1;i<=r;i++){  
   //    int k=i; 
   //  for(j=1;j<=2*r-1;j++){
   //     if( j<=r-1+i && j>=r-i+1 ){
   //         cout<<" "<<k<<" ";
   //        j<r?k++:k--;         
  
   //     }
   //     else{
   //       cout<<"   ";
   //     }     
   //  }
   //  cout<<endl;
   // }


   
   // cout<<"\n __________________________\n";
   // for(i=1;i<=2*r-1;i++){  
   //    int k=2*r-i-1; 
   // for(j=1;j<=2*r-1;j++){
   //     if( j<=2*r-i ){
   //         cout<<" "<<k<<" ";
   //        k--;
   //     }
   //     else{
   //       cout<<"   ";
   //       break;
   //     }     
   //  }
   //  cout<<endl;
   // }


   //  cout<<"\n __________________________\n";
   // for(i=1;i<=2*r-1;i++){  
   //    int k=1; 
   // for(j=1;j<=r;j++){
   //     if( j>=r-i+1 && i<=r ){
   //        cout<<" "<<k<<" ";
   //        k++;
   //     }
   //     else if(i>r && j>i-r){
      
   //       cout<<" "<<k<<" ";
   //          k++;
   //     }     
   //     else{
   //       cout<<"   ";
   //     }
   //  }
   //  cout<<endl;
   // }

   for(int m=3;m<20;m++)
{    cout<<"\n __________________________\n";
  r=m;
    int k=1;
   for(i=1;i<=2*r-1;i++){  
      int flag=0; 
   for(j=1;j<=2*r-1;j++){
       if( i==j || j==2*r-i  ){
          if(i==r){
            cout<<" / ";
          }
          else if(flag==0){
            cout<<" \\ ";
            flag=1;
          }
          else{
            cout<<" / ";
          }
       }
       else{
         cout<<" * ";     
       }     
     
    }
    cout<<endl;
   }
}

       
     



    return 0;
}