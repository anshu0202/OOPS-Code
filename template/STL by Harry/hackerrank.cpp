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
    vector<int> real;
    int i, j, size, size1, k, flag = 0;
    i = 0;
    size = X.size();
    while (i < size)
    {
        flag = 0;
        if (s[i] == 'a')
        {
            real.push_back(X[i]);
            sort(real.begin(), real.end());
            size1 = real.size();
            //   cout<<"Size is "<<size1<<endl;
            if (size1 % 2 == 0)
            {
                int mid = real[(size1 / 2) - 1] + real[(size1 / 2)];
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
                cout << real[size1 / 2] << endl;
            }
        }
        else if (s[i] == 'r')
        {
            if (real.empty())
            {
                cout << "Wrong!\n";
            }
            else if(real.size()>0){
            sort(real.begin(), real.end());
            for (k = 0; k < real.size(); k++)
            {
                if (X[i] == real[k])
                {
                    vector<int>::iterator iter = real.begin() + k;
                    real.erase(iter);
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                size1 = real.size();
                // cout<<"size 1 is "<<size1<<endl;
                if(size1==0){
                    cout<<"Wrong!\n";
                }
                else if (size1 % 2 == 0)
                {
                    int mid = real[(size1 / 2) - 1] + real[(size1 / 2)];
                    // cout << "mid is " << mid << endl;
                    if (mid % 2 == 0)
                    {
                        cout << mid / 2 << endl;
                    }
                    else
                    {
                        cout << mid / 2 << ".5\n";
                    }
                } 
                else if(size1==1){
                    cout<<real[0]<<endl;
                }
                 else{
                     cout<<real[size1/2-1]<<endl;
                }
            }  
            else{
                cout<<"Wrong!\n";
            }
            }         
        }
         i++;
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