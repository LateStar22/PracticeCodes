#include <bits/stdc++.h>
using namespace std;

void balancedParanthesis(int n, int l, int r, int i, char s[], int size)
{
    if (i == size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << s[i] << " ";
        }
        cout << "\n";
        return;
    }
    if (l == r)
    {
        s[i] = '<';
        balancedParanthesis(n, l + 1, r, i + 1, s, size);
    }
    else if (l > r)
    {
        if (l == n)
        {
            s[i] = '>';
            balancedParanthesis(n, l, r + 1, i + 1, s, size);
        }
        else
        {
            s[i] = '<';
            balancedParanthesis(n, l + 1, r, i + 1, s, size);
            s[i] = '>';
            balancedParanthesis(n, l, r + 1, i + 1, s, size);
        }
    }
}
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int size = 2 * n;
    char s[size];
    balancedParanthesis(n, 0, 0, 0, s, size);
    return 0;
}