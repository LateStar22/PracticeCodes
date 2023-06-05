#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    long long int num1, num2;
    cin >> num1 >> num2;
    int maxm = max(num1,num2);
    int minm = min(num1,num2);

    if(minm == 0)
    {
        cout << maxm;
        return 0;
    }
    while(maxm % minm != 0)
    {
        int temp = maxm;
        maxm = minm;
        minm = temp % minm;
        cout << "*";
    }

    cout << minm;
    return 0;
}