#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

void median(vector<char> s, vector<int> X)
{
    // vector<int> real;
    int i, j, size, size1, k, flag = 0;
    i = 0;
    size = X.size();
    while (i < size)
    {
        flag = 0;
        if (s[i] == 'a')
        {
            // real.push_back(X[i]);
            sort(X.begin(), X.begin()+i);
            size1 = i+1;
            //   cout<<"Size is "<<size1<<endl;
            if (size1 % 2 == 0)
            {
                int mid = X[(size1 / 2) - 1] + X[(size1 / 2)];
                // cout << "mid is " << mid << endl;
                //   cout<<"hii1\n";
                if (mid % 2 == 0)
                {
                    cout << mid / 2 << endl;
                }
                else
                {
                    cout << mid / 2 << ".5\n";
                }
            }
            else
            {
                // cout<<"hii2\n";
                cout << X[size1 / 2] << endl;
            }
        }
        else if (s[i] == 'r')
        {
              cout<<"size is "<<X.size()<<"\n";
            if (X.empty())
            {
                cout << "Wrong!\n";
            }
            else if(X.size()>0){
            sort(X.begin(),X.begin()+i);
            for (k = 0; k < i; k++)
            {
                if (X[i] == X[k])
                {
                    vector<int>::iterator iter = X.begin() + k;
                    X.erase(iter);
                    flag = 1;
                     cout<<"size  after erase is "<<X.size()<<"\n";
                    break;
                }
            }
            if (flag == 1)
            {
                size1 = X.size();
                // cout<<"size 1 is "<<size1<<endl;
                if(size1==0){
                    cout<<"Wrong!\n";
                }
                else if (size1 % 2 == 0)
                {
                    float mid = ((float)X[(size1 / 2) - 1] + float( X[(size1 / 2)]);
                    // cout << "mid is " << mid << endl;
                    // if (mid % 2 == 0)
                    // {
                    //     cout << mid / 2 << endl;
                    // }
                    // else
                    // {
                    //     cout << mid / 2 << ".5\n";
                    // }
                } 
                else if(size1==1){
                    cout<<X[0]<<endl;
                }
                 else{
                     cout<<X[size1/2-1]<<endl;
                }
            }  
            else{
                cout<<"Wrong!\n";
            }
            }         
        }
         i++;
         cout<<"**********\n";
    }
}
    int main(void)
    {

        // Helpers for input and output

        int N;
        cin >> N;

        vector<char> s;
        vector<int> X;
        char temp;
        int tempint;
        for (int i = 0; i < N; i++)
        {
            cin >> temp >> tempint;
            // cin>>tempint;
            s.push_back(temp);
            X.push_back(tempint);
            //
            // cout<<"________________\n";
        }
        median(s, X);
        return 0;
    }