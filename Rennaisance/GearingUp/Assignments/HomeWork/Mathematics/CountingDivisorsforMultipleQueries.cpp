
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int primes[100];
    int SPF[100];

    for (int i = 0; i < 100; i++)
    {
        primes[i] = 1;
    }

    primes[1] = 0;

    for (int i = 0; i < 100; i++)
    {

        SPF[i] = -1;
    }

    for (int i = 2; i <= sqrt(100); i++)

    {

        if (primes[i] == 1)

        {

            for (int j = i; j * i <= 100; j++)

            {

                if (primes[i * j] == 1)

                {

                    primes[j * i] = 0;

                    SPF[i * j] = i;
                }
            }
        }
    }

    int t;

    cin >> t;

    while (t--)

    {

        int n;

        cin >> n;
		
		int count = 0;
		
        while (SPF[n] != -1) 

        {
            int temp = SPF[n];

            while (n % temp == 0) // TC : O(log N on base 2)
            {
                n = n / temp;
            }
            count++;
        }

        if (n != 1)

        {
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}