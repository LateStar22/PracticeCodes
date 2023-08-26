#include <bits/stdc++.h>
using namespace std;

vector<int> getPrimes()
{
    vector<bool> isPrime(pow(10, 2) + 1, true);
    isPrime[1] = false;
    isPrime[0] = false;

    for (int i = 2; i <= pow(10, 2); i++)
    {
        if (isPrime[i])
        {
            for (int j = i; i * j <= pow(10, 2); j++)
            {
                isPrime[i * j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 0; i <= pow(10, 2); i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i); // primes vector will be having all the prime numbers from 0 to to 10 ^ 6.
        }
    }

    return primes;
}

int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int R, L;
    cin >> L >> R;
    vector<int> primes = getPrimes();
    vector<bool> isPrime(R - L, true);
    for (int i = 0; i < primes.size(); i++)
    {
        int k = ceil(1.0 * L / primes[i]);
        for (int j = max(k, 2); primes[i] * j <= R; j++)
        {
            isPrime[primes[i] * j - L] = false;
        }
    }

    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i] == 1)
        {
            cout << i + L << " ";
        }
    }

    int ans = 1;
    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i] == 1)
        {
            ans = ans * (i + L);
        }
    }
    cout << ans;

    return 0;
}