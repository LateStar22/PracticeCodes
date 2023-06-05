#include <bits/stdc++.h>
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = 0;
        int i = 0;
        while (i < n)
        {
            int sum = 1 + a[i];
            int count = 2;
            for (int j = 2; j <= sqrt(a[i]); j++)
            {
                if (a[i] % j == 0)
                {
                    sum = sum + j;
                    if (j * j == a[i])
                    {
                        count++;
                    }
                    else
                    {
                        count = count + 2;
                        sum = sum + (a[i] / j);
                    }
                }
            }
            if (count == 4)
            {
                result = result + sum;
            }
            i++;
        }
        cout << result;
        cout << "\n";
    }
    return 0;
}