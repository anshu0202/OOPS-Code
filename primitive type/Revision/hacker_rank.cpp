#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
   // private:
    public:
     vector<vector<int>> a;
        Matrix operator+(Matrix x){
            Matrix temp;
            int row = x.a.size();
            int col = x.a[0].size();
            for(int i=0;i<row;i++){
                vector<int> eachRow;
                for(int j=0;j<col;j++){
                    int res = x.a[i][j]+a[i][j];
                    eachRow.push_back(res);
                }
                temp.a.push_back(eachRow);
            }
            return temp;
        }
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}

