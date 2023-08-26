#include <bits/stdc++.h>
using namespace std;

void balancedParantheses(int i, int open, int close, vector<string> &v, string &s,int size){
    if(i == size){
        v.push_back(s);
        return;
    }
    if(open == close){
        s += "(";
        balancedParantheses(i + 1, open + 1, close, v, s,size);
    }else if(open > close){
        if(open == size){
            s += ")";
            balancedParantheses(i + 1,open, close + 1,v ,s ,size);
        }else{
            s += "(";
             balancedParantheses(i + 1,open + 1, close,v ,s ,size);
             s += ")";
             balancedParantheses(i + 1,open, close + 1,v ,s ,size);
        }
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int open = 0;
        int close = 0;
        string s;
        int size = 2 * n;
        balancedParantheses(0, 0, 0, v, s,size);
        return v;
    }

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    vector<vector <string>> v (n);
    for(int i = 0 ; i < v.size() ; i ++){
        cout << v[i] << " ";
    }
    return 0;
}