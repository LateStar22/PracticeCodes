#include<iostream>
using namespace std;

int main()
{
    int i = 1,n,count = 0;
    cin >> n;
    while(i <= n)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
    cout <<"\n Count is: "<<count;
    if(count == 2)
    {
        cout << " number is prime: " << n;
    }

}