#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n][101];
    string ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        int len = 0;
        for (int j = 0; s[i][j] != '\0'; j++)
        {
            len++;
        }
        if (len > 10)
        {
            ans[i] = s[i][0] + to_string(len - 2) + s[i][len - 1];
        }
        else
        {
            ans[i] = s[i]; //copying string
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}