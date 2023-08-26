#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int k,n;
    cout << "k: ";
    cin >> k;
    int cnt[k];
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    cout << "Enter the vlaues in array a: ";
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    //Count array to keep count of elements giving values of remainders from 0 to n - 1;
    for(int i = 0 ; i < k ; i ++)
    {
        cnt[i] = 0;
    }

    for(int j = 0 ; j < n ; j ++)
    {
        cnt[a[j] % k] ++;
    }

    int ans = 0;
    ans += cnt[0] * (cnt[0] - 1) / 2;

    //important
    for(int i = 1 ; i <= k / 2 - 1 ; i ++)
    {
        ans += cnt[i] * cnt[k - i];
    }
    
    if(k % 2 == 0)
    {
        ans += (cnt[k / 2] * (cnt[k / 2] - 1)) / 2;
    }else{
        ans += cnt[k / 2] * cnt[(k / 2) + 1];
    }

    cout << ans;

    return 0;
}