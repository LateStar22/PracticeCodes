/*Basically we have to take i1 j1 and i2 j2 for Q times and find sum each time.But here
i have taken i1 j1 only once.So in order to do that,we have taken presum row-wise and then col-wise.
Then we have asked for i1 j1 and i2 j2(the coordiantes of sub-matrix) and then we have
processed the things*/
 
// TC O(n ^ 2)
#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n,m,i1, j1, i2, j2;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // prefixSum- row - wise: //O(n ^ 2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            a[i][j] = a[i][j] + a[i][j - 1];
        }
    }
 
    // prefix SUm column wise:
    for (int j = 0; j < m; j++) // O(n ^ 2)
    {
        for (int i = 1; i < n; i++)
        {
            a[i][j] = a[i][j] + a[i - 1][j];
        }
    }
 
    int q;
    cin >> q;
 
    while (q--)
    {
        cin >> i1 >> j1 >> i2 >> j2;
        int ans = a[i2][j2];
        if (j1 - 1 >= 0) // O(1)
        {
            ans = ans - a[i2][j1 - 1];
        }
        if (i1 - 1 >= 0)
        {
            ans = ans - a[i1 - 1][j2];
        }
        if (i1 - 1 >= 0 && j1 - 1 >= 0)
        {
            ans = ans + a[i1 - 1][j1 - 1];
        }
 
        cout << ans;
		cout << "\n";
    }
 
    return 0;
}