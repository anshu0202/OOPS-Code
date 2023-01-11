#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
   vector<int> res;
   vector<int> stack;
   int k,i,size,j;
   for(i=0;i<operations.size();i++){
       if(operations[i][0]=='1'){
            stringstream ss;
            int num; 
          size=operations[i].size();
          for(j=2;j<size;j++){
              
          }
       }
       else if(operations[i][0]=='2'){
           int index,sz;
           sz=stack.size();
           res.push_back(stack[sz-1]);
           stack.pop_back();
       }
       else{
           int max;
           max=*max_element(stack.begin(),stack.end());
           res.push_back(max);
       }
   }
   return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations) {
   vector<int> res;
   vector<int> stack;
   int i,j,qtype,qval;
//    string query_line;
   for(i=0;i<operations.size();i++){
       if(operations[i][0]=='1'){
        //   size=operations[i].size();
          int sum=0;
        //   cout<<"hii\n";
        //   for(j=2;j<size;j++){
        //        for(j=2;j<operations[i].size();j++){
        //     //   cout<<operations[i][j];
        //     //   cout<<(int)operations[i][j];
        //       sum=sum*10 + ((operations[i][j])-'0');
        //   }
        getline(cin,operations[i]);
        istringstream ss(operations[i]);
        ss>>qtype>>qval;
        //   cout<<"\nsum is "<<sum<<endl;
          stack.push_back(qval);
       }
       else if(operations[i][0]=='2'){
        //    int index,sz;
        //    sz=stack.size();
        //    res.push_back(stack[sz-1]);
           stack.pop_back();
       }
       else if(operations[i][0]=='3'){
        //    int max;
        //    max=*max_element(stack.begin(),stack.end());
           res.push_back(*max_element(stack.begin(),stack.end()));
       }
   }
   return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
