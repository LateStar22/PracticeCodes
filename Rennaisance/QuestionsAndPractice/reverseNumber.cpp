#include<iostream>
#include<math.h>
using namespace std;

int findNumberofDigits(int n)
{
    int count = 0,rem;
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int reverse(int n,int digits)
{
    int ans = 0;
    int i = 1;
    while(n > 0)
    {
        int rem = n % 10;
        ans = ans + rem * pow(10,digits - i);
        n = n / 10;
        i++;  
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int digits = findNumberofDigits(n);
    int ans1 = reverse(n,digits);
    cout << ans1;
    return 0;
}