// Time: O(s1 + s2)
// Space : O(128) = O(1)
// Done by using sliding window:
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while (t--)
    {
        char s1[100];
        char s2[100];
        cin >> s1;
        cin >> s2;
        int required = strlen(s1);

        int count[128]; // storing count of occurance of each character in s1 with refernece to their ASCII value

        memset(count, 0, sizeof(count));

        for (const char c : s1)
        {
            ++count[c];
        }

        int flag = 0;
        for (int r = 0; r < strlen(s2); r++)
        {
            if (--count[s2[r]] >= 0)
            {
                --required;
            }
            if (r >= strlen(s1))
            {
                if (++count[s2[r - strlen(s1)]] > 0)
                {
                    ++required;
                }
            }
            if (required == 0)
            {
                cout << "True";
                flag = 1;
                cout << "\n";
                break;
            }
        }
        if (flag == 0)
        {
            cout << "False";
            cout << "\n";
        }
    }

    return 0;
}