#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if(n < 1) return;
    func(n - 1);
    cout << n << " ";
}
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    func(4);
    return 0;
}