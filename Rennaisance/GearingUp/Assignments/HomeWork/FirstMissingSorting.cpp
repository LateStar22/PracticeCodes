#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int i = 0;
        while (a[i] < 0)
        {
            i = i + 1;
        }

        int flag = 0;
        int missingnumber = 1;
        for (int j = i; j < n; j++)
        {
            if (a[j] == missingnumber)
            {
                missingnumber = missingnumber + 1;
            }
            else if (a[j] > missingnumber)
            {
                cout << missingnumber;
                cout << "\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << missingnumber;
            cout << "\n";
        }

    return 0;
}