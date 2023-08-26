#include <bits/stdc++.h>
using namespace std;


long long int fact[100];
void factorial()
{
    fact[1] = 1;
    for(int i = 2 ; i <= 80 ; i ++)
    {
        fact[i] = i * fact[i - 1];
    }
}

int primeInArray(int a[], int n)
{
    int count = 0;
    for(int i = 1 ; i <= n ; i ++)
    {
        int flag = 1;
        if(a[i] == 1)
        {
            flag = 0;
        }
        for(int j = 2 ; j <= sqrt(a[i]) ; j ++)
        {
            if(a[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i];
    }
    factorial();
    int ans = primeInArray(a,n);
    long long int ans1 = fact[ans] * fact[n - ans];
    cout << ans1 % 1000000007;
    return 0;
}