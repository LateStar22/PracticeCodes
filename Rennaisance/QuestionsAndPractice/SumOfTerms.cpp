#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n)
{
    int fact = 1, i = 1;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout <<"Fact without returning: "<<fact <<", ";
    return fact;
}

int main()
{

    int x,n,i;
    double sum = 0.0;
    cin >> x >> n;
    i = 0;
    while(i < n)
    {
        sum += pow(x,i) / factorial(i);
        cout << "Sum after each iteration: "<<sum << " ";
        i++;
    }
    cout << ",Answer : ";
    cout << sum;
    return 0;
}