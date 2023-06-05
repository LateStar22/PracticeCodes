#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
        }

        int i = 0;
        int result = 0;
        while(i < n)
        {
            int k = 0;
            int sum = 0;
            for(int j = 1 ; j <= a[i] ; j ++)
            {
                if(a[i] % j == 0)
                {
                    sum = sum + j;
                    k++;
                }
                if(k > 4)
                {
                    break;
                }
                if(k == 4)
                {
                    result = result + sum;
                }
            }
            i++;
        }
        cout << result;
    }
    return 0;
}