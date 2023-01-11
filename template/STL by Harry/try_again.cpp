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
    vector<float> real;
    int size1, size,i=0;
    float mid;
    size = X.size();
    while (i<size)
    {
        if (s[i] == 'a')
        {
            cout<<"hhii1\n";
            float k=float(X[i]);
            real.push_back(k);
            size1 = real.size();
            sort(real.begin(), real.end());
            if (size1 % 2 == 0)
            {
                mid = (real[size1 / 2 - 1] + real[size1 / 2]) / 2;
            }
            else if (size1 == 1)
            {
                mid = real[0];
            }
            else
            {
                mid = real[size1 / 2];
            }
            cout << mid << endl;
        }
        else if (s[i] == 'r')
        {
            // cout<<"hhii2\n";
            size1 = real.size();
            if (size1 == 0)
            {
                cout << "Wrong!\n";
            }
            else
            {
                auto it = std::find(real.begin(), real.end(), X[i]);
                if (it != real.end())
                {
                    int index = it - real.begin();
                    vector<float>::iterator iter = real.begin() + index;
                    real.erase(iter);
                    size1 = real.size();
                    sort(real.begin(), real.end());
                    if(size1==0){
                        cout<<"Wrong!\n";
                    }
                    else if (size1 % 2 == 0)
                    {
                        mid = (real[size1 / 2 - 1] + real[size1 / 2]) / 2;
                        cout << mid << endl;
                    }
                    else
                    {
                        mid = real[size1 / 2];
                        cout << mid << endl;
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