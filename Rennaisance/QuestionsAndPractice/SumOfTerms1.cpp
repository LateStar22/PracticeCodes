#include<iostream>
using namespace std;
int main()
{
    double sum = 0.0,n,x;
    double mul = 1.0,fact = 1;
    cin >> n >> x;
    for(int i = 0 ; i < n ; i ++)
    {
        sum = sum + (mul / fact);
        mul = mul * x;
        fact = fact * (i+1);
    }
    cout << sum;
    return 0;
}