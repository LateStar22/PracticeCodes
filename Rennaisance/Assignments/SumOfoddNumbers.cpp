#include<iostream>
using namespace std;

int main()
{
    int sum = 0,i,n,curr = 1;
    cin >> n;
    for(i = 1 ; i <= n; i ++)
    {
        sum = sum + curr;
        curr = curr + 2;
    }

    cout << sum;
}