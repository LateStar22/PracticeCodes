#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) // very very very imp to note.
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}