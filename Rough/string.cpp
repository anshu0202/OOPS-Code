#include<iostream>
#include<map>
#include<queue> 
// #include<string>
using namespace std;
int main(){
    string s1="8000";
    string s2="8000";
     string s3="985784181881";
    // int x=50,y=90;

 priority_queue<string> pq;
   pq.push(s1);
   pq.push(s2);
     pq.push(s3);
     while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
     }
   


    // map<string,int,greater<string>> m;
    // m.insert({s1,10});
    // m.insert({s2,90});
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<it->first<<"  ---  "<<it->second<<endl;
    // }
    // // cout<<"count "<<m[s1]<<endl;
    // // m[s1]++;
    // // cout<<"count "<<m[s1]<<endl;
    if(s1>s2){
        cout<<"hii\n";
    }
    else{
        cout<<"hwllo\n";
    }
    return 0;
}