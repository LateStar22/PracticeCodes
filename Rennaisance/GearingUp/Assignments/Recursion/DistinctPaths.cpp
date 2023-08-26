#include <iostream>

using namespace std;

int countPaths(int i, int j, int n, int m)
{

    if (i == n - 1 || j == m - 1)
    {

        return 1;
    }
    else
    
        return (countPaths(i, j + 1, n, m) + countPaths(i + 1, j, n, m));
}

int main()
{

    int n;

    cin >> n;

    int m;

    cin >> m;

    int y = countPaths(0, 0, n, m);

    cout << y << endl;

    return 0;
}