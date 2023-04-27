#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Use Pen and paper to first solve the problem. Then, write the code.
    int n,m;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    int arr[n][m];

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cin >> arr[i][j];
        }
    }

    //RowWise Prefix Sum
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 1 ; j < m ; j ++)
        {
            arr[i][j] = arr[i][j] + arr[i][j - 1];
        }
    }

    int ans = 0;
    int row_max = -1;
    for(int i = 0 ; i < n ; i ++)
    {
        int j =  m - 1;
        if(arr[i][j] > ans)
        {
            ans = arr[i][j];
            row_max = i;
        }
    }

    cout << row_max;
    return 0;
}