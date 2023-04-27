#include<iostream>
using namespace std;

int main()
{
    int i = 2,n;
    cin >> n;
    int flag = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            cout << "not a prime number\n";
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        cout << "Prime number\n";
    }
    
}