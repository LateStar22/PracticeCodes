#include<iostream>
using namespace std;

int main()
{
    int n1 = 3, n2 = 5, n3 = 6;
    int x = 6;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    if(x % n1 == 0)
    {
        cout << "n1: " << n1 << "is the factor of : " << x << endl;
    }
    if(x % n2 == 0)
    {
        cout << "n2: " << n2 << "is the factor of : " << x << endl;
    }
    if(x % n3 == 0)
    {
        cout << "n3: " << n3 << "is the factor of : " << x << endl;
    }

}