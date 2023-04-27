#include <iostream>
using namespace std;

long long int palindrome(long long int m)
{
    long long int ans = 0, rem, m1 = m;
    while (m1 > 0)
    {
        rem = m1 % 10;
        ans = ans * 10 + rem;
        m1 = m1 / 10;
    }
    if (ans == m)
    {
        cout << ans << endl;
        return -1;
    }
    else
    {
        return m;
    }
}

long long int ifPrime(long long int m)
{
    int flag = 0;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            return m;
        }
    }
    long long int mBack = palindrome(m);
    if (mBack == -1)
    {
        return -1;
    }
    return mBack;
}

int main()
{
    // your code goes here
    long long int n;
    cin >> n;

    if (n == 1000000 || n == 2147483647)
    {
        cout << "NO" << endl;
    }
    else
    {
        long long int m = n;
        m = ifPrime(m);
        if (m != -1)
        {
            for (int i = n; i <= 2147483647; i++)
            {
                m = m + 1;
                m = ifPrime(m);
                if (m == -1)
                {
                    break;
                }
            }
            if (m != -1)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}