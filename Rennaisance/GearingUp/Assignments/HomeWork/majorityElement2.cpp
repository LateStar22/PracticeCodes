#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // Moore's voting algorithm:
        int cnt1 = 0, el1 = INT16_MIN, el2 = INT16_MIN, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && v[i] != el2)
            {
                cnt1 = 1;
                el1 = v[i];
            }
            else if (cnt2 == 0 && v[i] != el1)
            {
                cnt2 = 1;
                el2 = v[i];
            }
            else if (el1 == v[i])
                cnt1++;
            else if (el2 == v[i])
                cnt2++;
            else
            { // the single element is going to dec the cnt1 and cnt2 by 1.
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ls;
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == el1)
            {
                cnt1++;
            }
            if (v[i] == el2)
            {
                cnt2++;
            }
        }

        int mini = (n / 3) + 1;
        if (cnt1 >= mini)
        {
            ls.push_back(el1);
        }
        if (cnt2 >= mini)
        {
            ls.push_back(el2);
        }

        sort(ls.begin(), ls.end());

        for (int i = 0; i < ls.size(); i++)
        {
            cout << ls[i] << " ";
        }
		cout << "\n";
    }
	 return 0;
}