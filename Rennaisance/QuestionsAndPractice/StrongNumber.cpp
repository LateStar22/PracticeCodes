#include<iostream>
using namespace std;

int factorial(int n)
{
    int i = 1,fact = 1;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int StrongNumber(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        sum = sum + factorial(rem);
    }
    return sum;
}

int main()
{
    int n,sum1;
    cin >> n;
    sum1 = StrongNumber(n);
    if(sum1 == n)
    {
        cout << "yes";
    }
    else{
        cout << "No";
    }
    return 0;
}