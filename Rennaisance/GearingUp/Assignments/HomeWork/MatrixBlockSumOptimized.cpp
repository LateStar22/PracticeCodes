#include <iostream>
using namespace std;
int main()
{
    // Use Pen and paper to first solve the problem. Then, write the code.
    int n, m, k, i, j;
    cin >> n >> m >> k;
    int mat[n][m];
    int answer[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            answer[i][j] = 0;
        }
    }

    // PrefixSum along row:
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < m; j++)
        {
            mat[i][j] = mat[i][j] + mat[i][j - 1];
        }
    }

    // Rowwise:
    for (j = 0; j < m; j++)
    {
        for (i = 1; i < n; i++)
        {
            mat[i][j] = mat[i][j] + mat[i - 1][j];
        }
    }

    int ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int start_i = i - k;
            int start_j = j - k;
            if (start_i < 0)
            {
                start_i = 0;
            }
            if (start_j < 0)
            {
                start_j = 0;
            }

            int end_i = i + k;
            int end_j = j + k;
            if (end_i > n - 1)
            {
                end_i = n - 1;
            }
            if (end_j > m - 1)
            {
                end_j = m - 1;
            }

            int ans = mat[end_i][end_j];
            if(start_i - 1 >= 0)
            {
                ans = ans - mat[start_i - 1][end_j];
            }
            if(start_j - 1 >= 0)
            {
                ans = ans - mat[end_i][start_j - 1];
            }
            if(start_i - 1 >= 0 && start_j - 1 >= 0)
            {
                ans = ans + mat[start_i - 1][start_j - 1];
            }
            answer[i][j] = ans;
        }
    }

    for(i = 0 ; i < n ; i ++)
    {
        for(j = 0 ; j < m ; j ++ )
        {
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}