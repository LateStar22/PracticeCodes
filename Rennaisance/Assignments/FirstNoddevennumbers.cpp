#include<iostream>
using namespace std;

int main()
{
    int n,i = 1;
    cin >> n;
    cout <<"\n"<<"Printing even numbers from 2 to "<< n << " : ";
    while(i <= n) // even numbrs till n, here we have keep i below n;
    {
        if(i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    cout <<"\n"<<"Printing odd numbers from 1 to "<< n << " : ";
    i = 1;
    while(i < n) // coed for odd numbers till N;
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    }

    cout <<"\n"<<"Printing first "<< n << " even numbers: ";

    int count = 0;
    i = 2;
    while(count < n)
    {
        cout << i << " ";
        i = i +  2;
        count++;
    }

    cout <<"\n"<<"Printing first "<< n << " odd numbers: ";
    i = 1;
    count = 0;
    while(count < n) // first N odd numbers,here we nede to keep counter:
    {
        cout << i << " ";
        i += 2;
        count++;
    }

  

}