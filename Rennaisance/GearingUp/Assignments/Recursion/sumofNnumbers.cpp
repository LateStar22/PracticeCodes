#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int func(int num)
{
    if(num < 1)
    {
        return 0;
    }
    ans = num + func(num - 1);
}

int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int num;
    cin >> num;
    cout << func(num);
    return 0;
}