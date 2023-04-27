#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int sum = 0;
    int t = 1;
    for(i = 1 ; i <= n ; i++)
    {
        sum += t;
        t = t * 10 + 1;
    }   
    cout << sum;
    return 0;
}