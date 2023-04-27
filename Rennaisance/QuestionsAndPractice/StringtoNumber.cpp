#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    char a[100];
    cin >> a;
    long long int x = 0;

    int i = 0;
    int len = 0;
    while(a[i] != '\0')
    {
        len++;
        i++;
    }

    len --;
    long long powerOften = 1;
    while(len >= 0)
    {
        x += (a[len] - '0') * powerOften;
        powerOften *= 10;
        len --;
    }

    cout << x << endl;
    return 0;
}