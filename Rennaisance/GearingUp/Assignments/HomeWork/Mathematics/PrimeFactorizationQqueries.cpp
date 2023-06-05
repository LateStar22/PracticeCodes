// Used Sieve of eratosthenes to pre process and formed SPF array for maximum possible nnumber as per question:
#include <bits/stdc++.h>
using namespace std;

#define n 100

int main()
{
    int primes[n + 1]; // SC : O(N)
    int SPF[n + 1];
    for (int i = 2; i <= n; i++)
    {
        primes[i] = 1;
        SPF[i] = -1; // at the end, primes will have -1 at their index.
    }
    primes[1] = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i; j * i <= n; j++)
            {
                if (primes[i * j] == 1)
                {
                    SPF[i * j] = i;
                    primes[i * j] = 0;
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        while(SPF[x] != -1)
        {
            int temp = SPF[x];
            int count = 0;
            while(x % temp == 0)
            {
                count++;
                x = x / temp;
            }
            cout << temp << " " << count;
            cout << "\n";
        }
        if(x != 1)
        {
            cout << x << " " << 1; 
        }
        cout << "\n";
    }

    return 0;
}