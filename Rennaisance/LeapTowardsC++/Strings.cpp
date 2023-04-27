#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    string s = "abc";
    s.push_back('d');
    s.pop_back();
    reverse(s.begin(),s.end());
    for(auto it = s.begin(); it != s.end() ; it++)
    {
        cout << *it << " ";
    }
    return 0;
}