#include <bits/stdc++.h>
using namespace std;


int factorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    int anspartial = factorial(num - 1);
    return num * anspartial;
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int num;
    cin >> num;
    long long int ans = factorial(num);
    cout << ans;
    return 0;
}