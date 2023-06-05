#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
	long long int t;
    long long int n = pow(10,6);
	int primes[n + 1];
	for(long long int i = 1 ; i < n + 1 ; i ++)
        {
            primes[i] = 1;
        }
        primes[1] = 0;
	
	for(long long int i = 2 ; i <= sqrt(n) ; i ++)
        {
            if(primes[i] == 1)
            {
                for(long long int j = i ; i * j <= pow(10,6) ; j ++)
                {
                    primes[i * j] = 0;
                }
            }
        }
	//PreFIx sum of primes array:
	for(int i = 2 ; i <= n ; i ++)
	{
		primes[i] += primes[i - 1];	
	}
	
    
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
 		cout << primes[n];
        cout << "\n";
    }
    return 0;
}