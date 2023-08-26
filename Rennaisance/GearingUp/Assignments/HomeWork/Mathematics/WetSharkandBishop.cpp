#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int a[3000];
    int b[3000];
    int x, y;
    long long sum = 0;

   
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            sum += a[x + y]++;
            sum += b[x - y]++;
        }
        cout << sum;

    return 0;
}