//It will give TLE, as we are computing seive of erotestheesn for each test case, 
//So precomputation is required. We will find the  primes in range from 0 to 10 pow 6 and make a primes array
// having 1 for each prime number.
// Then will do prefix sum of primes array for each index of primes.
//Then, if test case puts t = 10 ^ 5 and in each value of n puts 100 then i just have to print primes[100]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int primes[n + 1];
        for(long long int i = 1 ; i < n + 1 ; i ++)
        {
            primes[i] = 1;
        }

        primes[1] = 0;

        for(long long int i = 2 ; i <= sqrt(n) ; i ++)
        {
            if(primes[i] == 1)
            {
                for(long long int j = i ; i * j <= n ; j ++)
                {
                    primes[i * j] = 0;
                }
            }
        }
        
        long long int count = 0;
        for(long long int i = 1 ; i < n + 1 ; i ++)
        {
            if(primes[i] == 1)
            {
                count ++;
            }
        }

        cout << count;
        cout << "\n";
    }
    return 0;
}