#include <iostream>
using namespace std;

int floor(float n)
{
    int v = n;
    if ((n - v) < 1 && (n - v) > 0)
    {
        return (v + 1);
    }
    else
    {
        return n;
    }
}

int ceil(float n)
{
    int v = n;
    if (n - v < 1 && (n - v) > 0)
    {
        return (v);
    }
    else
    {
        return n;
    }
}

int main()
{
    float n;
    cin >> n;
    int f = floor(n);
    int c = ceil(n);
    cout << "Floor: " << f << "\n" << "Ceil: " << c;
    return 0;
}