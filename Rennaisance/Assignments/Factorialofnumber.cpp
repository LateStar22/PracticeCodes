#include<iostream>
using namespace std;

int main()
{
    int n,fact = 1,i = 1;
    cin>>n;

    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << fact;

}