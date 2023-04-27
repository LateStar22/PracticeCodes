#include<iostream>
using namespace std;

long long int pow(int n,int i)
{
    long long int mul = 1;
    int j = 1;
    while(j <= i)
    {
        mul = mul * n;
        j++;
    }
    return mul;
}

int main()
{
    int n,i;
    cin >> n;
    cin >> i;
    long long int ans = pow(n,i);
    cout << ans;
    return 0;
}