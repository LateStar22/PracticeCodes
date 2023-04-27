#include<iostream>
using namespace std;
int main()
{
    int n,product = 1,sum = 0;
    cin >> n;

    while(n > 0)
    {
        int rem = n % 10;
        product = product * rem;
        sum = sum + rem;
        n = n / 10;

    }

    cout << "Product : " << product;
    cout << " Sum : " << sum;
    cout <<" Ans : " << product + sum;
    return 0;
}