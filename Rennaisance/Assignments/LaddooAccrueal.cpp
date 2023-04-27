#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int laddoo = 0;
        for (int i = 0; i < n; i++)
        {
            string contest_name;
            cin >> contest_name;
            if (contest_name == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                int bonus = max(0, 20 - rank);
                laddoo += (300 + bonus);
            }
            else if (contest_name == "TOP_CONTRIBUTOR")
            {
                /* code */
                laddoo += 300;
            }
            else if (contest_name == "BUG_FOUND")
            {
                int severity;
                cin >> severity;
                laddoo += severity;
            }
            else
            {
                laddoo += 50;
            }
        }

        int months = 0;
        if (s == "INDIAN")
        {
            /* code */
            months = laddoo / 200;
        }
        else
        {
            /* code */
            months = laddoo / 400;
        }

        cout << months << endl;
    }
    return 0;
}