#include <iostream>
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

        int i = 1;
        int maxi = a[0];
        for (int i = 1; i < n; i++)
        {
            if (maxi < a[i] && a[i] % 2 == 0)
            {
                maxi = a[i];
            }
        }

        int count = 0;
        while (maxi % 2 == 0)
        {
            i = 0;
            while (i < n)
            {
                maxi = a[0];
                if (a[i] > maxi)
                {
                    maxi = a[i];
                }
                i++;
            }
            cout << "maxi: " << maxi << " ";
            if (i == n)
            {
                i = 0;
                while (i < n)
                {
                    if (maxi == a[i] && maxi % 2 == 0)
                    {
                        a[i] = a[i] / 2;
                        count++;
                    }
                    i++;
                }
            }
        }
        cout << count << " ";
    }
    return 0;
}