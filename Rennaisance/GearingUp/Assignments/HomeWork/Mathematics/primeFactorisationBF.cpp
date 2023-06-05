#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    long long int n;
    cin >> n;

    for(int i = 2 ; i <= sqrt(n) ; i ++)
    {
        while(n % i == 0)
        {
            cout << i << " ";;
            n =  n / i;
        }
    }
    if(n != 1)
    {
        cout << n;
    }
    return 0;
}