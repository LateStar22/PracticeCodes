#include<iostream>
using namespace std;

int factorial(long int n)
{
    int i = 1,fact = 1;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int StrongNumber(long int n)
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
    long int n,i = 1,sum1;
    cin >> n;
    while(i <= n)
    {
        sum1 = StrongNumber(i);
        if(sum1 == i)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}