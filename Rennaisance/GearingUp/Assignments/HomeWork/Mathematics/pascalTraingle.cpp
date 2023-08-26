#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    long long int a[n][n];
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j <= i ; j ++)
        {
            if(j == 0 || j == i)
            {
                a[i][j] = 1;
            }else{
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << i << "-->";
        for(int j = 0 ; j <= i ; j ++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "****" << "\n";
    cout << a[59][4];
    return 0;
}