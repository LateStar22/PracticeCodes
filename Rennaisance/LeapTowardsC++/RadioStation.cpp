#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.

    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip + ";"] = name; // ip will act as key and name will act as value
    }

    
    for (int i = 0; i < m; i++)
    {
        string cmd,ip;
        cin >> cmd >> ip;
        cout << cmd << " " << ip << " #" << mp[ip] << "\n";
    }

    return 0;
}