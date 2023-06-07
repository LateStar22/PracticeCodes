#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    long long int primes[50];
    for (long long int i = 1; i <= 50; i++)
    {
        primes[i] = 1;
    }
    primes[1] = -1;

    for (int i = 2; i <= sqrt(50); i++)
    {
        if (primes[i] == 1)
        {
            for (long long int j = i ; i * j <= 50; j++)
            {
                primes[i * j] = -1;
            }
        }
    }
    int cnt = 0;
    int preCnt[50 + 1];
    memset(preCnt,0,sizeof(preCnt));
    for (int i = 2; i <= sqrt(50); i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i + 1; j * i <= 50; j++)
            {
                if (primes[j] == 1)
                {
                    primes[i * j] = 0;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << " ";

    return 0;
}