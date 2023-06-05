#include <bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
    int maxm = max(num1,num2);
    int minm = min(num1,num2);
    while(maxm % minm != 0)
    {
        int temp = maxm;
        maxm = minm;
        minm = temp % minm;
    }

    return minm;
} 


int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n;
    cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }
    
    int lcm = a[0] * a[1] / GCD(a[0],a[1]);
    int LCM = 0;

    for(int i = 2 ; i < n ; i ++)
    {
        LCM = lcm * a[i] / GCD(lcm,a[i]);
    }

    cout << LCM;
    return 0;
}