#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    
    unordered_set<string> st;
    string s;
    
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> s;
        if(st.find(s) != st.end())
        {
            cout << "YES";
        }else{
            cout << "NO";
            st.insert(s);
        }
        cout << "\n";
    }
    return 0;
}