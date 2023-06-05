#include <iostream>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,m,k;
    cin >> n >> m >> k;
    int mat[n][m];
    int answer[n][m];

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cin >> mat[i][j];
            answer[i][j] = 0;
        }
    }
    
    for(int i = 0 ; i < n ; i ++)
    {   
        for(int j = 0 ; j < m ; j ++)
        {   
            for(int r = i - k ; r <= i + k ; r ++)
            {
                for(int c = j - k ; c <= j + k ; c ++)
                {
                    if(r >= 0 && r < n && c >= 0 && c < m)
                    {
                    answer[i][j] += mat[r][c];
                    }
                }
            }
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}