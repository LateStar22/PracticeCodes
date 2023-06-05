#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n, m;
    cout << "row: ";
    cin >> n;
    cout << "col: ";
    cin >> m;
    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    while (top <= bottom && left <= right)
    {
        // left to Right movement:
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;
        // top to Bottom Movement:
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;

        // right to LEft Movement:
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        // bottom to top movement:
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}